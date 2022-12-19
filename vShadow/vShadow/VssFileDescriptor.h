#pragma once

#include "stdafx.h"
#include "macros.h"

//Volume Shadow Stuff
#include <vss.h>
#include <vswriter.h>
#include <vsbackup.h>

// VDS includes
#include <vds.h>

typedef 	enum 
	{
		VSS_FDT_UNDEFINED = 0,
		VSS_FDT_EXCLUDE_FILES,
		VSS_FDT_FILELIST,
		VSS_FDT_DATABASE,
		VSS_FDT_DATABASE_LOG,
	} VSS_DESCRIPTOR_TYPE;


class VssFileDescriptor
{
private:

public:

    //
    //  Data members
    //

    wstring             path;
    wstring             filespec;
    wstring             alternatePath;
    bool                isRecursive;

    VSS_DESCRIPTOR_TYPE type;
    wstring             expandedPath;
    wstring             affectedVolume;


	// The type of a file descriptor

	VssFileDescriptor(void);
	~VssFileDescriptor(void);

	void VssFileDescriptor::Initialize(
			IVssWMFiledesc * pFileDesc, 
			VSS_DESCRIPTOR_TYPE typeParam
			);
};
