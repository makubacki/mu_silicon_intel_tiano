/** @file

  Flash region GUID definitions.

  Copyright (c) Microsoft Corporation.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#ifndef __FLASH_REGION_H__
#define __FLASH_REGION_H__

#define FLASH_REGION_DESCRIPTOR_GUID        { 0xaf90c5d8, 0xb8d1, 0x4cc2, {0xbb, 0xc1, 0xc9, 0xeb, 0x51, 0x2d, 0x2f, 0x82 } }
#define FLASH_REGION_BIOS_GUID              { 0x6fe65e44, 0x00fc, 0x4ae7, {0xb7, 0x61, 0xb4, 0x8f, 0x17, 0x0f, 0x4d, 0x85 } }
#define FLASH_REGION_ME_GUID                { 0xebbfcd3f, 0xe8de, 0x40c1, {0x9c, 0xfd, 0xd3, 0x4e, 0x36, 0xdc, 0x0d, 0xe4 } }
#define FLASH_REGION_GBE_GUID               { 0x79d11264, 0xed7a, 0x4556, {0xaf, 0xeb, 0x4b, 0x23, 0x93, 0x9c, 0x88, 0xe7 } }
#define FLASH_REGION_PLATFORM_DATA_GUID     { 0x4330a7d5, 0xad54, 0x456a, {0x8f, 0xe1, 0xea, 0x4f, 0xa1, 0xbe, 0x58, 0xd0 } }
#define FLASH_REGION_DER_GUID               { 0x83014a66, 0xfd0b, 0x4049, {0xb3, 0xf7, 0x85, 0x6c, 0x26, 0xbb, 0xb4, 0x34 } }
#define FLASH_REGION_SECONDARY_BIOS_GUID    { 0x993382b4, 0x5a43, 0x4cb0, {0xba, 0x77, 0x06, 0xb9, 0x16, 0xc5, 0x6a, 0x18 } }
#define FLASH_REGION_MICROCODE_PATCH_GUID   { 0x3e97eeeb, 0xc5f7, 0x4af6, {0xa8, 0x61, 0x22, 0xfd, 0x8d, 0x8c, 0xa1, 0x84 } }
#define FLASH_REGION_EC_GUID                { 0x55a62589, 0x1b0c, 0x43ad, {0x91, 0xe2, 0x6f, 0xcc, 0x08, 0xc6, 0x9b, 0x75 } }
#define FLASH_REGION_DEVICE_EXPANSION_GUID  { 0x0dc8f30b, 0x472b, 0x48cc, {0xbd, 0x22, 0xe2, 0x7c, 0xfe, 0xc2, 0xc3, 0x7e } }
#define FLASH_REGION_IE_GUID                { 0xf930a983, 0xb72e, 0x41cc, {0x98, 0x1a, 0x2c, 0x60, 0x6b, 0xf5, 0x7e, 0xdb } }
#define FLASH_REGION_10GBE_A_GUID           { 0xde09e662, 0x831f, 0x4ace, {0x9a, 0x06, 0x31, 0x7c, 0xcd, 0x9c, 0x38, 0x3e } }
#define FLASH_REGION_10GBE_B_GUID           { 0x7776d88b, 0x48cb, 0x42a4, {0xb5, 0x93, 0x9b, 0x50, 0x9c, 0x8e, 0xd2, 0xae } }
#define FLASH_REGION_ALL_GUID               { 0xbabe60dc, 0xf88d, 0x4584, {0x9e, 0x54, 0x57, 0x44, 0x4b, 0xe2, 0x6e, 0xf3 } }
#define FLASH_REGION_MAX_GUID               { 0x74c2e3c1, 0x8faa, 0x4659, {0xa7, 0xbb, 0x87, 0x1f, 0xbb, 0x61, 0xd3, 0xb4 } }

extern EFI_GUID gFlashRegionDescriptorGuid;
extern EFI_GUID gFlashRegionBiosGuid;
extern EFI_GUID gFlashRegionMeGuid;
extern EFI_GUID gFlashRegionGbeGuid;
extern EFI_GUID gFlashRegionPlatformDataGuid;
extern EFI_GUID gFlashRegionDerGuid;
extern EFI_GUID gFlashRegionSecondaryBiosGuid;
extern EFI_GUID gFlashRegionMicrocodePatchGuid;
extern EFI_GUID gFlashRegionEcGuid;
extern EFI_GUID gFlashRegionDeviceExpansion2Guid;
extern EFI_GUID gFlashRegionIeGuid;
extern EFI_GUID gFlashRegion10GbeAGuid;
extern EFI_GUID gFlashRegion10GbeBGuid;
extern EFI_GUID gFlashRegionAllGuid;
extern EFI_GUID gFlashRegionMaxGuid;

#endif
