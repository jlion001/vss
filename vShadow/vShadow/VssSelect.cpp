//By Joe Lynds, 2008
//http://www.jlion.com
//Based on microsoft vshadow sample code

#include "StdAfx.h"
#include <wchar.h>
#include "VssSelect.h"

VssSelect::VssSelect(void)
{
}

VssSelect::~VssSelect(void)
{

}

// Converts a wstring into a GUID
inline GUID & WString2Guid(wstring src)
{
    // Check if this is a GUID
    static GUID result;
    HRESULT hr = ::CLSIDFromString(W2OLE(const_cast<WCHAR*>(src.c_str())), &result);
    if (FAILED(hr))
    {
        throw(E_INVALIDARG);
    }

    return result;
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

void VssSelect::SelectComponentsForBackup(
		vector<VssWriter> writerList,
        wstring shadowSourceVolume)
{
    // Then discover excluded components that have file groups outside the shadow set
    DiscoverNonShadowedExcludedComponents(shadowSourceVolume,writerList);

    // Now, exclude all componenets that are have directly excluded descendents
    DiscoverAllExcludedComponents(writerList);

    // Next, exclude all writers that:
    // - either have a top-level nonselectable excluded component
    // - or do not have any included components (all its components are excluded)
    DiscoverExcludedWriters(writerList);

    // Now, discover the components that should be included (explicitly or implicitly)
    // These are the top components that do not have any excluded children
    DiscoverExplicitelyIncludedComponents(writerList);
}

// Discover excluded components that have file groups outside the shadow set
void VssSelect::DiscoverNonShadowedExcludedComponents(
    wstring shadowSourceVolume,
	vector<VssWriter> writerList
)
{
    // Discover components that should be excluded from the shadow set 
    // This means components that have at least one File Descriptor requiring 
    // volumes not in the shadow set. 
    for (unsigned iWriter = 0; iWriter < writerList.size(); iWriter++)
    {
        VssWriter & writer = writerList[iWriter];

        // Check if the writer is excluded
        if (writer.isExcluded)
            continue;

        // Check if the component is excluded
        for (unsigned iComponent = 0; iComponent < writer.components.size(); iComponent++)
        {
            VssComponent & component = writer.components[iComponent]; 

            // Check to see if this component is explicitly excluded
            if (component.isExcluded)
                continue;

            // Try to find an affected volume outside the shadow set
            // If yes, exclude the component
            for (unsigned iVol = 0; iVol < component.affectedVolumes.size(); iVol++)
            {
				if (!IsEqual(component.affectedVolumes[iVol], shadowSourceVolume))
                {
                    wstring wsLocalVolume;

                    component.isExcluded = true;
                    break;
                }
            }
        }
    }
}

// Discover the components that should not be included (explicitly or implicitly)
// These are componenets that are have directly excluded descendents
void VssSelect::DiscoverAllExcludedComponents(vector<VssWriter> writerList)
{
    // Discover components that should be excluded from the shadow set 
    // This means components that have at least one File Descriptor requiring 
    // volumes not in the shadow set. 
    for (unsigned iWriter = 0; iWriter < writerList.size(); iWriter++)
    {
        VssWriter & writer = writerList[iWriter];
        if (writer.isExcluded)
            continue;

        // Enumerate all components
        for (unsigned i = 0; i < writer.components.size(); i++)
        {
            VssComponent & component = writer.components[i]; 

            // Check if this component has any excluded children
            // If yes, deselect it
            for (unsigned j = 0; j < writer.components.size(); j++)
            {
                VssComponent & descendent = writer.components[j];
                if (component.IsAncestorOf(descendent) && descendent.isExcluded)
                {
                    component.isExcluded = true; 
                    break; 
                }
            }
        }
    }
}

// Discover excluded writers. These are writers that:
// - either have a top-level nonselectable excluded component
// - or do not have any included components (all its components are excluded)
void VssSelect::DiscoverExcludedWriters(vector<VssWriter> writerList)
{
    // Enumerate writers
    for (unsigned iWriter = 0; iWriter < writerList.size(); iWriter++)
    {
        VssWriter & writer = writerList[iWriter];
        if (writer.isExcluded)
            continue;

        // Discover if we have any:
        // - non-excluded selectable components 
        // - or non-excluded top-level non-selectable components
        // If we have none, then the whole writer must be excluded from the backup
        writer.isExcluded = true;
        for (unsigned i = 0; i < writer.components.size(); i++)
        {
            VssComponent & component = writer.components[i]; 
            if (component.CanBeExplicitlyIncluded())
            {
                writer.isExcluded = false;
                break;
            }
        }

        // No included components were found
        if (writer.isExcluded)
        {
            continue;
        }

        // Now, discover if we have any top-level excluded non-selectable component 
        // If this is true, then the whole writer must be excluded from the backup
        for (unsigned i = 0; i < writer.components.size(); i++)
        {
            VssComponent & component = writer.components[i]; 

            if (component.isTopLevel && !component.isSelectable && component.isExcluded)
            {
                writer.isExcluded = true;
                break;
            }
        }
    }
}

// Discover the components that should be explicitly included 
// These are any included top components 
void VssSelect::DiscoverExplicitelyIncludedComponents(vector<VssWriter> writerList)
{
    // Enumerate all writers
    for (unsigned iWriter = 0; iWriter < writerList.size(); iWriter++)
    {
        VssWriter & writer = writerList[iWriter];
        if (writer.isExcluded)
            continue;

        // Compute the roots of included components
        for (unsigned i = 0; i < writer.components.size(); i++)
        {
            VssComponent & component = writer.components[i]; 

            if (!component.CanBeExplicitlyIncluded())
                continue;

            // Test if our component has a parent that is also included
            component.isExplicitlyIncluded = true;
            for (unsigned j = 0; j < writer.components.size(); j++)
            {
                VssComponent & ancestor = writer.components[j];
                if (ancestor.IsAncestorOf(component) && ancestor.CanBeExplicitlyIncluded())
                {
                    // This cannot be explicitely included since we have another 
                    // ancestor that that must be (implictely or explicitely) included
                    component.isExplicitlyIncluded = false; 
                    break; 
                }
            }
        }
    }
}

// Discover the components that should be explicitly included 
// These are any included top components 
void VssSelect::SelectExplicitelyIncludedComponents(IVssBackupComponents *ppBackup,vector<VssWriter> writerList)
{
    // Enumerate all writers
    for (unsigned iWriter = 0; iWriter < writerList.size(); iWriter++)
    {
        VssWriter & writer = writerList[iWriter];
        if (writer.isExcluded)
            continue;

        // Compute the roots of included components
        for (unsigned i = 0; i < writer.components.size(); i++)
        {
            VssComponent & component = writer.components[i]; 

            if (!component.isExplicitlyIncluded)
                continue;

            // Add the component
           ppBackup->AddComponent(
                WString2Guid(writer.instanceId),
                WString2Guid(writer.id),
                component.type,
                component.logicalPath.c_str(),
                component.name.c_str());
        }
    }
}
