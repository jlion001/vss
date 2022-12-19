//By Joe Lynds, 2008
//http://www.jlion.com
//Based on microsoft vshadow sample code

//Volume Shadow Stuff
#include <vss.h>
#include <vswriter.h>
#include <vsbackup.h>

// VDS includes
#include <vds.h>

#include "VssFileDescriptor.h"
#include "VssComponent.h"
#include "VssWriter.h"

class VssSelect
{
private:
	// Discover excluded components that have file groups outside the shadow set
	void VssSelect::DiscoverNonShadowedExcludedComponents(
		wstring shadowSourceVolume,
		vector<VssWriter> writerList
	);

	void VssSelect::DiscoverAllExcludedComponents(vector<VssWriter> writerList);
	
	// Discover excluded writers. These are writers that:
	// - either have a top-level nonselectable excluded component
	// - or do not have any included components (all its components are excluded)
	void VssSelect::DiscoverExcludedWriters(vector<VssWriter> writerList);

	// Discover the components that should be explicitly included 
	// These are any included top components 
	void VssSelect::DiscoverExplicitelyIncludedComponents(vector<VssWriter> writerList);

public:
	VssSelect(void);
	~VssSelect(void);

	// Discover the components that should be explicitly included 
	// These are any included top components 
	void VssSelect::SelectExplicitelyIncludedComponents(IVssBackupComponents *ppBackup,vector<VssWriter> writerList);

void VssSelect::SelectComponentsForBackup(
		vector<VssWriter> writerList,
        wstring shadowSourceVolume);
};