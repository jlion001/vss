//By Joe Lynds, 2008
//http://www.jlion.com
//Based on microsoft vshadow sample code

#include "stdafx.h"
#include "Resapi.h"
#include "VssFileDescriptor.h"

//
//  Wrapper class to convert a wstring to/from a temporary WCHAR
//  buffer to be used as an in/out parameter in Win32 APIs
//
class WString2Buffer
{
public:

    WString2Buffer(wstring & s): 
        m_s(s), m_sv(s.length() + 1, L'\0')
    {
        // Move data from wstring to the temporary vector
        std::copy(m_s.begin(), m_s.end(), m_sv.begin());
    }

    ~WString2Buffer()
    {
        // Move data from the temporary vector to the string
        m_sv.resize(wcslen(&m_sv[0]));
        m_s.assign(m_sv.begin(), m_sv.end());
    }

    // Return the temporary WCHAR buffer 
    operator WCHAR* () { return &(m_sv[0]); }

    // Return the available size of the temporary WCHAR buffer 
    size_t length() { return m_s.length(); }

private: 
    wstring &       m_s;
    vector<WCHAR>   m_sv;
};

VssFileDescriptor::VssFileDescriptor(void)
{
}

VssFileDescriptor::~VssFileDescriptor(void)
{
}

// Convert the given BSTR (potentially NULL) into a valid wstring
inline wstring BSTR2WString(BSTR bstr)
{
    return (bstr == NULL)? wstring(L""): wstring(bstr);
}

// Append a backslash to the current string 
inline wstring AppendBackslash(wstring str)
{
    if (str.length() == 0)
        return wstring(L"\\");
    if (str[str.length() - 1] == L'\\')
        return str;
    return str.append(L"\\");
}

// Get the unique volume name for the given path without throwing on error
inline bool GetUniqueVolumeNameForPathNoThrow(wstring path, wstring &volname)
{
    _ASSERTE(path.length() > 0);

    // Add the backslash termination, if needed
    path = AppendBackslash(path);

    wstring volumeRootPath(MAX_PATH, L'\0');
    wstring volumeUniqueName(MAX_PATH, L'\0');

    // Get the root path of the volume
    if (!GetVolumePathNameW((LPCWSTR)path.c_str(),
                            WString2Buffer(volumeRootPath),
                            (DWORD)volumeRootPath.length()))
    {
        return false;
    }

    // Get the unique volume name
    if (!GetVolumeNameForVolumeMountPointW((LPCWSTR)volumeRootPath.c_str(),
                                            WString2Buffer(volumeUniqueName),
                                            (DWORD)volumeUniqueName.length()))
    {
        return false;
    }
    
    volname = volumeUniqueName;

    return true;
}




void VssFileDescriptor::Initialize(
        IVssWMFiledesc * pFileDesc, 
        VSS_DESCRIPTOR_TYPE typeParam
        )
{
    // Set the type
    type = typeParam;

    CComBSTR bstrPath;
    pFileDesc->GetPath(&bstrPath);

    CComBSTR bstrFilespec;
    pFileDesc->GetFilespec (&bstrFilespec);

    bool bRecursive = false;
    pFileDesc->GetRecursive(&bRecursive);

    CComBSTR bstrAlternate;
    pFileDesc->GetAlternateLocation(&bstrAlternate);

    // Initialize local data members
    path = BSTR2WString(bstrPath);
    filespec = BSTR2WString(bstrFilespec);
    expandedPath = bRecursive;
    path = BSTR2WString(bstrPath);

    // Get the expanded path
    expandedPath.resize(MAX_PATH, L'\0');
    _ASSERTE(bstrPath && bstrPath[0]);
    ExpandEnvironmentStringsW(bstrPath, (PWCHAR)expandedPath.c_str(), (DWORD)expandedPath.length());
    expandedPath = AppendBackslash(expandedPath);

    // Get the affected volume 
    if (!GetUniqueVolumeNameForPathNoThrow(expandedPath, affectedVolume))
    {
        affectedVolume = expandedPath;
    }

}