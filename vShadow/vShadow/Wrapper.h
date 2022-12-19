//By Joe Lynds, 2008
//http://www.jlion.com
//Based on microsoft vshadow sample code

#pragma once

//Volume Shadow Stuff
#include <vss.h>
#include <vswriter.h>
#include <vsbackup.h>
#include "VssFileDescriptor.h"
#include "VssComponent.h"
#include "VssWriter.h"
#include "VssSelect.h"

#define MAX_SIZE 255
#define QUERY_TIMEOUT 600

class Wrapper
{
private:
	enum API_NAME {
		AN_NONE=0,
		AN_CoInitialize=1,
		AN_CoInitializeSecurity=2,
		AN_ModifyPrivilege=3,
		AN_CreateVssBackupComponents=4,
		AN_InitializeForBackup=5,
		AN_SetContext=6,
		AN_GatherWriterMetadata=7,
		AN_QueryStatus=8,
		AN_GetWriterMetadataCount=9,
		AN_GetWriterMetadata=10,
		AN_GetIdentity=11,
		AN_GetFileCounts=12,
		AN_StartSnapshotSet=13,
		AN_AddToSnapshotSet=14,
		AN_SetBackupState=15,
		AN_PrepareForBackup=16,
		AN_DoSnapshotSet=17,
		AN_GetSnapshotProperties=18,
		AN_DeleteSnapshots=19,
		AN_Release=20,
		AN_CoUninitialize=21,
		AN_AddComponent=22
	};

	HRESULT _Current_RET;
	API_NAME _Current_API;
	
    // List of writers
    vector<VssWriter>               m_writerList;

protected:
	CComPtr<IVssBackupComponents> m_pBackupComponents;
	HRESULT ModifyPrivilege(
		IN LPCTSTR szPrivilege,
		IN BOOL fEnable);

	HRESULT SetCurrentRET(
			API_NAME Current_API,
			HRESULT Current_RET);

public:
	Wrapper(void);
	~Wrapper(void);
	HRESULT Wrapper::W_InitializeForBackup();
	HRESULT Wrapper::W_StartSnapshot(
								VSS_PWSZ pwszVolumeName, 
								VSS_ID * pidSnapShotSet,
								VSS_ID * pidSnapSet);
	HRESULT Wrapper::W_GetSnapShotDeviceName(
									WCHAR * wszDeviceName,
									VSS_ID pidSnapShot);
	HRESULT Wrapper::W_DeleteAllSnapShots(
									VSS_ID pidSnapShotSet);
	HRESULT Wrapper::W_CloseBackup();

	HRESULT Wrapper::W_GetLastStatus(
							WCHAR * wszAPIName,
							WCHAR * wszReturnCodeName);

	HRESULT Wrapper::W_GetVersion(
						WCHAR * wszVersion);

}; //end class
