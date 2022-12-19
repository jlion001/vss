//By Joe Lynds, 2008
//http://www.jlion.com
//Based on microsoft vshadow sample code

#include "stdafx.h"
#include "VssWriter.h"

VssWriter::VssWriter(void)
{
}

VssWriter::~VssWriter(void)
{
}

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

// Converts a GUID to a wstring
inline wstring Guid2WString(GUID guid)
{
    wstring guidString(100, L'\0');
    StringCchPrintfW(WString2Buffer(guidString), guidString.length(), WSTR_GUID_FMT, GUID_PRINTF_ARG(guid));

    return guidString;
}

////////////////////////////////////////////////////////////////////////////////////
//  VssWriter
//


// Initialize from a IVssWMFiledesc
void VssWriter::Initialize(IVssExamineWriterMetadata * pMetadata)
{
    // Get writer identity information
    VSS_ID idInstance = GUID_NULL;
    VSS_ID idWriter = GUID_NULL;
    CComBSTR bstrWriterName;
    VSS_USAGE_TYPE usage = VSS_UT_UNDEFINED;
    VSS_SOURCE_TYPE source= VSS_ST_UNDEFINED;
    CComBSTR bstrService;
    CComBSTR bstrUserProcedure;
    UINT iMappings;

    // Get writer identity
    pMetadata->GetIdentity (
        &idInstance,
        &idWriter,
        &bstrWriterName,
        &usage,
        &source
        );

    // Get the restore method 
    pMetadata->GetRestoreMethod(
        &restoreMethod,
        &bstrService,
        &bstrUserProcedure,
        &writerRestoreConditions,
        &rebootRequiredAfterRestore,
        &iMappings
        );

    // Initialize local members
    name = (LPWSTR)bstrWriterName;
    id = Guid2WString(idWriter);
    instanceId = Guid2WString(idInstance);
    supportsRestore = (writerRestoreConditions != VSS_WRE_NEVER);

    // Get file counts
    unsigned cIncludeFiles = 0;
    unsigned cExcludeFiles = 0;
    unsigned cComponents = 0;
    pMetadata->GetFileCounts(&cIncludeFiles, &cExcludeFiles, &cComponents);

    // Get exclude files
    for(unsigned i = 0; i < cExcludeFiles; i++)
    {
        CComPtr<IVssWMFiledesc> pFileDesc;
        pMetadata->GetExcludeFile(i, &pFileDesc);

        // Add this descriptor to the list of excluded files
        VssFileDescriptor excludedFile;
        excludedFile.Initialize(pFileDesc, VSS_FDT_EXCLUDE_FILES);
        excludedFiles.push_back(excludedFile);
    }

    // Enumerate components
    for(unsigned iComponent = 0; iComponent < cComponents; iComponent++)
    {
        // Get component
        CComPtr<IVssWMComponent> pComponent;
        pMetadata->GetComponent(iComponent, &pComponent);

        // Add this component to the list of components
        VssComponent component;
        component.Initialize(name, pComponent);
        components.push_back(component);
    }

    // Discover toplevel components
    for(unsigned i = 0; i < cComponents; i++)
    {
        components[i].isTopLevel = true;
        for(unsigned j = 0; j < cComponents; j++)
            if (components[j].IsAncestorOf(components[i]))
                components[i].isTopLevel = false;
    }
}
