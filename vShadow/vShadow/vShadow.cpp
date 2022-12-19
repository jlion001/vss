//By Joe Lynds, 2008
//http://www.jlion.com
//Based on microsoft vshadow sample code

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "stdafx.h"
#include <atlconv.h>

#include <windows.h>
#include "Wrapper.h"

#define MAX_PATH 260

Wrapper   m_wrapper;

BOOL APIENTRY DllMain( HANDLE hModule, 
                       DWORD  ul_reason_for_call, 
                       LPVOID lpReserved
					 )
{
	switch ( ul_reason_for_call )
	  {
		case DLL_PROCESS_ATTACH:
		  /*
			Here we would normally do some startup stuff, like saving the
			hDll parameter to a global variable, allocating memory for
			local structures and stuff, etc...
		  */
		  break ;

		case DLL_PROCESS_DETACH:
		  /*
			Here we would free the memory and stuff we allocated in
			response to DLL_PROCESS_ATTACH.
		  */

		  break ;

		default :
		  /*
			If fdwReason isn't the above two cases, we'll just ignore it
		  */
		  break ;
	  };

    return TRUE;
}

int __stdcall Version(BSTR * bstrVersion) 
{
	HRESULT hr=S_OK;

	WCHAR pwszVersion[MAX_SIZE];
	memset(pwszVersion,'\0',MAX_SIZE);

	hr=m_wrapper.W_GetVersion(pwszVersion);

	if (hr==S_OK)
	{
		*bstrVersion=SysAllocString(pwszVersion);
	}

	return hr;
}


//CreateVSSBackupComponents
HRESULT __stdcall VSSInitializeForBackup(void)
{
    // Gather writer metadata
    HRESULT hr=m_wrapper.W_InitializeForBackup();

    return hr;
}


HRESULT __stdcall VSSStartSnapshot(
						VSS_PWSZ pwszVolumeName, 
						GUID * pidSnapShotSet,
						GUID * pidSnapShot)
{
	HRESULT hr=S_OK;

	hr=m_wrapper.W_StartSnapshot(pwszVolumeName,pidSnapShotSet,pidSnapShot);

	return hr;
}

HRESULT __stdcall VSSGetSnapShotDeviceName(
						BSTR * bstrVolumeName, 
						GUID * pidSnapShot)
{
	HRESULT hr=S_OK;

	WCHAR pwszVolumeName[MAX_SIZE];
	memset(pwszVolumeName,'\0',MAX_SIZE);

	hr=m_wrapper.W_GetSnapShotDeviceName(pwszVolumeName,*pidSnapShot);

	if (hr==S_OK)
		*bstrVolumeName=SysAllocString(pwszVolumeName);

	return hr;
}

HRESULT __stdcall VSSDeleteAllSnapshots(
						GUID * pidSnapShotSet)
{
	HRESULT hr=S_OK;

	hr=m_wrapper.W_DeleteAllSnapShots(*pidSnapShotSet);

	return hr;
}

HRESULT __stdcall VSSCloseBackup(void)
{
	HRESULT hr=m_wrapper.W_CloseBackup();

	return hr;
}

HRESULT __stdcall VSSGetLastStatus(
						BSTR * bstrAPIName, 
						BSTR * bstrReturnCodeName)
{
	HRESULT hr=S_OK;

	WCHAR pwszAPIName[MAX_SIZE];
	memset(pwszAPIName,'\0',MAX_SIZE);

	WCHAR pwszReturnCodeName[MAX_SIZE];
	memset(pwszReturnCodeName,'\0',MAX_SIZE);

	hr=m_wrapper.W_GetLastStatus(pwszAPIName,pwszReturnCodeName);

	if (hr==S_OK)
	{
		*bstrAPIName=SysAllocString(pwszAPIName);
		*bstrReturnCodeName=SysAllocString(pwszReturnCodeName);
	}

	return hr;
}