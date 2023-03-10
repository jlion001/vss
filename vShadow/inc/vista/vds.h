

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0499 */
/* Compiler settings for vds.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __vds_h__
#define __vds_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IEnumVdsObject_FWD_DEFINED__
#define __IEnumVdsObject_FWD_DEFINED__
typedef interface IEnumVdsObject IEnumVdsObject;
#endif 	/* __IEnumVdsObject_FWD_DEFINED__ */


#ifndef __IVdsAsync_FWD_DEFINED__
#define __IVdsAsync_FWD_DEFINED__
typedef interface IVdsAsync IVdsAsync;
#endif 	/* __IVdsAsync_FWD_DEFINED__ */


#ifndef __IVdsAdviseSink_FWD_DEFINED__
#define __IVdsAdviseSink_FWD_DEFINED__
typedef interface IVdsAdviseSink IVdsAdviseSink;
#endif 	/* __IVdsAdviseSink_FWD_DEFINED__ */


#ifndef __IVdsProvider_FWD_DEFINED__
#define __IVdsProvider_FWD_DEFINED__
typedef interface IVdsProvider IVdsProvider;
#endif 	/* __IVdsProvider_FWD_DEFINED__ */


#ifndef __IVdsProviderSupport_FWD_DEFINED__
#define __IVdsProviderSupport_FWD_DEFINED__
typedef interface IVdsProviderSupport IVdsProviderSupport;
#endif 	/* __IVdsProviderSupport_FWD_DEFINED__ */


#ifndef __IVdsSwProvider_FWD_DEFINED__
#define __IVdsSwProvider_FWD_DEFINED__
typedef interface IVdsSwProvider IVdsSwProvider;
#endif 	/* __IVdsSwProvider_FWD_DEFINED__ */


#ifndef __IVdsPack_FWD_DEFINED__
#define __IVdsPack_FWD_DEFINED__
typedef interface IVdsPack IVdsPack;
#endif 	/* __IVdsPack_FWD_DEFINED__ */


#ifndef __IVdsPack2_FWD_DEFINED__
#define __IVdsPack2_FWD_DEFINED__
typedef interface IVdsPack2 IVdsPack2;
#endif 	/* __IVdsPack2_FWD_DEFINED__ */


#ifndef __IVdsDisk_FWD_DEFINED__
#define __IVdsDisk_FWD_DEFINED__
typedef interface IVdsDisk IVdsDisk;
#endif 	/* __IVdsDisk_FWD_DEFINED__ */


#ifndef __IVdsDisk2_FWD_DEFINED__
#define __IVdsDisk2_FWD_DEFINED__
typedef interface IVdsDisk2 IVdsDisk2;
#endif 	/* __IVdsDisk2_FWD_DEFINED__ */


#ifndef __IVdsAdvancedDisk_FWD_DEFINED__
#define __IVdsAdvancedDisk_FWD_DEFINED__
typedef interface IVdsAdvancedDisk IVdsAdvancedDisk;
#endif 	/* __IVdsAdvancedDisk_FWD_DEFINED__ */


#ifndef __IVdsAdvancedDisk2_FWD_DEFINED__
#define __IVdsAdvancedDisk2_FWD_DEFINED__
typedef interface IVdsAdvancedDisk2 IVdsAdvancedDisk2;
#endif 	/* __IVdsAdvancedDisk2_FWD_DEFINED__ */


#ifndef __IVdsCreatePartitionEx_FWD_DEFINED__
#define __IVdsCreatePartitionEx_FWD_DEFINED__
typedef interface IVdsCreatePartitionEx IVdsCreatePartitionEx;
#endif 	/* __IVdsCreatePartitionEx_FWD_DEFINED__ */


#ifndef __IVdsRemovable_FWD_DEFINED__
#define __IVdsRemovable_FWD_DEFINED__
typedef interface IVdsRemovable IVdsRemovable;
#endif 	/* __IVdsRemovable_FWD_DEFINED__ */


#ifndef __IVdsVolume_FWD_DEFINED__
#define __IVdsVolume_FWD_DEFINED__
typedef interface IVdsVolume IVdsVolume;
#endif 	/* __IVdsVolume_FWD_DEFINED__ */


#ifndef __IVdsVolumeOnline_FWD_DEFINED__
#define __IVdsVolumeOnline_FWD_DEFINED__
typedef interface IVdsVolumeOnline IVdsVolumeOnline;
#endif 	/* __IVdsVolumeOnline_FWD_DEFINED__ */


#ifndef __IVdsVolumePlex_FWD_DEFINED__
#define __IVdsVolumePlex_FWD_DEFINED__
typedef interface IVdsVolumePlex IVdsVolumePlex;
#endif 	/* __IVdsVolumePlex_FWD_DEFINED__ */


#ifndef __IVdsHwProvider_FWD_DEFINED__
#define __IVdsHwProvider_FWD_DEFINED__
typedef interface IVdsHwProvider IVdsHwProvider;
#endif 	/* __IVdsHwProvider_FWD_DEFINED__ */


#ifndef __IVdsHwProviderType_FWD_DEFINED__
#define __IVdsHwProviderType_FWD_DEFINED__
typedef interface IVdsHwProviderType IVdsHwProviderType;
#endif 	/* __IVdsHwProviderType_FWD_DEFINED__ */


#ifndef __IVdsSubSystem_FWD_DEFINED__
#define __IVdsSubSystem_FWD_DEFINED__
typedef interface IVdsSubSystem IVdsSubSystem;
#endif 	/* __IVdsSubSystem_FWD_DEFINED__ */


#ifndef __IVdsSubSystemNaming_FWD_DEFINED__
#define __IVdsSubSystemNaming_FWD_DEFINED__
typedef interface IVdsSubSystemNaming IVdsSubSystemNaming;
#endif 	/* __IVdsSubSystemNaming_FWD_DEFINED__ */


#ifndef __IVdsSubSystemIscsi_FWD_DEFINED__
#define __IVdsSubSystemIscsi_FWD_DEFINED__
typedef interface IVdsSubSystemIscsi IVdsSubSystemIscsi;
#endif 	/* __IVdsSubSystemIscsi_FWD_DEFINED__ */


#ifndef __IVdsControllerPort_FWD_DEFINED__
#define __IVdsControllerPort_FWD_DEFINED__
typedef interface IVdsControllerPort IVdsControllerPort;
#endif 	/* __IVdsControllerPort_FWD_DEFINED__ */


#ifndef __IVdsController_FWD_DEFINED__
#define __IVdsController_FWD_DEFINED__
typedef interface IVdsController IVdsController;
#endif 	/* __IVdsController_FWD_DEFINED__ */


#ifndef __IVdsControllerControllerPort_FWD_DEFINED__
#define __IVdsControllerControllerPort_FWD_DEFINED__
typedef interface IVdsControllerControllerPort IVdsControllerControllerPort;
#endif 	/* __IVdsControllerControllerPort_FWD_DEFINED__ */


#ifndef __IVdsDrive_FWD_DEFINED__
#define __IVdsDrive_FWD_DEFINED__
typedef interface IVdsDrive IVdsDrive;
#endif 	/* __IVdsDrive_FWD_DEFINED__ */


#ifndef __IVdsLun_FWD_DEFINED__
#define __IVdsLun_FWD_DEFINED__
typedef interface IVdsLun IVdsLun;
#endif 	/* __IVdsLun_FWD_DEFINED__ */


#ifndef __IVdsLunNaming_FWD_DEFINED__
#define __IVdsLunNaming_FWD_DEFINED__
typedef interface IVdsLunNaming IVdsLunNaming;
#endif 	/* __IVdsLunNaming_FWD_DEFINED__ */


#ifndef __IVdsLunControllerPorts_FWD_DEFINED__
#define __IVdsLunControllerPorts_FWD_DEFINED__
typedef interface IVdsLunControllerPorts IVdsLunControllerPorts;
#endif 	/* __IVdsLunControllerPorts_FWD_DEFINED__ */


#ifndef __IVdsLunMpio_FWD_DEFINED__
#define __IVdsLunMpio_FWD_DEFINED__
typedef interface IVdsLunMpio IVdsLunMpio;
#endif 	/* __IVdsLunMpio_FWD_DEFINED__ */


#ifndef __IVdsLunIscsi_FWD_DEFINED__
#define __IVdsLunIscsi_FWD_DEFINED__
typedef interface IVdsLunIscsi IVdsLunIscsi;
#endif 	/* __IVdsLunIscsi_FWD_DEFINED__ */


#ifndef __IVdsLunPlex_FWD_DEFINED__
#define __IVdsLunPlex_FWD_DEFINED__
typedef interface IVdsLunPlex IVdsLunPlex;
#endif 	/* __IVdsLunPlex_FWD_DEFINED__ */


#ifndef __IVdsIscsiPortal_FWD_DEFINED__
#define __IVdsIscsiPortal_FWD_DEFINED__
typedef interface IVdsIscsiPortal IVdsIscsiPortal;
#endif 	/* __IVdsIscsiPortal_FWD_DEFINED__ */


#ifndef __IVdsIscsiTarget_FWD_DEFINED__
#define __IVdsIscsiTarget_FWD_DEFINED__
typedef interface IVdsIscsiTarget IVdsIscsiTarget;
#endif 	/* __IVdsIscsiTarget_FWD_DEFINED__ */


#ifndef __IVdsIscsiPortalGroup_FWD_DEFINED__
#define __IVdsIscsiPortalGroup_FWD_DEFINED__
typedef interface IVdsIscsiPortalGroup IVdsIscsiPortalGroup;
#endif 	/* __IVdsIscsiPortalGroup_FWD_DEFINED__ */


#ifndef __IVdsMaintenance_FWD_DEFINED__
#define __IVdsMaintenance_FWD_DEFINED__
typedef interface IVdsMaintenance IVdsMaintenance;
#endif 	/* __IVdsMaintenance_FWD_DEFINED__ */


#ifndef __IVdsServiceLoader_FWD_DEFINED__
#define __IVdsServiceLoader_FWD_DEFINED__
typedef interface IVdsServiceLoader IVdsServiceLoader;
#endif 	/* __IVdsServiceLoader_FWD_DEFINED__ */


#ifndef __IVdsService_FWD_DEFINED__
#define __IVdsService_FWD_DEFINED__
typedef interface IVdsService IVdsService;
#endif 	/* __IVdsService_FWD_DEFINED__ */


#ifndef __IVdsServiceUninstallDisk_FWD_DEFINED__
#define __IVdsServiceUninstallDisk_FWD_DEFINED__
typedef interface IVdsServiceUninstallDisk IVdsServiceUninstallDisk;
#endif 	/* __IVdsServiceUninstallDisk_FWD_DEFINED__ */


#ifndef __IVdsServiceHba_FWD_DEFINED__
#define __IVdsServiceHba_FWD_DEFINED__
typedef interface IVdsServiceHba IVdsServiceHba;
#endif 	/* __IVdsServiceHba_FWD_DEFINED__ */


#ifndef __IVdsServiceIscsi_FWD_DEFINED__
#define __IVdsServiceIscsi_FWD_DEFINED__
typedef interface IVdsServiceIscsi IVdsServiceIscsi;
#endif 	/* __IVdsServiceIscsi_FWD_DEFINED__ */


#ifndef __IVdsServiceInitialization_FWD_DEFINED__
#define __IVdsServiceInitialization_FWD_DEFINED__
typedef interface IVdsServiceInitialization IVdsServiceInitialization;
#endif 	/* __IVdsServiceInitialization_FWD_DEFINED__ */


#ifndef __IVdsHbaPort_FWD_DEFINED__
#define __IVdsHbaPort_FWD_DEFINED__
typedef interface IVdsHbaPort IVdsHbaPort;
#endif 	/* __IVdsHbaPort_FWD_DEFINED__ */


#ifndef __IVdsIscsiInitiatorAdapter_FWD_DEFINED__
#define __IVdsIscsiInitiatorAdapter_FWD_DEFINED__
typedef interface IVdsIscsiInitiatorAdapter IVdsIscsiInitiatorAdapter;
#endif 	/* __IVdsIscsiInitiatorAdapter_FWD_DEFINED__ */


#ifndef __IVdsIscsiInitiatorPortal_FWD_DEFINED__
#define __IVdsIscsiInitiatorPortal_FWD_DEFINED__
typedef interface IVdsIscsiInitiatorPortal IVdsIscsiInitiatorPortal;
#endif 	/* __IVdsIscsiInitiatorPortal_FWD_DEFINED__ */


#ifndef __IVdsDiskPartitionMF_FWD_DEFINED__
#define __IVdsDiskPartitionMF_FWD_DEFINED__
typedef interface IVdsDiskPartitionMF IVdsDiskPartitionMF;
#endif 	/* __IVdsDiskPartitionMF_FWD_DEFINED__ */


#ifndef __IVdsVolumeMF_FWD_DEFINED__
#define __IVdsVolumeMF_FWD_DEFINED__
typedef interface IVdsVolumeMF IVdsVolumeMF;
#endif 	/* __IVdsVolumeMF_FWD_DEFINED__ */


#ifndef __IVdsVolumeMF2_FWD_DEFINED__
#define __IVdsVolumeMF2_FWD_DEFINED__
typedef interface IVdsVolumeMF2 IVdsVolumeMF2;
#endif 	/* __IVdsVolumeMF2_FWD_DEFINED__ */


#ifndef __IVdsVolumeShrink_FWD_DEFINED__
#define __IVdsVolumeShrink_FWD_DEFINED__
typedef interface IVdsVolumeShrink IVdsVolumeShrink;
#endif 	/* __IVdsVolumeShrink_FWD_DEFINED__ */


#ifndef __IVdsSubSystemImportTarget_FWD_DEFINED__
#define __IVdsSubSystemImportTarget_FWD_DEFINED__
typedef interface IVdsSubSystemImportTarget IVdsSubSystemImportTarget;
#endif 	/* __IVdsSubSystemImportTarget_FWD_DEFINED__ */


#ifndef __IVdsIscsiPortalLocal_FWD_DEFINED__
#define __IVdsIscsiPortalLocal_FWD_DEFINED__
typedef interface IVdsIscsiPortalLocal IVdsIscsiPortalLocal;
#endif 	/* __IVdsIscsiPortalLocal_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "vdserr.h"
#include "vdslun.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_vds_0000_0000 */
/* [local] */ 

//+--------------------------------------------------------------
//
//  Microsoft Windows
//  Copyright (c) 2000 Microsoft Corporation.
//
//---------------------------------------------------------------





typedef GUID VDS_OBJECT_ID;

typedef 
enum _VDS_OBJECT_TYPE
    {	VDS_OT_UNKNOWN	= 0,
	VDS_OT_PROVIDER	= 1,
	VDS_OT_PACK	= 10,
	VDS_OT_VOLUME	= 11,
	VDS_OT_VOLUME_PLEX	= 12,
	VDS_OT_DISK	= 13,
	VDS_OT_SUB_SYSTEM	= 30,
	VDS_OT_CONTROLLER	= 31,
	VDS_OT_DRIVE	= 32,
	VDS_OT_LUN	= 33,
	VDS_OT_LUN_PLEX	= 34,
	VDS_OT_PORT	= 35,
	VDS_OT_PORTAL	= 36,
	VDS_OT_TARGET	= 37,
	VDS_OT_PORTAL_GROUP	= 38,
	VDS_OT_HBAPORT	= 90,
	VDS_OT_INIT_ADAPTER	= 91,
	VDS_OT_INIT_PORTAL	= 92,
	VDS_OT_ASYNC	= 100,
	VDS_OT_ENUM	= 101
    } 	VDS_OBJECT_TYPE;

typedef 
enum _VDS_PROVIDER_TYPE
    {	VDS_PT_UNKNOWN	= 0,
	VDS_PT_SOFTWARE	= 1,
	VDS_PT_HARDWARE	= 2
    } 	VDS_PROVIDER_TYPE;

typedef 
enum _VDS_PROVIDER_FLAG
    {	VDS_PF_DYNAMIC	= 0x1,
	VDS_PF_INTERNAL_HARDWARE_PROVIDER	= 0x2,
	VDS_PF_ONE_DISK_ONLY_PER_PACK	= 0x4,
	VDS_PF_ONE_PACK_ONLINE_ONLY	= 0x8,
	VDS_PF_VOLUME_SPACE_MUST_BE_CONTIGUOUS	= 0x10,
	VDS_PF_SUPPORT_DYNAMIC	= 0x80000000,
	VDS_PF_SUPPORT_FAULT_TOLERANT	= 0x40000000,
	VDS_PF_SUPPORT_DYNAMIC_1394	= 0x20000000
    } 	VDS_PROVIDER_FLAG;

typedef 
enum _VDS_RECOVER_ACTION
    {	VDS_RA_UNKNOWN	= 0,
	VDS_RA_REFRESH	= 1,
	VDS_RA_RESTART	= 2
    } 	VDS_RECOVER_ACTION;

typedef 
enum _VDS_NOTIFICATION_TARGET_TYPE
    {	VDS_NTT_UNKNOWN	= 0,
	VDS_NTT_PACK	= VDS_OT_PACK,
	VDS_NTT_VOLUME	= VDS_OT_VOLUME,
	VDS_NTT_DISK	= VDS_OT_DISK,
	VDS_NTT_PARTITION	= 60,
	VDS_NTT_DRIVE_LETTER	= 61,
	VDS_NTT_FILE_SYSTEM	= 62,
	VDS_NTT_MOUNT_POINT	= 63,
	VDS_NTT_SUB_SYSTEM	= VDS_OT_SUB_SYSTEM,
	VDS_NTT_CONTROLLER	= VDS_OT_CONTROLLER,
	VDS_NTT_DRIVE	= VDS_OT_DRIVE,
	VDS_NTT_LUN	= VDS_OT_LUN,
	VDS_NTT_PORT	= VDS_OT_PORT,
	VDS_NTT_PORTAL	= VDS_OT_PORTAL,
	VDS_NTT_TARGET	= VDS_OT_TARGET,
	VDS_NTT_PORTAL_GROUP	= VDS_OT_PORTAL_GROUP,
	VDS_NTT_SERVICE	= 200
    } 	VDS_NOTIFICATION_TARGET_TYPE;

#define	VDS_NF_PACK_ARRIVE	( 1 )

#define	VDS_NF_PACK_DEPART	( 2 )

#define	VDS_NF_PACK_MODIFY	( 3 )

#define	VDS_NF_VOLUME_ARRIVE	( 4 )

#define	VDS_NF_VOLUME_DEPART	( 5 )

#define	VDS_NF_VOLUME_MODIFY	( 6 )

#define	VDS_NF_VOLUME_REBUILDING_PROGRESS	( 7 )

#define	VDS_NF_DISK_ARRIVE	( 8 )

#define	VDS_NF_DISK_DEPART	( 9 )

#define	VDS_NF_DISK_MODIFY	( 10 )

#define	VDS_NF_PARTITION_ARRIVE	( 11 )

#define	VDS_NF_PARTITION_DEPART	( 12 )

#define	VDS_NF_PARTITION_MODIFY	( 13 )

#define	VDS_NF_SUB_SYSTEM_ARRIVE	( 101 )

#define	VDS_NF_SUB_SYSTEM_DEPART	( 102 )

#define	VDS_NF_CONTROLLER_ARRIVE	( 103 )

#define	VDS_NF_CONTROLLER_DEPART	( 104 )

#define	VDS_NF_DRIVE_ARRIVE	( 105 )

#define	VDS_NF_DRIVE_DEPART	( 106 )

#define	VDS_NF_DRIVE_MODIFY	( 107 )

#define	VDS_NF_LUN_ARRIVE	( 108 )

#define	VDS_NF_LUN_DEPART	( 109 )

#define	VDS_NF_LUN_MODIFY	( 110 )

#define	VDS_NF_PORT_ARRIVE	( 121 )

#define	VDS_NF_PORT_DEPART	( 122 )

#define	VDS_NF_PORTAL_ARRIVE	( 123 )

#define	VDS_NF_PORTAL_DEPART	( 124 )

#define	VDS_NF_PORTAL_MODIFY	( 125 )

#define	VDS_NF_TARGET_ARRIVE	( 126 )

#define	VDS_NF_TARGET_DEPART	( 127 )

#define	VDS_NF_TARGET_MODIFY	( 128 )

#define	VDS_NF_PORTAL_GROUP_ARRIVE	( 129 )

#define	VDS_NF_PORTAL_GROUP_DEPART	( 130 )

#define	VDS_NF_PORTAL_GROUP_MODIFY	( 131 )

#define	VDS_NF_SUB_SYSTEM_MODIFY	( 151 )

#define	VDS_NF_DRIVE_LETTER_FREE	( 201 )

#define	VDS_NF_DRIVE_LETTER_ASSIGN	( 202 )

#define	VDS_NF_FILE_SYSTEM_MODIFY	( 203 )

#define	VDS_NF_FILE_SYSTEM_FORMAT_PROGRESS	( 204 )

#define	VDS_NF_MOUNT_POINTS_CHANGE	( 205 )

#define	VDS_NF_FILE_SYSTEM_SHRINKING_PROGRESS	( 206 )

#define	VDS_NF_SERVICE_OUT_OF_SYNC	( 301 )

typedef struct _VDS_PACK_NOTIFICATION
    {
    ULONG ulEvent;
    VDS_OBJECT_ID packId;
    } 	VDS_PACK_NOTIFICATION;

typedef struct _VDS_DISK_NOTIFICATION
    {
    ULONG ulEvent;
    VDS_OBJECT_ID diskId;
    } 	VDS_DISK_NOTIFICATION;

typedef struct _VDS_VOLUME_NOTIFICATION
    {
    ULONG ulEvent;
    VDS_OBJECT_ID volumeId;
    VDS_OBJECT_ID plexId;
    ULONG ulPercentCompleted;
    } 	VDS_VOLUME_NOTIFICATION;

typedef struct _VDS_PARTITION_NOTIFICATION
    {
    ULONG ulEvent;
    VDS_OBJECT_ID diskId;
    ULONGLONG ullOffset;
    } 	VDS_PARTITION_NOTIFICATION;

typedef struct _VDS_SERVICE_NOTIFICATION
    {
    ULONG ulEvent;
    VDS_RECOVER_ACTION action;
    } 	VDS_SERVICE_NOTIFICATION;

typedef struct _VDS_DRIVE_LETTER_NOTIFICATION
    {
    ULONG ulEvent;
    WCHAR wcLetter;
    VDS_OBJECT_ID volumeId;
    } 	VDS_DRIVE_LETTER_NOTIFICATION;

typedef struct _VDS_FILE_SYSTEM_NOTIFICATION
    {
    ULONG ulEvent;
    VDS_OBJECT_ID volumeId;
    DWORD dwPercentCompleted;
    } 	VDS_FILE_SYSTEM_NOTIFICATION;

typedef struct _VDS_MOUNT_POINT_NOTIFICATION
    {
    ULONG ulEvent;
    VDS_OBJECT_ID volumeId;
    } 	VDS_MOUNT_POINT_NOTIFICATION;

typedef struct _VDS_SUB_SYSTEM_NOTIFICATION
    {
    ULONG ulEvent;
    VDS_OBJECT_ID subSystemId;
    } 	VDS_SUB_SYSTEM_NOTIFICATION;

typedef struct _VDS_CONTROLLER_NOTIFICATION
    {
    ULONG ulEvent;
    VDS_OBJECT_ID controllerId;
    } 	VDS_CONTROLLER_NOTIFICATION;

typedef struct _VDS_DRIVE_NOTIFICATION
    {
    ULONG ulEvent;
    VDS_OBJECT_ID driveId;
    } 	VDS_DRIVE_NOTIFICATION;

typedef struct _VDS_LUN_NOTIFICATION
    {
    ULONG ulEvent;
    VDS_OBJECT_ID LunId;
    } 	VDS_LUN_NOTIFICATION;

typedef struct _VDS_PORT_NOTIFICATION
    {
    ULONG ulEvent;
    VDS_OBJECT_ID portId;
    } 	VDS_PORT_NOTIFICATION;

typedef struct _VDS_PORTAL_NOTIFICATION
    {
    ULONG ulEvent;
    VDS_OBJECT_ID portalId;
    } 	VDS_PORTAL_NOTIFICATION;

typedef struct _VDS_TARGET_NOTIFICATION
    {
    ULONG ulEvent;
    VDS_OBJECT_ID targetId;
    } 	VDS_TARGET_NOTIFICATION;

typedef struct _VDS_PORTAL_GROUP_NOTIFICATION
    {
    ULONG ulEvent;
    VDS_OBJECT_ID portalGroupId;
    } 	VDS_PORTAL_GROUP_NOTIFICATION;

typedef struct _VDS_NOTIFICATION
    {
    VDS_NOTIFICATION_TARGET_TYPE objectType;
    /* [switch_type] */ union 
        {
        VDS_PACK_NOTIFICATION Pack;
        VDS_DISK_NOTIFICATION Disk;
        VDS_VOLUME_NOTIFICATION Volume;
        VDS_PARTITION_NOTIFICATION Partition;
        VDS_DRIVE_LETTER_NOTIFICATION Letter;
        VDS_FILE_SYSTEM_NOTIFICATION FileSystem;
        VDS_MOUNT_POINT_NOTIFICATION MountPoint;
        VDS_SUB_SYSTEM_NOTIFICATION SubSystem;
        VDS_CONTROLLER_NOTIFICATION Controller;
        VDS_DRIVE_NOTIFICATION Drive;
        VDS_LUN_NOTIFICATION Lun;
        VDS_PORT_NOTIFICATION Port;
        VDS_PORTAL_NOTIFICATION Portal;
        VDS_TARGET_NOTIFICATION Target;
        VDS_PORTAL_GROUP_NOTIFICATION PortalGroup;
        VDS_SERVICE_NOTIFICATION Service;
         /* Empty union arm */ 
        } 	;
    } 	VDS_NOTIFICATION;

typedef 
enum _VDS_ASYNC_OUTPUT_TYPE
    {	VDS_ASYNCOUT_UNKNOWN	= 0,
	VDS_ASYNCOUT_CREATEVOLUME	= 1,
	VDS_ASYNCOUT_EXTENDVOLUME	= 2,
	VDS_ASYNCOUT_SHRINKVOLUME	= 3,
	VDS_ASYNCOUT_ADDVOLUMEPLEX	= 4,
	VDS_ASYNCOUT_BREAKVOLUMEPLEX	= 5,
	VDS_ASYNCOUT_REMOVEVOLUMEPLEX	= 6,
	VDS_ASYNCOUT_REPAIRVOLUMEPLEX	= 7,
	VDS_ASYNCOUT_RECOVERPACK	= 8,
	VDS_ASYNCOUT_REPLACEDISK	= 9,
	VDS_ASYNCOUT_CREATEPARTITION	= 10,
	VDS_ASYNCOUT_CLEAN	= 11,
	VDS_ASYNCOUT_CREATELUN	= 50,
	VDS_ASYNCOUT_ADDLUNPLEX	= 52,
	VDS_ASYNCOUT_REMOVELUNPLEX	= 53,
	VDS_ASYNCOUT_EXTENDLUN	= 54,
	VDS_ASYNCOUT_SHRINKLUN	= 55,
	VDS_ASYNCOUT_RECOVERLUN	= 56,
	VDS_ASYNCOUT_LOGINTOTARGET	= 60,
	VDS_ASYNCOUT_LOGOUTFROMTARGET	= 61,
	VDS_ASYNCOUT_CREATETARGET	= 62,
	VDS_ASYNCOUT_CREATEPORTALGROUP	= 63,
	VDS_ASYNCOUT_DELETETARGET	= 64,
	VDS_ASYNCOUT_ADDPORTAL	= 65,
	VDS_ASYNCOUT_REMOVEPORTAL	= 66,
	VDS_ASYNCOUT_DELETEPORTALGROUP	= 67,
	VDS_ASYNCOUT_FORMAT	= 101
    } 	VDS_ASYNC_OUTPUT_TYPE;

typedef struct _VDS_ASYNC_OUTPUT
    {
    VDS_ASYNC_OUTPUT_TYPE type;
    /* [switch_type] */ union 
        {
        struct _cp
            {
            ULONGLONG ullOffset;
            VDS_OBJECT_ID volumeId;
            } 	cp;
        struct _cv
            {
            IUnknown *pVolumeUnk;
            } 	cv;
        struct _bvp
            {
            IUnknown *pVolumeUnk;
            } 	bvp;
        struct _sv
            {
            ULONGLONG ullReclaimedBytes;
            } 	sv;
        struct _cl
            {
            IUnknown *pLunUnk;
            } 	cl;
        struct _ct
            {
            IUnknown *pTargetUnk;
            } 	ct;
        struct _cpg
            {
            IUnknown *pPortalGroupUnk;
            } 	cpg;
         /* Empty union arm */ 
        } 	;
    } 	VDS_ASYNC_OUTPUT;

typedef USHORT VDS_ISCSI_PORTALGROUP_TAG;

typedef 
enum VDS_IPADDRESS_TYPE
    {	VDS_IPT_TEXT	= 0,
	VDS_IPT_IPV4	= 1,
	VDS_IPT_IPV6	= 2,
	VDS_IPT_EMPTY	= 3
    } 	VDS_IPADDRESS_TYPE;

typedef 
enum _VDS_HEALTH
    {	VDS_H_UNKNOWN	= 0,
	VDS_H_HEALTHY	= 1,
	VDS_H_REBUILDING	= 2,
	VDS_H_STALE	= 3,
	VDS_H_FAILING	= 4,
	VDS_H_FAILING_REDUNDANCY	= 5,
	VDS_H_FAILED_REDUNDANCY	= 6,
	VDS_H_FAILED_REDUNDANCY_FAILING	= 7,
	VDS_H_FAILED	= 8
    } 	VDS_HEALTH;

typedef 
enum _VDS_TRANSITION_STATE
    {	VDS_TS_UNKNOWN	= 0,
	VDS_TS_STABLE	= 1,
	VDS_TS_EXTENDING	= 2,
	VDS_TS_SHRINKING	= 3,
	VDS_TS_RECONFIGING	= 4
    } 	VDS_TRANSITION_STATE;

typedef 
enum _VDS_FILE_SYSTEM_TYPE
    {	VDS_FST_UNKNOWN	= 0,
	VDS_FST_RAW	= ( VDS_FST_UNKNOWN + 1 ) ,
	VDS_FST_FAT	= ( VDS_FST_RAW + 1 ) ,
	VDS_FST_FAT32	= ( VDS_FST_FAT + 1 ) ,
	VDS_FST_NTFS	= ( VDS_FST_FAT32 + 1 ) ,
	VDS_FST_CDFS	= ( VDS_FST_NTFS + 1 ) ,
	VDS_FST_UDF	= ( VDS_FST_CDFS + 1 ) 
    } 	VDS_FILE_SYSTEM_TYPE;

typedef 
enum _VDS_HBAPORT_TYPE
    {	VDS_HPT_UNKNOWN	= 1,
	VDS_HPT_OTHER	= 2,
	VDS_HPT_NOTPRESENT	= 3,
	VDS_HPT_NPORT	= 5,
	VDS_HPT_NLPORT	= 6,
	VDS_HPT_FLPORT	= 7,
	VDS_HPT_FPORT	= 8,
	VDS_HPT_EPORT	= 9,
	VDS_HPT_GPORT	= 10,
	VDS_HPT_LPORT	= 20,
	VDS_HPT_PTP	= 21
    } 	VDS_HBAPORT_TYPE;

typedef 
enum _VDS_HBAPORT_STATUS
    {	VDS_HPS_UNKNOWN	= 1,
	VDS_HPS_ONLINE	= 2,
	VDS_HPS_OFFLINE	= 3,
	VDS_HPS_BYPASSED	= 4,
	VDS_HPS_DIAGNOSTICS	= 5,
	VDS_HPS_LINKDOWN	= 6,
	VDS_HPS_ERROR	= 7,
	VDS_HPS_LOOPBACK	= 8
    } 	VDS_HBAPORT_STATUS;

typedef 
enum _VDS_HBAPORT_SPEED_FLAG
    {	VDS_HSF_UNKNOWN	= 0,
	VDS_HSF_1GBIT	= 0x1,
	VDS_HSF_2GBIT	= 0x2,
	VDS_HSF_10GBIT	= 0x4,
	VDS_HSF_4GBIT	= 0x8,
	VDS_HSF_NOT_NEGOTIATED	= ( 1 << 15 ) 
    } 	VDS_HBAPORT_SPEED_FLAG;

typedef 
enum _VDS_PATH_STATUS
    {	VDS_MPS_UNKNOWN	= 0,
	VDS_MPS_ONLINE	= 1,
	VDS_MPS_FAILED	= 5,
	VDS_MPS_STANDBY	= 7
    } 	VDS_PATH_STATUS;

typedef 
enum _VDS_LOADBALANCE_POLICY_ENUM
    {	VDS_LBP_UNKNOWN	= 0,
	VDS_LBP_FAILOVER	= 1,
	VDS_LBP_ROUND_ROBIN	= 2,
	VDS_LBP_ROUND_ROBIN_WITH_SUBSET	= 3,
	VDS_LBP_DYN_LEAST_QUEUE_DEPTH	= 4,
	VDS_LBP_WEIGHTED_PATHS	= 5,
	VDS_LBP_LEAST_BLOCKS	= 6,
	VDS_LBP_VENDOR_SPECIFIC	= 7
    } 	VDS_LOADBALANCE_POLICY_ENUM;

typedef 
enum _VDS_PROVIDER_LBSUPPORT_FLAG
    {	VDS_LBF_FAILOVER	= 0x1,
	VDS_LBF_ROUND_ROBIN	= 0x2,
	VDS_LBF_ROUND_ROBIN_WITH_SUBSET	= 0x4,
	VDS_LBF_DYN_LEAST_QUEUE_DEPTH	= 0x8,
	VDS_LBF_WEIGHTED_PATHS	= 0x10,
	VDS_LBF_LEAST_BLOCKS	= 0x20,
	VDS_LBF_VENDOR_SPECIFIC	= 0x40
    } 	VDS_PROVIDER_LBSUPPORT_FLAG;

typedef 
enum _VDS_VERSION_SUPPORT_FLAG
    {	VDS_VSF_1_0	= 0x1,
	VDS_VSF_1_1	= 0x2
    } 	VDS_VERSION_SUPPORT_FLAG;

typedef 
enum _VDS_HWPROVIDER_TYPE
    {	VDS_HWT_UNKNOWN	= 0,
	VDS_HWT_PCI_RAID	= 1,
	VDS_HWT_FIBRE_CHANNEL	= 2,
	VDS_HWT_ISCSI	= 3
    } 	VDS_HWPROVIDER_TYPE;

typedef 
enum _VDS_ISCSI_LOGIN_TYPE
    {	VDS_ILT_MANUAL	= 0,
	VDS_ILT_PERSISTENT	= 1,
	VDS_ILT_BOOT	= 2
    } 	VDS_ISCSI_LOGIN_TYPE;

typedef 
enum _VDS_ISCSI_AUTH_TYPE
    {	VDS_IAT_NONE	= 0,
	VDS_IAT_CHAP	= 1,
	VDS_IAT_MUTUAL_CHAP	= 2
    } 	VDS_ISCSI_AUTH_TYPE;

typedef 
enum _VDS_ISCSI_IPSEC_FLAG
    {	VDS_IIF_VALID	= 0x1,
	VDS_IIF_IKE	= 0x2,
	VDS_IIF_MAIN_MODE	= 0x4,
	VDS_IIF_AGGRESSIVE_MODE	= 0x8,
	VDS_IIF_PFS_ENABLE	= 0x10,
	VDS_IIF_TRANSPORT_MODE_PREFERRED	= 0x20,
	VDS_IIF_TUNNEL_MODE_PREFERRED	= 0x40
    } 	VDS_ISCSI_IPSEC_FLAG;

typedef 
enum _VDS_ISCSI_LOGIN_FLAG
    {	VDS_ILF_REQUIRE_IPSEC	= 0x1,
	VDS_ILF_MULTIPATH_ENABLED	= 0x2
    } 	VDS_ISCSI_LOGIN_FLAG;

typedef struct _VDS_PATH_ID
    {
    ULONGLONG ullSourceId;
    ULONGLONG ullPathId;
    } 	VDS_PATH_ID;

typedef struct _VDS_WWN
    {
    UCHAR rguchWwn[ 8 ];
    } 	VDS_WWN;

typedef struct _VDS_IPADDRESS
    {
    VDS_IPADDRESS_TYPE type;
    ULONG ipv4Address;
    UCHAR ipv6Address[ 16 ];
    ULONG ulIpv6FlowInfo;
    ULONG ulIpv6ScopeId;
    WCHAR wszTextAddress[ 257 ];
    ULONG ulPort;
    } 	VDS_IPADDRESS;

typedef struct _VDS_ISCSI_IPSEC_KEY
    {
    UCHAR *pKey;
    ULONG ulKeySize;
    } 	VDS_ISCSI_IPSEC_KEY;

typedef struct _VDS_ISCSI_SHARED_SECRET
    {
    UCHAR *pSharedSecret;
    ULONG ulSharedSecretSize;
    } 	VDS_ISCSI_SHARED_SECRET;

typedef struct _VDS_HBAPORT_PROP
    {
    VDS_OBJECT_ID id;
    VDS_WWN wwnNode;
    VDS_WWN wwnPort;
    VDS_HBAPORT_TYPE type;
    VDS_HBAPORT_STATUS status;
    ULONG ulPortSpeed;
    ULONG ulSupportedPortSpeed;
    } 	VDS_HBAPORT_PROP;

typedef struct _VDS_ISCSI_INITIATOR_ADAPTER_PROP
    {
    VDS_OBJECT_ID id;
    LPWSTR pwszName;
    } 	VDS_ISCSI_INITIATOR_ADAPTER_PROP;

typedef struct _VDS_ISCSI_INITIATOR_PORTAL_PROP
    {
    VDS_OBJECT_ID id;
    VDS_IPADDRESS address;
    ULONG ulPortIndex;
    } 	VDS_ISCSI_INITIATOR_PORTAL_PROP;

typedef struct _VDS_PROVIDER_PROP
    {
    VDS_OBJECT_ID id;
    LPWSTR pwszName;
    GUID guidVersionId;
    LPWSTR pwszVersion;
    VDS_PROVIDER_TYPE type;
    ULONG ulFlags;
    ULONG ulStripeSizeFlags;
    SHORT sRebuildPriority;
    } 	VDS_PROVIDER_PROP;

typedef struct _VDS_PATH_INFO
    {
    VDS_PATH_ID pathId;
    VDS_HWPROVIDER_TYPE type;
    VDS_PATH_STATUS status;
    /* [switch_type] */ union 
        {
        VDS_OBJECT_ID controllerPortId;
        VDS_OBJECT_ID targetPortalId;
         /* Empty union arm */ 
        } 	;
    /* [switch_type] */ union 
        {
        VDS_OBJECT_ID hbaPortId;
        VDS_OBJECT_ID initiatorAdapterId;
         /* Empty union arm */ 
        } 	;
    /* [switch_type] */ union 
        {
        VDS_HBAPORT_PROP *pHbaPortProp;
        VDS_IPADDRESS *pInitiatorPortalIpAddr;
         /* Empty union arm */ 
        } 	;
    } 	VDS_PATH_INFO;

typedef struct _VDS_PATH_POLICY
    {
    VDS_PATH_ID pathId;
    BOOL bPrimaryPath;
    ULONG ulWeight;
    } 	VDS_PATH_POLICY;



extern RPC_IF_HANDLE __MIDL_itf_vds_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vds_0000_0000_v0_0_s_ifspec;

#ifndef __IEnumVdsObject_INTERFACE_DEFINED__
#define __IEnumVdsObject_INTERFACE_DEFINED__

/* interface IEnumVdsObject */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IEnumVdsObject;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("118610b7-8d94-4030-b5b8-500889788e4e")
    IEnumVdsObject : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG celt,
            /* [length_is][size_is][out] */ __RPC__out_ecount_part(celt, *pcFetched) IUnknown **ppObjectArray,
            /* [out] */ __RPC__out ULONG *pcFetched) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG celt) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ __RPC__deref_out_opt IEnumVdsObject **ppEnum) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEnumVdsObjectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumVdsObject * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumVdsObject * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumVdsObject * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumVdsObject * This,
            /* [in] */ ULONG celt,
            /* [length_is][size_is][out] */ __RPC__out_ecount_part(celt, *pcFetched) IUnknown **ppObjectArray,
            /* [out] */ __RPC__out ULONG *pcFetched);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumVdsObject * This,
            /* [in] */ ULONG celt);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumVdsObject * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumVdsObject * This,
            /* [out] */ __RPC__deref_out_opt IEnumVdsObject **ppEnum);
        
        END_INTERFACE
    } IEnumVdsObjectVtbl;

    interface IEnumVdsObject
    {
        CONST_VTBL struct IEnumVdsObjectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumVdsObject_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumVdsObject_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumVdsObject_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumVdsObject_Next(This,celt,ppObjectArray,pcFetched)	\
    ( (This)->lpVtbl -> Next(This,celt,ppObjectArray,pcFetched) ) 

#define IEnumVdsObject_Skip(This,celt)	\
    ( (This)->lpVtbl -> Skip(This,celt) ) 

#define IEnumVdsObject_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumVdsObject_Clone(This,ppEnum)	\
    ( (This)->lpVtbl -> Clone(This,ppEnum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumVdsObject_INTERFACE_DEFINED__ */


#ifndef __IVdsAsync_INTERFACE_DEFINED__
#define __IVdsAsync_INTERFACE_DEFINED__

/* interface IVdsAsync */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IVdsAsync;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("d5d23b6d-5a55-4492-9889-397a3c2d2dbc")
    IVdsAsync : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Cancel( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Wait( 
            /* [out] */ __RPC__out HRESULT *pHrResult,
            /* [out] */ __RPC__out VDS_ASYNC_OUTPUT *pAsyncOut) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE QueryStatus( 
            /* [out] */ __RPC__out HRESULT *pHrResult,
            /* [out] */ __RPC__out ULONG *pulPercentCompleted) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IVdsAsyncVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVdsAsync * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVdsAsync * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVdsAsync * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Cancel )( 
            IVdsAsync * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Wait )( 
            IVdsAsync * This,
            /* [out] */ __RPC__out HRESULT *pHrResult,
            /* [out] */ __RPC__out VDS_ASYNC_OUTPUT *pAsyncOut);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *QueryStatus )( 
            IVdsAsync * This,
            /* [out] */ __RPC__out HRESULT *pHrResult,
            /* [out] */ __RPC__out ULONG *pulPercentCompleted);
        
        END_INTERFACE
    } IVdsAsyncVtbl;

    interface IVdsAsync
    {
        CONST_VTBL struct IVdsAsyncVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVdsAsync_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVdsAsync_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVdsAsync_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVdsAsync_Cancel(This)	\
    ( (This)->lpVtbl -> Cancel(This) ) 

#define IVdsAsync_Wait(This,pHrResult,pAsyncOut)	\
    ( (This)->lpVtbl -> Wait(This,pHrResult,pAsyncOut) ) 

#define IVdsAsync_QueryStatus(This,pHrResult,pulPercentCompleted)	\
    ( (This)->lpVtbl -> QueryStatus(This,pHrResult,pulPercentCompleted) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVdsAsync_INTERFACE_DEFINED__ */


#ifndef __IVdsAdviseSink_INTERFACE_DEFINED__
#define __IVdsAdviseSink_INTERFACE_DEFINED__

/* interface IVdsAdviseSink */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IVdsAdviseSink;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8326cd1d-cf59-4936-b786-5efc08798e25")
    IVdsAdviseSink : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnNotify( 
            /* [range][in] */ LONG lNumberOfNotifications,
            /* [size_is][in] */ __RPC__in_ecount_full(lNumberOfNotifications) VDS_NOTIFICATION *pNotificationArray) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IVdsAdviseSinkVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVdsAdviseSink * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVdsAdviseSink * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVdsAdviseSink * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnNotify )( 
            IVdsAdviseSink * This,
            /* [range][in] */ LONG lNumberOfNotifications,
            /* [size_is][in] */ __RPC__in_ecount_full(lNumberOfNotifications) VDS_NOTIFICATION *pNotificationArray);
        
        END_INTERFACE
    } IVdsAdviseSinkVtbl;

    interface IVdsAdviseSink
    {
        CONST_VTBL struct IVdsAdviseSinkVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVdsAdviseSink_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVdsAdviseSink_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVdsAdviseSink_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVdsAdviseSink_OnNotify(This,lNumberOfNotifications,pNotificationArray)	\
    ( (This)->lpVtbl -> OnNotify(This,lNumberOfNotifications,pNotificationArray) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVdsAdviseSink_INTERFACE_DEFINED__ */


#ifndef __IVdsProvider_INTERFACE_DEFINED__
#define __IVdsProvider_INTERFACE_DEFINED__

/* interface IVdsProvider */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IVdsProvider;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("10c5e575-7984-4e81-a56b-431f5f92ae42")
    IVdsProvider : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetProperties( 
            /* [out] */ __RPC__out VDS_PROVIDER_PROP *pProviderProp) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IVdsProviderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVdsProvider * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVdsProvider * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVdsProvider * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetProperties )( 
            IVdsProvider * This,
            /* [out] */ __RPC__out VDS_PROVIDER_PROP *pProviderProp);
        
        END_INTERFACE
    } IVdsProviderVtbl;

    interface IVdsProvider
    {
        CONST_VTBL struct IVdsProviderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVdsProvider_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVdsProvider_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVdsProvider_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVdsProvider_GetProperties(This,pProviderProp)	\
    ( (This)->lpVtbl -> GetProperties(This,pProviderProp) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVdsProvider_INTERFACE_DEFINED__ */


#ifndef __IVdsProviderSupport_INTERFACE_DEFINED__
#define __IVdsProviderSupport_INTERFACE_DEFINED__

/* interface IVdsProviderSupport */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IVdsProviderSupport;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1732be13-e8f9-4a03-bfbc-5f616aa66ce1")
    IVdsProviderSupport : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetVersionSupport( 
            /* [out] */ __RPC__out ULONG *ulVersionSupport) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IVdsProviderSupportVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVdsProviderSupport * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVdsProviderSupport * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVdsProviderSupport * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetVersionSupport )( 
            IVdsProviderSupport * This,
            /* [out] */ __RPC__out ULONG *ulVersionSupport);
        
        END_INTERFACE
    } IVdsProviderSupportVtbl;

    interface IVdsProviderSupport
    {
        CONST_VTBL struct IVdsProviderSupportVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVdsProviderSupport_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVdsProviderSupport_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVdsProviderSupport_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVdsProviderSupport_GetVersionSupport(This,ulVersionSupport)	\
    ( (This)->lpVtbl -> GetVersionSupport(This,ulVersionSupport) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVdsProviderSupport_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_vds_0000_0005 */
/* [local] */ 













typedef 
enum _VDS_PACK_STATUS
    {	VDS_PS_UNKNOWN	= 0,
	VDS_PS_ONLINE	= 1,
	VDS_PS_OFFLINE	= 4
    } 	VDS_PACK_STATUS;

typedef 
enum _VDS_PACK_FLAG
    {	VDS_PKF_FOREIGN	= 0x1,
	VDS_PKF_NOQUORUM	= 0x2,
	VDS_PKF_POLICY	= 0x4,
	VDS_PKF_CORRUPTED	= 0x8,
	VDS_PKF_ONLINE_ERROR	= 0x10
    } 	VDS_PACK_FLAG;

typedef 
enum _VDS_DISK_STATUS
    {	VDS_DS_UNKNOWN	= 0,
	VDS_DS_ONLINE	= 1,
	VDS_DS_NOT_READY	= 2,
	VDS_DS_NO_MEDIA	= 3,
	VDS_DS_FAILED	= 5,
	VDS_DS_MISSING	= 6
    } 	VDS_DISK_STATUS;

typedef 
enum _VDS_PARTITION_STYLE
    {	VDS_PST_UNKNOWN	= 0,
	VDS_PST_MBR	= 1,
	VDS_PST_GPT	= 2
    } 	VDS_PARTITION_STYLE;

typedef 
enum _VDS_DISK_FLAG
    {	VDS_DF_AUDIO_CD	= 0x1,
	VDS_DF_HOTSPARE	= 0x2,
	VDS_DF_RESERVE_CAPABLE	= 0x4,
	VDS_DF_MASKED	= 0x8,
	VDS_DF_STYLE_CONVERTIBLE	= 0x10,
	VDS_DF_CLUSTERED	= 0x20
    } 	VDS_DISK_FLAG;

typedef 
enum _VDS_PARTITION_FLAG
    {	VDS_PTF_SYSTEM	= 0x1
    } 	VDS_PARTITION_FLAG;

typedef 
enum _VDS_LUN_RESERVE_MODE
    {	VDS_LRM_NONE	= 0,
	VDS_LRM_EXCLUSIVE_RW	= 1,
	VDS_LRM_EXCLUSIVE_RO	= 2,
	VDS_LRM_SHARED_RO	= 3,
	VDS_LRM_SHARED_RW	= 4
    } 	VDS_LUN_RESERVE_MODE;

typedef 
enum _VDS_VOLUME_STATUS
    {	VDS_VS_UNKNOWN	= 0,
	VDS_VS_ONLINE	= 1,
	VDS_VS_NO_MEDIA	= 3,
	VDS_VS_FAILED	= 5
    } 	VDS_VOLUME_STATUS;

typedef 
enum _VDS_VOLUME_TYPE
    {	VDS_VT_UNKNOWN	= 0,
	VDS_VT_SIMPLE	= 10,
	VDS_VT_SPAN	= 11,
	VDS_VT_STRIPE	= 12,
	VDS_VT_MIRROR	= 13,
	VDS_VT_PARITY	= 14
    } 	VDS_VOLUME_TYPE;

typedef 
enum _VDS_VOLUME_FLAG
    {	VDS_VF_SYSTEM_VOLUME	= 0x1,
	VDS_VF_BOOT_VOLUME	= 0x2,
	VDS_VF_ACTIVE	= 0x4,
	VDS_VF_READONLY	= 0x8,
	VDS_VF_HIDDEN	= 0x10,
	VDS_VF_CAN_EXTEND	= 0x20,
	VDS_VF_CAN_SHRINK	= 0x40,
	VDS_VF_PAGEFILE	= 0x80,
	VDS_VF_HIBERNATION	= 0x100,
	VDS_VF_CRASHDUMP	= 0x200,
	VDS_VF_INSTALLABLE	= 0x400,
	VDS_VF_LBN_REMAP_ENABLED	= 0x800,
	VDS_VF_FORMATTING	= 0x1000,
	VDS_VF_NOT_FORMATTABLE	= 0x2000,
	VDS_VF_NTFS_NOT_SUPPORTED	= 0x4000,
	VDS_VF_FAT32_NOT_SUPPORTED	= 0x8000,
	VDS_VF_FAT_NOT_SUPPORTED	= 0x10000,
	VDS_VF_NO_DEFAULT_DRIVE_LETTER	= 0x20000,
	VDS_VF_PERMANENTLY_DISMOUNTED	= 0x40000,
	VDS_VF_PERMANENT_DISMOUNT_SUPPORTED	= 0x80000,
	VDS_VF_SHADOW_COPY	= 0x100000,
	VDS_VF_FVE_ENABLED	= 0x200000,
	VDS_VF_DIRTY	= 0x400000
    } 	VDS_VOLUME_FLAG;

typedef 
enum _VDS_VOLUME_PLEX_TYPE
    {	VDS_VPT_UNKNOWN	= 0,
	VDS_VPT_SIMPLE	= VDS_VT_SIMPLE,
	VDS_VPT_SPAN	= VDS_VT_SPAN,
	VDS_VPT_STRIPE	= VDS_VT_STRIPE,
	VDS_VPT_PARITY	= VDS_VT_PARITY
    } 	VDS_VOLUME_PLEX_TYPE;

typedef 
enum _VDS_VOLUME_PLEX_STATUS
    {	VDS_VPS_UNKNOWN	= 0,
	VDS_VPS_ONLINE	= 1,
	VDS_VPS_NO_MEDIA	= 3,
	VDS_VPS_FAILED	= 5
    } 	VDS_VOLUME_PLEX_STATUS;

typedef 
enum _VDS_DISK_EXTENT_TYPE
    {	VDS_DET_UNKNOWN	= 0,
	VDS_DET_FREE	= 1,
	VDS_DET_DATA	= 2,
	VDS_DET_OEM	= 3,
	VDS_DET_ESP	= 4,
	VDS_DET_MSR	= 5,
	VDS_DET_LDM	= 6,
	VDS_DET_UNUSABLE	= 0x7fff
    } 	VDS_DISK_EXTENT_TYPE;

typedef struct _VDS_PACK_PROP
    {
    VDS_OBJECT_ID id;
    LPWSTR pwszName;
    VDS_PACK_STATUS status;
    ULONG ulFlags;
    } 	VDS_PACK_PROP;

typedef struct _VDS_PACK_PROP *PVDS_PACK_PROP;

typedef struct _VDS_DISK_PROP
    {
    VDS_OBJECT_ID id;
    VDS_DISK_STATUS status;
    VDS_LUN_RESERVE_MODE ReserveMode;
    VDS_HEALTH health;
    DWORD dwDeviceType;
    DWORD dwMediaType;
    ULONGLONG ullSize;
    ULONG ulBytesPerSector;
    ULONG ulSectorsPerTrack;
    ULONG ulTracksPerCylinder;
    ULONG ulFlags;
    VDS_STORAGE_BUS_TYPE BusType;
    VDS_PARTITION_STYLE PartitionStyle;
    /* [switch_type] */ union 
        {
        DWORD dwSignature;
        GUID DiskGuid;
         /* Empty union arm */ 
        } 	;
    LPWSTR pwszDiskAddress;
    LPWSTR pwszName;
    LPWSTR pwszFriendlyName;
    LPWSTR pwszAdaptorName;
    LPWSTR pwszDevicePath;
    } 	VDS_DISK_PROP;

typedef struct _VDS_DISK_PROP *PVDS_DISK_PROP;

typedef struct _VDS_VOLUME_PROP
    {
    VDS_OBJECT_ID id;
    VDS_VOLUME_TYPE type;
    VDS_VOLUME_STATUS status;
    VDS_HEALTH health;
    VDS_TRANSITION_STATE TransitionState;
    ULONGLONG ullSize;
    ULONG ulFlags;
    VDS_FILE_SYSTEM_TYPE RecommendedFileSystemType;
    LPWSTR pwszName;
    } 	VDS_VOLUME_PROP;

typedef struct _VDS_VOLUME_PROP *PVDS_VOLUME_PROP;

typedef struct _VDS_VOLUME_PLEX_PROP
    {
    VDS_OBJECT_ID id;
    VDS_VOLUME_PLEX_TYPE type;
    VDS_VOLUME_PLEX_STATUS status;
    VDS_HEALTH health;
    VDS_TRANSITION_STATE TransitionState;
    ULONGLONG ullSize;
    ULONG ulStripeSize;
    ULONG ulNumberOfMembers;
    } 	VDS_VOLUME_PLEX_PROP;

typedef struct _VDS_VOLUME_PLEX_PROP *PVDS_VOLUME_PLEX_PROP;

typedef struct _VDS_DISK_EXTENT
    {
    VDS_OBJECT_ID diskId;
    VDS_DISK_EXTENT_TYPE type;
    ULONGLONG ullOffset;
    ULONGLONG ullSize;
    VDS_OBJECT_ID volumeId;
    VDS_OBJECT_ID plexId;
    ULONG memberIdx;
    } 	VDS_DISK_EXTENT;

typedef struct _VDS_DISK_EXTENT *PVDS_DISK_EXTENT;

typedef struct _VDS_INPUT_DISK
    {
    VDS_OBJECT_ID diskId;
    ULONGLONG ullSize;
    VDS_OBJECT_ID plexId;
    ULONG memberIdx;
    } 	VDS_INPUT_DISK;

#define GPT_PARTITION_NAME_LENGTH    36
typedef struct _VDS_PARTITION_INFO_GPT
    {
    GUID partitionType;
    GUID partitionId;
    ULONGLONG attributes;
    WCHAR name[ 36 ];
    } 	VDS_PARTITION_INFO_GPT;

typedef struct _VDS_PARTITION_INFO_MBR
    {
    BYTE partitionType;
    BOOLEAN bootIndicator;
    BOOLEAN recognizedPartition;
    DWORD hiddenSectors;
    } 	VDS_PARTITION_INFO_MBR;

typedef struct _VDS_PARTITION_PROP
    {
    VDS_PARTITION_STYLE PartitionStyle;
    ULONG ulFlags;
    ULONG ulPartitionNumber;
    ULONGLONG ullOffset;
    ULONGLONG ullSize;
    /* [switch_type] */ union 
        {
        VDS_PARTITION_INFO_MBR Mbr;
        VDS_PARTITION_INFO_GPT Gpt;
         /* Empty union arm */ 
        } 	;
    } 	VDS_PARTITION_PROP;

typedef 
enum tag_VDS_PARTITION_STYLE
    {	VDS_PARTITION_STYLE_MBR	= 0,
	VDS_PARTITION_STYLE_GPT	= ( VDS_PARTITION_STYLE_MBR + 1 ) ,
	VDS_PARTITION_STYLE_RAW	= ( VDS_PARTITION_STYLE_GPT + 1 ) 
    } 	__VDS_PARTITION_STYLE;

typedef struct _VDS_PARTITION_INFORMATION_EX
    {
    __VDS_PARTITION_STYLE dwPartitionStyle;
    ULONGLONG ullStartingOffset;
    ULONGLONG ullPartitionLength;
    DWORD dwPartitionNumber;
    BOOLEAN bRewritePartition;
    /* [switch_type] */ union 
        {
        VDS_PARTITION_INFO_MBR Mbr;
        VDS_PARTITION_INFO_GPT Gpt;
        } 	;
    } 	VDS_PARTITION_INFORMATION_EX;

typedef struct _CREATE_PARTITION_PARAMETERS
    {
    VDS_PARTITION_STYLE style;
    /* [switch_type] */ union 
        {
        struct 
            {
            BYTE partitionType;
            BOOLEAN bootIndicator;
            } 	MbrPartInfo;
        struct 
            {
            GUID partitionType;
            GUID partitionId;
            ULONGLONG attributes;
            WCHAR name[ 36 ];
            } 	GptPartInfo;
         /* Empty union arm */ 
        } 	;
    } 	CREATE_PARTITION_PARAMETERS;

typedef struct _CHANGE_ATTRIBUTES_PARAMETERS
    {
    VDS_PARTITION_STYLE style;
    /* [switch_type] */ union 
        {
        struct 
            {
            BOOLEAN bootIndicator;
            } 	MbrPartInfo;
        struct 
            {
            ULONGLONG attributes;
            } 	GptPartInfo;
         /* Empty union arm */ 
        } 	;
    } 	CHANGE_ATTRIBUTES_PARAMETERS;

typedef struct _CHANGE_PARTITION_TYPE_PARAMETERS
    {
    VDS_PARTITION_STYLE style;
    /* [switch_type] */ union 
        {
        struct 
            {
            BYTE partitionType;
            } 	MbrPartInfo;
        struct 
            {
            GUID partitionType;
            } 	GptPartInfo;
         /* Empty union arm */ 
        } 	;
    } 	CHANGE_PARTITION_TYPE_PARAMETERS;



extern RPC_IF_HANDLE __MIDL_itf_vds_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vds_0000_0005_v0_0_s_ifspec;

#ifndef __IVdsSwProvider_INTERFACE_DEFINED__
#define __IVdsSwProvider_INTERFACE_DEFINED__

/* interface IVdsSwProvider */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IVdsSwProvider;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9aa58360-ce33-4f92-b658-ed24b14425b8")
    IVdsSwProvider : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE QueryPacks( 
            /* [out] */ __RPC__deref_out_opt IEnumVdsObject **ppEnum) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreatePack( 
            /* [out] */ __RPC__deref_out_opt IVdsPack **ppPack) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IVdsSwProviderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVdsSwProvider * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVdsSwProvider * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVdsSwProvider * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *QueryPacks )( 
            IVdsSwProvider * This,
            /* [out] */ __RPC__deref_out_opt IEnumVdsObject **ppEnum);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreatePack )( 
            IVdsSwProvider * This,
            /* [out] */ __RPC__deref_out_opt IVdsPack **ppPack);
        
        END_INTERFACE
    } IVdsSwProviderVtbl;

    interface IVdsSwProvider
    {
        CONST_VTBL struct IVdsSwProviderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVdsSwProvider_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVdsSwProvider_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVdsSwProvider_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVdsSwProvider_QueryPacks(This,ppEnum)	\
    ( (This)->lpVtbl -> QueryPacks(This,ppEnum) ) 

#define IVdsSwProvider_CreatePack(This,ppPack)	\
    ( (This)->lpVtbl -> CreatePack(This,ppPack) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVdsSwProvider_INTERFACE_DEFINED__ */


#ifndef __IVdsPack_INTERFACE_DEFINED__
#define __IVdsPack_INTERFACE_DEFINED__

/* interface IVdsPack */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IVdsPack;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3b69d7f5-9d94-4648-91ca-79939ba263bf")
    IVdsPack : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetProperties( 
            /* [out] */ __RPC__out VDS_PACK_PROP *pPackProp) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetProvider( 
            /* [out] */ __RPC__deref_out_opt IVdsProvider **ppProvider) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE QueryVolumes( 
            /* [out] */ __RPC__deref_out_opt IEnumVdsObject **ppEnum) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE QueryDisks( 
            /* [out] */ __RPC__deref_out_opt IEnumVdsObject **ppEnum) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateVolume( 
            /* [in] */ VDS_VOLUME_TYPE type,
            /* [size_is][in] */ __RPC__in_ecount_full(lNumberOfDisks) VDS_INPUT_DISK *pInputDiskArray,
            /* [in] */ LONG lNumberOfDisks,
            /* [in] */ ULONG ulStripeSize,
            /* [out] */ __RPC__deref_out_opt IVdsAsync **ppAsync) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddDisk( 
            /* [in] */ VDS_OBJECT_ID DiskId,
            /* [in] */ VDS_PARTITION_STYLE PartitionStyle,
            /* [in] */ BOOL bAsHotSpare) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MigrateDisks( 
            /* [size_is][in] */ __RPC__in_ecount_full(lNumberOfDisks) VDS_OBJECT_ID *pDiskArray,
            /* [in] */ LONG lNumberOfDisks,
            /* [in] */ VDS_OBJECT_ID TargetPack,
            /* [in] */ BOOL bForce,
            /* [in] */ BOOL bQueryOnly,
            /* [size_is][out] */ __RPC__out_ecount_full(lNumberOfDisks) HRESULT *pResults,
            /* [out] */ __RPC__out BOOL *pbRebootNeeded) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ReplaceDisk( 
            /* [in] */ VDS_OBJECT_ID OldDiskId,
            /* [in] */ VDS_OBJECT_ID NewDiskId,
            /* [out] */ __RPC__deref_out_opt IVdsAsync **ppAsync) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE RemoveMissingDisk( 
            /* [in] */ VDS_OBJECT_ID DiskId) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Recover( 
            /* [out] */ __RPC__deref_out_opt IVdsAsync **ppAsync) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IVdsPackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVdsPack * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVdsPack * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVdsPack * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetProperties )( 
            IVdsPack * This,
            /* [out] */ __RPC__out VDS_PACK_PROP *pPackProp);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetProvider )( 
            IVdsPack * This,
            /* [out] */ __RPC__deref_out_opt IVdsProvider **ppProvider);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *QueryVolumes )( 
            IVdsPack * This,
            /* [out] */ __RPC__deref_out_opt IEnumVdsObject **ppEnum);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *QueryDisks )( 
            IVdsPack * This,
            /* [out] */ __RPC__deref_out_opt IEnumVdsObject **ppEnum);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateVolume )( 
            IVdsPack * This,
            /* [in] */ VDS_VOLUME_TYPE type,
            /* [size_is][in] */ __RPC__in_ecount_full(lNumberOfDisks) VDS_INPUT_DISK *pInputDiskArray,
            /* [in] */ LONG lNumberOfDisks,
            /* [in] */ ULONG ulStripeSize,
            /* [out] */ __RPC__deref_out_opt IVdsAsync **ppAsync);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddDisk )( 
            IVdsPack * This,
            /* [in] */ VDS_OBJECT_ID DiskId,
            /* [in] */ VDS_PARTITION_STYLE PartitionStyle,
            /* [in] */ BOOL bAsHotSpare);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *MigrateDisks )( 
            IVdsPack * This,
            /* [size_is][in] */ __RPC__in_ecount_full(lNumberOfDisks) VDS_OBJECT_ID *pDiskArray,
            /* [in] */ LONG lNumberOfDisks,
            /* [in] */ VDS_OBJECT_ID TargetPack,
            /* [in] */ BOOL bForce,
            /* [in] */ BOOL bQueryOnly,
            /* [size_is][out] */ __RPC__out_ecount_full(lNumberOfDisks) HRESULT *pResults,
            /* [out] */ __RPC__out BOOL *pbRebootNeeded);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ReplaceDisk )( 
            IVdsPack * This,
            /* [in] */ VDS_OBJECT_ID OldDiskId,
            /* [in] */ VDS_OBJECT_ID NewDiskId,
            /* [out] */ __RPC__deref_out_opt IVdsAsync **ppAsync);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *RemoveMissingDisk )( 
            IVdsPack * This,
            /* [in] */ VDS_OBJECT_ID DiskId);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Recover )( 
            IVdsPack * This,
            /* [out] */ __RPC__deref_out_opt IVdsAsync **ppAsync);
        
        END_INTERFACE
    } IVdsPackVtbl;

    interface IVdsPack
    {
        CONST_VTBL struct IVdsPackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVdsPack_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVdsPack_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVdsPack_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVdsPack_GetProperties(This,pPackProp)	\
    ( (This)->lpVtbl -> GetProperties(This,pPackProp) ) 

#define IVdsPack_GetProvider(This,ppProvider)	\
    ( (This)->lpVtbl -> GetProvider(This,ppProvider) ) 

#define IVdsPack_QueryVolumes(This,ppEnum)	\
    ( (This)->lpVtbl -> QueryVolumes(This,ppEnum) ) 

#define IVdsPack_QueryDisks(This,ppEnum)	\
    ( (This)->lpVtbl -> QueryDisks(This,ppEnum) ) 

#define IVdsPack_CreateVolume(This,type,pInputDiskArray,lNumberOfDisks,ulStripeSize,ppAsync)	\
    ( (This)->lpVtbl -> CreateVolume(This,type,pInputDiskArray,lNumberOfDisks,ulStripeSize,ppAsync) ) 

#define IVdsPack_AddDisk(This,DiskId,PartitionStyle,bAsHotSpare)	\
    ( (This)->lpVtbl -> AddDisk(This,DiskId,PartitionStyle,bAsHotSpare) ) 

#define IVdsPack_MigrateDisks(This,pDiskArray,lNumberOfDisks,TargetPack,bForce,bQueryOnly,pResults,pbRebootNeeded)	\
    ( (This)->lpVtbl -> MigrateDisks(This,pDiskArray,lNumberOfDisks,TargetPack,bForce,bQueryOnly,pResults,pbRebootNeeded) ) 

#define IVdsPack_ReplaceDisk(This,OldDiskId,NewDiskId,ppAsync)	\
    ( (This)->lpVtbl -> ReplaceDisk(This,OldDiskId,NewDiskId,ppAsync) ) 

#define IVdsPack_RemoveMissingDisk(This,DiskId)	\
    ( (This)->lpVtbl -> RemoveMissingDisk(This,DiskId) ) 

#define IVdsPack_Recover(This,ppAsync)	\
    ( (This)->lpVtbl -> Recover(This,ppAsync) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVdsPack_INTERFACE_DEFINED__ */


#ifndef __IVdsPack2_INTERFACE_DEFINED__
#define __IVdsPack2_INTERFACE_DEFINED__

/* interface IVdsPack2 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IVdsPack2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("13B50BFF-290A-47DD-8558-B7C58DB1A71A")
    IVdsPack2 : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateVolume2( 
            /* [in] */ VDS_VOLUME_TYPE type,
            /* [size_is][in] */ __RPC__in_ecount_full(lNumberOfDisks) VDS_INPUT_DISK *pInputDiskArray,
            /* [in] */ LONG lNumberOfDisks,
            /* [in] */ ULONG ulStripeSize,
            /* [in] */ ULONG ulAlign,
            /* [out] */ __RPC__deref_out_opt IVdsAsync **ppAsync) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IVdsPack2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVdsPack2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVdsPack2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVdsPack2 * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateVolume2 )( 
            IVdsPack2 * This,
            /* [in] */ VDS_VOLUME_TYPE type,
            /* [size_is][in] */ __RPC__in_ecount_full(lNumberOfDisks) VDS_INPUT_DISK *pInputDiskArray,
            /* [in] */ LONG lNumberOfDisks,
            /* [in] */ ULONG ulStripeSize,
            /* [in] */ ULONG ulAlign,
            /* [out] */ __RPC__deref_out_opt IVdsAsync **ppAsync);
        
        END_INTERFACE
    } IVdsPack2Vtbl;

    interface IVdsPack2
    {
        CONST_VTBL struct IVdsPack2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVdsPack2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVdsPack2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVdsPack2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVdsPack2_CreateVolume2(This,type,pInputDiskArray,lNumberOfDisks,ulStripeSize,ulAlign,ppAsync)	\
    ( (This)->lpVtbl -> CreateVolume2(This,type,pInputDiskArray,lNumberOfDisks,ulStripeSize,ulAlign,ppAsync) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVdsPack2_INTERFACE_DEFINED__ */


#ifndef __IVdsDisk_INTERFACE_DEFINED__
#define __IVdsDisk_INTERFACE_DEFINED__

/* interface IVdsDisk */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IVdsDisk;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("07e5c822-f00c-47a1-8fce-b244da56fd06")
    IVdsDisk : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetProperties( 
            /* [out] */ __RPC__out VDS_DISK_PROP *pDiskProperties) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetPack( 
            /* [out] */ __RPC__deref_out_opt IVdsPack **ppPack) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetIdentificationData( 
            /* [out] */ __RPC__out VDS_LUN_INFORMATION *pLunInfo) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE QueryExtents( 
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*plNumberOfExtents) VDS_DISK_EXTENT **ppExtentArray,
            /* [out] */ __RPC__out LONG *plNumberOfExtents) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ConvertStyle( 
            /* [in] */ VDS_PARTITION_STYLE NewStyle) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetFlags( 
            /* [in] */ ULONG ulFlags) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ClearFlags( 
            /* [in] */ ULONG ulFlags) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IVdsDiskVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVdsDisk * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVdsDisk * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVdsDisk * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetProperties )( 
            IVdsDisk * This,
            /* [out] */ __RPC__out VDS_DISK_PROP *pDiskProperties);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPack )( 
            IVdsDisk * This,
            /* [out] */ __RPC__deref_out_opt IVdsPack **ppPack);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetIdentificationData )( 
            IVdsDisk * This,
            /* [out] */ __RPC__out VDS_LUN_INFORMATION *pLunInfo);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *QueryExtents )( 
            IVdsDisk * This,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*plNumberOfExtents) VDS_DISK_EXTENT **ppExtentArray,
            /* [out] */ __RPC__out LONG *plNumberOfExtents);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ConvertStyle )( 
            IVdsDisk * This,
            /* [in] */ VDS_PARTITION_STYLE NewStyle);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetFlags )( 
            IVdsDisk * This,
            /* [in] */ ULONG ulFlags);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ClearFlags )( 
            IVdsDisk * This,
            /* [in] */ ULONG ulFlags);
        
        END_INTERFACE
    } IVdsDiskVtbl;

    interface IVdsDisk
    {
        CONST_VTBL struct IVdsDiskVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVdsDisk_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVdsDisk_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVdsDisk_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVdsDisk_GetProperties(This,pDiskProperties)	\
    ( (This)->lpVtbl -> GetProperties(This,pDiskProperties) ) 

#define IVdsDisk_GetPack(This,ppPack)	\
    ( (This)->lpVtbl -> GetPack(This,ppPack) ) 

#define IVdsDisk_GetIdentificationData(This,pLunInfo)	\
    ( (This)->lpVtbl -> GetIdentificationData(This,pLunInfo) ) 

#define IVdsDisk_QueryExtents(This,ppExtentArray,plNumberOfExtents)	\
    ( (This)->lpVtbl -> QueryExtents(This,ppExtentArray,plNumberOfExtents) ) 

#define IVdsDisk_ConvertStyle(This,NewStyle)	\
    ( (This)->lpVtbl -> ConvertStyle(This,NewStyle) ) 

#define IVdsDisk_SetFlags(This,ulFlags)	\
    ( (This)->lpVtbl -> SetFlags(This,ulFlags) ) 

#define IVdsDisk_ClearFlags(This,ulFlags)	\
    ( (This)->lpVtbl -> ClearFlags(This,ulFlags) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVdsDisk_INTERFACE_DEFINED__ */


#ifndef __IVdsDisk2_INTERFACE_DEFINED__
#define __IVdsDisk2_INTERFACE_DEFINED__

/* interface IVdsDisk2 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IVdsDisk2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("40F73C8B-687D-4a13-8D96-3D7F2E683936")
    IVdsDisk2 : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetSANMode( 
            /* [in] */ BOOL bEnable) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IVdsDisk2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVdsDisk2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVdsDisk2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVdsDisk2 * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetSANMode )( 
            IVdsDisk2 * This,
            /* [in] */ BOOL bEnable);
        
        END_INTERFACE
    } IVdsDisk2Vtbl;

    interface IVdsDisk2
    {
        CONST_VTBL struct IVdsDisk2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVdsDisk2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVdsDisk2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVdsDisk2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVdsDisk2_SetSANMode(This,bEnable)	\
    ( (This)->lpVtbl -> SetSANMode(This,bEnable) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVdsDisk2_INTERFACE_DEFINED__ */


#ifndef __IVdsAdvancedDisk_INTERFACE_DEFINED__
#define __IVdsAdvancedDisk_INTERFACE_DEFINED__

/* interface IVdsAdvancedDisk */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IVdsAdvancedDisk;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6e6f6b40-977c-4069-bddd-ac710059f8c0")
    IVdsAdvancedDisk : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetPartitionProperties( 
            /* [in] */ ULONGLONG ullOffset,
            /* [out] */ __RPC__out VDS_PARTITION_PROP *pPartitionProp) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE QueryPartitions( 
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*plNumberOfPartitions) VDS_PARTITION_PROP **ppPartitionPropArray,
            /* [out] */ __RPC__out LONG *plNumberOfPartitions) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreatePartition( 
            /* [in] */ ULONGLONG ullOffset,
            /* [in] */ ULONGLONG ullSize,
            /* [in] */ __RPC__in CREATE_PARTITION_PARAMETERS *para,
            /* [out] */ __RPC__deref_out_opt IVdsAsync **ppAsync) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeletePartition( 
            /* [in] */ ULONGLONG ullOffset,
            /* [in] */ BOOL bForce,
            /* [in] */ BOOL bForceProtected) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ChangeAttributes( 
            /* [in] */ ULONGLONG ullOffset,
            /* [in] */ __RPC__in CHANGE_ATTRIBUTES_PARAMETERS *para) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AssignDriveLetter( 
            /* [in] */ ULONGLONG ullOffset,
            /* [in] */ WCHAR wcLetter) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeleteDriveLetter( 
            /* [in] */ ULONGLONG ullOffset,
            /* [in] */ WCHAR wcLetter) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetDriveLetter( 
            /* [in] */ ULONGLONG ullOffset,
            /* [out] */ __RPC__out WCHAR *pwcLetter) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FormatPartition( 
            /* [in] */ ULONGLONG ullOffset,
            /* [in] */ VDS_FILE_SYSTEM_TYPE type,
            /* [string][in] */ __RPC__in LPWSTR pwszLabel,
            /* [in] */ DWORD dwUnitAllocationSize,
            /* [in] */ BOOL bForce,
            /* [in] */ BOOL bQuickFormat,
            /* [in] */ BOOL bEnableCompression,
            /* [out] */ __RPC__deref_out_opt IVdsAsync **ppAsync) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clean( 
            /* [in] */ BOOL bForce,
            /* [in] */ BOOL bForceOEM,
            /* [in] */ BOOL bFullClean,
            /* [out] */ __RPC__deref_out_opt IVdsAsync **ppAsync) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IVdsAdvancedDiskVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVdsAdvancedDisk * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVdsAdvancedDisk * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVdsAdvancedDisk * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPartitionProperties )( 
            IVdsAdvancedDisk * This,
            /* [in] */ ULONGLONG ullOffset,
            /* [out] */ __RPC__out VDS_PARTITION_PROP *pPartitionProp);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *QueryPartitions )( 
            IVdsAdvancedDisk * This,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*plNumberOfPartitions) VDS_PARTITION_PROP **ppPartitionPropArray,
            /* [out] */ __RPC__out LONG *plNumberOfPartitions);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreatePartition )( 
            IVdsAdvancedDisk * This,
            /* [in] */ ULONGLONG ullOffset,
            /* [in] */ ULONGLONG ullSize,
            /* [in] */ __RPC__in CREATE_PARTITION_PARAMETERS *para,
            /* [out] */ __RPC__deref_out_opt IVdsAsync **ppAsync);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DeletePartition )( 
            IVdsAdvancedDisk * This,
            /* [in] */ ULONGLONG ullOffset,
            /* [in] */ BOOL bForce,
            /* [in] */ BOOL bForceProtected);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ChangeAttributes )( 
            IVdsAdvancedDisk * This,
            /* [in] */ ULONGLONG ullOffset,
            /* [in] */ __RPC__in CHANGE_ATTRIBUTES_PARAMETERS *para);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AssignDriveLetter )( 
            IVdsAdvancedDisk * This,
            /* [in] */ ULONGLONG ullOffset,
            /* [in] */ WCHAR wcLetter);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DeleteDriveLetter )( 
            IVdsAdvancedDisk * This,
            /* [in] */ ULONGLONG ullOffset,
            /* [in] */ WCHAR wcLetter);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDriveLetter )( 
            IVdsAdvancedDisk * This,
            /* [in] */ ULONGLONG ullOffset,
            /* [out] */ __RPC__out WCHAR *pwcLetter);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *FormatPartition )( 
            IVdsAdvancedDisk * This,
            /* [in] */ ULONGLONG ullOffset,
            /* [in] */ VDS_FILE_SYSTEM_TYPE type,
            /* [string][in] */ __RPC__in LPWSTR pwszLabel,
            /* [in] */ DWORD dwUnitAllocationSize,
            /* [in] */ BOOL bForce,
            /* [in] */ BOOL bQuickFormat,
            /* [in] */ BOOL bEnableCompression,
            /* [out] */ __RPC__deref_out_opt IVdsAsync **ppAsync);
        
        HRESULT ( STDMETHODCALLTYPE *Clean )( 
            IVdsAdvancedDisk * This,
            /* [in] */ BOOL bForce,
            /* [in] */ BOOL bForceOEM,
            /* [in] */ BOOL bFullClean,
            /* [out] */ __RPC__deref_out_opt IVdsAsync **ppAsync);
        
        END_INTERFACE
    } IVdsAdvancedDiskVtbl;

    interface IVdsAdvancedDisk
    {
        CONST_VTBL struct IVdsAdvancedDiskVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVdsAdvancedDisk_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVdsAdvancedDisk_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVdsAdvancedDisk_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVdsAdvancedDisk_GetPartitionProperties(This,ullOffset,pPartitionProp)	\
    ( (This)->lpVtbl -> GetPartitionProperties(This,ullOffset,pPartitionProp) ) 

#define IVdsAdvancedDisk_QueryPartitions(This,ppPartitionPropArray,plNumberOfPartitions)	\
    ( (This)->lpVtbl -> QueryPartitions(This,ppPartitionPropArray,plNumberOfPartitions) ) 

#define IVdsAdvancedDisk_CreatePartition(This,ullOffset,ullSize,para,ppAsync)	\
    ( (This)->lpVtbl -> CreatePartition(This,ullOffset,ullSize,para,ppAsync) ) 

#define IVdsAdvancedDisk_DeletePartition(This,ullOffset,bForce,bForceProtected)	\
    ( (This)->lpVtbl -> DeletePartition(This,ullOffset,bForce,bForceProtected) ) 

#define IVdsAdvancedDisk_ChangeAttributes(This,ullOffset,para)	\
    ( (This)->lpVtbl -> ChangeAttributes(This,ullOffset,para) ) 

#define IVdsAdvancedDisk_AssignDriveLetter(This,ullOffset,wcLetter)	\
    ( (This)->lpVtbl -> AssignDriveLetter(This,ullOffset,wcLetter) ) 

#define IVdsAdvancedDisk_DeleteDriveLetter(This,ullOffset,wcLetter)	\
    ( (This)->lpVtbl -> DeleteDriveLetter(This,ullOffset,wcLetter) ) 

#define IVdsAdvancedDisk_GetDriveLetter(This,ullOffset,pwcLetter)	\
    ( (This)->lpVtbl -> GetDriveLetter(This,ullOffset,pwcLetter) ) 

#define IVdsAdvancedDisk_FormatPartition(This,ullOffset,type,pwszLabel,dwUnitAllocationSize,bForce,bQuickFormat,bEnableCompression,ppAsync)	\
    ( (This)->lpVtbl -> FormatPartition(This,ullOffset,type,pwszLabel,dwUnitAllocationSize,bForce,bQuickFormat,bEnableCompression,ppAsync) ) 

#define IVdsAdvancedDisk_Clean(This,bForce,bForceOEM,bFullClean,ppAsync)	\
    ( (This)->lpVtbl -> Clean(This,bForce,bForceOEM,bFullClean,ppAsync) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVdsAdvancedDisk_INTERFACE_DEFINED__ */


#ifndef __IVdsAdvancedDisk2_INTERFACE_DEFINED__
#define __IVdsAdvancedDisk2_INTERFACE_DEFINED__

/* interface IVdsAdvancedDisk2 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IVdsAdvancedDisk2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9723f420-9355-42de-ab66-e31bb15beeac")
    IVdsAdvancedDisk2 : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ChangePartitionType( 
            /* [in] */ ULONGLONG ullOffset,
            /* [in] */ BOOL bForce,
            /* [in] */ __RPC__in CHANGE_PARTITION_TYPE_PARAMETERS *para) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IVdsAdvancedDisk2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVdsAdvancedDisk2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVdsAdvancedDisk2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVdsAdvancedDisk2 * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ChangePartitionType )( 
            IVdsAdvancedDisk2 * This,
            /* [in] */ ULONGLONG ullOffset,
            /* [in] */ BOOL bForce,
            /* [in] */ __RPC__in CHANGE_PARTITION_TYPE_PARAMETERS *para);
        
        END_INTERFACE
    } IVdsAdvancedDisk2Vtbl;

    interface IVdsAdvancedDisk2
    {
        CONST_VTBL struct IVdsAdvancedDisk2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVdsAdvancedDisk2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVdsAdvancedDisk2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVdsAdvancedDisk2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVdsAdvancedDisk2_ChangePartitionType(This,ullOffset,bForce,para)	\
    ( (This)->lpVtbl -> ChangePartitionType(This,ullOffset,bForce,para) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVdsAdvancedDisk2_INTERFACE_DEFINED__ */


#ifndef __IVdsCreatePartitionEx_INTERFACE_DEFINED__
#define __IVdsCreatePartitionEx_INTERFACE_DEFINED__

/* interface IVdsCreatePartitionEx */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IVdsCreatePartitionEx;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9882f547-cfc3-420b-9750-00dfbec50662")
    IVdsCreatePartitionEx : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreatePartitionEx( 
            /* [in] */ ULONGLONG ullOffset,
            /* [in] */ ULONGLONG ullSize,
            /* [in] */ ULONG ulAlign,
            /* [in] */ __RPC__in CREATE_PARTITION_PARAMETERS *para,
            /* [out] */ __RPC__deref_out_opt IVdsAsync **ppAsync) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IVdsCreatePartitionExVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVdsCreatePartitionEx * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVdsCreatePartitionEx * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVdsCreatePartitionEx * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreatePartitionEx )( 
            IVdsCreatePartitionEx * This,
            /* [in] */ ULONGLONG ullOffset,
            /* [in] */ ULONGLONG ullSize,
            /* [in] */ ULONG ulAlign,
            /* [in] */ __RPC__in CREATE_PARTITION_PARAMETERS *para,
            /* [out] */ __RPC__deref_out_opt IVdsAsync **ppAsync);
        
        END_INTERFACE
    } IVdsCreatePartitionExVtbl;

    interface IVdsCreatePartitionEx
    {
        CONST_VTBL struct IVdsCreatePartitionExVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVdsCreatePartitionEx_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVdsCreatePartitionEx_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVdsCreatePartitionEx_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVdsCreatePartitionEx_CreatePartitionEx(This,ullOffset,ullSize,ulAlign,para,ppAsync)	\
    ( (This)->lpVtbl -> CreatePartitionEx(This,ullOffset,ullSize,ulAlign,para,ppAsync) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVdsCreatePartitionEx_INTERFACE_DEFINED__ */


#ifndef __IVdsRemovable_INTERFACE_DEFINED__
#define __IVdsRemovable_INTERFACE_DEFINED__

/* interface IVdsRemovable */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IVdsRemovable;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0316560b-5db4-4ed9-bbb5-213436ddc0d9")
    IVdsRemovable : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE QueryMedia( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Eject( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IVdsRemovableVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVdsRemovable * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVdsRemovable * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVdsRemovable * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *QueryMedia )( 
            IVdsRemovable * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Eject )( 
            IVdsRemovable * This);
        
        END_INTERFACE
    } IVdsRemovableVtbl;

    interface IVdsRemovable
    {
        CONST_VTBL struct IVdsRemovableVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVdsRemovable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVdsRemovable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVdsRemovable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVdsRemovable_QueryMedia(This)	\
    ( (This)->lpVtbl -> QueryMedia(This) ) 

#define IVdsRemovable_Eject(This)	\
    ( (This)->lpVtbl -> Eject(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVdsRemovable_INTERFACE_DEFINED__ */


#ifndef __IVdsVolume_INTERFACE_DEFINED__
#define __IVdsVolume_INTERFACE_DEFINED__

/* interface IVdsVolume */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IVdsVolume;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("88306bb2-e71f-478c-86a2-79da200a0f11")
    IVdsVolume : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetProperties( 
            /* [out] */ __RPC__out VDS_VOLUME_PROP *pVolumeProperties) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetPack( 
            /* [out] */ __RPC__deref_out_opt IVdsPack **ppPack) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE QueryPlexes( 
            /* [out] */ __RPC__deref_out_opt IEnumVdsObject **ppEnum) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Extend( 
            /* [size_is][unique][in] */ __RPC__in_ecount_full_opt(lNumberOfDisks) VDS_INPUT_DISK *pInputDiskArray,
            /* [in] */ LONG lNumberOfDisks,
            /* [out] */ __RPC__deref_out_opt IVdsAsync **ppAsync) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Shrink( 
            /* [in] */ ULONGLONG ullNumberOfBytesToRemove,
            /* [out] */ __RPC__deref_out_opt IVdsAsync **ppAsync) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddPlex( 
            /* [in] */ VDS_OBJECT_ID VolumeId,
            /* [out] */ __RPC__deref_out_opt IVdsAsync **ppAsync) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE BreakPlex( 
            /* [in] */ VDS_OBJECT_ID plexId,
            /* [out] */ __RPC__deref_out_opt IVdsAsync **ppAsync) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE RemovePlex( 
            /* [in] */ VDS_OBJECT_ID plexId,
            /* [out] */ __RPC__deref_out_opt IVdsAsync **ppAsync) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Delete( 
            /* [in] */ BOOL bForce) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetFlags( 
            /* [in] */ ULONG ulFlags,
            /* [in] */ BOOL bRevertOnClose) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ClearFlags( 
            /* [in] */ ULONG ulFlags) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IVdsVolumeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVdsVolume * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVdsVolume * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVdsVolume * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetProperties )( 
            IVdsVolume * This,
            /* [out] */ __RPC__out VDS_VOLUME_PROP *pVolumeProperties);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPack )( 
            IVdsVolume * This,
            /* [out] */ __RPC__deref_out_opt IVdsPack **ppPack);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *QueryPlexes )( 
            IVdsVolume * This,
            /* [out] */ __RPC__deref_out_opt IEnumVdsObject **ppEnum);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Extend )( 
            IVdsVolume * This,
            /* [size_is][unique][in] */ __RPC__in_ecount_full_opt(lNumberOfDisks) VDS_INPUT_DISK *pInputDiskArray,
            /* [in] */ LONG lNumberOfDisks,
            /* [out] */ __RPC__deref_out_opt IVdsAsync **ppAsync);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Shrink )( 
            IVdsVolume * This,
            /* [in] */ ULONGLONG ullNumberOfBytesToRemove,
            /* [out] */ __RPC__deref_out_opt IVdsAsync **ppAsync);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddPlex )( 
            IVdsVolume * This,
            /* [in] */ VDS_OBJECT_ID VolumeId,
            /* [out] */ __RPC__deref_out_opt IVdsAsync **ppAsync);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *BreakPlex )( 
            IVdsVolume * This,
            /* [in] */ VDS_OBJECT_ID plexId,
            /* [out] */ __RPC__deref_out_opt IVdsAsync **ppAsync);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *RemovePlex )( 
            IVdsVolume * This,
            /* [in] */ VDS_OBJECT_ID plexId,
            /* [out] */ __RPC__deref_out_opt IVdsAsync **ppAsync);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Delete )( 
            IVdsVolume * This,
            /* [in] */ BOOL bForce);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetFlags )( 
            IVdsVolume * This,
            /* [in] */ ULONG ulFlags,
            /* [in] */ BOOL bRevertOnClose);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ClearFlags )( 
            IVdsVolume * This,
            /* [in] */ ULONG ulFlags);
        
        END_INTERFACE
    } IVdsVolumeVtbl;

    interface IVdsVolume
    {
        CONST_VTBL struct IVdsVolumeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVdsVolume_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVdsVolume_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVdsVolume_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVdsVolume_GetProperties(This,pVolumeProperties)	\
    ( (This)->lpVtbl -> GetProperties(This,pVolumeProperties) ) 

#define IVdsVolume_GetPack(This,ppPack)	\
    ( (This)->lpVtbl -> GetPack(This,ppPack) ) 

#define IVdsVolume_QueryPlexes(This,ppEnum)	\
    ( (This)->lpVtbl -> QueryPlexes(This,ppEnum) ) 

#define IVdsVolume_Extend(This,pInputDiskArray,lNumberOfDisks,ppAsync)	\
    ( (This)->lpVtbl -> Extend(This,pInputDiskArray,lNumberOfDisks,ppAsync) ) 

#define IVdsVolume_Shrink(This,ullNumberOfBytesToRemove,ppAsync)	\
    ( (This)->lpVtbl -> Shrink(This,ullNumberOfBytesToRemove,ppAsync) ) 

#define IVdsVolume_AddPlex(This,VolumeId,ppAsync)	\
    ( (This)->lpVtbl -> AddPlex(This,VolumeId,ppAsync) ) 

#define IVdsVolume_BreakPlex(This,plexId,ppAsync)	\
    ( (This)->lpVtbl -> BreakPlex(This,plexId,ppAsync) ) 

#define IVdsVolume_RemovePlex(This,plexId,ppAsync)	\
    ( (This)->lpVtbl -> RemovePlex(This,plexId,ppAsync) ) 

#define IVdsVolume_Delete(This,bForce)	\
    ( (This)->lpVtbl -> Delete(This,bForce) ) 

#define IVdsVolume_SetFlags(This,ulFlags,bRevertOnClose)	\
    ( (This)->lpVtbl -> SetFlags(This,ulFlags,bRevertOnClose) ) 

#define IVdsVolume_ClearFlags(This,ulFlags)	\
    ( (This)->lpVtbl -> ClearFlags(This,ulFlags) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVdsVolume_INTERFACE_DEFINED__ */


#ifndef __IVdsVolumeOnline_INTERFACE_DEFINED__
#define __IVdsVolumeOnline_INTERFACE_DEFINED__

/* interface IVdsVolumeOnline */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IVdsVolumeOnline;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1BE2275A-B315-4f70-9E44-879B3A2A53F2")
    IVdsVolumeOnline : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Online( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IVdsVolumeOnlineVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVdsVolumeOnline * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVdsVolumeOnline * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVdsVolumeOnline * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Online )( 
            IVdsVolumeOnline * This);
        
        END_INTERFACE
    } IVdsVolumeOnlineVtbl;

    interface IVdsVolumeOnline
    {
        CONST_VTBL struct IVdsVolumeOnlineVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVdsVolumeOnline_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVdsVolumeOnline_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVdsVolumeOnline_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVdsVolumeOnline_Online(This)	\
    ( (This)->lpVtbl -> Online(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVdsVolumeOnline_INTERFACE_DEFINED__ */


#ifndef __IVdsVolumePlex_INTERFACE_DEFINED__
#define __IVdsVolumePlex_INTERFACE_DEFINED__

/* interface IVdsVolumePlex */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IVdsVolumePlex;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4daa0135-e1d1-40f1-aaa5-3cc1e53221c3")
    IVdsVolumePlex : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetProperties( 
            /* [out] */ __RPC__out VDS_VOLUME_PLEX_PROP *pPlexProperties) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetVolume( 
            /* [out] */ __RPC__deref_out_opt IVdsVolume **ppVolume) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE QueryExtents( 
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*plNumberOfExtents) VDS_DISK_EXTENT **ppExtentArray,
            /* [out] */ __RPC__out LONG *plNumberOfExtents) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Repair( 
            /* [size_is][in] */ __RPC__in_ecount_full(lNumberOfDisks) VDS_INPUT_DISK *pInputDiskArray,
            /* [in] */ LONG lNumberOfDisks,
            /* [out] */ __RPC__deref_out_opt IVdsAsync **ppAsync) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IVdsVolumePlexVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVdsVolumePlex * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVdsVolumePlex * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVdsVolumePlex * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetProperties )( 
            IVdsVolumePlex * This,
            /* [out] */ __RPC__out VDS_VOLUME_PLEX_PROP *pPlexProperties);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetVolume )( 
            IVdsVolumePlex * This,
            /* [out] */ __RPC__deref_out_opt IVdsVolume **ppVolume);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *QueryExtents )( 
            IVdsVolumePlex * This,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*plNumberOfExtents) VDS_DISK_EXTENT **ppExtentArray,
            /* [out] */ __RPC__out LONG *plNumberOfExtents);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Repair )( 
            IVdsVolumePlex * This,
            /* [size_is][in] */ __RPC__in_ecount_full(lNumberOfDisks) VDS_INPUT_DISK *pInputDiskArray,
            /* [in] */ LONG lNumberOfDisks,
            /* [out] */ __RPC__deref_out_opt IVdsAsync **ppAsync);
        
        END_INTERFACE
    } IVdsVolumePlexVtbl;

    interface IVdsVolumePlex
    {
        CONST_VTBL struct IVdsVolumePlexVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVdsVolumePlex_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVdsVolumePlex_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVdsVolumePlex_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVdsVolumePlex_GetProperties(This,pPlexProperties)	\
    ( (This)->lpVtbl -> GetProperties(This,pPlexProperties) ) 

#define IVdsVolumePlex_GetVolume(This,ppVolume)	\
    ( (This)->lpVtbl -> GetVolume(This,ppVolume) ) 

#define IVdsVolumePlex_QueryExtents(This,ppExtentArray,plNumberOfExtents)	\
    ( (This)->lpVtbl -> QueryExtents(This,ppExtentArray,plNumberOfExtents) ) 

#define IVdsVolumePlex_Repair(This,pInputDiskArray,lNumberOfDisks,ppAsync)	\
    ( (This)->lpVtbl -> Repair(This,pInputDiskArray,lNumberOfDisks,ppAsync) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVdsVolumePlex_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_vds_0000_0017 */
/* [local] */ 



















typedef 
enum _VDS_SUB_SYSTEM_STATUS
    {	VDS_SSS_UNKNOWN	= 0,
	VDS_SSS_ONLINE	= 1,
	VDS_SSS_NOT_READY	= 2,
	VDS_SSS_OFFLINE	= 4,
	VDS_SSS_FAILED	= 5
    } 	VDS_SUB_SYSTEM_STATUS;

typedef 
enum _VDS_SUB_SYSTEM_FLAG
    {	VDS_SF_LUN_MASKING_CAPABLE	= 0x1,
	VDS_SF_LUN_PLEXING_CAPABLE	= 0x2,
	VDS_SF_LUN_REMAPPING_CAPABLE	= 0x4,
	VDS_SF_DRIVE_EXTENT_CAPABLE	= 0x8,
	VDS_SF_HARDWARE_CHECKSUM_CAPABLE	= 0x10,
	VDS_SF_RADIUS_CAPABLE	= 0x20,
	VDS_SF_READ_BACK_VERIFY_CAPABLE	= 0x40,
	VDS_SF_WRITE_THROUGH_CACHING_CAPABLE	= 0x80,
	VDS_SF_SUPPORTS_FAULT_TOLERANT_LUNS	= 0x200,
	VDS_SF_SUPPORTS_NON_FAULT_TOLERANT_LUNS	= 0x400,
	VDS_SF_SUPPORTS_SIMPLE_LUNS	= 0x800,
	VDS_SF_SUPPORTS_SPAN_LUNS	= 0x1000,
	VDS_SF_SUPPORTS_STRIPE_LUNS	= 0x2000,
	VDS_SF_SUPPORTS_MIRROR_LUNS	= 0x4000,
	VDS_SF_SUPPORTS_PARITY_LUNS	= 0x8000,
	VDS_SF_SUPPORTS_AUTH_CHAP	= 0x10000,
	VDS_SF_SUPPORTS_AUTH_MUTUAL_CHAP	= 0x20000,
	VDS_SF_SUPPORTS_SIMPLE_TARGET_CONFIG	= 0x40000
    } 	VDS_SUB_SYSTEM_FLAG;

typedef 
enum _VDS_CONTROLLER_STATUS
    {	VDS_CS_UNKNOWN	= 0,
	VDS_CS_ONLINE	= 1,
	VDS_CS_NOT_READY	= 2,
	VDS_CS_OFFLINE	= 4,
	VDS_CS_FAILED	= 5
    } 	VDS_CONTROLLER_STATUS;

typedef 
enum _VDS_PORT_STATUS
    {	VDS_PRS_UNKNOWN	= 0,
	VDS_PRS_ONLINE	= 1,
	VDS_PRS_NOT_READY	= 2,
	VDS_PRS_OFFLINE	= 4,
	VDS_PRS_FAILED	= 5
    } 	VDS_PORT_STATUS;

typedef 
enum _VDS_DRIVE_STATUS
    {	VDS_DRS_UNKNOWN	= 0,
	VDS_DRS_ONLINE	= 1,
	VDS_DRS_NOT_READY	= 2,
	VDS_DRS_OFFLINE	= 4,
	VDS_DRS_FAILED	= 5
    } 	VDS_DRIVE_STATUS;

typedef 
enum _VDS_DRIVE_FLAG
    {	VDS_DRF_HOTSPARE	= 0x1
    } 	VDS_DRIVE_FLAG;

typedef 
enum _VDS_LUN_TYPE
    {	VDS_LT_UNKNOWN	= 0,
	VDS_LT_DEFAULT	= 1,
	VDS_LT_FAULT_TOLERANT	= 2,
	VDS_LT_NON_FAULT_TOLERANT	= 3,
	VDS_LT_SIMPLE	= 10,
	VDS_LT_SPAN	= 11,
	VDS_LT_STRIPE	= 12,
	VDS_LT_MIRROR	= 13,
	VDS_LT_PARITY	= 14
    } 	VDS_LUN_TYPE;

typedef 
enum _VDS_LUN_STATUS
    {	VDS_LS_UNKNOWN	= 0,
	VDS_LS_ONLINE	= 1,
	VDS_LS_NOT_READY	= 2,
	VDS_LS_OFFLINE	= 4,
	VDS_LS_FAILED	= 5
    } 	VDS_LUN_STATUS;

typedef 
enum _VDS_LUN_FLAG
    {	VDS_LF_LBN_REMAP_ENABLED	= 0x1,
	VDS_LF_READ_BACK_VERIFY_ENABLED	= 0x2,
	VDS_LF_WRITE_THROUGH_CACHING_ENABLED	= 0x4,
	VDS_LF_HARDWARE_CHECKSUM_ENABLED	= 0x8
    } 	VDS_LUN_FLAG;

typedef 
enum _VDS_LUN_PLEX_TYPE
    {	VDS_LPT_UNKNOWN	= 0,
	VDS_LPT_SIMPLE	= VDS_LT_SIMPLE,
	VDS_LPT_SPAN	= VDS_LT_SPAN,
	VDS_LPT_STRIPE	= VDS_LT_STRIPE,
	VDS_LPT_PARITY	= VDS_LT_PARITY
    } 	VDS_LUN_PLEX_TYPE;

typedef 
enum _VDS_LUN_PLEX_STATUS
    {	VDS_LPS_UNKNOWN	= 0,
	VDS_LPS_ONLINE	= 1,
	VDS_LPS_NOT_READY	= 2,
	VDS_LPS_OFFLINE	= 4,
	VDS_LPS_FAILED	= 5
    } 	VDS_LUN_PLEX_STATUS;

typedef 
enum _VDS_LUN_PLEX_FLAG
    {	VDS_LPF_LBN_REMAP_ENABLED	= VDS_LF_LBN_REMAP_ENABLED
    } 	VDS_LUN_PLEX_FLAG;

typedef 
enum _VDS_ISCSI_PORTAL_STATUS
    {	VDS_IPS_UNKNOWN	= 0,
	VDS_IPS_ONLINE	= 1,
	VDS_IPS_NOT_READY	= 2,
	VDS_IPS_OFFLINE	= 4,
	VDS_IPS_FAILED	= 5
    } 	VDS_ISCSI_PORTAL_STATUS;

typedef 
enum _VDS_MAINTENANCE_OPERATION
    {	BlinkLight	= 1,
	BeepAlarm	= 2,
	SpinDown	= 3,
	SpinUp	= 4,
	Ping	= 5
    } 	VDS_MAINTENANCE_OPERATION;

typedef struct _VDS_HINTS
    {
    ULONGLONG ullHintMask;
    ULONGLONG ullExpectedMaximumSize;
    ULONG ulOptimalReadSize;
    ULONG ulOptimalReadAlignment;
    ULONG ulOptimalWriteSize;
    ULONG ulOptimalWriteAlignment;
    ULONG ulMaximumDriveCount;
    ULONG ulStripeSize;
    BOOL bFastCrashRecoveryRequired;
    BOOL bMostlyReads;
    BOOL bOptimizeForSequentialReads;
    BOOL bOptimizeForSequentialWrites;
    BOOL bRemapEnabled;
    BOOL bReadBackVerifyEnabled;
    BOOL bWriteThroughCachingEnabled;
    BOOL bHardwareChecksumEnabled;
    BOOL bIsYankable;
    SHORT sRebuildPriority;
    } 	VDS_HINTS;

typedef struct _VDS_HINTS *PVDS_HINTS;

#define	VDS_HINT_FASTCRASHRECOVERYREQUIRED	( 0x1L )

#define	VDS_HINT_MOSTLYREADS	( 0x2L )

#define	VDS_HINT_OPTIMIZEFORSEQUENTIALREADS	( 0x4L )

#define	VDS_HINT_OPTIMIZEFORSEQUENTIALWRITES	( 0x8L )

#define	VDS_HINT_READBACKVERIFYENABLED	( 0x10L )

#define	VDS_HINT_REMAPENABLED	( 0x20L )

#define	VDS_HINT_WRITETHROUGHCACHINGENABLED	( 0x40L )

#define	VDS_HINT_HARDWARECHECKSUMENABLED	( 0x80L )

#define	VDS_HINT_ISYANKABLE	( 0x100L )

typedef struct _VDS_SUB_SYSTEM_PROP
    {
    VDS_OBJECT_ID id;
    LPWSTR pwszFriendlyName;
    LPWSTR pwszIdentification;
    ULONG ulFlags;
    ULONG ulStripeSizeFlags;
    VDS_SUB_SYSTEM_STATUS status;
    VDS_HEALTH health;
    SHORT sNumberOfInternalBuses;
    SHORT sMaxNumberOfSlotsEachBus;
    SHORT sMaxNumberOfControllers;
    SHORT sRebuildPriority;
    } 	VDS_SUB_SYSTEM_PROP;

typedef struct _VDS_CONTROLLER_PROP
    {
    VDS_OBJECT_ID id;
    LPWSTR pwszFriendlyName;
    LPWSTR pwszIdentification;
    VDS_CONTROLLER_STATUS status;
    VDS_HEALTH health;
    SHORT sNumberOfPorts;
    } 	VDS_CONTROLLER_PROP;

typedef struct _VDS_DRIVE_PROP
    {
    VDS_OBJECT_ID id;
    ULONGLONG ullSize;
    LPWSTR pwszFriendlyName;
    LPWSTR pwszIdentification;
    ULONG ulFlags;
    VDS_DRIVE_STATUS status;
    VDS_HEALTH health;
    SHORT sInternalBusNumber;
    SHORT sSlotNumber;
    } 	VDS_DRIVE_PROP;

typedef struct _VDS_DRIVE_EXTENT
    {
    VDS_OBJECT_ID id;
    VDS_OBJECT_ID LunId;
    ULONGLONG ullSize;
    BOOL bUsed;
    } 	VDS_DRIVE_EXTENT;

#define VDS_REBUILD_PRIORITY_MIN        0
#define VDS_REBUILD_PRIORITY_MAX        16
typedef struct _VDS_LUN_PROP
    {
    VDS_OBJECT_ID id;
    ULONGLONG ullSize;
    LPWSTR pwszFriendlyName;
    LPWSTR pwszIdentification;
    LPWSTR pwszUnmaskingList;
    ULONG ulFlags;
    VDS_LUN_TYPE type;
    VDS_LUN_STATUS status;
    VDS_HEALTH health;
    VDS_TRANSITION_STATE TransitionState;
    SHORT sRebuildPriority;
    } 	VDS_LUN_PROP;

typedef struct _VDS_LUN_PROP *PVDS_LUN_PROP;

typedef struct _VDS_LUN_PLEX_PROP
    {
    VDS_OBJECT_ID id;
    ULONGLONG ullSize;
    VDS_LUN_PLEX_TYPE type;
    VDS_LUN_PLEX_STATUS status;
    VDS_HEALTH health;
    VDS_TRANSITION_STATE TransitionState;
    ULONG ulFlags;
    ULONG ulStripeSize;
    SHORT sRebuildPriority;
    } 	VDS_LUN_PLEX_PROP;

typedef struct _VDS_PORT_PROP
    {
    VDS_OBJECT_ID id;
    LPWSTR pwszFriendlyName;
    LPWSTR pwszIdentification;
    VDS_PORT_STATUS status;
    } 	VDS_PORT_PROP;

typedef struct _VDS_ISCSI_PORTAL_PROP
    {
    VDS_OBJECT_ID id;
    VDS_IPADDRESS address;
    VDS_ISCSI_PORTAL_STATUS status;
    } 	VDS_ISCSI_PORTAL_PROP;

typedef struct _VDS_ISCSI_TARGET_PROP
    {
    VDS_OBJECT_ID id;
    LPWSTR pwszIscsiName;
    LPWSTR pwszFriendlyName;
    BOOL bChapEnabled;
    } 	VDS_ISCSI_TARGET_PROP;

typedef struct _VDS_ISCSI_PORTALGROUP_PROP
    {
    VDS_OBJECT_ID id;
    VDS_ISCSI_PORTALGROUP_TAG tag;
    } 	VDS_ISCSI_PORTALGROUP_PROP;



extern RPC_IF_HANDLE __MIDL_itf_vds_0000_0017_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vds_0000_0017_v0_0_s_ifspec;

#ifndef __IVdsHwProvider_INTERFACE_DEFINED__
#define __IVdsHwProvider_INTERFACE_DEFINED__

/* interface IVdsHwProvider */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IVdsHwProvider;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("d99bdaae-b13a-4178-9fdb-e27f16b4603e")
    IVdsHwProvider : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE QuerySubSystems( 
            /* [out] */ __RPC__deref_out_opt IEnumVdsObject **ppEnum) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Reenumerate( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Refresh( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IVdsHwProviderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVdsHwProvider * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVdsHwProvider * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVdsHwProvider * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *QuerySubSystems )( 
            IVdsHwProvider * This,
            /* [out] */ __RPC__deref_out_opt IEnumVdsObject **ppEnum);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Reenumerate )( 
            IVdsHwProvider * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Refresh )( 
            IVdsHwProvider * This);
        
        END_INTERFACE
    } IVdsHwProviderVtbl;

    interface IVdsHwProvider
    {
        CONST_VTBL struct IVdsHwProviderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVdsHwProvider_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVdsHwProvider_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVdsHwProvider_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVdsHwProvider_QuerySubSystems(This,ppEnum)	\
    ( (This)->lpVtbl -> QuerySubSystems(This,ppEnum) ) 

#define IVdsHwProvider_Reenumerate(This)	\
    ( (This)->lpVtbl -> Reenumerate(This) ) 

#define IVdsHwProvider_Refresh(This)	\
    ( (This)->lpVtbl -> Refresh(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVdsHwProvider_INTERFACE_DEFINED__ */


#ifndef __IVdsHwProviderType_INTERFACE_DEFINED__
#define __IVdsHwProviderType_INTERFACE_DEFINED__

/* interface IVdsHwProviderType */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IVdsHwProviderType;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3e0f5166-542d-4fc6-947a-012174240b7e")
    IVdsHwProviderType : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetProviderType( 
            /* [out] */ __RPC__out VDS_HWPROVIDER_TYPE *pType) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IVdsHwProviderTypeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVdsHwProviderType * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVdsHwProviderType * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVdsHwProviderType * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetProviderType )( 
            IVdsHwProviderType * This,
            /* [out] */ __RPC__out VDS_HWPROVIDER_TYPE *pType);
        
        END_INTERFACE
    } IVdsHwProviderTypeVtbl;

    interface IVdsHwProviderType
    {
        CONST_VTBL struct IVdsHwProviderTypeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVdsHwProviderType_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVdsHwProviderType_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVdsHwProviderType_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVdsHwProviderType_GetProviderType(This,pType)	\
    ( (This)->lpVtbl -> GetProviderType(This,pType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVdsHwProviderType_INTERFACE_DEFINED__ */


#ifndef __IVdsSubSystem_INTERFACE_DEFINED__
#define __IVdsSubSystem_INTERFACE_DEFINED__

/* interface IVdsSubSystem */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IVdsSubSystem;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6fcee2d3-6d90-4f91-80e2-a5c7caaca9d8")
    IVdsSubSystem : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetProperties( 
            /* [out] */ __RPC__out VDS_SUB_SYSTEM_PROP *pSubSystemProp) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetProvider( 
            /* [out] */ __RPC__deref_out_opt IVdsProvider **ppProvider) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE QueryControllers( 
            /* [out] */ __RPC__deref_out_opt IEnumVdsObject **ppEnum) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE QueryLuns( 
            /* [out] */ __RPC__deref_out_opt IEnumVdsObject **ppEnum) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE QueryDrives( 
            /* [out] */ __RPC__deref_out_opt IEnumVdsObject **ppEnum) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetDrive( 
            /* [in] */ SHORT sBusNumber,
            /* [in] */ SHORT sSlotNumber,
            /* [out] */ __RPC__deref_out_opt IVdsDrive **ppDrive) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Reenumerate( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetControllerStatus( 
            /* [size_is][in] */ __RPC__in_ecount_full(lNumberOfOnlineControllers) VDS_OBJECT_ID *pOnlineControllerIdArray,
            /* [in] */ LONG lNumberOfOnlineControllers,
            /* [size_is][in] */ __RPC__in_ecount_full(lNumberOfOfflineControllers) VDS_OBJECT_ID *pOfflineControllerIdArray,
            /* [in] */ LONG lNumberOfOfflineControllers) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateLun( 
            /* [in] */ VDS_LUN_TYPE type,
            /* [in] */ ULONGLONG ullSizeInBytes,
            /* [unique][size_is][in] */ __RPC__in_ecount_full_opt(lNumberOfDrives) VDS_OBJECT_ID *pDriveIdArray,
            /* [in] */ LONG lNumberOfDrives,
            /* [string][in] */ __RPC__in LPWSTR pwszUnmaskingList,
            /* [unique][in] */ __RPC__in_opt VDS_HINTS *pHints,
            /* [out] */ __RPC__deref_out_opt IVdsAsync **ppAsync) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ReplaceDrive( 
            /* [in] */ VDS_OBJECT_ID DriveToBeReplaced,
            /* [in] */ VDS_OBJECT_ID ReplacementDrive) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetStatus( 
            /* [in] */ VDS_SUB_SYSTEM_STATUS status) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE QueryMaxLunCreateSize( 
            /* [in] */ VDS_LUN_TYPE type,
            /* [unique][size_is][in] */ __RPC__in_ecount_full_opt(lNumberOfDrives) VDS_OBJECT_ID *pDriveIdArray,
            /* [in] */ LONG lNumberOfDrives,
            /* [unique][in] */ __RPC__in_opt VDS_HINTS *pHints,
            /* [out] */ __RPC__out ULONGLONG *pullMaxLunSize) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IVdsSubSystemVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVdsSubSystem * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVdsSubSystem * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVdsSubSystem * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetProperties )( 
            IVdsSubSystem * This,
            /* [out] */ __RPC__out VDS_SUB_SYSTEM_PROP *pSubSystemProp);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetProvider )( 
            IVdsSubSystem * This,
            /* [out] */ __RPC__deref_out_opt IVdsProvider **ppProvider);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *QueryControllers )( 
            IVdsSubSystem * This,
            /* [out] */ __RPC__deref_out_opt IEnumVdsObject **ppEnum);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *QueryLuns )( 
            IVdsSubSystem * This,
            /* [out] */ __RPC__deref_out_opt IEnumVdsObject **ppEnum);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *QueryDrives )( 
            IVdsSubSystem * This,
            /* [out] */ __RPC__deref_out_opt IEnumVdsObject **ppEnum);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDrive )( 
            IVdsSubSystem * This,
            /* [in] */ SHORT sBusNumber,
            /* [in] */ SHORT sSlotNumber,
            /* [out] */ __RPC__deref_out_opt IVdsDrive **ppDrive);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Reenumerate )( 
            IVdsSubSystem * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetControllerStatus )( 
            IVdsSubSystem * This,
            /* [size_is][in] */ __RPC__in_ecount_full(lNumberOfOnlineControllers) VDS_OBJECT_ID *pOnlineControllerIdArray,
            /* [in] */ LONG lNumberOfOnlineControllers,
            /* [size_is][in] */ __RPC__in_ecount_full(lNumberOfOfflineControllers) VDS_OBJECT_ID *pOfflineControllerIdArray,
            /* [in] */ LONG lNumberOfOfflineControllers);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateLun )( 
            IVdsSubSystem * This,
            /* [in] */ VDS_LUN_TYPE type,
            /* [in] */ ULONGLONG ullSizeInBytes,
            /* [unique][size_is][in] */ __RPC__in_ecount_full_opt(lNumberOfDrives) VDS_OBJECT_ID *pDriveIdArray,
            /* [in] */ LONG lNumberOfDrives,
            /* [string][in] */ __RPC__in LPWSTR pwszUnmaskingList,
            /* [unique][in] */ __RPC__in_opt VDS_HINTS *pHints,
            /* [out] */ __RPC__deref_out_opt IVdsAsync **ppAsync);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ReplaceDrive )( 
            IVdsSubSystem * This,
            /* [in] */ VDS_OBJECT_ID DriveToBeReplaced,
            /* [in] */ VDS_OBJECT_ID ReplacementDrive);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetStatus )( 
            IVdsSubSystem * This,
            /* [in] */ VDS_SUB_SYSTEM_STATUS status);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *QueryMaxLunCreateSize )( 
            IVdsSubSystem * This,
            /* [in] */ VDS_LUN_TYPE type,
            /* [unique][size_is][in] */ __RPC__in_ecount_full_opt(lNumberOfDrives) VDS_OBJECT_ID *pDriveIdArray,
            /* [in] */ LONG lNumberOfDrives,
            /* [unique][in] */ __RPC__in_opt VDS_HINTS *pHints,
            /* [out] */ __RPC__out ULONGLONG *pullMaxLunSize);
        
        END_INTERFACE
    } IVdsSubSystemVtbl;

    interface IVdsSubSystem
    {
        CONST_VTBL struct IVdsSubSystemVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVdsSubSystem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVdsSubSystem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVdsSubSystem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVdsSubSystem_GetProperties(This,pSubSystemProp)	\
    ( (This)->lpVtbl -> GetProperties(This,pSubSystemProp) ) 

#define IVdsSubSystem_GetProvider(This,ppProvider)	\
    ( (This)->lpVtbl -> GetProvider(This,ppProvider) ) 

#define IVdsSubSystem_QueryControllers(This,ppEnum)	\
    ( (This)->lpVtbl -> QueryControllers(This,ppEnum) ) 

#define IVdsSubSystem_QueryLuns(This,ppEnum)	\
    ( (This)->lpVtbl -> QueryLuns(This,ppEnum) ) 

#define IVdsSubSystem_QueryDrives(This,ppEnum)	\
    ( (This)->lpVtbl -> QueryDrives(This,ppEnum) ) 

#define IVdsSubSystem_GetDrive(This,sBusNumber,sSlotNumber,ppDrive)	\
    ( (This)->lpVtbl -> GetDrive(This,sBusNumber,sSlotNumber,ppDrive) ) 

#define IVdsSubSystem_Reenumerate(This)	\
    ( (This)->lpVtbl -> Reenumerate(This) ) 

#define IVdsSubSystem_SetControllerStatus(This,pOnlineControllerIdArray,lNumberOfOnlineControllers,pOfflineControllerIdArray,lNumberOfOfflineControllers)	\
    ( (This)->lpVtbl -> SetControllerStatus(This,pOnlineControllerIdArray,lNumberOfOnlineControllers,pOfflineControllerIdArray,lNumberOfOfflineControllers) ) 

#define IVdsSubSystem_CreateLun(This,type,ullSizeInBytes,pDriveIdArray,lNumberOfDrives,pwszUnmaskingList,pHints,ppAsync)	\
    ( (This)->lpVtbl -> CreateLun(This,type,ullSizeInBytes,pDriveIdArray,lNumberOfDrives,pwszUnmaskingList,pHints,ppAsync) ) 

#define IVdsSubSystem_ReplaceDrive(This,DriveToBeReplaced,ReplacementDrive)	\
    ( (This)->lpVtbl -> ReplaceDrive(This,DriveToBeReplaced,ReplacementDrive) ) 

#define IVdsSubSystem_SetStatus(This,status)	\
    ( (This)->lpVtbl -> SetStatus(This,status) ) 

#define IVdsSubSystem_QueryMaxLunCreateSize(This,type,pDriveIdArray,lNumberOfDrives,pHints,pullMaxLunSize)	\
    ( (This)->lpVtbl -> QueryMaxLunCreateSize(This,type,pDriveIdArray,lNumberOfDrives,pHints,pullMaxLunSize) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVdsSubSystem_INTERFACE_DEFINED__ */


#ifndef __IVdsSubSystemNaming_INTERFACE_DEFINED__
#define __IVdsSubSystemNaming_INTERFACE_DEFINED__

/* interface IVdsSubSystemNaming */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IVdsSubSystemNaming;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0d70faa3-9cd4-4900-aa20-6981b6aafc75")
    IVdsSubSystemNaming : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetFriendlyName( 
            /* [string][in] */ __RPC__in LPWSTR pwszFriendlyName) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IVdsSubSystemNamingVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVdsSubSystemNaming * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVdsSubSystemNaming * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVdsSubSystemNaming * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetFriendlyName )( 
            IVdsSubSystemNaming * This,
            /* [string][in] */ __RPC__in LPWSTR pwszFriendlyName);
        
        END_INTERFACE
    } IVdsSubSystemNamingVtbl;

    interface IVdsSubSystemNaming
    {
        CONST_VTBL struct IVdsSubSystemNamingVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVdsSubSystemNaming_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVdsSubSystemNaming_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVdsSubSystemNaming_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVdsSubSystemNaming_SetFriendlyName(This,pwszFriendlyName)	\
    ( (This)->lpVtbl -> SetFriendlyName(This,pwszFriendlyName) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVdsSubSystemNaming_INTERFACE_DEFINED__ */


#ifndef __IVdsSubSystemIscsi_INTERFACE_DEFINED__
#define __IVdsSubSystemIscsi_INTERFACE_DEFINED__

/* interface IVdsSubSystemIscsi */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IVdsSubSystemIscsi;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0027346f-40d0-4b45-8cec-5906dc0380c8")
    IVdsSubSystemIscsi : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE QueryTargets( 
            /* [out] */ __RPC__deref_out_opt IEnumVdsObject **ppEnum) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE QueryPortals( 
            /* [out] */ __RPC__deref_out_opt IEnumVdsObject **ppEnum) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateTarget( 
            /* [string][unique][in] */ __RPC__in_opt LPWSTR pwszIscsiName,
            /* [string][in] */ __RPC__in LPWSTR pwszFriendlyName,
            /* [out] */ __RPC__deref_out_opt IVdsAsync **ppAsync) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetIpsecGroupPresharedKey( 
            /* [unique][in] */ __RPC__in_opt VDS_ISCSI_IPSEC_KEY *pIpsecKey) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IVdsSubSystemIscsiVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVdsSubSystemIscsi * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVdsSubSystemIscsi * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVdsSubSystemIscsi * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *QueryTargets )( 
            IVdsSubSystemIscsi * This,
            /* [out] */ __RPC__deref_out_opt IEnumVdsObject **ppEnum);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *QueryPortals )( 
            IVdsSubSystemIscsi * This,
            /* [out] */ __RPC__deref_out_opt IEnumVdsObject **ppEnum);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateTarget )( 
            IVdsSubSystemIscsi * This,
            /* [string][unique][in] */ __RPC__in_opt LPWSTR pwszIscsiName,
            /* [string][in] */ __RPC__in LPWSTR pwszFriendlyName,
            /* [out] */ __RPC__deref_out_opt IVdsAsync **ppAsync);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetIpsecGroupPresharedKey )( 
            IVdsSubSystemIscsi * This,
            /* [unique][in] */ __RPC__in_opt VDS_ISCSI_IPSEC_KEY *pIpsecKey);
        
        END_INTERFACE
    } IVdsSubSystemIscsiVtbl;

    interface IVdsSubSystemIscsi
    {
        CONST_VTBL struct IVdsSubSystemIscsiVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVdsSubSystemIscsi_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVdsSubSystemIscsi_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVdsSubSystemIscsi_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVdsSubSystemIscsi_QueryTargets(This,ppEnum)	\
    ( (This)->lpVtbl -> QueryTargets(This,ppEnum) ) 

#define IVdsSubSystemIscsi_QueryPortals(This,ppEnum)	\
    ( (This)->lpVtbl -> QueryPortals(This,ppEnum) ) 

#define IVdsSubSystemIscsi_CreateTarget(This,pwszIscsiName,pwszFriendlyName,ppAsync)	\
    ( (This)->lpVtbl -> CreateTarget(This,pwszIscsiName,pwszFriendlyName,ppAsync) ) 

#define IVdsSubSystemIscsi_SetIpsecGroupPresharedKey(This,pIpsecKey)	\
    ( (This)->lpVtbl -> SetIpsecGroupPresharedKey(This,pIpsecKey) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVdsSubSystemIscsi_INTERFACE_DEFINED__ */


#ifndef __IVdsControllerPort_INTERFACE_DEFINED__
#define __IVdsControllerPort_INTERFACE_DEFINED__

/* interface IVdsControllerPort */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IVdsControllerPort;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("18691d0d-4e7f-43e8-92e4-cf44beeed11c")
    IVdsControllerPort : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetProperties( 
            /* [out] */ __RPC__out VDS_PORT_PROP *pPortProp) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetController( 
            /* [out] */ __RPC__deref_out_opt IVdsController **ppController) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE QueryAssociatedLuns( 
            /* [out] */ __RPC__deref_out_opt IEnumVdsObject **ppEnum) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetStatus( 
            /* [in] */ VDS_PORT_STATUS status) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IVdsControllerPortVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVdsControllerPort * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVdsControllerPort * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVdsControllerPort * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetProperties )( 
            IVdsControllerPort * This,
            /* [out] */ __RPC__out VDS_PORT_PROP *pPortProp);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetController )( 
            IVdsControllerPort * This,
            /* [out] */ __RPC__deref_out_opt IVdsController **ppController);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *QueryAssociatedLuns )( 
            IVdsControllerPort * This,
            /* [out] */ __RPC__deref_out_opt IEnumVdsObject **ppEnum);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IVdsControllerPort * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetStatus )( 
            IVdsControllerPort * This,
            /* [in] */ VDS_PORT_STATUS status);
        
        END_INTERFACE
    } IVdsControllerPortVtbl;

    interface IVdsControllerPort
    {
        CONST_VTBL struct IVdsControllerPortVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVdsControllerPort_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVdsControllerPort_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVdsControllerPort_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVdsControllerPort_GetProperties(This,pPortProp)	\
    ( (This)->lpVtbl -> GetProperties(This,pPortProp) ) 

#define IVdsControllerPort_GetController(This,ppController)	\
    ( (This)->lpVtbl -> GetController(This,ppController) ) 

#define IVdsControllerPort_QueryAssociatedLuns(This,ppEnum)	\
    ( (This)->lpVtbl -> QueryAssociatedLuns(This,ppEnum) ) 

#define IVdsControllerPort_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IVdsControllerPort_SetStatus(This,status)	\
    ( (This)->lpVtbl -> SetStatus(This,status) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVdsControllerPort_INTERFACE_DEFINED__ */


#ifndef __IVdsController_INTERFACE_DEFINED__
#define __IVdsController_INTERFACE_DEFINED__

/* interface IVdsController */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IVdsController;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("cb53d96e-dffb-474a-a078-790d1e2bc082")
    IVdsController : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetProperties( 
            /* [out] */ __RPC__out VDS_CONTROLLER_PROP *pControllerProp) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetSubSystem( 
            /* [out] */ __RPC__deref_out_opt IVdsSubSystem **ppSubSystem) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetPortProperties( 
            /* [in] */ SHORT sPortNumber,
            /* [out] */ __RPC__out VDS_PORT_PROP *pPortProp) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FlushCache( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE InvalidateCache( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE QueryAssociatedLuns( 
            /* [out] */ __RPC__deref_out_opt IEnumVdsObject **ppEnum) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetStatus( 
            /* [in] */ VDS_CONTROLLER_STATUS status) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IVdsControllerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVdsController * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVdsController * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVdsController * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetProperties )( 
            IVdsController * This,
            /* [out] */ __RPC__out VDS_CONTROLLER_PROP *pControllerProp);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetSubSystem )( 
            IVdsController * This,
            /* [out] */ __RPC__deref_out_opt IVdsSubSystem **ppSubSystem);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPortProperties )( 
            IVdsController * This,
            /* [in] */ SHORT sPortNumber,
            /* [out] */ __RPC__out VDS_PORT_PROP *pPortProp);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *FlushCache )( 
            IVdsController * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *InvalidateCache )( 
            IVdsController * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IVdsController * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *QueryAssociatedLuns )( 
            IVdsController * This,
            /* [out] */ __RPC__deref_out_opt IEnumVdsObject **ppEnum);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetStatus )( 
            IVdsController * This,
            /* [in] */ VDS_CONTROLLER_STATUS status);
        
        END_INTERFACE
    } IVdsControllerVtbl;

    interface IVdsController
    {
        CONST_VTBL struct IVdsControllerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVdsController_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVdsController_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVdsController_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVdsController_GetProperties(This,pControllerProp)	\
    ( (This)->lpVtbl -> GetProperties(This,pControllerProp) ) 

#define IVdsController_GetSubSystem(This,ppSubSystem)	\
    ( (This)->lpVtbl -> GetSubSystem(This,ppSubSystem) ) 

#define IVdsController_GetPortProperties(This,sPortNumber,pPortProp)	\
    ( (This)->lpVtbl -> GetPortProperties(This,sPortNumber,pPortProp) ) 

#define IVdsController_FlushCache(This)	\
    ( (This)->lpVtbl -> FlushCache(This) ) 

#define IVdsController_InvalidateCache(This)	\
    ( (This)->lpVtbl -> InvalidateCache(This) ) 

#define IVdsController_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IVdsController_QueryAssociatedLuns(This,ppEnum)	\
    ( (This)->lpVtbl -> QueryAssociatedLuns(This,ppEnum) ) 

#define IVdsController_SetStatus(This,status)	\
    ( (This)->lpVtbl -> SetStatus(This,status) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVdsController_INTERFACE_DEFINED__ */


#ifndef __IVdsControllerControllerPort_INTERFACE_DEFINED__
#define __IVdsControllerControllerPort_INTERFACE_DEFINED__

/* interface IVdsControllerControllerPort */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IVdsControllerControllerPort;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ca5d735f-6bae-42c0-b30e-f2666045ce71")
    IVdsControllerControllerPort : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE QueryControllerPorts( 
            /* [out] */ __RPC__deref_out_opt IEnumVdsObject **ppEnum) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IVdsControllerControllerPortVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVdsControllerControllerPort * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVdsControllerControllerPort * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVdsControllerControllerPort * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *QueryControllerPorts )( 
            IVdsControllerControllerPort * This,
            /* [out] */ __RPC__deref_out_opt IEnumVdsObject **ppEnum);
        
        END_INTERFACE
    } IVdsControllerControllerPortVtbl;

    interface IVdsControllerControllerPort
    {
        CONST_VTBL struct IVdsControllerControllerPortVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVdsControllerControllerPort_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVdsControllerControllerPort_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVdsControllerControllerPort_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVdsControllerControllerPort_QueryControllerPorts(This,ppEnum)	\
    ( (This)->lpVtbl -> QueryControllerPorts(This,ppEnum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVdsControllerControllerPort_INTERFACE_DEFINED__ */


#ifndef __IVdsDrive_INTERFACE_DEFINED__
#define __IVdsDrive_INTERFACE_DEFINED__

/* interface IVdsDrive */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IVdsDrive;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ff24efa4-aade-4b6b-898b-eaa6a20887c7")
    IVdsDrive : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetProperties( 
            /* [out] */ __RPC__out VDS_DRIVE_PROP *pDriveProp) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetSubSystem( 
            /* [out] */ __RPC__deref_out_opt IVdsSubSystem **ppSubSystem) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE QueryExtents( 
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*plNumberOfExtents) VDS_DRIVE_EXTENT **ppExtentArray,
            /* [out] */ __RPC__out LONG *plNumberOfExtents) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetFlags( 
            /* [in] */ ULONG ulFlags) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ClearFlags( 
            /* [in] */ ULONG ulFlags) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetStatus( 
            /* [in] */ VDS_DRIVE_STATUS status) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IVdsDriveVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVdsDrive * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVdsDrive * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVdsDrive * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetProperties )( 
            IVdsDrive * This,
            /* [out] */ __RPC__out VDS_DRIVE_PROP *pDriveProp);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetSubSystem )( 
            IVdsDrive * This,
            /* [out] */ __RPC__deref_out_opt IVdsSubSystem **ppSubSystem);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *QueryExtents )( 
            IVdsDrive * This,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*plNumberOfExtents) VDS_DRIVE_EXTENT **ppExtentArray,
            /* [out] */ __RPC__out LONG *plNumberOfExtents);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetFlags )( 
            IVdsDrive * This,
            /* [in] */ ULONG ulFlags);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ClearFlags )( 
            IVdsDrive * This,
            /* [in] */ ULONG ulFlags);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetStatus )( 
            IVdsDrive * This,
            /* [in] */ VDS_DRIVE_STATUS status);
        
        END_INTERFACE
    } IVdsDriveVtbl;

    interface IVdsDrive
    {
        CONST_VTBL struct IVdsDriveVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVdsDrive_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVdsDrive_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVdsDrive_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVdsDrive_GetProperties(This,pDriveProp)	\
    ( (This)->lpVtbl -> GetProperties(This,pDriveProp) ) 

#define IVdsDrive_GetSubSystem(This,ppSubSystem)	\
    ( (This)->lpVtbl -> GetSubSystem(This,ppSubSystem) ) 

#define IVdsDrive_QueryExtents(This,ppExtentArray,plNumberOfExtents)	\
    ( (This)->lpVtbl -> QueryExtents(This,ppExtentArray,plNumberOfExtents) ) 

#define IVdsDrive_SetFlags(This,ulFlags)	\
    ( (This)->lpVtbl -> SetFlags(This,ulFlags) ) 

#define IVdsDrive_ClearFlags(This,ulFlags)	\
    ( (This)->lpVtbl -> ClearFlags(This,ulFlags) ) 

#define IVdsDrive_SetStatus(This,status)	\
    ( (This)->lpVtbl -> SetStatus(This,status) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVdsDrive_INTERFACE_DEFINED__ */


#ifndef __IVdsLun_INTERFACE_DEFINED__
#define __IVdsLun_INTERFACE_DEFINED__

/* interface IVdsLun */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IVdsLun;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3540a9c7-e60f-4111-a840-8bba6c2c83d8")
    IVdsLun : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetProperties( 
            /* [out] */ __RPC__out VDS_LUN_PROP *pLunProp) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetSubSystem( 
            /* [out] */ __RPC__deref_out_opt IVdsSubSystem **ppSubSystem) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetIdentificationData( 
            /* [out] */ __RPC__out VDS_LUN_INFORMATION *pLunInfo) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE QueryActiveControllers( 
            /* [out] */ __RPC__deref_out_opt IEnumVdsObject **ppEnum) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Extend( 
            /* [in] */ ULONGLONG ullNumberOfBytesToAdd,
            /* [unique][size_is][in] */ __RPC__in_ecount_full_opt(lNumberOfDrives) VDS_OBJECT_ID *pDriveIdArray,
            /* [in] */ LONG lNumberOfDrives,
            /* [out] */ __RPC__deref_out_opt IVdsAsync **ppAsync) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Shrink( 
            /* [in] */ ULONGLONG ullNumberOfBytesToRemove,
            /* [out] */ __RPC__deref_out_opt IVdsAsync **ppAsync) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE QueryPlexes( 
            /* [out] */ __RPC__deref_out_opt IEnumVdsObject **ppEnum) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddPlex( 
            /* [in] */ VDS_OBJECT_ID lunId,
            /* [out] */ __RPC__deref_out_opt IVdsAsync **ppAsync) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE RemovePlex( 
            /* [in] */ VDS_OBJECT_ID plexId,
            /* [out] */ __RPC__deref_out_opt IVdsAsync **ppAsync) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Recover( 
            /* [out] */ __RPC__deref_out_opt IVdsAsync **ppAsync) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetMask( 
            /* [string][in] */ __RPC__in LPWSTR pwszUnmaskingList) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Delete( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AssociateControllers( 
            /* [size_is][unique][in] */ __RPC__in_ecount_full_opt(lNumberOfActiveControllers) VDS_OBJECT_ID *pActiveControllerIdArray,
            /* [in] */ LONG lNumberOfActiveControllers,
            /* [size_is][unique][in] */ __RPC__in_ecount_full_opt(lNumberOfInactiveControllers) VDS_OBJECT_ID *pInactiveControllerIdArray,
            /* [in] */ LONG lNumberOfInactiveControllers) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE QueryHints( 
            /* [out] */ __RPC__out VDS_HINTS *pHints) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ApplyHints( 
            /* [in] */ __RPC__in VDS_HINTS *pHints) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetStatus( 
            /* [in] */ VDS_LUN_STATUS status) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE QueryMaxLunExtendSize( 
            /* [unique][size_is][in] */ __RPC__in_ecount_full_opt(lNumberOfDrives) VDS_OBJECT_ID *pDriveIdArray,
            /* [in] */ LONG lNumberOfDrives,
            /* [out] */ __RPC__out ULONGLONG *pullMaxBytesToBeAdded) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IVdsLunVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVdsLun * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVdsLun * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVdsLun * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetProperties )( 
            IVdsLun * This,
            /* [out] */ __RPC__out VDS_LUN_PROP *pLunProp);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetSubSystem )( 
            IVdsLun * This,
            /* [out] */ __RPC__deref_out_opt IVdsSubSystem **ppSubSystem);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetIdentificationData )( 
            IVdsLun * This,
            /* [out] */ __RPC__out VDS_LUN_INFORMATION *pLunInfo);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *QueryActiveControllers )( 
            IVdsLun * This,
            /* [out] */ __RPC__deref_out_opt IEnumVdsObject **ppEnum);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Extend )( 
            IVdsLun * This,
            /* [in] */ ULONGLONG ullNumberOfBytesToAdd,
            /* [unique][size_is][in] */ __RPC__in_ecount_full_opt(lNumberOfDrives) VDS_OBJECT_ID *pDriveIdArray,
            /* [in] */ LONG lNumberOfDrives,
            /* [out] */ __RPC__deref_out_opt IVdsAsync **ppAsync);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Shrink )( 
            IVdsLun * This,
            /* [in] */ ULONGLONG ullNumberOfBytesToRemove,
            /* [out] */ __RPC__deref_out_opt IVdsAsync **ppAsync);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *QueryPlexes )( 
            IVdsLun * This,
            /* [out] */ __RPC__deref_out_opt IEnumVdsObject **ppEnum);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddPlex )( 
            IVdsLun * This,
            /* [in] */ VDS_OBJECT_ID lunId,
            /* [out] */ __RPC__deref_out_opt IVdsAsync **ppAsync);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *RemovePlex )( 
            IVdsLun * This,
            /* [in] */ VDS_OBJECT_ID plexId,
            /* [out] */ __RPC__deref_out_opt IVdsAsync **ppAsync);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Recover )( 
            IVdsLun * This,
            /* [out] */ __RPC__deref_out_opt IVdsAsync **ppAsync);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetMask )( 
            IVdsLun * This,
            /* [string][in] */ __RPC__in LPWSTR pwszUnmaskingList);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Delete )( 
            IVdsLun * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AssociateControllers )( 
            IVdsLun * This,
            /* [size_is][unique][in] */ __RPC__in_ecount_full_opt(lNumberOfActiveControllers) VDS_OBJECT_ID *pActiveControllerIdArray,
            /* [in] */ LONG lNumberOfActiveControllers,
            /* [size_is][unique][in] */ __RPC__in_ecount_full_opt(lNumberOfInactiveControllers) VDS_OBJECT_ID *pInactiveControllerIdArray,
            /* [in] */ LONG lNumberOfInactiveControllers);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *QueryHints )( 
            IVdsLun * This,
            /* [out] */ __RPC__out VDS_HINTS *pHints);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ApplyHints )( 
            IVdsLun * This,
            /* [in] */ __RPC__in VDS_HINTS *pHints);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetStatus )( 
            IVdsLun * This,
            /* [in] */ VDS_LUN_STATUS status);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *QueryMaxLunExtendSize )( 
            IVdsLun * This,
            /* [unique][size_is][in] */ __RPC__in_ecount_full_opt(lNumberOfDrives) VDS_OBJECT_ID *pDriveIdArray,
            /* [in] */ LONG lNumberOfDrives,
            /* [out] */ __RPC__out ULONGLONG *pullMaxBytesToBeAdded);
        
        END_INTERFACE
    } IVdsLunVtbl;

    interface IVdsLun
    {
        CONST_VTBL struct IVdsLunVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVdsLun_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVdsLun_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVdsLun_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVdsLun_GetProperties(This,pLunProp)	\
    ( (This)->lpVtbl -> GetProperties(This,pLunProp) ) 

#define IVdsLun_GetSubSystem(This,ppSubSystem)	\
    ( (This)->lpVtbl -> GetSubSystem(This,ppSubSystem) ) 

#define IVdsLun_GetIdentificationData(This,pLunInfo)	\
    ( (This)->lpVtbl -> GetIdentificationData(This,pLunInfo) ) 

#define IVdsLun_QueryActiveControllers(This,ppEnum)	\
    ( (This)->lpVtbl -> QueryActiveControllers(This,ppEnum) ) 

#define IVdsLun_Extend(This,ullNumberOfBytesToAdd,pDriveIdArray,lNumberOfDrives,ppAsync)	\
    ( (This)->lpVtbl -> Extend(This,ullNumberOfBytesToAdd,pDriveIdArray,lNumberOfDrives,ppAsync) ) 

#define IVdsLun_Shrink(This,ullNumberOfBytesToRemove,ppAsync)	\
    ( (This)->lpVtbl -> Shrink(This,ullNumberOfBytesToRemove,ppAsync) ) 

#define IVdsLun_QueryPlexes(This,ppEnum)	\
    ( (This)->lpVtbl -> QueryPlexes(This,ppEnum) ) 

#define IVdsLun_AddPlex(This,lunId,ppAsync)	\
    ( (This)->lpVtbl -> AddPlex(This,lunId,ppAsync) ) 

#define IVdsLun_RemovePlex(This,plexId,ppAsync)	\
    ( (This)->lpVtbl -> RemovePlex(This,plexId,ppAsync) ) 

#define IVdsLun_Recover(This,ppAsync)	\
    ( (This)->lpVtbl -> Recover(This,ppAsync) ) 

#define IVdsLun_SetMask(This,pwszUnmaskingList)	\
    ( (This)->lpVtbl -> SetMask(This,pwszUnmaskingList) ) 

#define IVdsLun_Delete(This)	\
    ( (This)->lpVtbl -> Delete(This) ) 

#define IVdsLun_AssociateControllers(This,pActiveControllerIdArray,lNumberOfActiveControllers,pInactiveControllerIdArray,lNumberOfInactiveControllers)	\
    ( (This)->lpVtbl -> AssociateControllers(This,pActiveControllerIdArray,lNumberOfActiveControllers,pInactiveControllerIdArray,lNumberOfInactiveControllers) ) 

#define IVdsLun_QueryHints(This,pHints)	\
    ( (This)->lpVtbl -> QueryHints(This,pHints) ) 

#define IVdsLun_ApplyHints(This,pHints)	\
    ( (This)->lpVtbl -> ApplyHints(This,pHints) ) 

#define IVdsLun_SetStatus(This,status)	\
    ( (This)->lpVtbl -> SetStatus(This,status) ) 

#define IVdsLun_QueryMaxLunExtendSize(This,pDriveIdArray,lNumberOfDrives,pullMaxBytesToBeAdded)	\
    ( (This)->lpVtbl -> QueryMaxLunExtendSize(This,pDriveIdArray,lNumberOfDrives,pullMaxBytesToBeAdded) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVdsLun_INTERFACE_DEFINED__ */


#ifndef __IVdsLunNaming_INTERFACE_DEFINED__
#define __IVdsLunNaming_INTERFACE_DEFINED__

/* interface IVdsLunNaming */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IVdsLunNaming;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("907504cb-6b4e-4d88-a34d-17ba661fbb06")
    IVdsLunNaming : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetFriendlyName( 
            /* [string][in] */ __RPC__in LPWSTR pwszFriendlyName) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IVdsLunNamingVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVdsLunNaming * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVdsLunNaming * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVdsLunNaming * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetFriendlyName )( 
            IVdsLunNaming * This,
            /* [string][in] */ __RPC__in LPWSTR pwszFriendlyName);
        
        END_INTERFACE
    } IVdsLunNamingVtbl;

    interface IVdsLunNaming
    {
        CONST_VTBL struct IVdsLunNamingVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVdsLunNaming_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVdsLunNaming_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVdsLunNaming_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVdsLunNaming_SetFriendlyName(This,pwszFriendlyName)	\
    ( (This)->lpVtbl -> SetFriendlyName(This,pwszFriendlyName) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVdsLunNaming_INTERFACE_DEFINED__ */


#ifndef __IVdsLunControllerPorts_INTERFACE_DEFINED__
#define __IVdsLunControllerPorts_INTERFACE_DEFINED__

/* interface IVdsLunControllerPorts */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IVdsLunControllerPorts;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("451fe266-da6d-406a-bb60-82e534f85aeb")
    IVdsLunControllerPorts : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AssociateControllerPorts( 
            /* [size_is][unique][in] */ __RPC__in_ecount_full_opt(lNumberOfActiveControllerPorts) VDS_OBJECT_ID *pActiveControllerPortIdArray,
            /* [in] */ LONG lNumberOfActiveControllerPorts,
            /* [size_is][unique][in] */ __RPC__in_ecount_full_opt(lNumberOfInactiveControllerPorts) VDS_OBJECT_ID *pInactiveControllerPortIdArray,
            /* [in] */ LONG lNumberOfInactiveControllerPorts) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE QueryActiveControllerPorts( 
            /* [out] */ __RPC__deref_out_opt IEnumVdsObject **ppEnum) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IVdsLunControllerPortsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVdsLunControllerPorts * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVdsLunControllerPorts * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVdsLunControllerPorts * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AssociateControllerPorts )( 
            IVdsLunControllerPorts * This,
            /* [size_is][unique][in] */ __RPC__in_ecount_full_opt(lNumberOfActiveControllerPorts) VDS_OBJECT_ID *pActiveControllerPortIdArray,
            /* [in] */ LONG lNumberOfActiveControllerPorts,
            /* [size_is][unique][in] */ __RPC__in_ecount_full_opt(lNumberOfInactiveControllerPorts) VDS_OBJECT_ID *pInactiveControllerPortIdArray,
            /* [in] */ LONG lNumberOfInactiveControllerPorts);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *QueryActiveControllerPorts )( 
            IVdsLunControllerPorts * This,
            /* [out] */ __RPC__deref_out_opt IEnumVdsObject **ppEnum);
        
        END_INTERFACE
    } IVdsLunControllerPortsVtbl;

    interface IVdsLunControllerPorts
    {
        CONST_VTBL struct IVdsLunControllerPortsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVdsLunControllerPorts_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVdsLunControllerPorts_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVdsLunControllerPorts_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVdsLunControllerPorts_AssociateControllerPorts(This,pActiveControllerPortIdArray,lNumberOfActiveControllerPorts,pInactiveControllerPortIdArray,lNumberOfInactiveControllerPorts)	\
    ( (This)->lpVtbl -> AssociateControllerPorts(This,pActiveControllerPortIdArray,lNumberOfActiveControllerPorts,pInactiveControllerPortIdArray,lNumberOfInactiveControllerPorts) ) 

#define IVdsLunControllerPorts_QueryActiveControllerPorts(This,ppEnum)	\
    ( (This)->lpVtbl -> QueryActiveControllerPorts(This,ppEnum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVdsLunControllerPorts_INTERFACE_DEFINED__ */


#ifndef __IVdsLunMpio_INTERFACE_DEFINED__
#define __IVdsLunMpio_INTERFACE_DEFINED__

/* interface IVdsLunMpio */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IVdsLunMpio;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7c5fbae3-333a-48a1-a982-33c15788cde3")
    IVdsLunMpio : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetPathInfo( 
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*plNumberOfPaths) VDS_PATH_INFO **ppPaths,
            /* [out] */ __RPC__out LONG *plNumberOfPaths) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetLoadBalancePolicy( 
            /* [out] */ __RPC__out VDS_LOADBALANCE_POLICY_ENUM *pPolicy,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*plNumberOfPaths) VDS_PATH_POLICY **ppPaths,
            /* [out] */ __RPC__out LONG *plNumberOfPaths) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetLoadBalancePolicy( 
            /* [in] */ VDS_LOADBALANCE_POLICY_ENUM policy,
            /* [size_is][unique][in] */ __RPC__in_ecount_full_opt(lNumberOfPaths) VDS_PATH_POLICY *pPaths,
            /* [in] */ LONG lNumberOfPaths) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetSupportedLbPolicies( 
            /* [out] */ __RPC__out ULONG *pulLbFlags) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IVdsLunMpioVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVdsLunMpio * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVdsLunMpio * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVdsLunMpio * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPathInfo )( 
            IVdsLunMpio * This,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*plNumberOfPaths) VDS_PATH_INFO **ppPaths,
            /* [out] */ __RPC__out LONG *plNumberOfPaths);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetLoadBalancePolicy )( 
            IVdsLunMpio * This,
            /* [out] */ __RPC__out VDS_LOADBALANCE_POLICY_ENUM *pPolicy,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*plNumberOfPaths) VDS_PATH_POLICY **ppPaths,
            /* [out] */ __RPC__out LONG *plNumberOfPaths);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetLoadBalancePolicy )( 
            IVdsLunMpio * This,
            /* [in] */ VDS_LOADBALANCE_POLICY_ENUM policy,
            /* [size_is][unique][in] */ __RPC__in_ecount_full_opt(lNumberOfPaths) VDS_PATH_POLICY *pPaths,
            /* [in] */ LONG lNumberOfPaths);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetSupportedLbPolicies )( 
            IVdsLunMpio * This,
            /* [out] */ __RPC__out ULONG *pulLbFlags);
        
        END_INTERFACE
    } IVdsLunMpioVtbl;

    interface IVdsLunMpio
    {
        CONST_VTBL struct IVdsLunMpioVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVdsLunMpio_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVdsLunMpio_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVdsLunMpio_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVdsLunMpio_GetPathInfo(This,ppPaths,plNumberOfPaths)	\
    ( (This)->lpVtbl -> GetPathInfo(This,ppPaths,plNumberOfPaths) ) 

#define IVdsLunMpio_GetLoadBalancePolicy(This,pPolicy,ppPaths,plNumberOfPaths)	\
    ( (This)->lpVtbl -> GetLoadBalancePolicy(This,pPolicy,ppPaths,plNumberOfPaths) ) 

#define IVdsLunMpio_SetLoadBalancePolicy(This,policy,pPaths,lNumberOfPaths)	\
    ( (This)->lpVtbl -> SetLoadBalancePolicy(This,policy,pPaths,lNumberOfPaths) ) 

#define IVdsLunMpio_GetSupportedLbPolicies(This,pulLbFlags)	\
    ( (This)->lpVtbl -> GetSupportedLbPolicies(This,pulLbFlags) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVdsLunMpio_INTERFACE_DEFINED__ */


#ifndef __IVdsLunIscsi_INTERFACE_DEFINED__
#define __IVdsLunIscsi_INTERFACE_DEFINED__

/* interface IVdsLunIscsi */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IVdsLunIscsi;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0d7c1e64-b59b-45ae-b86a-2c2cc6a42067")
    IVdsLunIscsi : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AssociateTargets( 
            /* [size_is][unique][in] */ __RPC__in_ecount_full_opt(lNumberOfTargets) VDS_OBJECT_ID *pTargetIdArray,
            /* [in] */ LONG lNumberOfTargets) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE QueryAssociatedTargets( 
            /* [out] */ __RPC__deref_out_opt IEnumVdsObject **ppEnum) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IVdsLunIscsiVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVdsLunIscsi * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVdsLunIscsi * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVdsLunIscsi * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AssociateTargets )( 
            IVdsLunIscsi * This,
            /* [size_is][unique][in] */ __RPC__in_ecount_full_opt(lNumberOfTargets) VDS_OBJECT_ID *pTargetIdArray,
            /* [in] */ LONG lNumberOfTargets);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *QueryAssociatedTargets )( 
            IVdsLunIscsi * This,
            /* [out] */ __RPC__deref_out_opt IEnumVdsObject **ppEnum);
        
        END_INTERFACE
    } IVdsLunIscsiVtbl;

    interface IVdsLunIscsi
    {
        CONST_VTBL struct IVdsLunIscsiVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVdsLunIscsi_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVdsLunIscsi_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVdsLunIscsi_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVdsLunIscsi_AssociateTargets(This,pTargetIdArray,lNumberOfTargets)	\
    ( (This)->lpVtbl -> AssociateTargets(This,pTargetIdArray,lNumberOfTargets) ) 

#define IVdsLunIscsi_QueryAssociatedTargets(This,ppEnum)	\
    ( (This)->lpVtbl -> QueryAssociatedTargets(This,ppEnum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVdsLunIscsi_INTERFACE_DEFINED__ */


#ifndef __IVdsLunPlex_INTERFACE_DEFINED__
#define __IVdsLunPlex_INTERFACE_DEFINED__

/* interface IVdsLunPlex */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IVdsLunPlex;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0ee1a790-5d2e-4abb-8c99-c481e8be2138")
    IVdsLunPlex : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetProperties( 
            /* [out] */ __RPC__out VDS_LUN_PLEX_PROP *pPlexProp) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetLun( 
            /* [out] */ __RPC__deref_out_opt IVdsLun **ppLun) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE QueryExtents( 
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*plNumberOfExtents) VDS_DRIVE_EXTENT **ppExtentArray,
            /* [out] */ __RPC__out LONG *plNumberOfExtents) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE QueryHints( 
            /* [out] */ __RPC__out VDS_HINTS *pHints) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ApplyHints( 
            /* [in] */ __RPC__in VDS_HINTS *pHints) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IVdsLunPlexVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVdsLunPlex * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVdsLunPlex * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVdsLunPlex * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetProperties )( 
            IVdsLunPlex * This,
            /* [out] */ __RPC__out VDS_LUN_PLEX_PROP *pPlexProp);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetLun )( 
            IVdsLunPlex * This,
            /* [out] */ __RPC__deref_out_opt IVdsLun **ppLun);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *QueryExtents )( 
            IVdsLunPlex * This,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*plNumberOfExtents) VDS_DRIVE_EXTENT **ppExtentArray,
            /* [out] */ __RPC__out LONG *plNumberOfExtents);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *QueryHints )( 
            IVdsLunPlex * This,
            /* [out] */ __RPC__out VDS_HINTS *pHints);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ApplyHints )( 
            IVdsLunPlex * This,
            /* [in] */ __RPC__in VDS_HINTS *pHints);
        
        END_INTERFACE
    } IVdsLunPlexVtbl;

    interface IVdsLunPlex
    {
        CONST_VTBL struct IVdsLunPlexVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVdsLunPlex_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVdsLunPlex_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVdsLunPlex_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVdsLunPlex_GetProperties(This,pPlexProp)	\
    ( (This)->lpVtbl -> GetProperties(This,pPlexProp) ) 

#define IVdsLunPlex_GetLun(This,ppLun)	\
    ( (This)->lpVtbl -> GetLun(This,ppLun) ) 

#define IVdsLunPlex_QueryExtents(This,ppExtentArray,plNumberOfExtents)	\
    ( (This)->lpVtbl -> QueryExtents(This,ppExtentArray,plNumberOfExtents) ) 

#define IVdsLunPlex_QueryHints(This,pHints)	\
    ( (This)->lpVtbl -> QueryHints(This,pHints) ) 

#define IVdsLunPlex_ApplyHints(This,pHints)	\
    ( (This)->lpVtbl -> ApplyHints(This,pHints) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVdsLunPlex_INTERFACE_DEFINED__ */


#ifndef __IVdsIscsiPortal_INTERFACE_DEFINED__
#define __IVdsIscsiPortal_INTERFACE_DEFINED__

/* interface IVdsIscsiPortal */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IVdsIscsiPortal;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7fa1499d-ec85-4a8a-a47b-ff69201fcd34")
    IVdsIscsiPortal : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetProperties( 
            /* [out] */ __RPC__out VDS_ISCSI_PORTAL_PROP *pPortalProp) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetSubSystem( 
            /* [out] */ __RPC__deref_out_opt IVdsSubSystem **ppSubSystem) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE QueryAssociatedPortalGroups( 
            /* [out] */ __RPC__deref_out_opt IEnumVdsObject **ppEnum) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetStatus( 
            /* [in] */ VDS_ISCSI_PORTAL_STATUS status) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetIpsecTunnelAddress( 
            /* [in] */ __RPC__in VDS_IPADDRESS *pTunnelAddress,
            /* [in] */ __RPC__in VDS_IPADDRESS *pDestinationAddress) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetIpsecSecurity( 
            /* [in] */ __RPC__in VDS_IPADDRESS *pInitiatorPortalAddress,
            /* [out] */ __RPC__out ULONGLONG *pullSecurityFlags) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetIpsecSecurity( 
            /* [in] */ __RPC__in VDS_IPADDRESS *pInitiatorPortalAddress,
            /* [in] */ ULONGLONG ullSecurityFlags,
            /* [unique][in] */ __RPC__in_opt VDS_ISCSI_IPSEC_KEY *pIpsecKey) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IVdsIscsiPortalVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVdsIscsiPortal * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVdsIscsiPortal * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVdsIscsiPortal * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetProperties )( 
            IVdsIscsiPortal * This,
            /* [out] */ __RPC__out VDS_ISCSI_PORTAL_PROP *pPortalProp);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetSubSystem )( 
            IVdsIscsiPortal * This,
            /* [out] */ __RPC__deref_out_opt IVdsSubSystem **ppSubSystem);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *QueryAssociatedPortalGroups )( 
            IVdsIscsiPortal * This,
            /* [out] */ __RPC__deref_out_opt IEnumVdsObject **ppEnum);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetStatus )( 
            IVdsIscsiPortal * This,
            /* [in] */ VDS_ISCSI_PORTAL_STATUS status);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetIpsecTunnelAddress )( 
            IVdsIscsiPortal * This,
            /* [in] */ __RPC__in VDS_IPADDRESS *pTunnelAddress,
            /* [in] */ __RPC__in VDS_IPADDRESS *pDestinationAddress);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetIpsecSecurity )( 
            IVdsIscsiPortal * This,
            /* [in] */ __RPC__in VDS_IPADDRESS *pInitiatorPortalAddress,
            /* [out] */ __RPC__out ULONGLONG *pullSecurityFlags);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetIpsecSecurity )( 
            IVdsIscsiPortal * This,
            /* [in] */ __RPC__in VDS_IPADDRESS *pInitiatorPortalAddress,
            /* [in] */ ULONGLONG ullSecurityFlags,
            /* [unique][in] */ __RPC__in_opt VDS_ISCSI_IPSEC_KEY *pIpsecKey);
        
        END_INTERFACE
    } IVdsIscsiPortalVtbl;

    interface IVdsIscsiPortal
    {
        CONST_VTBL struct IVdsIscsiPortalVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVdsIscsiPortal_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVdsIscsiPortal_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVdsIscsiPortal_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVdsIscsiPortal_GetProperties(This,pPortalProp)	\
    ( (This)->lpVtbl -> GetProperties(This,pPortalProp) ) 

#define IVdsIscsiPortal_GetSubSystem(This,ppSubSystem)	\
    ( (This)->lpVtbl -> GetSubSystem(This,ppSubSystem) ) 

#define IVdsIscsiPortal_QueryAssociatedPortalGroups(This,ppEnum)	\
    ( (This)->lpVtbl -> QueryAssociatedPortalGroups(This,ppEnum) ) 

#define IVdsIscsiPortal_SetStatus(This,status)	\
    ( (This)->lpVtbl -> SetStatus(This,status) ) 

#define IVdsIscsiPortal_SetIpsecTunnelAddress(This,pTunnelAddress,pDestinationAddress)	\
    ( (This)->lpVtbl -> SetIpsecTunnelAddress(This,pTunnelAddress,pDestinationAddress) ) 

#define IVdsIscsiPortal_GetIpsecSecurity(This,pInitiatorPortalAddress,pullSecurityFlags)	\
    ( (This)->lpVtbl -> GetIpsecSecurity(This,pInitiatorPortalAddress,pullSecurityFlags) ) 

#define IVdsIscsiPortal_SetIpsecSecurity(This,pInitiatorPortalAddress,ullSecurityFlags,pIpsecKey)	\
    ( (This)->lpVtbl -> SetIpsecSecurity(This,pInitiatorPortalAddress,ullSecurityFlags,pIpsecKey) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVdsIscsiPortal_INTERFACE_DEFINED__ */


#ifndef __IVdsIscsiTarget_INTERFACE_DEFINED__
#define __IVdsIscsiTarget_INTERFACE_DEFINED__

/* interface IVdsIscsiTarget */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IVdsIscsiTarget;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("aa8f5055-83e5-4bcc-aa73-19851a36a849")
    IVdsIscsiTarget : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetProperties( 
            /* [out] */ __RPC__out VDS_ISCSI_TARGET_PROP *pTargetProp) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetSubSystem( 
            /* [out] */ __RPC__deref_out_opt IVdsSubSystem **ppSubSystem) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE QueryPortalGroups( 
            /* [out] */ __RPC__deref_out_opt IEnumVdsObject **ppEnum) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE QueryAssociatedLuns( 
            /* [out] */ __RPC__deref_out_opt IEnumVdsObject **ppEnum) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreatePortalGroup( 
            /* [out] */ __RPC__deref_out_opt IVdsAsync **ppAsync) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Delete( 
            /* [out] */ __RPC__deref_out_opt IVdsAsync **ppAsync) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetFriendlyName( 
            /* [string][in] */ __RPC__in LPWSTR pwszFriendlyName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetSharedSecret( 
            /* [unique][in] */ __RPC__in_opt VDS_ISCSI_SHARED_SECRET *pTargetSharedSecret,
            /* [string][unique][in] */ __RPC__in_opt LPWSTR pwszInitiatorName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE RememberInitiatorSharedSecret( 
            /* [string][in] */ __RPC__in LPWSTR pwszInitiatorName,
            /* [unique][in] */ __RPC__in_opt VDS_ISCSI_SHARED_SECRET *pInitiatorSharedSecret) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetConnectedInitiators( 
            /* [size_is][size_is][string][out] */ __RPC__deref_out_ecount_full_opt_string(*plNumberOfInitiators) LPWSTR **pppwszInitiatorList,
            /* [out] */ __RPC__out LONG *plNumberOfInitiators) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IVdsIscsiTargetVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVdsIscsiTarget * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVdsIscsiTarget * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVdsIscsiTarget * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetProperties )( 
            IVdsIscsiTarget * This,
            /* [out] */ __RPC__out VDS_ISCSI_TARGET_PROP *pTargetProp);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetSubSystem )( 
            IVdsIscsiTarget * This,
            /* [out] */ __RPC__deref_out_opt IVdsSubSystem **ppSubSystem);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *QueryPortalGroups )( 
            IVdsIscsiTarget * This,
            /* [out] */ __RPC__deref_out_opt IEnumVdsObject **ppEnum);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *QueryAssociatedLuns )( 
            IVdsIscsiTarget * This,
            /* [out] */ __RPC__deref_out_opt IEnumVdsObject **ppEnum);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreatePortalGroup )( 
            IVdsIscsiTarget * This,
            /* [out] */ __RPC__deref_out_opt IVdsAsync **ppAsync);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Delete )( 
            IVdsIscsiTarget * This,
            /* [out] */ __RPC__deref_out_opt IVdsAsync **ppAsync);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetFriendlyName )( 
            IVdsIscsiTarget * This,
            /* [string][in] */ __RPC__in LPWSTR pwszFriendlyName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetSharedSecret )( 
            IVdsIscsiTarget * This,
            /* [unique][in] */ __RPC__in_opt VDS_ISCSI_SHARED_SECRET *pTargetSharedSecret,
            /* [string][unique][in] */ __RPC__in_opt LPWSTR pwszInitiatorName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *RememberInitiatorSharedSecret )( 
            IVdsIscsiTarget * This,
            /* [string][in] */ __RPC__in LPWSTR pwszInitiatorName,
            /* [unique][in] */ __RPC__in_opt VDS_ISCSI_SHARED_SECRET *pInitiatorSharedSecret);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetConnectedInitiators )( 
            IVdsIscsiTarget * This,
            /* [size_is][size_is][string][out] */ __RPC__deref_out_ecount_full_opt_string(*plNumberOfInitiators) LPWSTR **pppwszInitiatorList,
            /* [out] */ __RPC__out LONG *plNumberOfInitiators);
        
        END_INTERFACE
    } IVdsIscsiTargetVtbl;

    interface IVdsIscsiTarget
    {
        CONST_VTBL struct IVdsIscsiTargetVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVdsIscsiTarget_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVdsIscsiTarget_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVdsIscsiTarget_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVdsIscsiTarget_GetProperties(This,pTargetProp)	\
    ( (This)->lpVtbl -> GetProperties(This,pTargetProp) ) 

#define IVdsIscsiTarget_GetSubSystem(This,ppSubSystem)	\
    ( (This)->lpVtbl -> GetSubSystem(This,ppSubSystem) ) 

#define IVdsIscsiTarget_QueryPortalGroups(This,ppEnum)	\
    ( (This)->lpVtbl -> QueryPortalGroups(This,ppEnum) ) 

#define IVdsIscsiTarget_QueryAssociatedLuns(This,ppEnum)	\
    ( (This)->lpVtbl -> QueryAssociatedLuns(This,ppEnum) ) 

#define IVdsIscsiTarget_CreatePortalGroup(This,ppAsync)	\
    ( (This)->lpVtbl -> CreatePortalGroup(This,ppAsync) ) 

#define IVdsIscsiTarget_Delete(This,ppAsync)	\
    ( (This)->lpVtbl -> Delete(This,ppAsync) ) 

#define IVdsIscsiTarget_SetFriendlyName(This,pwszFriendlyName)	\
    ( (This)->lpVtbl -> SetFriendlyName(This,pwszFriendlyName) ) 

#define IVdsIscsiTarget_SetSharedSecret(This,pTargetSharedSecret,pwszInitiatorName)	\
    ( (This)->lpVtbl -> SetSharedSecret(This,pTargetSharedSecret,pwszInitiatorName) ) 

#define IVdsIscsiTarget_RememberInitiatorSharedSecret(This,pwszInitiatorName,pInitiatorSharedSecret)	\
    ( (This)->lpVtbl -> RememberInitiatorSharedSecret(This,pwszInitiatorName,pInitiatorSharedSecret) ) 

#define IVdsIscsiTarget_GetConnectedInitiators(This,pppwszInitiatorList,plNumberOfInitiators)	\
    ( (This)->lpVtbl -> GetConnectedInitiators(This,pppwszInitiatorList,plNumberOfInitiators) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVdsIscsiTarget_INTERFACE_DEFINED__ */


#ifndef __IVdsIscsiPortalGroup_INTERFACE_DEFINED__
#define __IVdsIscsiPortalGroup_INTERFACE_DEFINED__

/* interface IVdsIscsiPortalGroup */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IVdsIscsiPortalGroup;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("fef5f89d-a3dd-4b36-bf28-e7dde045c593")
    IVdsIscsiPortalGroup : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetProperties( 
            /* [out] */ __RPC__out VDS_ISCSI_PORTALGROUP_PROP *pPortalGroupProp) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetTarget( 
            /* [out] */ __RPC__deref_out_opt IVdsIscsiTarget **ppTarget) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE QueryAssociatedPortals( 
            /* [out] */ __RPC__deref_out_opt IEnumVdsObject **ppEnum) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddPortal( 
            /* [in] */ VDS_OBJECT_ID portalId,
            /* [out] */ __RPC__deref_out_opt IVdsAsync **ppAsync) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE RemovePortal( 
            /* [in] */ VDS_OBJECT_ID portalId,
            /* [out] */ __RPC__deref_out_opt IVdsAsync **ppAsync) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Delete( 
            /* [out] */ __RPC__deref_out_opt IVdsAsync **ppAsync) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IVdsIscsiPortalGroupVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVdsIscsiPortalGroup * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVdsIscsiPortalGroup * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVdsIscsiPortalGroup * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetProperties )( 
            IVdsIscsiPortalGroup * This,
            /* [out] */ __RPC__out VDS_ISCSI_PORTALGROUP_PROP *pPortalGroupProp);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetTarget )( 
            IVdsIscsiPortalGroup * This,
            /* [out] */ __RPC__deref_out_opt IVdsIscsiTarget **ppTarget);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *QueryAssociatedPortals )( 
            IVdsIscsiPortalGroup * This,
            /* [out] */ __RPC__deref_out_opt IEnumVdsObject **ppEnum);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddPortal )( 
            IVdsIscsiPortalGroup * This,
            /* [in] */ VDS_OBJECT_ID portalId,
            /* [out] */ __RPC__deref_out_opt IVdsAsync **ppAsync);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *RemovePortal )( 
            IVdsIscsiPortalGroup * This,
            /* [in] */ VDS_OBJECT_ID portalId,
            /* [out] */ __RPC__deref_out_opt IVdsAsync **ppAsync);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Delete )( 
            IVdsIscsiPortalGroup * This,
            /* [out] */ __RPC__deref_out_opt IVdsAsync **ppAsync);
        
        END_INTERFACE
    } IVdsIscsiPortalGroupVtbl;

    interface IVdsIscsiPortalGroup
    {
        CONST_VTBL struct IVdsIscsiPortalGroupVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVdsIscsiPortalGroup_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVdsIscsiPortalGroup_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVdsIscsiPortalGroup_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVdsIscsiPortalGroup_GetProperties(This,pPortalGroupProp)	\
    ( (This)->lpVtbl -> GetProperties(This,pPortalGroupProp) ) 

#define IVdsIscsiPortalGroup_GetTarget(This,ppTarget)	\
    ( (This)->lpVtbl -> GetTarget(This,ppTarget) ) 

#define IVdsIscsiPortalGroup_QueryAssociatedPortals(This,ppEnum)	\
    ( (This)->lpVtbl -> QueryAssociatedPortals(This,ppEnum) ) 

#define IVdsIscsiPortalGroup_AddPortal(This,portalId,ppAsync)	\
    ( (This)->lpVtbl -> AddPortal(This,portalId,ppAsync) ) 

#define IVdsIscsiPortalGroup_RemovePortal(This,portalId,ppAsync)	\
    ( (This)->lpVtbl -> RemovePortal(This,portalId,ppAsync) ) 

#define IVdsIscsiPortalGroup_Delete(This,ppAsync)	\
    ( (This)->lpVtbl -> Delete(This,ppAsync) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVdsIscsiPortalGroup_INTERFACE_DEFINED__ */


#ifndef __IVdsMaintenance_INTERFACE_DEFINED__
#define __IVdsMaintenance_INTERFACE_DEFINED__

/* interface IVdsMaintenance */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IVdsMaintenance;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("daebeef3-8523-47ed-a2b9-05cecce2a1ae")
    IVdsMaintenance : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE StartMaintenance( 
            /* [in] */ VDS_MAINTENANCE_OPERATION operation) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE StopMaintenance( 
            /* [in] */ VDS_MAINTENANCE_OPERATION operation) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PulseMaintenance( 
            /* [in] */ VDS_MAINTENANCE_OPERATION operation,
            /* [in] */ ULONG ulCount) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IVdsMaintenanceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVdsMaintenance * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVdsMaintenance * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVdsMaintenance * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *StartMaintenance )( 
            IVdsMaintenance * This,
            /* [in] */ VDS_MAINTENANCE_OPERATION operation);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *StopMaintenance )( 
            IVdsMaintenance * This,
            /* [in] */ VDS_MAINTENANCE_OPERATION operation);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *PulseMaintenance )( 
            IVdsMaintenance * This,
            /* [in] */ VDS_MAINTENANCE_OPERATION operation,
            /* [in] */ ULONG ulCount);
        
        END_INTERFACE
    } IVdsMaintenanceVtbl;

    interface IVdsMaintenance
    {
        CONST_VTBL struct IVdsMaintenanceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVdsMaintenance_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVdsMaintenance_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVdsMaintenance_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVdsMaintenance_StartMaintenance(This,operation)	\
    ( (This)->lpVtbl -> StartMaintenance(This,operation) ) 

#define IVdsMaintenance_StopMaintenance(This,operation)	\
    ( (This)->lpVtbl -> StopMaintenance(This,operation) ) 

#define IVdsMaintenance_PulseMaintenance(This,operation,ulCount)	\
    ( (This)->lpVtbl -> PulseMaintenance(This,operation,ulCount) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVdsMaintenance_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_vds_0000_0036 */
/* [local] */ 
















// {9C38ED61-D565-4728-AEEE-C80952F0ECDE}
DEFINE_GUID(CLSID_VdsLoader, 
 0X9C38ED61,0xD565,0x4728,0xAE,0xEE,0xC8,0x09,0x52,0xF0,0xEC,0xDE);

// {7D1933CB-86F6-4A98-8628-01BE94C9A575}
DEFINE_GUID(CLSID_VdsService, 
 0x7D1933CB,0x86F6,0x4A98,0x86,0x28,0x01,0xBE,0x94,0xC9,0xA5,0x75);

#define	MAX_FS_NAME_SIZE	( 8 )

#define	MAX_FS_FORMAT_SUPPORT_NAME_SIZE	( 32 )

#define	MAX_FS_ALLOWED_CLUSTER_SIZES_SIZE	( 32 )

typedef 
enum _VDS_SERVICE_FLAG
    {	VDS_SVF_SUPPORT_DYNAMIC	= 0x1,
	VDS_SVF_SUPPORT_FAULT_TOLERANT	= 0x2,
	VDS_SVF_SUPPORT_GPT	= 0x4,
	VDS_SVF_SUPPORT_DYNAMIC_1394	= 0x8,
	VDS_SVF_CLUSTER_SERVICE_CONFIGURED	= 0x10,
	VDS_SVF_AUTO_MOUNT_OFF	= 0x20,
	VDS_SVF_OS_UNINSTALL_VALID	= 0x40,
	VDS_SVF_EFI	= 0x80
    } 	VDS_SERVICE_FLAG;

typedef struct _VDS_SERVICE_PROP
    {
    LPWSTR pwszVersion;
    ULONG ulFlags;
    } 	VDS_SERVICE_PROP;

typedef struct VDS_REPARSE_POINT_PROP
    {
    VDS_OBJECT_ID SourceVolumeId;
    LPWSTR pwszPath;
    } 	VDS_REPARSE_POINT_PROP;

typedef struct VDS_REPARSE_POINT_PROP *PVDS_REPARSE_POINT_PROP;

typedef 
enum _VDS_DRIVE_LETTER_FLAG
    {	VDS_DLF_NON_PERSISTENT	= 0x1
    } 	VDS_DRIVE_LETTER_FLAG;

typedef struct _VDS_DRIVE_LETTER_PROP
    {
    WCHAR wcLetter;
    VDS_OBJECT_ID volumeId;
    ULONG ulFlags;
    BOOL bUsed;
    } 	VDS_DRIVE_LETTER_PROP;

typedef struct _VDS_DRIVE_LETTER_PROP *PVDS_DRIVE_LETTER_PROP;

typedef 
enum _VDS_FILE_SYSTEM_FLAG
    {	VDS_FSF_SUPPORT_FORMAT	= 0x1,
	VDS_FSF_SUPPORT_QUICK_FORMAT	= 0x2,
	VDS_FSF_SUPPORT_COMPRESS	= 0x4,
	VDS_FSF_SUPPORT_SPECIFY_LABEL	= 0x8,
	VDS_FSF_SUPPORT_MOUNT_POINT	= 0x10,
	VDS_FSF_SUPPORT_REMOVABLE_MEDIA	= 0x20,
	VDS_FSF_SUPPORT_EXTEND	= 0x40,
	VDS_FSF_ALLOCATION_UNIT_512	= 0x10000,
	VDS_FSF_ALLOCATION_UNIT_1K	= 0x20000,
	VDS_FSF_ALLOCATION_UNIT_2K	= 0x40000,
	VDS_FSF_ALLOCATION_UNIT_4K	= 0x80000,
	VDS_FSF_ALLOCATION_UNIT_8K	= 0x100000,
	VDS_FSF_ALLOCATION_UNIT_16K	= 0x200000,
	VDS_FSF_ALLOCATION_UNIT_32K	= 0x400000,
	VDS_FSF_ALLOCATION_UNIT_64K	= 0x800000,
	VDS_FSF_ALLOCATION_UNIT_128K	= 0x1000000,
	VDS_FSF_ALLOCATION_UNIT_256K	= 0x2000000
    } 	VDS_FILE_SYSTEM_FLAG;

typedef struct _VDS_FILE_SYSTEM_TYPE_PROP
    {
    VDS_FILE_SYSTEM_TYPE type;
    WCHAR wszName[ 8 ];
    ULONG ulFlags;
    ULONG ulCompressionFlags;
    ULONG ulMaxLableLength;
    LPWSTR pwszIllegalLabelCharSet;
    } 	VDS_FILE_SYSTEM_TYPE_PROP;

typedef struct _VDS_FILE_SYSTEM_TYPE_PROP *PVDS_FILE_SYSTEM_TYPE_PROP;

typedef 
enum _VDS_FILE_SYSTEM_FORMAT_SUPPORT_FLAG
    {	VDS_FSS_DEFAULT	= 0x1,
	VDS_FSS_PREVIOUS_REVISION	= 0x2,
	VDS_FSS_RECOMMENDED	= 0x4
    } 	VDS_FILE_SYSTEM_FORMAT_SUPPORT_FLAG;

typedef struct _VDS_FILE_SYSTEM_FORMAT_SUPPORT_PROP
    {
    ULONG ulFlags;
    USHORT usRevision;
    ULONG ulDefaultUnitAllocationSize;
    ULONG rgulAllowedUnitAllocationSizes[ 32 ];
    WCHAR wszName[ 32 ];
    } 	VDS_FILE_SYSTEM_FORMAT_SUPPORT_PROP;

typedef struct _VDS_FILE_SYSTEM_FORMAT_SUPPORT_PROP *PVDS_FILE_SYSTEM_FORMAT_SUPPORT_PROP;

typedef 
enum _VDS_FILE_SYSTEM_PROP_FLAG
    {	VDS_FPF_COMPRESSED	= 0x1
    } 	VDS_FILE_SYSTEM_PROP_FLAG;

typedef struct _VDS_FILE_SYSTEM_PROP
    {
    VDS_FILE_SYSTEM_TYPE type;
    VDS_OBJECT_ID volumeId;
    ULONG ulFlags;
    ULONGLONG ullTotalAllocationUnits;
    ULONGLONG ullAvailableAllocationUnits;
    ULONG ulAllocationUnitSize;
    LPWSTR pwszLabel;
    } 	VDS_FILE_SYSTEM_PROP;

typedef struct _VDS_FILE_SYSTEM_PROP *PVDS_FILE_SYSTEM_PROP;

typedef 
enum _VDS_QUERY_PROVIDER_FLAG
    {	VDS_QUERY_SOFTWARE_PROVIDERS	= 0x1,
	VDS_QUERY_HARDWARE_PROVIDERS	= 0x2
    } 	VDS_QUERY_PROVIDER_FLAG;



extern RPC_IF_HANDLE __MIDL_itf_vds_0000_0036_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vds_0000_0036_v0_0_s_ifspec;

#ifndef __IVdsServiceLoader_INTERFACE_DEFINED__
#define __IVdsServiceLoader_INTERFACE_DEFINED__

/* interface IVdsServiceLoader */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IVdsServiceLoader;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("e0393303-90d4-4a97-ab71-e9b671ee2729")
    IVdsServiceLoader : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE LoadService( 
            /* [string][unique][in] */ __RPC__in_opt LPWSTR pwszMachineName,
            /* [out] */ __RPC__deref_out_opt IVdsService **ppService) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IVdsServiceLoaderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVdsServiceLoader * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVdsServiceLoader * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVdsServiceLoader * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *LoadService )( 
            IVdsServiceLoader * This,
            /* [string][unique][in] */ __RPC__in_opt LPWSTR pwszMachineName,
            /* [out] */ __RPC__deref_out_opt IVdsService **ppService);
        
        END_INTERFACE
    } IVdsServiceLoaderVtbl;

    interface IVdsServiceLoader
    {
        CONST_VTBL struct IVdsServiceLoaderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVdsServiceLoader_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVdsServiceLoader_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVdsServiceLoader_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVdsServiceLoader_LoadService(This,pwszMachineName,ppService)	\
    ( (This)->lpVtbl -> LoadService(This,pwszMachineName,ppService) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVdsServiceLoader_INTERFACE_DEFINED__ */


#ifndef __IVdsService_INTERFACE_DEFINED__
#define __IVdsService_INTERFACE_DEFINED__

/* interface IVdsService */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IVdsService;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0818a8ef-9ba9-40d8-a6f9-e22833cc771e")
    IVdsService : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE IsServiceReady( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE WaitForServiceReady( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetProperties( 
            /* [out] */ __RPC__out VDS_SERVICE_PROP *pServiceProp) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE QueryProviders( 
            /* [in] */ DWORD masks,
            /* [out] */ __RPC__deref_out_opt IEnumVdsObject **ppEnum) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE QueryMaskedDisks( 
            /* [out] */ __RPC__deref_out_opt IEnumVdsObject **ppEnum) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE QueryUnallocatedDisks( 
            /* [out] */ __RPC__deref_out_opt IEnumVdsObject **ppEnum) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetObject( 
            /* [in] */ VDS_OBJECT_ID ObjectId,
            /* [in] */ VDS_OBJECT_TYPE type,
            /* [out] */ __RPC__deref_out_opt IUnknown **ppObjectUnk) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE QueryDriveLetters( 
            /* [in] */ WCHAR wcFirstLetter,
            /* [in] */ DWORD count,
            /* [size_is][out] */ __RPC__out_ecount_full(count) VDS_DRIVE_LETTER_PROP *pDriveLetterPropArray) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE QueryFileSystemTypes( 
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*plNumberOfFileSystems) VDS_FILE_SYSTEM_TYPE_PROP **ppFileSystemTypeProps,
            /* [out] */ __RPC__out LONG *plNumberOfFileSystems) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Reenumerate( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Refresh( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CleanupObsoleteMountPoints( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Advise( 
            /* [in] */ __RPC__in_opt IVdsAdviseSink *pSink,
            /* [out] */ __RPC__out DWORD *pdwCookie) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Unadvise( 
            /* [in] */ DWORD dwCookie) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Reboot( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetFlags( 
            /* [in] */ ULONG ulFlags) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ClearFlags( 
            /* [in] */ ULONG ulFlags) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IVdsServiceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVdsService * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVdsService * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVdsService * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsServiceReady )( 
            IVdsService * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *WaitForServiceReady )( 
            IVdsService * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetProperties )( 
            IVdsService * This,
            /* [out] */ __RPC__out VDS_SERVICE_PROP *pServiceProp);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *QueryProviders )( 
            IVdsService * This,
            /* [in] */ DWORD masks,
            /* [out] */ __RPC__deref_out_opt IEnumVdsObject **ppEnum);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *QueryMaskedDisks )( 
            IVdsService * This,
            /* [out] */ __RPC__deref_out_opt IEnumVdsObject **ppEnum);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *QueryUnallocatedDisks )( 
            IVdsService * This,
            /* [out] */ __RPC__deref_out_opt IEnumVdsObject **ppEnum);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetObject )( 
            IVdsService * This,
            /* [in] */ VDS_OBJECT_ID ObjectId,
            /* [in] */ VDS_OBJECT_TYPE type,
            /* [out] */ __RPC__deref_out_opt IUnknown **ppObjectUnk);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *QueryDriveLetters )( 
            IVdsService * This,
            /* [in] */ WCHAR wcFirstLetter,
            /* [in] */ DWORD count,
            /* [size_is][out] */ __RPC__out_ecount_full(count) VDS_DRIVE_LETTER_PROP *pDriveLetterPropArray);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *QueryFileSystemTypes )( 
            IVdsService * This,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*plNumberOfFileSystems) VDS_FILE_SYSTEM_TYPE_PROP **ppFileSystemTypeProps,
            /* [out] */ __RPC__out LONG *plNumberOfFileSystems);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Reenumerate )( 
            IVdsService * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Refresh )( 
            IVdsService * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CleanupObsoleteMountPoints )( 
            IVdsService * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Advise )( 
            IVdsService * This,
            /* [in] */ __RPC__in_opt IVdsAdviseSink *pSink,
            /* [out] */ __RPC__out DWORD *pdwCookie);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Unadvise )( 
            IVdsService * This,
            /* [in] */ DWORD dwCookie);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Reboot )( 
            IVdsService * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetFlags )( 
            IVdsService * This,
            /* [in] */ ULONG ulFlags);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ClearFlags )( 
            IVdsService * This,
            /* [in] */ ULONG ulFlags);
        
        END_INTERFACE
    } IVdsServiceVtbl;

    interface IVdsService
    {
        CONST_VTBL struct IVdsServiceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVdsService_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVdsService_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVdsService_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVdsService_IsServiceReady(This)	\
    ( (This)->lpVtbl -> IsServiceReady(This) ) 

#define IVdsService_WaitForServiceReady(This)	\
    ( (This)->lpVtbl -> WaitForServiceReady(This) ) 

#define IVdsService_GetProperties(This,pServiceProp)	\
    ( (This)->lpVtbl -> GetProperties(This,pServiceProp) ) 

#define IVdsService_QueryProviders(This,masks,ppEnum)	\
    ( (This)->lpVtbl -> QueryProviders(This,masks,ppEnum) ) 

#define IVdsService_QueryMaskedDisks(This,ppEnum)	\
    ( (This)->lpVtbl -> QueryMaskedDisks(This,ppEnum) ) 

#define IVdsService_QueryUnallocatedDisks(This,ppEnum)	\
    ( (This)->lpVtbl -> QueryUnallocatedDisks(This,ppEnum) ) 

#define IVdsService_GetObject(This,ObjectId,type,ppObjectUnk)	\
    ( (This)->lpVtbl -> GetObject(This,ObjectId,type,ppObjectUnk) ) 

#define IVdsService_QueryDriveLetters(This,wcFirstLetter,count,pDriveLetterPropArray)	\
    ( (This)->lpVtbl -> QueryDriveLetters(This,wcFirstLetter,count,pDriveLetterPropArray) ) 

#define IVdsService_QueryFileSystemTypes(This,ppFileSystemTypeProps,plNumberOfFileSystems)	\
    ( (This)->lpVtbl -> QueryFileSystemTypes(This,ppFileSystemTypeProps,plNumberOfFileSystems) ) 

#define IVdsService_Reenumerate(This)	\
    ( (This)->lpVtbl -> Reenumerate(This) ) 

#define IVdsService_Refresh(This)	\
    ( (This)->lpVtbl -> Refresh(This) ) 

#define IVdsService_CleanupObsoleteMountPoints(This)	\
    ( (This)->lpVtbl -> CleanupObsoleteMountPoints(This) ) 

#define IVdsService_Advise(This,pSink,pdwCookie)	\
    ( (This)->lpVtbl -> Advise(This,pSink,pdwCookie) ) 

#define IVdsService_Unadvise(This,dwCookie)	\
    ( (This)->lpVtbl -> Unadvise(This,dwCookie) ) 

#define IVdsService_Reboot(This)	\
    ( (This)->lpVtbl -> Reboot(This) ) 

#define IVdsService_SetFlags(This,ulFlags)	\
    ( (This)->lpVtbl -> SetFlags(This,ulFlags) ) 

#define IVdsService_ClearFlags(This,ulFlags)	\
    ( (This)->lpVtbl -> ClearFlags(This,ulFlags) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVdsService_INTERFACE_DEFINED__ */


#ifndef __IVdsServiceUninstallDisk_INTERFACE_DEFINED__
#define __IVdsServiceUninstallDisk_INTERFACE_DEFINED__

/* interface IVdsServiceUninstallDisk */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IVdsServiceUninstallDisk;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B6B22DA8-F903-4be7-B492-C09D875AC9DA")
    IVdsServiceUninstallDisk : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetDiskIdFromLunInfo( 
            /* [in] */ __RPC__in VDS_LUN_INFORMATION *pLunInfo,
            /* [out] */ __RPC__out VDS_OBJECT_ID *pDiskId) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE UninstallDisks( 
            /* [size_is][in] */ __RPC__in_ecount_full(ulCount) VDS_OBJECT_ID *pDiskIdArray,
            /* [in] */ ULONG ulCount,
            /* [in] */ BOOLEAN bForce,
            /* [out] */ __RPC__out BOOLEAN *pbReboot,
            /* [size_is][out] */ __RPC__out_ecount_full(ulCount) HRESULT *pResults) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IVdsServiceUninstallDiskVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVdsServiceUninstallDisk * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVdsServiceUninstallDisk * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVdsServiceUninstallDisk * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDiskIdFromLunInfo )( 
            IVdsServiceUninstallDisk * This,
            /* [in] */ __RPC__in VDS_LUN_INFORMATION *pLunInfo,
            /* [out] */ __RPC__out VDS_OBJECT_ID *pDiskId);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *UninstallDisks )( 
            IVdsServiceUninstallDisk * This,
            /* [size_is][in] */ __RPC__in_ecount_full(ulCount) VDS_OBJECT_ID *pDiskIdArray,
            /* [in] */ ULONG ulCount,
            /* [in] */ BOOLEAN bForce,
            /* [out] */ __RPC__out BOOLEAN *pbReboot,
            /* [size_is][out] */ __RPC__out_ecount_full(ulCount) HRESULT *pResults);
        
        END_INTERFACE
    } IVdsServiceUninstallDiskVtbl;

    interface IVdsServiceUninstallDisk
    {
        CONST_VTBL struct IVdsServiceUninstallDiskVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVdsServiceUninstallDisk_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVdsServiceUninstallDisk_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVdsServiceUninstallDisk_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVdsServiceUninstallDisk_GetDiskIdFromLunInfo(This,pLunInfo,pDiskId)	\
    ( (This)->lpVtbl -> GetDiskIdFromLunInfo(This,pLunInfo,pDiskId) ) 

#define IVdsServiceUninstallDisk_UninstallDisks(This,pDiskIdArray,ulCount,bForce,pbReboot,pResults)	\
    ( (This)->lpVtbl -> UninstallDisks(This,pDiskIdArray,ulCount,bForce,pbReboot,pResults) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVdsServiceUninstallDisk_INTERFACE_DEFINED__ */


#ifndef __IVdsServiceHba_INTERFACE_DEFINED__
#define __IVdsServiceHba_INTERFACE_DEFINED__

/* interface IVdsServiceHba */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IVdsServiceHba;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0ac13689-3134-47c6-a17c-4669216801be")
    IVdsServiceHba : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE QueryHbaPorts( 
            /* [out] */ __RPC__deref_out_opt IEnumVdsObject **ppEnum) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IVdsServiceHbaVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVdsServiceHba * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVdsServiceHba * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVdsServiceHba * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *QueryHbaPorts )( 
            IVdsServiceHba * This,
            /* [out] */ __RPC__deref_out_opt IEnumVdsObject **ppEnum);
        
        END_INTERFACE
    } IVdsServiceHbaVtbl;

    interface IVdsServiceHba
    {
        CONST_VTBL struct IVdsServiceHbaVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVdsServiceHba_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVdsServiceHba_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVdsServiceHba_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVdsServiceHba_QueryHbaPorts(This,ppEnum)	\
    ( (This)->lpVtbl -> QueryHbaPorts(This,ppEnum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVdsServiceHba_INTERFACE_DEFINED__ */


#ifndef __IVdsServiceIscsi_INTERFACE_DEFINED__
#define __IVdsServiceIscsi_INTERFACE_DEFINED__

/* interface IVdsServiceIscsi */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IVdsServiceIscsi;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("14fbe036-3ed7-4e10-90e9-a5ff991aff01")
    IVdsServiceIscsi : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetInitiatorName( 
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppwszIscsiName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE QueryInitiatorAdapters( 
            /* [out] */ __RPC__deref_out_opt IEnumVdsObject **ppEnum) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetIpsecGroupPresharedKey( 
            /* [unique][in] */ __RPC__in_opt VDS_ISCSI_IPSEC_KEY *pIpsecKey) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetAllIpsecTunnelAddresses( 
            /* [in] */ __RPC__in VDS_IPADDRESS *pTunnelAddress,
            /* [in] */ __RPC__in VDS_IPADDRESS *pDestinationAddress) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetAllIpsecSecurity( 
            /* [in] */ VDS_OBJECT_ID targetPortalId,
            /* [in] */ ULONGLONG ullSecurityFlags,
            /* [unique][in] */ __RPC__in_opt VDS_ISCSI_IPSEC_KEY *pIpsecKey) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetInitiatorSharedSecret( 
            /* [unique][in] */ __RPC__in_opt VDS_ISCSI_SHARED_SECRET *pInitiatorSharedSecret,
            /* [in] */ VDS_OBJECT_ID targetId) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE RememberTargetSharedSecret( 
            /* [in] */ VDS_OBJECT_ID targetId,
            /* [unique][in] */ __RPC__in_opt VDS_ISCSI_SHARED_SECRET *pTargetSharedSecret) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IVdsServiceIscsiVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVdsServiceIscsi * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVdsServiceIscsi * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVdsServiceIscsi * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetInitiatorName )( 
            IVdsServiceIscsi * This,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppwszIscsiName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *QueryInitiatorAdapters )( 
            IVdsServiceIscsi * This,
            /* [out] */ __RPC__deref_out_opt IEnumVdsObject **ppEnum);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetIpsecGroupPresharedKey )( 
            IVdsServiceIscsi * This,
            /* [unique][in] */ __RPC__in_opt VDS_ISCSI_IPSEC_KEY *pIpsecKey);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetAllIpsecTunnelAddresses )( 
            IVdsServiceIscsi * This,
            /* [in] */ __RPC__in VDS_IPADDRESS *pTunnelAddress,
            /* [in] */ __RPC__in VDS_IPADDRESS *pDestinationAddress);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetAllIpsecSecurity )( 
            IVdsServiceIscsi * This,
            /* [in] */ VDS_OBJECT_ID targetPortalId,
            /* [in] */ ULONGLONG ullSecurityFlags,
            /* [unique][in] */ __RPC__in_opt VDS_ISCSI_IPSEC_KEY *pIpsecKey);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetInitiatorSharedSecret )( 
            IVdsServiceIscsi * This,
            /* [unique][in] */ __RPC__in_opt VDS_ISCSI_SHARED_SECRET *pInitiatorSharedSecret,
            /* [in] */ VDS_OBJECT_ID targetId);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *RememberTargetSharedSecret )( 
            IVdsServiceIscsi * This,
            /* [in] */ VDS_OBJECT_ID targetId,
            /* [unique][in] */ __RPC__in_opt VDS_ISCSI_SHARED_SECRET *pTargetSharedSecret);
        
        END_INTERFACE
    } IVdsServiceIscsiVtbl;

    interface IVdsServiceIscsi
    {
        CONST_VTBL struct IVdsServiceIscsiVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVdsServiceIscsi_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVdsServiceIscsi_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVdsServiceIscsi_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVdsServiceIscsi_GetInitiatorName(This,ppwszIscsiName)	\
    ( (This)->lpVtbl -> GetInitiatorName(This,ppwszIscsiName) ) 

#define IVdsServiceIscsi_QueryInitiatorAdapters(This,ppEnum)	\
    ( (This)->lpVtbl -> QueryInitiatorAdapters(This,ppEnum) ) 

#define IVdsServiceIscsi_SetIpsecGroupPresharedKey(This,pIpsecKey)	\
    ( (This)->lpVtbl -> SetIpsecGroupPresharedKey(This,pIpsecKey) ) 

#define IVdsServiceIscsi_SetAllIpsecTunnelAddresses(This,pTunnelAddress,pDestinationAddress)	\
    ( (This)->lpVtbl -> SetAllIpsecTunnelAddresses(This,pTunnelAddress,pDestinationAddress) ) 

#define IVdsServiceIscsi_SetAllIpsecSecurity(This,targetPortalId,ullSecurityFlags,pIpsecKey)	\
    ( (This)->lpVtbl -> SetAllIpsecSecurity(This,targetPortalId,ullSecurityFlags,pIpsecKey) ) 

#define IVdsServiceIscsi_SetInitiatorSharedSecret(This,pInitiatorSharedSecret,targetId)	\
    ( (This)->lpVtbl -> SetInitiatorSharedSecret(This,pInitiatorSharedSecret,targetId) ) 

#define IVdsServiceIscsi_RememberTargetSharedSecret(This,targetId,pTargetSharedSecret)	\
    ( (This)->lpVtbl -> RememberTargetSharedSecret(This,targetId,pTargetSharedSecret) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVdsServiceIscsi_INTERFACE_DEFINED__ */


#ifndef __IVdsServiceInitialization_INTERFACE_DEFINED__
#define __IVdsServiceInitialization_INTERFACE_DEFINED__

/* interface IVdsServiceInitialization */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IVdsServiceInitialization;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4afc3636-db01-4052-80c3-03bbcb8d3c69")
    IVdsServiceInitialization : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Initialize( 
            /* [string][unique][in] */ __RPC__in_opt LPWSTR pwszMachineName) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IVdsServiceInitializationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVdsServiceInitialization * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVdsServiceInitialization * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVdsServiceInitialization * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IVdsServiceInitialization * This,
            /* [string][unique][in] */ __RPC__in_opt LPWSTR pwszMachineName);
        
        END_INTERFACE
    } IVdsServiceInitializationVtbl;

    interface IVdsServiceInitialization
    {
        CONST_VTBL struct IVdsServiceInitializationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVdsServiceInitialization_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVdsServiceInitialization_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVdsServiceInitialization_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVdsServiceInitialization_Initialize(This,pwszMachineName)	\
    ( (This)->lpVtbl -> Initialize(This,pwszMachineName) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVdsServiceInitialization_INTERFACE_DEFINED__ */


#ifndef __IVdsHbaPort_INTERFACE_DEFINED__
#define __IVdsHbaPort_INTERFACE_DEFINED__

/* interface IVdsHbaPort */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IVdsHbaPort;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2abd757f-2851-4997-9a13-47d2a885d6ca")
    IVdsHbaPort : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetProperties( 
            /* [out] */ __RPC__out VDS_HBAPORT_PROP *pHbaPortProp) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetAllPathStatuses( 
            /* [in] */ VDS_PATH_STATUS status) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IVdsHbaPortVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVdsHbaPort * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVdsHbaPort * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVdsHbaPort * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetProperties )( 
            IVdsHbaPort * This,
            /* [out] */ __RPC__out VDS_HBAPORT_PROP *pHbaPortProp);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetAllPathStatuses )( 
            IVdsHbaPort * This,
            /* [in] */ VDS_PATH_STATUS status);
        
        END_INTERFACE
    } IVdsHbaPortVtbl;

    interface IVdsHbaPort
    {
        CONST_VTBL struct IVdsHbaPortVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVdsHbaPort_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVdsHbaPort_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVdsHbaPort_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVdsHbaPort_GetProperties(This,pHbaPortProp)	\
    ( (This)->lpVtbl -> GetProperties(This,pHbaPortProp) ) 

#define IVdsHbaPort_SetAllPathStatuses(This,status)	\
    ( (This)->lpVtbl -> SetAllPathStatuses(This,status) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVdsHbaPort_INTERFACE_DEFINED__ */


#ifndef __IVdsIscsiInitiatorAdapter_INTERFACE_DEFINED__
#define __IVdsIscsiInitiatorAdapter_INTERFACE_DEFINED__

/* interface IVdsIscsiInitiatorAdapter */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IVdsIscsiInitiatorAdapter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b07fedd4-1682-4440-9189-a39b55194dc5")
    IVdsIscsiInitiatorAdapter : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetProperties( 
            /* [out] */ __RPC__out VDS_ISCSI_INITIATOR_ADAPTER_PROP *pInitiatorAdapterProp) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE QueryInitiatorPortals( 
            /* [out] */ __RPC__deref_out_opt IEnumVdsObject **ppEnum) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE LoginToTarget( 
            /* [in] */ VDS_ISCSI_LOGIN_TYPE loginType,
            /* [in] */ VDS_OBJECT_ID targetId,
            /* [in] */ VDS_OBJECT_ID targetPortalId,
            /* [in] */ VDS_OBJECT_ID initiatorPortalId,
            /* [in] */ ULONG ulLoginFlags,
            /* [in] */ BOOL bHeaderDigest,
            /* [in] */ BOOL bDataDigest,
            /* [in] */ VDS_ISCSI_AUTH_TYPE authType,
            /* [out] */ __RPC__deref_out_opt IVdsAsync **ppAsync) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE LogoutFromTarget( 
            /* [in] */ VDS_OBJECT_ID targetId,
            /* [out] */ __RPC__deref_out_opt IVdsAsync **ppAsync) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IVdsIscsiInitiatorAdapterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVdsIscsiInitiatorAdapter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVdsIscsiInitiatorAdapter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVdsIscsiInitiatorAdapter * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetProperties )( 
            IVdsIscsiInitiatorAdapter * This,
            /* [out] */ __RPC__out VDS_ISCSI_INITIATOR_ADAPTER_PROP *pInitiatorAdapterProp);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *QueryInitiatorPortals )( 
            IVdsIscsiInitiatorAdapter * This,
            /* [out] */ __RPC__deref_out_opt IEnumVdsObject **ppEnum);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *LoginToTarget )( 
            IVdsIscsiInitiatorAdapter * This,
            /* [in] */ VDS_ISCSI_LOGIN_TYPE loginType,
            /* [in] */ VDS_OBJECT_ID targetId,
            /* [in] */ VDS_OBJECT_ID targetPortalId,
            /* [in] */ VDS_OBJECT_ID initiatorPortalId,
            /* [in] */ ULONG ulLoginFlags,
            /* [in] */ BOOL bHeaderDigest,
            /* [in] */ BOOL bDataDigest,
            /* [in] */ VDS_ISCSI_AUTH_TYPE authType,
            /* [out] */ __RPC__deref_out_opt IVdsAsync **ppAsync);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *LogoutFromTarget )( 
            IVdsIscsiInitiatorAdapter * This,
            /* [in] */ VDS_OBJECT_ID targetId,
            /* [out] */ __RPC__deref_out_opt IVdsAsync **ppAsync);
        
        END_INTERFACE
    } IVdsIscsiInitiatorAdapterVtbl;

    interface IVdsIscsiInitiatorAdapter
    {
        CONST_VTBL struct IVdsIscsiInitiatorAdapterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVdsIscsiInitiatorAdapter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVdsIscsiInitiatorAdapter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVdsIscsiInitiatorAdapter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVdsIscsiInitiatorAdapter_GetProperties(This,pInitiatorAdapterProp)	\
    ( (This)->lpVtbl -> GetProperties(This,pInitiatorAdapterProp) ) 

#define IVdsIscsiInitiatorAdapter_QueryInitiatorPortals(This,ppEnum)	\
    ( (This)->lpVtbl -> QueryInitiatorPortals(This,ppEnum) ) 

#define IVdsIscsiInitiatorAdapter_LoginToTarget(This,loginType,targetId,targetPortalId,initiatorPortalId,ulLoginFlags,bHeaderDigest,bDataDigest,authType,ppAsync)	\
    ( (This)->lpVtbl -> LoginToTarget(This,loginType,targetId,targetPortalId,initiatorPortalId,ulLoginFlags,bHeaderDigest,bDataDigest,authType,ppAsync) ) 

#define IVdsIscsiInitiatorAdapter_LogoutFromTarget(This,targetId,ppAsync)	\
    ( (This)->lpVtbl -> LogoutFromTarget(This,targetId,ppAsync) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVdsIscsiInitiatorAdapter_INTERFACE_DEFINED__ */


#ifndef __IVdsIscsiInitiatorPortal_INTERFACE_DEFINED__
#define __IVdsIscsiInitiatorPortal_INTERFACE_DEFINED__

/* interface IVdsIscsiInitiatorPortal */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IVdsIscsiInitiatorPortal;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("38a0a9ab-7cc8-4693-ac07-1f28bd03c3da")
    IVdsIscsiInitiatorPortal : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetProperties( 
            /* [out] */ __RPC__out VDS_ISCSI_INITIATOR_PORTAL_PROP *pInitiatorPortalProp) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetInitiatorAdapter( 
            /* [out] */ __RPC__deref_out_opt IVdsIscsiInitiatorAdapter **ppInitiatorAdapter) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetIpsecTunnelAddress( 
            /* [in] */ __RPC__in VDS_IPADDRESS *pTunnelAddress,
            /* [in] */ __RPC__in VDS_IPADDRESS *pDestinationAddress) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetIpsecSecurity( 
            /* [in] */ VDS_OBJECT_ID targetPortalId,
            /* [out] */ __RPC__out ULONGLONG *pullSecurityFlags) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetIpsecSecurity( 
            /* [in] */ VDS_OBJECT_ID targetPortalId,
            /* [in] */ ULONGLONG ullSecurityFlags,
            /* [unique][in] */ __RPC__in_opt VDS_ISCSI_IPSEC_KEY *pIpsecKey) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IVdsIscsiInitiatorPortalVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVdsIscsiInitiatorPortal * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVdsIscsiInitiatorPortal * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVdsIscsiInitiatorPortal * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetProperties )( 
            IVdsIscsiInitiatorPortal * This,
            /* [out] */ __RPC__out VDS_ISCSI_INITIATOR_PORTAL_PROP *pInitiatorPortalProp);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetInitiatorAdapter )( 
            IVdsIscsiInitiatorPortal * This,
            /* [out] */ __RPC__deref_out_opt IVdsIscsiInitiatorAdapter **ppInitiatorAdapter);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetIpsecTunnelAddress )( 
            IVdsIscsiInitiatorPortal * This,
            /* [in] */ __RPC__in VDS_IPADDRESS *pTunnelAddress,
            /* [in] */ __RPC__in VDS_IPADDRESS *pDestinationAddress);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetIpsecSecurity )( 
            IVdsIscsiInitiatorPortal * This,
            /* [in] */ VDS_OBJECT_ID targetPortalId,
            /* [out] */ __RPC__out ULONGLONG *pullSecurityFlags);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetIpsecSecurity )( 
            IVdsIscsiInitiatorPortal * This,
            /* [in] */ VDS_OBJECT_ID targetPortalId,
            /* [in] */ ULONGLONG ullSecurityFlags,
            /* [unique][in] */ __RPC__in_opt VDS_ISCSI_IPSEC_KEY *pIpsecKey);
        
        END_INTERFACE
    } IVdsIscsiInitiatorPortalVtbl;

    interface IVdsIscsiInitiatorPortal
    {
        CONST_VTBL struct IVdsIscsiInitiatorPortalVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVdsIscsiInitiatorPortal_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVdsIscsiInitiatorPortal_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVdsIscsiInitiatorPortal_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVdsIscsiInitiatorPortal_GetProperties(This,pInitiatorPortalProp)	\
    ( (This)->lpVtbl -> GetProperties(This,pInitiatorPortalProp) ) 

#define IVdsIscsiInitiatorPortal_GetInitiatorAdapter(This,ppInitiatorAdapter)	\
    ( (This)->lpVtbl -> GetInitiatorAdapter(This,ppInitiatorAdapter) ) 

#define IVdsIscsiInitiatorPortal_SetIpsecTunnelAddress(This,pTunnelAddress,pDestinationAddress)	\
    ( (This)->lpVtbl -> SetIpsecTunnelAddress(This,pTunnelAddress,pDestinationAddress) ) 

#define IVdsIscsiInitiatorPortal_GetIpsecSecurity(This,targetPortalId,pullSecurityFlags)	\
    ( (This)->lpVtbl -> GetIpsecSecurity(This,targetPortalId,pullSecurityFlags) ) 

#define IVdsIscsiInitiatorPortal_SetIpsecSecurity(This,targetPortalId,ullSecurityFlags,pIpsecKey)	\
    ( (This)->lpVtbl -> SetIpsecSecurity(This,targetPortalId,ullSecurityFlags,pIpsecKey) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVdsIscsiInitiatorPortal_INTERFACE_DEFINED__ */


#ifndef __IVdsDiskPartitionMF_INTERFACE_DEFINED__
#define __IVdsDiskPartitionMF_INTERFACE_DEFINED__

/* interface IVdsDiskPartitionMF */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IVdsDiskPartitionMF;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("538684e0-ba3d-4bc0-aca9-164aff85c2a9")
    IVdsDiskPartitionMF : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetPartitionFileSystemProperties( 
            /* [in] */ ULONGLONG ullOffset,
            /* [out] */ __RPC__out VDS_FILE_SYSTEM_PROP *pFileSystemProp) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetPartitionFileSystemTypeName( 
            /* [in] */ ULONGLONG ullOffset,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppwszFileSystemTypeName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE QueryPartitionFileSystemFormatSupport( 
            /* [in] */ ULONGLONG ullOffset,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*plNumberOfFileSystems) VDS_FILE_SYSTEM_FORMAT_SUPPORT_PROP **ppFileSystemSupportProps,
            /* [out] */ __RPC__out LONG *plNumberOfFileSystems) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FormatPartitionEx( 
            /* [in] */ ULONGLONG ullOffset,
            /* [string][unique][in] */ __RPC__in_opt LPWSTR pwszFileSystemTypeName,
            /* [in] */ USHORT usFileSystemRevision,
            /* [in] */ ULONG ulDesiredUnitAllocationSize,
            /* [string][unique][in] */ __RPC__in_opt LPWSTR pwszLabel,
            /* [in] */ BOOL bForce,
            /* [in] */ BOOL bQuickFormat,
            /* [in] */ BOOL bEnableCompression,
            /* [out] */ __RPC__deref_out_opt IVdsAsync **ppAsync) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IVdsDiskPartitionMFVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVdsDiskPartitionMF * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVdsDiskPartitionMF * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVdsDiskPartitionMF * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPartitionFileSystemProperties )( 
            IVdsDiskPartitionMF * This,
            /* [in] */ ULONGLONG ullOffset,
            /* [out] */ __RPC__out VDS_FILE_SYSTEM_PROP *pFileSystemProp);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPartitionFileSystemTypeName )( 
            IVdsDiskPartitionMF * This,
            /* [in] */ ULONGLONG ullOffset,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppwszFileSystemTypeName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *QueryPartitionFileSystemFormatSupport )( 
            IVdsDiskPartitionMF * This,
            /* [in] */ ULONGLONG ullOffset,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*plNumberOfFileSystems) VDS_FILE_SYSTEM_FORMAT_SUPPORT_PROP **ppFileSystemSupportProps,
            /* [out] */ __RPC__out LONG *plNumberOfFileSystems);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *FormatPartitionEx )( 
            IVdsDiskPartitionMF * This,
            /* [in] */ ULONGLONG ullOffset,
            /* [string][unique][in] */ __RPC__in_opt LPWSTR pwszFileSystemTypeName,
            /* [in] */ USHORT usFileSystemRevision,
            /* [in] */ ULONG ulDesiredUnitAllocationSize,
            /* [string][unique][in] */ __RPC__in_opt LPWSTR pwszLabel,
            /* [in] */ BOOL bForce,
            /* [in] */ BOOL bQuickFormat,
            /* [in] */ BOOL bEnableCompression,
            /* [out] */ __RPC__deref_out_opt IVdsAsync **ppAsync);
        
        END_INTERFACE
    } IVdsDiskPartitionMFVtbl;

    interface IVdsDiskPartitionMF
    {
        CONST_VTBL struct IVdsDiskPartitionMFVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVdsDiskPartitionMF_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVdsDiskPartitionMF_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVdsDiskPartitionMF_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVdsDiskPartitionMF_GetPartitionFileSystemProperties(This,ullOffset,pFileSystemProp)	\
    ( (This)->lpVtbl -> GetPartitionFileSystemProperties(This,ullOffset,pFileSystemProp) ) 

#define IVdsDiskPartitionMF_GetPartitionFileSystemTypeName(This,ullOffset,ppwszFileSystemTypeName)	\
    ( (This)->lpVtbl -> GetPartitionFileSystemTypeName(This,ullOffset,ppwszFileSystemTypeName) ) 

#define IVdsDiskPartitionMF_QueryPartitionFileSystemFormatSupport(This,ullOffset,ppFileSystemSupportProps,plNumberOfFileSystems)	\
    ( (This)->lpVtbl -> QueryPartitionFileSystemFormatSupport(This,ullOffset,ppFileSystemSupportProps,plNumberOfFileSystems) ) 

#define IVdsDiskPartitionMF_FormatPartitionEx(This,ullOffset,pwszFileSystemTypeName,usFileSystemRevision,ulDesiredUnitAllocationSize,pwszLabel,bForce,bQuickFormat,bEnableCompression,ppAsync)	\
    ( (This)->lpVtbl -> FormatPartitionEx(This,ullOffset,pwszFileSystemTypeName,usFileSystemRevision,ulDesiredUnitAllocationSize,pwszLabel,bForce,bQuickFormat,bEnableCompression,ppAsync) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVdsDiskPartitionMF_INTERFACE_DEFINED__ */


#ifndef __IVdsVolumeMF_INTERFACE_DEFINED__
#define __IVdsVolumeMF_INTERFACE_DEFINED__

/* interface IVdsVolumeMF */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IVdsVolumeMF;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ee2d5ded-6236-4169-931d-b9778ce03dc6")
    IVdsVolumeMF : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetFileSystemProperties( 
            /* [out] */ __RPC__out VDS_FILE_SYSTEM_PROP *pFileSystemProp) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Format( 
            /* [in] */ VDS_FILE_SYSTEM_TYPE type,
            /* [string][in] */ __RPC__in LPWSTR pwszLabel,
            /* [in] */ DWORD dwUnitAllocationSize,
            /* [in] */ BOOL bForce,
            /* [in] */ BOOL bQuickFormat,
            /* [in] */ BOOL bEnableCompression,
            /* [out] */ __RPC__deref_out_opt IVdsAsync **ppAsync) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddAccessPath( 
            /* [string][max_is][in] */ __RPC__in_ecount_full_string(( ( 260 - 1 )  + 1 ) ) LPWSTR pwszPath) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE QueryAccessPaths( 
            /* [size_is][size_is][string][out] */ __RPC__deref_out_ecount_full_opt_string(*plNumberOfAccessPaths) LPWSTR **pwszPathArray,
            /* [out] */ __RPC__out LONG *plNumberOfAccessPaths) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE QueryReparsePoints( 
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*plNumberOfReparsePointProps) VDS_REPARSE_POINT_PROP **ppReparsePointProps,
            /* [out] */ __RPC__out LONG *plNumberOfReparsePointProps) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeleteAccessPath( 
            /* [string][max_is][in] */ __RPC__in_ecount_full_string(( ( 260 - 1 )  + 1 ) ) LPWSTR pwszPath,
            /* [in] */ BOOL bForce) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Mount( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Dismount( 
            /* [in] */ BOOL bForce,
            /* [in] */ BOOL bPermanent) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetFileSystemFlags( 
            /* [in] */ ULONG ulFlags) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ClearFileSystemFlags( 
            /* [in] */ ULONG ulFlags) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IVdsVolumeMFVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVdsVolumeMF * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVdsVolumeMF * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVdsVolumeMF * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetFileSystemProperties )( 
            IVdsVolumeMF * This,
            /* [out] */ __RPC__out VDS_FILE_SYSTEM_PROP *pFileSystemProp);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Format )( 
            IVdsVolumeMF * This,
            /* [in] */ VDS_FILE_SYSTEM_TYPE type,
            /* [string][in] */ __RPC__in LPWSTR pwszLabel,
            /* [in] */ DWORD dwUnitAllocationSize,
            /* [in] */ BOOL bForce,
            /* [in] */ BOOL bQuickFormat,
            /* [in] */ BOOL bEnableCompression,
            /* [out] */ __RPC__deref_out_opt IVdsAsync **ppAsync);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddAccessPath )( 
            IVdsVolumeMF * This,
            /* [string][max_is][in] */ __RPC__in_ecount_full_string(( ( 260 - 1 )  + 1 ) ) LPWSTR pwszPath);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *QueryAccessPaths )( 
            IVdsVolumeMF * This,
            /* [size_is][size_is][string][out] */ __RPC__deref_out_ecount_full_opt_string(*plNumberOfAccessPaths) LPWSTR **pwszPathArray,
            /* [out] */ __RPC__out LONG *plNumberOfAccessPaths);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *QueryReparsePoints )( 
            IVdsVolumeMF * This,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*plNumberOfReparsePointProps) VDS_REPARSE_POINT_PROP **ppReparsePointProps,
            /* [out] */ __RPC__out LONG *plNumberOfReparsePointProps);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DeleteAccessPath )( 
            IVdsVolumeMF * This,
            /* [string][max_is][in] */ __RPC__in_ecount_full_string(( ( 260 - 1 )  + 1 ) ) LPWSTR pwszPath,
            /* [in] */ BOOL bForce);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Mount )( 
            IVdsVolumeMF * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Dismount )( 
            IVdsVolumeMF * This,
            /* [in] */ BOOL bForce,
            /* [in] */ BOOL bPermanent);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetFileSystemFlags )( 
            IVdsVolumeMF * This,
            /* [in] */ ULONG ulFlags);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ClearFileSystemFlags )( 
            IVdsVolumeMF * This,
            /* [in] */ ULONG ulFlags);
        
        END_INTERFACE
    } IVdsVolumeMFVtbl;

    interface IVdsVolumeMF
    {
        CONST_VTBL struct IVdsVolumeMFVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVdsVolumeMF_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVdsVolumeMF_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVdsVolumeMF_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVdsVolumeMF_GetFileSystemProperties(This,pFileSystemProp)	\
    ( (This)->lpVtbl -> GetFileSystemProperties(This,pFileSystemProp) ) 

#define IVdsVolumeMF_Format(This,type,pwszLabel,dwUnitAllocationSize,bForce,bQuickFormat,bEnableCompression,ppAsync)	\
    ( (This)->lpVtbl -> Format(This,type,pwszLabel,dwUnitAllocationSize,bForce,bQuickFormat,bEnableCompression,ppAsync) ) 

#define IVdsVolumeMF_AddAccessPath(This,pwszPath)	\
    ( (This)->lpVtbl -> AddAccessPath(This,pwszPath) ) 

#define IVdsVolumeMF_QueryAccessPaths(This,pwszPathArray,plNumberOfAccessPaths)	\
    ( (This)->lpVtbl -> QueryAccessPaths(This,pwszPathArray,plNumberOfAccessPaths) ) 

#define IVdsVolumeMF_QueryReparsePoints(This,ppReparsePointProps,plNumberOfReparsePointProps)	\
    ( (This)->lpVtbl -> QueryReparsePoints(This,ppReparsePointProps,plNumberOfReparsePointProps) ) 

#define IVdsVolumeMF_DeleteAccessPath(This,pwszPath,bForce)	\
    ( (This)->lpVtbl -> DeleteAccessPath(This,pwszPath,bForce) ) 

#define IVdsVolumeMF_Mount(This)	\
    ( (This)->lpVtbl -> Mount(This) ) 

#define IVdsVolumeMF_Dismount(This,bForce,bPermanent)	\
    ( (This)->lpVtbl -> Dismount(This,bForce,bPermanent) ) 

#define IVdsVolumeMF_SetFileSystemFlags(This,ulFlags)	\
    ( (This)->lpVtbl -> SetFileSystemFlags(This,ulFlags) ) 

#define IVdsVolumeMF_ClearFileSystemFlags(This,ulFlags)	\
    ( (This)->lpVtbl -> ClearFileSystemFlags(This,ulFlags) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVdsVolumeMF_INTERFACE_DEFINED__ */


#ifndef __IVdsVolumeMF2_INTERFACE_DEFINED__
#define __IVdsVolumeMF2_INTERFACE_DEFINED__

/* interface IVdsVolumeMF2 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IVdsVolumeMF2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4dbcee9a-6343-4651-b85f-5e75d74d983c")
    IVdsVolumeMF2 : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetFileSystemTypeName( 
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppwszFileSystemTypeName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE QueryFileSystemFormatSupport( 
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*plNumberOfFileSystems) VDS_FILE_SYSTEM_FORMAT_SUPPORT_PROP **ppFileSystemSupportProps,
            /* [out] */ __RPC__out LONG *plNumberOfFileSystems) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FormatEx( 
            /* [string][unique][in] */ __RPC__in_opt LPWSTR pwszFileSystemTypeName,
            /* [in] */ USHORT usFileSystemRevision,
            /* [in] */ ULONG ulDesiredUnitAllocationSize,
            /* [string][unique][in] */ __RPC__in_opt LPWSTR pwszLabel,
            /* [in] */ BOOL bForce,
            /* [in] */ BOOL bQuickFormat,
            /* [in] */ BOOL bEnableCompression,
            /* [out] */ __RPC__deref_out_opt IVdsAsync **ppAsync) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IVdsVolumeMF2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVdsVolumeMF2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVdsVolumeMF2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVdsVolumeMF2 * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetFileSystemTypeName )( 
            IVdsVolumeMF2 * This,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppwszFileSystemTypeName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *QueryFileSystemFormatSupport )( 
            IVdsVolumeMF2 * This,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*plNumberOfFileSystems) VDS_FILE_SYSTEM_FORMAT_SUPPORT_PROP **ppFileSystemSupportProps,
            /* [out] */ __RPC__out LONG *plNumberOfFileSystems);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *FormatEx )( 
            IVdsVolumeMF2 * This,
            /* [string][unique][in] */ __RPC__in_opt LPWSTR pwszFileSystemTypeName,
            /* [in] */ USHORT usFileSystemRevision,
            /* [in] */ ULONG ulDesiredUnitAllocationSize,
            /* [string][unique][in] */ __RPC__in_opt LPWSTR pwszLabel,
            /* [in] */ BOOL bForce,
            /* [in] */ BOOL bQuickFormat,
            /* [in] */ BOOL bEnableCompression,
            /* [out] */ __RPC__deref_out_opt IVdsAsync **ppAsync);
        
        END_INTERFACE
    } IVdsVolumeMF2Vtbl;

    interface IVdsVolumeMF2
    {
        CONST_VTBL struct IVdsVolumeMF2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVdsVolumeMF2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVdsVolumeMF2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVdsVolumeMF2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVdsVolumeMF2_GetFileSystemTypeName(This,ppwszFileSystemTypeName)	\
    ( (This)->lpVtbl -> GetFileSystemTypeName(This,ppwszFileSystemTypeName) ) 

#define IVdsVolumeMF2_QueryFileSystemFormatSupport(This,ppFileSystemSupportProps,plNumberOfFileSystems)	\
    ( (This)->lpVtbl -> QueryFileSystemFormatSupport(This,ppFileSystemSupportProps,plNumberOfFileSystems) ) 

#define IVdsVolumeMF2_FormatEx(This,pwszFileSystemTypeName,usFileSystemRevision,ulDesiredUnitAllocationSize,pwszLabel,bForce,bQuickFormat,bEnableCompression,ppAsync)	\
    ( (This)->lpVtbl -> FormatEx(This,pwszFileSystemTypeName,usFileSystemRevision,ulDesiredUnitAllocationSize,pwszLabel,bForce,bQuickFormat,bEnableCompression,ppAsync) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVdsVolumeMF2_INTERFACE_DEFINED__ */


#ifndef __IVdsVolumeShrink_INTERFACE_DEFINED__
#define __IVdsVolumeShrink_INTERFACE_DEFINED__

/* interface IVdsVolumeShrink */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IVdsVolumeShrink;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("d68168c9-82a2-4f85-b6e9-74707c49a58f")
    IVdsVolumeShrink : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE QueryMaxReclaimableBytes( 
            /* [out] */ __RPC__out ULONGLONG *pullMaxNumberOfReclaimableBytes) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Shrink( 
            /* [in] */ ULONGLONG ullDesiredNumberOfReclaimableBytes,
            /* [in] */ ULONGLONG ullMinNumberOfReclaimableBytes,
            /* [out] */ __RPC__deref_out_opt IVdsAsync **ppAsync) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IVdsVolumeShrinkVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVdsVolumeShrink * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVdsVolumeShrink * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVdsVolumeShrink * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *QueryMaxReclaimableBytes )( 
            IVdsVolumeShrink * This,
            /* [out] */ __RPC__out ULONGLONG *pullMaxNumberOfReclaimableBytes);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Shrink )( 
            IVdsVolumeShrink * This,
            /* [in] */ ULONGLONG ullDesiredNumberOfReclaimableBytes,
            /* [in] */ ULONGLONG ullMinNumberOfReclaimableBytes,
            /* [out] */ __RPC__deref_out_opt IVdsAsync **ppAsync);
        
        END_INTERFACE
    } IVdsVolumeShrinkVtbl;

    interface IVdsVolumeShrink
    {
        CONST_VTBL struct IVdsVolumeShrinkVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVdsVolumeShrink_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVdsVolumeShrink_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVdsVolumeShrink_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVdsVolumeShrink_QueryMaxReclaimableBytes(This,pullMaxNumberOfReclaimableBytes)	\
    ( (This)->lpVtbl -> QueryMaxReclaimableBytes(This,pullMaxNumberOfReclaimableBytes) ) 

#define IVdsVolumeShrink_Shrink(This,ullDesiredNumberOfReclaimableBytes,ullMinNumberOfReclaimableBytes,ppAsync)	\
    ( (This)->lpVtbl -> Shrink(This,ullDesiredNumberOfReclaimableBytes,ullMinNumberOfReclaimableBytes,ppAsync) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVdsVolumeShrink_INTERFACE_DEFINED__ */


#ifndef __IVdsSubSystemImportTarget_INTERFACE_DEFINED__
#define __IVdsSubSystemImportTarget_INTERFACE_DEFINED__

/* interface IVdsSubSystemImportTarget */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IVdsSubSystemImportTarget;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("83bfb87f-43fb-4903-baa6-127f01029eec")
    IVdsSubSystemImportTarget : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetImportTarget( 
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppwszIscsiName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetImportTarget( 
            /* [string][unique][in] */ __RPC__in_opt LPWSTR pwszIscsiName) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IVdsSubSystemImportTargetVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVdsSubSystemImportTarget * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVdsSubSystemImportTarget * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVdsSubSystemImportTarget * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetImportTarget )( 
            IVdsSubSystemImportTarget * This,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppwszIscsiName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetImportTarget )( 
            IVdsSubSystemImportTarget * This,
            /* [string][unique][in] */ __RPC__in_opt LPWSTR pwszIscsiName);
        
        END_INTERFACE
    } IVdsSubSystemImportTargetVtbl;

    interface IVdsSubSystemImportTarget
    {
        CONST_VTBL struct IVdsSubSystemImportTargetVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVdsSubSystemImportTarget_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVdsSubSystemImportTarget_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVdsSubSystemImportTarget_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVdsSubSystemImportTarget_GetImportTarget(This,ppwszIscsiName)	\
    ( (This)->lpVtbl -> GetImportTarget(This,ppwszIscsiName) ) 

#define IVdsSubSystemImportTarget_SetImportTarget(This,pwszIscsiName)	\
    ( (This)->lpVtbl -> SetImportTarget(This,pwszIscsiName) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVdsSubSystemImportTarget_INTERFACE_DEFINED__ */


#ifndef __IVdsIscsiPortalLocal_INTERFACE_DEFINED__
#define __IVdsIscsiPortalLocal_INTERFACE_DEFINED__

/* interface IVdsIscsiPortalLocal */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IVdsIscsiPortalLocal;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ad837c28-52c1-421d-bf04-fae7da665396")
    IVdsIscsiPortalLocal : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetIpsecSecurityLocal( 
            /* [in] */ ULONGLONG ullSecurityFlags,
            /* [unique][in] */ __RPC__in_opt VDS_ISCSI_IPSEC_KEY *pIpsecKey) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IVdsIscsiPortalLocalVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVdsIscsiPortalLocal * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVdsIscsiPortalLocal * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVdsIscsiPortalLocal * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetIpsecSecurityLocal )( 
            IVdsIscsiPortalLocal * This,
            /* [in] */ ULONGLONG ullSecurityFlags,
            /* [unique][in] */ __RPC__in_opt VDS_ISCSI_IPSEC_KEY *pIpsecKey);
        
        END_INTERFACE
    } IVdsIscsiPortalLocalVtbl;

    interface IVdsIscsiPortalLocal
    {
        CONST_VTBL struct IVdsIscsiPortalLocalVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVdsIscsiPortalLocal_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVdsIscsiPortalLocal_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVdsIscsiPortalLocal_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVdsIscsiPortalLocal_SetIpsecSecurityLocal(This,ullSecurityFlags,pIpsecKey)	\
    ( (This)->lpVtbl -> SetIpsecSecurityLocal(This,ullSecurityFlags,pIpsecKey) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVdsIscsiPortalLocal_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif



