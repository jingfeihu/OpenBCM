/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/tnl/bcm56996_a0/bcm56996_a0_TNL_L2_VXLAN_DECAP_VFI_ASSIGNMENT_OVID_VNID.map.ltl for
 *      bcm56996_a0
 *
 * Tool: $SDK/INTERNAL/fltg/bin/fltg
 *
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */
#include <bcmlrd/bcmlrd_internal.h>
#include <bcmlrd/chip/bcmlrd_id.h>
#include <bcmlrd/chip/bcm56996_a0/bcm56996_a0_lrd_field_data.h>
#include <bcmlrd/chip/bcm56996_a0/bcm56996_a0_lrd_ltm_intf.h>
#include <bcmlrd/chip/bcm56996_a0/bcm56996_a0_lrd_xfrm_field_desc.h>
#include <bcmdrd/chip/bcm56996_a0_enum.h>
#include "bcmltd/chip/bcmltd_common_enumpool.h"
#include "bcm56996_a0_lrd_enumpool.h"
/* TNL_L2_VXLAN_DECAP_VFI_ASSIGNMENT_OVID_VNID field init */
static const bcmlrd_field_data_t bcm56996_a0_lrd_tnl_l2_vxlan_decap_vfi_assignment_ovid_vnid_map_field_data_mmd[] = {
    { /* 0 OVID */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56996_a0_lrd_ifd_u16_0x0,
      .def = &bcm56996_a0_lrd_ifd_u16_0x0,
      .max = &bcm56996_a0_lrd_ifd_u16_0xfff,
      .depth = 0,
      .width = 12,
      .edata = NULL,
    },
    { /* 1 VNID */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56996_a0_lrd_ifd_u32_0x0,
      .def = &bcm56996_a0_lrd_ifd_u32_0x0,
      .max = &bcm56996_a0_lrd_ifd_u32_0xffffff,
      .depth = 0,
      .width = 24,
      .edata = NULL,
    },
    { /* 2 VFI_ID */
      .flags = 0,
      .min = &bcm56996_a0_lrd_ifd_u16_0x0,
      .def = &bcm56996_a0_lrd_ifd_u16_0x0,
      .max = &bcm56996_a0_lrd_ifd_u16_0x1fff,
      .depth = 0,
      .width = 13,
      .edata = NULL,
    },
    { /* 3 CTR_ING_EFLEX_OBJECT */
      .flags = 0,
      .min = &bcm56996_a0_lrd_ifd_u16_0x0,
      .def = &bcm56996_a0_lrd_ifd_u16_0x0,
      .max = &bcm56996_a0_lrd_ifd_u16_0x3fff,
      .depth = 0,
      .width = 14,
      .edata = NULL,
    },
    { /* 4 CTR_ING_EFLEX_ACTION */
      .flags = 0,
      .min = &bcm56996_a0_lrd_ifd_u16_0x0,
      .def = &bcm56996_a0_lrd_ifd_u16_0x0,
      .max = &bcm56996_a0_lrd_ifd_u16_0x1f,
      .depth = 0,
      .width = 5,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56996_a0_lrd_tnl_l2_vxlan_decap_vfi_assignment_ovid_vnid_map_field_data = {
    .fields = 5,
    .field = bcm56996_a0_lrd_tnl_l2_vxlan_decap_vfi_assignment_ovid_vnid_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56996_a0_lrd_tnl_l2_vxlan_decap_vfi_assignment_ovid_vnidt_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_SIZE,
        .value = 16384,
    },
};

static const bcmlrd_map_attr_t bcm56996_a0_lrd_tnl_l2_vxlan_decap_vfi_assignment_ovid_vnidt_attr_group = {
    .attributes = 2,
    .attr = bcm56996_a0_lrd_tnl_l2_vxlan_decap_vfi_assignment_ovid_vnidt_attr_entry,
};

static const bcmlrd_map_entry_t bcm56996_a0_lrd_tnl_l2_vxlan_decap_vfi_assignment_ovid_vnidt_mpls_entry_single_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = BASE_VALIDf,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 2,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 1,
            }
        },
    },
    { /* 1 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = KEY_TYPEf,
            .field_idx = 0,
            .minbit    = 3,
            .maxbit    = 6,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 3,
            }
        },
    },
    { /* 2 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = VXLAN_VNIDv_OVIDf,
            .field_idx = 0,
            .minbit    = 7,
            .maxbit    = 18,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_L2_VXLAN_DECAP_VFI_ASSIGNMENT_OVID_VNIDt_OVIDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 11,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 3 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = VXLAN_VNIDv_VNIDf,
            .field_idx = 0,
            .minbit    = 19,
            .maxbit    = 42,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_L2_VXLAN_DECAP_VFI_ASSIGNMENT_OVID_VNIDt_VNIDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 23,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 4 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = VXLAN_VNIDv_FWD_TYPEf,
            .field_idx = 0,
            .minbit    = 87,
            .maxbit    = 87,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 1,
            }
        },
    },
    { /* 5 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = VXLAN_VNIDv_VFIf,
            .field_idx = 0,
            .minbit    = 88,
            .maxbit    = 100,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_L2_VXLAN_DECAP_VFI_ASSIGNMENT_OVID_VNIDt_VFI_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 12,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 6 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = VXLAN_VNIDv_FLEX_CTR_OBJECTf,
            .field_idx = 0,
            .minbit    = 101,
            .maxbit    = 114,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_L2_VXLAN_DECAP_VFI_ASSIGNMENT_OVID_VNIDt_CTR_ING_EFLEX_OBJECTf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 13,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 7 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = VXLAN_VNIDv_FLEX_CTR_ACTIONf,
            .field_idx = 0,
            .minbit    = 115,
            .maxbit    = 119,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_L2_VXLAN_DECAP_VFI_ASSIGNMENT_OVID_VNIDt_CTR_ING_EFLEX_ACTIONf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 4,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
};
static const bcmlrd_map_group_t bcm56996_a0_lrd_tnl_l2_vxlan_decap_vfi_assignment_ovid_vnid_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = MPLS_ENTRY_SINGLEm,
        },
        .entries = 8,
        .entry = bcm56996_a0_lrd_tnl_l2_vxlan_decap_vfi_assignment_ovid_vnidt_mpls_entry_single_map_entry
    },
};
const bcmlrd_map_t bcm56996_a0_lrd_tnl_l2_vxlan_decap_vfi_assignment_ovid_vnid_map = {
    .src_id = TNL_L2_VXLAN_DECAP_VFI_ASSIGNMENT_OVID_VNIDt,
    .field_data = &bcm56996_a0_lrd_tnl_l2_vxlan_decap_vfi_assignment_ovid_vnid_map_field_data,
    .groups = 1,
    .group  = bcm56996_a0_lrd_tnl_l2_vxlan_decap_vfi_assignment_ovid_vnid_map_group,
    .table_attr = &bcm56996_a0_lrd_tnl_l2_vxlan_decap_vfi_assignment_ovid_vnidt_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};
