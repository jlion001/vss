//By Joe Lynds, 2008
//http://www.jlion.com
//Based on microsoft vshadow sample code

#pragma once

#include "stdafx.h"
#include "macros.h"

//Volume Shadow Stuff
#include <vss.h>
#include <vswriter.h>
#include <vsbackup.h>

// VDS includes
#include <vds.h>

#include "VssFileDescriptor.h"

//////////////////////////////////////////////////////////////////////////////////////
// In-memory representation of a component
//

class VssComponent
{
private:


public:
	//
    //  Data members
    //

    wstring             name;
    wstring             writerName;
    wstring             logicalPath;
    wstring             caption;
    VSS_COMPONENT_TYPE  type;
    bool                isSelectable;
    bool                notifyOnBackupComplete;

    wstring             fullPath;
    bool                isTopLevel;
    bool                isExcluded;
    bool                isExplicitlyIncluded;
    vector<wstring>     affectedPaths;
    vector<wstring>     affectedVolumes;
    vector<VssFileDescriptor> descriptors;

	VssComponent(void);
	~VssComponent(void);

    // Initialize from a IVssWMComponent
	void VssComponent::Initialize(wstring writerNameParam, IVssWMComponent * pComponent);

    // Initialize from a IVssComponent
    void VssComponent::Initialize(wstring writerNameParam, IVssComponent * pComponent);

    // Print summary/detalied information about this component
    void VssComponent::Print(bool bListDetailedInfo);

    // Convert a component type into a string
    wstring VssComponent::GetStringFromComponentType(VSS_COMPONENT_TYPE eComponentType);

    // Return TRUE if the current component is ancestor of the given component
    bool VssComponent::IsAncestorOf(VssComponent & child);

    // return TRUEif it can be explicitly included
    bool VssComponent::CanBeExplicitlyIncluded();


};