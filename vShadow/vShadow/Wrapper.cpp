//By Joe Lynds, 2008
//http://www.jlion.com

#include "StdAfx.h"
#include <wchar.h>
#include "Wrapper.h"

Wrapper::Wrapper(void)
{
}

Wrapper::~Wrapper(void)
{
	_Current_API=AN_NONE;
}

HRESULT Wrapper::W_InitializeForBackup()
{
	HRESULT hr=S_OK;

	/*Initializes the COM library on the current thread and identifies 
	the concurrency model as single-thread apartment (STA).
	http://msdn.microsoft.com/en-us/library/ms678543(VS.85).aspx
	*/
    hr=CoInitialize(NULL); 
	if (SetCurrentRET(AN_CoInitialize,hr)!=S_OK) return hr;

	//Registers security and sets the default security values for the process.
	//http://msdn.microsoft.com/en-us/library/ms693736(VS.85).aspx
    hr=CoInitializeSecurity(
            NULL, 
            -1, 
            NULL, 
            NULL, 
            RPC_C_AUTHN_LEVEL_PKT_PRIVACY, 
            RPC_C_IMP_LEVEL_IDENTIFY, 
            NULL, 
            EOAC_NONE, 
            NULL); 
	if (SetCurrentRET(AN_CoInitializeSecurity,hr)!=S_OK) return hr;

	//Setting the Backup and Restore Privileges
	//http://msdn.microsoft.com/en-us/library/aa387705(VS.85).aspx
	//hr = ModifyPrivilege(SE_BACKUP_NAME, TRUE);
	//if (SetCurrentRET(AN_ModifyPrivilege,hr)!=S_OK) return hr;

	return hr;
}

HRESULT Wrapper::W_StartSnapshot(
							VSS_PWSZ pwszVolumeName, 
							VSS_ID * pidSnapShotSet,
							VSS_ID * pidSnapShot)
{
	HRESULT hr=S_OK;
	HRESULT WriterStatus=S_OK; 
	int timeout = QUERY_TIMEOUT; // 10 minutes....
	int iErrors = 0;

	/*The CreateVssBackupComponents function creates an IVssBackupComponents 
	interface object and returns a pointer to it. */

	/*The calling application is responsible for calling IUnknown::Release 
	to release the resources held by the returned IVssBackupComponents when 
	it is no longer needed.*/
	//http://msdn.microsoft.com/en-us/library/aa381517(VS.85).aspx
	hr=CreateVssBackupComponents(&m_pBackupComponents);
	if (SetCurrentRET(AN_CreateVssBackupComponents,hr)!=S_OK) return hr;

	/*The InitializeForBackup method initializes the backup components
	metadata in preparation for backup.*/
	//http://msdn.microsoft.com/en-us/library/aa382684(VS.85).aspx
	hr=m_pBackupComponents->InitializeForBackup(NULL);
	if (SetCurrentRET(AN_InitializeForBackup,hr)!=S_OK) return hr;

	//* no need to use SetContext if backup type is VSS_CTX_BACKUP *//
	/* The SetContext method sets the context for subsequent 
	shadow copy-related operations. */
	//http://msdn.microsoft.com/en-us/library/aa382842(VS.85).aspx
	//hr=m_pBackupComponents->SetContext(VSS_CTX_BACKUP);
	//if (SetCurrentRET(AN_SetContext,hr)!=S_OK) return hr;

	/*The SetBackupState method defines an overall configuration for a backup operation.
	http://msdn.microsoft.com/en-us/library/aa382833(VS.85).aspx*/
	hr=m_pBackupComponents->SetBackupState(false, false, VSS_BT_FULL, false); 
	if (SetCurrentRET(AN_SetBackupState,hr)!=S_OK) return hr;

	//http://msdn.microsoft.com/en-us/library/aa382655(VS.85).aspx
	//hr=m_pBackupComponents->DisableWriterClasses(rgWriterClassId,cClassId);

	/* From Jim Benton, Storage Team at Microsoft , 2009-09-11
		The problem is most likely due to incorrect settings of the CoInitializeSecurity
		call for the process.  Here is the VSS documentation that describes what the 
		CoInitializeSecurity call should look like: http://msdn.microsoft.com/en-us/library/aa384604(VS.85).aspx. 
		 
		Unfortunately, since this is running as VB.NET, you probably do not have 
		ownership of the CoInitializeSecurity call.  This is a known issue for 
		DLLs that are running inside of MMC.EXE as an MMC snap-in as well.  The 
		event is in response to the IVssBackupComponents::GatherWriterMetadata call.  
		Please verify that you are making this call.  AFAIK, this event is known to 
		be only from the System Writer.
		 
		Here are some possible workarounds:
		1.     You don’t need application writer involvement at all
		    a.     Don’t call GatherWriterMetadata; it is not needed if you only want 
		           a file system consistent snapshot (i.e. VSS_CTX_FILE_SHARE_BACKUP)
		2.     You need only specific application writer involvement 
		       (& not System Writer involvement)
		    a.     Use DisableWriterClasses/EnableWriterClasses to scope the 
		       writer involvement only to the applications of interest
		3.     You don’t need System Writer involvement
		    a.     Use DisableWriterClasses to prevent System Writer involvement
		    b.    The resulting backup would be ineligible for System State backup
		 
		If you really need to have System Writer involvement, then you would need 
		to do some more intense work like hosting the VSS part of your feature in 
		a separate process where you control the CoInitializeSecurity call.  Your
		VB.NET DLL would then need to marshal the VSS work to the other process.

		Currently there is only one way to enumerate writers, that is through GWMD.  
		IMO, this is a real bad oversight in the original design of VSS; something 
		that I have fixed in my own prototyping code (works great, but won't see 
		the light of day for a few more years :-( ).  In the meantime, you need to 
		enumerate using GWMD.  What's worse is that calling GWMD multiple times on 
		the same interface can cause problems (I can't recall just what they are right now).   
		I believe there are recommendations on MSDN to call GWMD on one instance of 
		IVssBackupComponents to get the writer IDs and instanceIDs, then throw that 
		interface away and start from scratch.  This is the only way to go if you 
		are interested in Writer instanceIDs which change each time the writer 
		initialize.  However, writer IDs never change, so it is OK to hard code 
		the ones you want to disable.
	*/

	/* Per the above, the following code to notify writers will cause a spurious
	   "access denied" event log message when the system writer is queried.

	//The GatherWriterMetadata method prompts each writer to send 
	//the metadata they have collected. The method will generate an 
	//Identify event to communicate with writers.
	//http://msdn.microsoft.com/en-us/library/aa382668(VS.85).aspx

	hr=m_pBackupComponents->GatherWriterMetadata(&pPrepareForWriterMetadata);
	if (SetCurrentRET(AN_GatherWriterMetadata,hr)!=S_OK) return hr;

	timeout = QUERY_TIMEOUT; // 10 minutes....
	WriterStatus = S_OK;
	hr = pPrepareForWriterMetadata->Wait();
	hr = pPrepareForWriterMetadata->QueryStatus(&WriterStatus, NULL);
	if (SetCurrentRET(AN_QueryStatus,WriterStatus)!=VSS_S_ASYNC_FINISHED) return WriterStatus;

	//UINT cWriters; //Number of writers with metadata.
	//The GetWriterMetadataCount method returns the number of writers with metadata.
	//http://msdn.microsoft.com/en-us/library/aa382679(VS.85).aspx

	hr=m_pBackupComponents->GetWriterMetadataCount(&cWriters); 
	if (SetCurrentRET(AN_GetWriterMetadataCount,hr)!=S_OK) return hr;

	//enumerate writers
	for (UINT iWriter = 0; iWriter < cWriters; ++iWriter)
	{
		CComPtr<IVssExamineWriterMetadata> pExamineWriterMetadata; 
		GUID id; 
		//The GetWriterMetadata method returns the metadata for a specific writer running on the system.//
		//http://msdn.microsoft.com/en-us/library/aa382677(VS.85).aspx
		hr=m_pBackupComponents->GetWriterMetadata(iWriter, &id, &pExamineWriterMetadata);
		if (SetCurrentRET(AN_GetWriterMetadata,hr)!=S_OK) return hr;

		VssWriter   writer;
        writer.Initialize(pExamineWriterMetadata);

        // Add this writer to the list 
        m_writerList.push_back(writer);
	}

	//select components for backup
	VssSelect selector;
	selector.SelectComponentsForBackup(
					m_writerList,
					pwszVolumeName);

	// Finally, select the explicitly included components
	selector.SelectExplicitelyIncludedComponents(m_pBackupComponents,m_writerList);
	}
	*/

	/** Writer participation ends **/
	/*The StartSnapshotSet method creates a new, empty shadow copy set.*/
	//http://msdn.microsoft.com/en-us/library/aa382870(VS.85).aspx
	hr=m_pBackupComponents->StartSnapshotSet(pidSnapShotSet);
	if (SetCurrentRET(AN_StartSnapshotSet,hr)!=S_OK) return hr;

	/*The AddToSnapshotSet method adds an original volume to the shadow copy set. */
	//http://msdn.microsoft.com/en-us/library/aa382650(VS.85).aspx
	hr=m_pBackupComponents->AddToSnapshotSet(pwszVolumeName,GUID_NULL,pidSnapShot);
	if (SetCurrentRET(AN_AddToSnapshotSet,hr)!=S_OK) return hr;

	CComPtr<IVssAsync> pPrepareForBackupResults; 
	/*The PrepareForBackup method will cause VSS to generate a PrepareForBackup event, 
	signaling writers to prepare for an upcoming backup operation. This makes a requester's 
	Backup Components Document available to writers.
	http://msdn.microsoft.com/en-us/library/aa382697(VS.85).aspx*/
	hr=m_pBackupComponents->PrepareForBackup(&pPrepareForBackupResults); 
	if (SetCurrentRET(AN_PrepareForBackup,hr)!=S_OK) return hr;

	timeout = QUERY_TIMEOUT; // 10 minutes....
	WriterStatus = S_OK;
	pPrepareForBackupResults->Wait();

	//The QueryStatus method queries the status of an asynchronous operation.
	//http://msdn.microsoft.com/en-us/library/aa382159(VS.85).aspx
	hr = pPrepareForBackupResults->QueryStatus(&WriterStatus, NULL);

	if (SetCurrentRET(AN_QueryStatus,WriterStatus)!=VSS_S_ASYNC_FINISHED) return WriterStatus;

	CComPtr<IVssAsync> pDoSnapshotSetResults;
	//Commits all shadow copies in this set simultaneously. 
	//http://msdn.microsoft.com/en-us/library/aa382659(VS.85).aspx
	hr=m_pBackupComponents->DoSnapshotSet(&pDoSnapshotSetResults); 
	if (SetCurrentRET(AN_DoSnapshotSet,hr)!=S_OK) return hr;

	timeout = QUERY_TIMEOUT; // 10 minutes....
	WriterStatus = S_OK;
	pDoSnapshotSetResults->Wait();
	hr = pDoSnapshotSetResults->QueryStatus(&WriterStatus, NULL);

	if (SetCurrentRET(AN_QueryStatus,WriterStatus)!=VSS_S_ASYNC_FINISHED) return WriterStatus;

	return hr;
}

HRESULT Wrapper::W_GetSnapShotDeviceName(
								WCHAR * wszDeviceName,
								VSS_ID pidSnapShot)
{
	HRESULT hr=S_OK;

	VSS_SNAPSHOT_PROP snapshotProperties; 
	//The GetSnapshotProperties method gets the properties of the specified shadow copy. 
	//http://msdn.microsoft.com/en-us/library/aa382670(VS.85).aspx
    hr=m_pBackupComponents->GetSnapshotProperties(pidSnapShot, &snapshotProperties);
	if (SetCurrentRET(AN_GetSnapshotProperties,hr)!=S_OK) return hr;

	wcscpy_s(wszDeviceName,MAX_SIZE,snapshotProperties.m_pwszSnapshotDeviceObject);

	return hr;
}

HRESULT Wrapper::W_DeleteAllSnapShots(
								VSS_ID pidSnapShotSet)
{
	HRESULT hr=S_OK;

	long plDeletedSnapshots;
	GUID pNondeletedSnapshotID=GUID_NULL;

	//Deletes one or more shadow copies or a shadow copy set.
	//http://msdn.microsoft.com/en-us/library/aa819450(VS.85).aspx
    hr=m_pBackupComponents->DeleteSnapshots(
							pidSnapShotSet,
							VSS_OBJECT_SNAPSHOT_SET,
							TRUE,
							&plDeletedSnapshots,
							&pNondeletedSnapshotID);
	if (SetCurrentRET(AN_DeleteSnapshots,hr)!=S_OK) return hr;

	return hr;
}

HRESULT Wrapper::W_CloseBackup()
{
	HRESULT hr=S_OK;

	//Decrements the reference count for an interface on an object.
	//http://msdn.microsoft.com/en-us/library/ms682317(VS.85).aspx
	m_pBackupComponents.Release();

	/*
	Closes the COM library on the current thread, unloads all DLLs 
	loaded by the thread, frees any other resources that the thread 
	maintains, and forces all RPC connections on the thread to close. 
	http://msdn.microsoft.com/en-us/library/ms688715(VS.85).aspx
	*/
	CoUninitialize();

	return hr;
}

HRESULT Wrapper::W_GetLastStatus(
							WCHAR * wszAPIName,
							WCHAR * wszReturnCodeName)
{
	HRESULT hr=S_OK;

	switch(_Current_API)
	{
		case AN_CoInitialize:
			wcscpy_s(wszAPIName,MAX_SIZE, (WCHAR *)_T("CoInitialize"));

			switch(_Current_RET)
			{
				case S_FALSE:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("S_FALSE"));
					break;

				case RPC_E_CHANGED_MODE:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("RPC_E_CHANGED_MODE"));
					break;

				case S_OK:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("S_OK"));
					break;

				case E_INVALIDARG:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("E_INVALIDARG"));
					break;

				case E_OUTOFMEMORY:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("E_OUTOFMEMORY"));
					break;

				case E_UNEXPECTED:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("E_UNEXPECTED"));
					break;

				default:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("unknown"));
					break;
			}

			break;

		case AN_CoInitializeSecurity:
			wcscpy_s(wszAPIName,MAX_SIZE, (WCHAR *)_T("CoInitializeSecurity"));

			switch(_Current_RET)
			{
				case S_OK:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("S_OK"));
					break;

				case RPC_E_TOO_LATE:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("RPC_E_TOO_LATE"));
					break;

				case E_OUTOFMEMORY:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("E_OUTOFMEMORY"));
					break;

				case RPC_E_NO_GOOD_SECURITY_PACKAGES:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("RPC_E_NO_GOOD_SECURITY_PACKAGES"));
					break;

				case E_INVALIDARG:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("E_INVALIDARG"));
					break;

				default:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("unknown"));
					break;
			}

			break;

		case AN_ModifyPrivilege:
			wcscpy_s(wszAPIName,MAX_SIZE, (WCHAR *)_T("ModifyPrivilege"));

			switch(_Current_RET)
			{
				case S_OK:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("S_OK"));
					break;

				case ERROR_FUNCTION_FAILED:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("ERROR_FUNCTION_FAILED"));
					break;

				default:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("unknown"));
					break;
			}

			break;

		case AN_CreateVssBackupComponents:
			wcscpy_s(wszAPIName,MAX_SIZE, (WCHAR *)_T("CreateVssBackupComponents"));

			switch(_Current_RET)
			{
				case S_OK:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("S_OK"));
					break;

				case E_ACCESSDENIED:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("E_ACCESSDENIED"));
					break;

				case E_INVALIDARG:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("E_INVALIDARG"));
					break;

				case E_OUTOFMEMORY:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("E_OUTOFMEMORY"));
					break;

				case E_UNEXPECTED:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("E_UNEXPECTED"));
					break;

				default:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("unknown"));
					break;
			}

			break;

		case AN_InitializeForBackup:
			wcscpy_s(wszAPIName,MAX_SIZE, (WCHAR *)_T("InitializeForBackup"));

			switch(_Current_RET)
			{
				case S_OK:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("S_OK"));
					break;

				case E_ACCESSDENIED:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("E_ACCESSDENIED"));
					break;

				case E_INVALIDARG:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("E_INVALIDARG"));
					break;

				case E_OUTOFMEMORY:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("E_OUTOFMEMORY"));
					break;

				case E_UNEXPECTED:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("E_UNEXPECTED"));
					break;

				case VSS_E_BAD_STATE:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("VSS_E_BAD_STATE"));
					break;

				case VSS_E_INVALID_XML_DOCUMENT:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("VSS_E_INVALID_XML_DOCUMENT"));
					break;

				default:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("unknown"));
					break;
			}

			break;

		case AN_SetContext:
			wcscpy_s(wszAPIName,MAX_SIZE, (WCHAR *)_T("SetContext"));

			switch(_Current_RET)
			{
				case S_OK:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("S_OK"));
					break;

				case E_INVALIDARG:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("E_INVALIDARG"));
					break;

				case VSS_E_BAD_STATE:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("E_OUTOFMEMORY"));
					break;

				case E_UNEXPECTED:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("E_UNEXPECTED"));
					break;

				default:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("unknown"));
					break;
			}

			break;

		case AN_GatherWriterMetadata:
			wcscpy_s(wszAPIName,MAX_SIZE, (WCHAR *)_T("GatherWriterMetadata"));

			switch(_Current_RET)
			{
				case S_OK:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("S_OK"));
					break;

				case E_ACCESSDENIED:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("E_ACCESSDENIED"));
					break;

				case E_INVALIDARG:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("E_INVALIDARG"));
					break;

				case E_OUTOFMEMORY:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("E_OUTOFMEMORY"));
					break;

				case E_UNEXPECTED:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("E_UNEXPECTED"));
					break;

				case VSS_E_BAD_STATE:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("VSS_E_BAD_STATE"));
					break;

				case VSS_E_INVALID_XML_DOCUMENT:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("VSS_E_WRITER_INFRASTRUCTURE"));
					break;

				default:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("unknown"));
					break;
			}

			break;

		case AN_QueryStatus:
			wcscpy_s(wszAPIName,MAX_SIZE, (WCHAR *)_T("QueryStatus"));

			switch(_Current_RET)
			{
				case VSS_S_ASYNC_CANCELLED:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("VSS_S_ASYNC_CANCELLED"));
					break;

				case VSS_S_ASYNC_FINISHED:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("VSS_S_ASYNC_FINISHED"));
					break;

				case VSS_S_ASYNC_PENDING:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("VSS_S_ASYNC_PENDING"));
					break;

				default:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("unknown"));
					break;
			}

			break;

		case AN_GetWriterMetadataCount:
			wcscpy_s(wszAPIName,MAX_SIZE, (WCHAR *)_T("GetWriterMetadataCount"));

			switch(_Current_RET)
			{
				case S_OK:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("S_OK"));
					break;

				case E_INVALIDARG:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("E_INVALIDARG"));
					break;

				case VSS_E_BAD_STATE:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("E_OUTOFMEMORY"));
					break;

				case E_UNEXPECTED:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("E_UNEXPECTED"));
					break;

				default:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("unknown"));
					break;
			}

			break;

		case AN_GetWriterMetadata:
			wcscpy_s(wszAPIName,MAX_SIZE, (WCHAR *)_T("GetWriterMetadata"));

			switch(_Current_RET)
			{
				case S_OK:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("S_OK"));
					break;

				case E_INVALIDARG:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("E_INVALIDARG"));
					break;

				case VSS_E_BAD_STATE:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("E_OUTOFMEMORY"));
					break;

				case E_UNEXPECTED:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("E_UNEXPECTED"));
					break;

				case VSS_E_INVALID_XML_DOCUMENT:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("VSS_E_INVALID_XML_DOCUMENT"));
					break;

				case VSS_E_OBJECT_NOT_FOUND:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("VSS_E_OBJECT_NOT_FOUND"));
					break;

				default:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("unknown"));
					break;
			}

			break;

		case AN_GetIdentity:
			wcscpy_s(wszAPIName,MAX_SIZE, (WCHAR *)_T("GetIdentity"));

			switch(_Current_RET)
			{
				case S_OK:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("S_OK"));
					break;

				case E_INVALIDARG:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("E_INVALIDARG"));
					break;

				case VSS_E_INVALID_XML_DOCUMENT:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("VSS_E_INVALID_XML_DOCUMENT"));
					break;

				case E_UNEXPECTED:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("E_UNEXPECTED"));
					break;

				default:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("unknown"));
					break;
			}

			break;

		case AN_GetFileCounts:
			wcscpy_s(wszAPIName,MAX_SIZE, (WCHAR *)_T("GetFileCounts"));

			switch(_Current_RET)
			{
				case S_OK:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("S_OK"));
					break;

				case E_INVALIDARG:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("E_INVALIDARG"));
					break;

				case VSS_E_INVALID_XML_DOCUMENT:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("VSS_E_INVALID_XML_DOCUMENT"));
					break;

				case E_OUTOFMEMORY:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("E_OUTOFMEMORY"));
					break;

				case E_UNEXPECTED:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("E_UNEXPECTED"));
					break;

				default:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("unknown"));
					break;
			}

			break;

		case AN_StartSnapshotSet:
			wcscpy_s(wszAPIName,MAX_SIZE, (WCHAR *)_T("StartSnapshotSet"));

			switch(_Current_RET)
			{
				case S_OK:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("S_OK"));
					break;

				case E_INVALIDARG:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("E_INVALIDARG"));
					break;

				case VSS_E_SNAPSHOT_SET_IN_PROGRESS:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("VSS_E_SNAPSHOT_SET_IN_PROGRESS"));
					break;
				
				case VSS_E_BAD_STATE:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("VSS_E_BAD_STATE"));
					break;

				case E_OUTOFMEMORY:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("E_OUTOFMEMORY"));
					break;

				case E_UNEXPECTED:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("E_UNEXPECTED"));
					break;

				default:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("unknown"));
					break;
			}

			break;

		case AN_AddToSnapshotSet:
			wcscpy_s(wszAPIName,MAX_SIZE, (WCHAR *)_T("AddToSnapshotSet"));

			switch(_Current_RET)
			{
				case S_OK:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("S_OK"));
					break;

				case E_INVALIDARG:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("E_INVALIDARG"));
					break;

				case E_ACCESSDENIED:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("E_ACCESSDENIED"));
					break;
				
				case VSS_E_BAD_STATE:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("VSS_E_BAD_STATE"));
					break;

				case E_OUTOFMEMORY:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("E_OUTOFMEMORY"));
					break;

				case E_UNEXPECTED:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("E_UNEXPECTED"));
					break;

				case VSS_E_MAXIMUM_NUMBER_OF_VOLUMES_REACHED:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("VSS_E_MAXIMUM_NUMBER_OF_VOLUMES_REACHED"));
					break;

				case VSS_E_MAXIMUM_NUMBER_OF_SNAPSHOTS_REACHED:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("VSS_E_MAXIMUM_NUMBER_OF_SNAPSHOTS_REACHED"));
					break;

				case VSS_E_OBJECT_NOT_FOUND:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("VSS_E_OBJECT_NOT_FOUND"));
					break;

				case VSS_E_PROVIDER_NOT_REGISTERED:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("VSS_E_PROVIDER_NOT_REGISTERED"));
					break;

				case VSS_E_PROVIDER_VETO:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("VSS_E_PROVIDER_VETO"));
					break;

				case VSS_E_VOLUME_NOT_SUPPORTED:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("VSS_E_VOLUME_NOT_SUPPORTED"));
					break;

				case VSS_E_VOLUME_NOT_SUPPORTED_BY_PROVIDER:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("VSS_E_VOLUME_NOT_SUPPORTED_BY_PROVIDER"));
					break;

				case VSS_E_UNEXPECTED_PROVIDER_ERROR:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("VSS_E_UNEXPECTED_PROVIDER_ERROR"));
					break;

				default:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("unknown"));
					break;
			}

			break;

		case AN_SetBackupState:
			wcscpy_s(wszAPIName,MAX_SIZE, (WCHAR *)_T("SetBackupState"));

			switch(_Current_RET)
			{
				case S_OK:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("S_OK"));
					break;

				case E_INVALIDARG:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("E_INVALIDARG"));
					break;

				case VSS_E_INVALID_XML_DOCUMENT:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("VSS_E_INVALID_XML_DOCUMENT"));
					break;
				
				case VSS_E_BAD_STATE:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("VSS_E_BAD_STATE"));
					break;

				case E_OUTOFMEMORY:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("E_OUTOFMEMORY"));
					break;

				case E_UNEXPECTED:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("E_UNEXPECTED"));
					break;

				default:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("unknown"));
					break;
			}

			break;

		case AN_PrepareForBackup:
			wcscpy_s(wszAPIName,MAX_SIZE, (WCHAR *)_T("PrepareForBackup"));

			switch(_Current_RET)
			{
				case S_OK:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("S_OK"));
					break;

				case E_INVALIDARG:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("E_INVALIDARG"));
					break;
				
				case VSS_E_BAD_STATE:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("VSS_E_BAD_STATE"));
					break;

				case E_OUTOFMEMORY:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("E_OUTOFMEMORY"));
					break;

				case E_UNEXPECTED:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("E_UNEXPECTED"));
					break;

				default:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("unknown"));
					break;
			}

			break;

		case AN_DoSnapshotSet:
			wcscpy_s(wszAPIName,MAX_SIZE, (WCHAR *)_T("DoSnapshotSet"));

			switch(_Current_RET)
			{
				case S_OK:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("S_OK"));
					break;

				case E_INVALIDARG:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("E_INVALIDARG"));
					break;
				
				case VSS_E_BAD_STATE:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("VSS_E_BAD_STATE"));
					break;

				case E_OUTOFMEMORY:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("E_OUTOFMEMORY"));
					break;

				case E_UNEXPECTED:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("E_UNEXPECTED"));
					break;

				case E_ACCESSDENIED:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("E_ACCESSDENIED"));
					break;

				case VSS_E_INSUFFICIENT_STORAGE:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("VSS_E_INSUFFICIENT_STORAGE"));
					break;

				case VSS_E_FLUSH_WRITES_TIMEOUT:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("VSS_E_FLUSH_WRITES_TIMEOUT"));
					break;

				case VSS_E_HOLD_WRITES_TIMEOUT:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("VSS_E_HOLD_WRITES_TIMEOUT"));
					break;

				case VSS_E_PROVIDER_VETO:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("VSS_E_PROVIDER_VETO"));
					break;

				case VSS_E_UNEXPECTED_PROVIDER_ERROR:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("VSS_E_UNEXPECTED_PROVIDER_ERROR"));
					break;

				default:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("unknown"));
					break;
			}

			break;

		case AN_GetSnapshotProperties:
			wcscpy_s(wszAPIName,MAX_SIZE, (WCHAR *)_T("GetSnapshotProperties"));

			switch(_Current_RET)
			{
				case S_OK:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("S_OK"));
					break;

				case E_INVALIDARG:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("E_INVALIDARG"));
					break;
				
				case VSS_E_BAD_STATE:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("VSS_E_BAD_STATE"));
					break;

				case E_OUTOFMEMORY:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("E_OUTOFMEMORY"));
					break;

				case E_UNEXPECTED:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("E_UNEXPECTED"));
					break;

				case E_ACCESSDENIED:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("E_ACCESSDENIED"));
					break;

				case VSS_E_OBJECT_NOT_FOUND:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("VSS_E_OBJECT_NOT_FOUND"));
					break;

				case VSS_E_PROVIDER_VETO:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("VSS_E_PROVIDER_VETO"));
					break;

				case VSS_E_UNEXPECTED_PROVIDER_ERROR:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("VSS_E_UNEXPECTED_PROVIDER_ERROR"));
					break;

				default:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("unknown"));
					break;
			}

			break;

		case AN_DeleteSnapshots:
			wcscpy_s(wszAPIName,MAX_SIZE, (WCHAR *)_T("DeleteSnapshots"));

			switch(_Current_RET)
			{
				case S_OK:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("S_OK"));
					break;

				case E_INVALIDARG:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("E_INVALIDARG"));
					break;
				
				case E_ACCESSDENIED:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("E_ACCESSDENIED"));
					break;

				case E_OUTOFMEMORY:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("E_OUTOFMEMORY"));
					break;

				case E_UNEXPECTED:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("E_UNEXPECTED"));
					break;

				case VSS_E_OBJECT_NOT_FOUND:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("VSS_E_OBJECT_NOT_FOUND"));
					break;

				case VSS_E_PROVIDER_VETO:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("VSS_E_PROVIDER_VETO"));
					break;

				default:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("unknown"));
					break;
			}

			break;

		case AN_AddComponent:
			wcscpy_s(wszAPIName,MAX_SIZE, (WCHAR *)_T("AddComponent"));

			switch(_Current_RET)
			{
				case S_OK:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("S_OK"));
					break;

				case E_INVALIDARG:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("E_INVALIDARG"));
					break;
			
				case E_OUTOFMEMORY:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("E_OUTOFMEMORY"));
					break;

				case E_UNEXPECTED:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("E_UNEXPECTED"));
					break;

				case VSS_E_BAD_STATE:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("VSS_E_BAD_STATE"));
					break;

				case VSS_E_INVALID_XML_DOCUMENT:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("VSS_E_INVALID_XML_DOCUMENT"));
					break;

				case VSS_E_OBJECT_ALREADY_EXISTS:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("VSS_E_OBJECT_ALREADY_EXISTS"));
					break;

				default:
					wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("unknown"));
					break;
			}

			break;

		default:
			wcscpy_s(wszAPIName,MAX_SIZE, (WCHAR *)_T("NONE"));
			wcscpy_s(wszReturnCodeName,MAX_SIZE, (WCHAR *)_T("unknown"));

			break;
	}

	return hr;
}

HRESULT Wrapper::W_GetVersion(
							WCHAR * wszVersion)
{
	HRESULT hr=S_OK;

	wcscpy_s(wszVersion,MAX_SIZE, (wchar_t *)_T("2.0.0.9"));

	return hr;
}

HRESULT Wrapper::ModifyPrivilege(
    IN LPCTSTR szPrivilege,
    IN BOOL fEnable)
{
    HRESULT hr = S_OK;
    TOKEN_PRIVILEGES NewState;
    LUID             luid;
    HANDLE hToken    = NULL;

    // Open the process token for this process.
    if (!OpenProcessToken(GetCurrentProcess(),
                          TOKEN_ADJUST_PRIVILEGES | TOKEN_QUERY,
                          &hToken ))
    {
        printf("Failed OpenProcessToken\n");
        return ERROR_FUNCTION_FAILED;
    }

    // Get the local unique ID for the privilege.
    if ( !LookupPrivilegeValue( NULL,
                                szPrivilege,
                                &luid ))
    {
        CloseHandle( hToken );
        printf("Failed LookupPrivilegeValue\n");
        return ERROR_FUNCTION_FAILED;
    }

    // Assign values to the TOKEN_PRIVILEGE structure.
    NewState.PrivilegeCount = 1;
    NewState.Privileges[0].Luid = luid;
    NewState.Privileges[0].Attributes = 
              (fEnable ? SE_PRIVILEGE_ENABLED : 0);

    // Adjust the token privilege.
    if (!AdjustTokenPrivileges(hToken,
                               FALSE,
                               &NewState,
                               0,
                               NULL,
                               NULL))
    {
        printf("Failed AdjustTokenPrivileges\n");
        hr = ERROR_FUNCTION_FAILED;
    }

	//http://blogs.msdn.com/cjacks/archive/2006/10/09/How-to-Determine-if-a-User-is-a-Member-of-the-Administrators-Group-with-UAC-Enabled-on-Windows-Vista.aspx
	TOKEN_ELEVATION_TYPE pElevationType;
	DWORD dwSize;

	hr=GetTokenInformation(hToken,TokenElevationType, &pElevationType,sizeof(pElevationType), &dwSize);
	switch (pElevationType)
	{
	case TokenElevationTypeDefault:
		hr = S_OK;
		break;

	case TokenElevationTypeFull:
		hr = S_OK;
		break;

	case TokenElevationTypeLimited:
		hr = ERROR_FUNCTION_FAILED;
		break;
	}

    // Close the handle.
    CloseHandle(hToken);

    return hr;
}


HRESULT Wrapper::SetCurrentRET(
			API_NAME Current_API,
			HRESULT Current_RET)
{
	_Current_API=Current_API;
	_Current_RET=Current_RET;

	return Current_RET;
}
