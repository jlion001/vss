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
#include "VssComponent.h"

//////////////////////////////////////////////////////////////////////////////////////
// In-memory representation of a component
//

class VssWriter
{
private:


public:
    //
    //  Data members
    //

    wstring                     name;
    wstring                     id;
    wstring                     instanceId;
    vector<VssComponent>        components;
    vector<VssFileDescriptor>   excludedFiles;
    VSS_WRITERRESTORE_ENUM      writerRestoreConditions;
    bool                        supportsRestore;
    VSS_RESTOREMETHOD_ENUM      restoreMethod;
    bool                        rebootRequiredAfterRestore;

    bool                        isExcluded;

	VssWriter(void);
	~VssWriter(void);

    // Initialize from a IVssWMFiledesc
	void VssWriter::Initialize(IVssExamineWriterMetadata * pMetadata);

    // Print summary/detalied information about this writer
    void VssWriter::Print(bool bListDetailedInfo);

    wstring VssWriter::GetStringFromRestoreMethod(VSS_RESTOREMETHOD_ENUM eRestoreMethod);

    wstring VssWriter::GetStringFromRestoreConditions(VSS_WRITERRESTORE_ENUM eRestoreEnum);
};