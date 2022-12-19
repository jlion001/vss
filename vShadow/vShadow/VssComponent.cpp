//By Joe Lynds, 2008
//http://www.jlion.com
//Based on microsoft vshadow sample code

#include "stdafx.h"
#include "VssComponent.h"

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

// Case insensitive comparison
inline bool IsEqual(wstring str1, wstring str2)
{
    return (_wcsicmp(str1.c_str(), str2.c_str()) == 0);
}

// Returns TRUE if the string is already present in the string list  
// (performs case insensitive comparison)
inline bool FindStringInList(wstring str, vector<wstring> stringList)
{
    // Check to see if the volume is already added 
    for (unsigned i = 0; i < stringList.size( ); i++)
        if (IsEqual(str, stringList[i]))
            return true;

    return false;
}

VssComponent::VssComponent(void)
{
}

VssComponent::~VssComponent(void)
{
}

// Initialize from a IVssWMComponent
void VssComponent::Initialize(wstring writerNameParam, IVssWMComponent * pComponent)
{
    writerName = writerNameParam;

    // Get the component info
    PVSSCOMPONENTINFO pInfo = NULL;
    pComponent->GetComponentInfo (&pInfo);

    // Initialize local members
    name = BSTR2WString(pInfo->bstrComponentName);
    logicalPath = BSTR2WString(pInfo->bstrLogicalPath);
    caption = BSTR2WString(pInfo->bstrCaption);
    type = pInfo->type;
    isSelectable = pInfo->bSelectable;
    notifyOnBackupComplete = pInfo->bNotifyOnBackupComplete;

    // Compute the full path
    fullPath = AppendBackslash(logicalPath) + name;
    if (fullPath[0] != L'\\')
        fullPath = wstring(L"\\") + fullPath;

    // Get file list descriptors
    for(unsigned i = 0; i < pInfo->cFileCount; i++)
    {
        CComPtr<IVssWMFiledesc> pFileDesc;
        pComponent->GetFile (i, &pFileDesc);

        VssFileDescriptor desc;
        desc.Initialize(pFileDesc, VSS_FDT_FILELIST);
        descriptors.push_back(desc);
    }
    
    // Get database descriptors
    for(unsigned i = 0; i < pInfo->cDatabases; i++)
    {
        CComPtr<IVssWMFiledesc> pFileDesc;
        pComponent->GetDatabaseFile (i, &pFileDesc);

        VssFileDescriptor desc;
        desc.Initialize(pFileDesc, VSS_FDT_DATABASE);
        descriptors.push_back(desc);
    }
    
    // Get log descriptors
    for(unsigned i = 0; i < pInfo->cLogFiles; i++)
    {
        CComPtr<IVssWMFiledesc> pFileDesc;
        pComponent->GetDatabaseLogFile (i, &pFileDesc);

        VssFileDescriptor desc;
        desc.Initialize(pFileDesc, VSS_FDT_DATABASE_LOG);
        descriptors.push_back(desc);
    }
    

    pComponent->FreeComponentInfo (pInfo);

    // Compute the affected paths and volumes
    for(unsigned i = 0; i < descriptors.size(); i++)
    {
        if (!FindStringInList(descriptors[i].expandedPath, affectedPaths))
            affectedPaths.push_back(descriptors[i].expandedPath);

        if (!FindStringInList(descriptors[i].affectedVolume, affectedVolumes))
            affectedVolumes.push_back(descriptors[i].affectedVolume);
    }


    sort( affectedPaths.begin( ), affectedPaths.end( ) );
}

// Initialize from a IVssComponent
void VssComponent::Initialize(wstring writerNameParam, IVssComponent * pComponent)
{
    writerName = writerNameParam;

    // Get component type
    pComponent->GetComponentType(&type);

    // Get component name
    CComBSTR bstrComponentName;
    pComponent->GetComponentName(&bstrComponentName);
    name = BSTR2WString(bstrComponentName);

    // Get component logical path
    CComBSTR bstrLogicalPath;
    pComponent->GetLogicalPath(&bstrLogicalPath);
    logicalPath = BSTR2WString(bstrLogicalPath);

    // Compute the full path
    fullPath = AppendBackslash(logicalPath) + name;
    if (fullPath[0] != L'\\')
        fullPath = wstring(L"\\") + fullPath;
}

// Return TRUE if the current component is parent of the given component
bool VssComponent::IsAncestorOf(VssComponent & descendent)
{
    // The child must have a longer full path
    if (descendent.fullPath.length() <= fullPath.length())
        return false;

    wstring fullPathAppendedWithBackslash = AppendBackslash(fullPath);
    wstring descendentPathAppendedWithBackslash = AppendBackslash(descendent.fullPath);

    // Return TRUE if the current full path is a prefix of the child full path
    return IsEqual(fullPathAppendedWithBackslash, 
        descendentPathAppendedWithBackslash.substr(0, 
            fullPathAppendedWithBackslash.length()));
}

// Return TRUE if the current component is parent of the given component
bool VssComponent::CanBeExplicitlyIncluded()
{
    if (isExcluded)
        return false;

    // selectable can be explictly included
    if (isSelectable) 
        return true;

    // Non-selectable top level can be explictly included
    if (isTopLevel)
        return true;

    return false;
}