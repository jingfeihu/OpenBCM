/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/vfi/bcm56996_a0/bcm56996_a0_VFI_EGR_MEMBER_PORTS_PROFILE.map.ltl for
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
#include <bcmltd/bcmltd_handler.h>
/* VFI_EGR_MEMBER_PORTS_PROFILE field init */
static const bcmlrd_field_data_t bcm56996_a0_lrd_vfi_egr_member_ports_profile_map_field_data_mmd[] = {
    { /* 0 VFI_EGR_MEMBER_PORTS_PROFILE_ID */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56996_a0_lrd_ifd_u16_0x0,
      .def = &bcm56996_a0_lrd_ifd_u16_0x0,
      .max = &bcm56996_a0_lrd_ifd_u16_0xfff,
      .depth = 0,
      .width = 12,
      .edata = NULL,
    },
    { /* 1 MEMBER_PORTS */
      .flags = 0,
      .min = &bcm56996_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56996_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56996_a0_lrd_ifd_is_true_0x1,
      .depth = 272,
      .width = 1,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56996_a0_lrd_vfi_egr_member_ports_profile_map_field_data = {
    .fields = 2,
    .field = bcm56996_a0_lrd_vfi_egr_member_ports_profile_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56996_a0_lrd_vfi_egr_member_ports_profilet_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MAX_INDEX,
        .value = 4095,
    },
    { /* 2 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MIN_INDEX,
        .value = 0,
    },
};

static const bcmlrd_map_attr_t bcm56996_a0_lrd_vfi_egr_member_ports_profilet_attr_group = {
    .attributes = 3,
    .attr = bcm56996_a0_lrd_vfi_egr_member_ports_profilet_attr_entry,
};


const bcmltd_field_desc_t
bcm56996_a0_lrd_bcmltx_port_array_to_pbmp_src_field_desc_s18[1] = {
    {
        .field_id  = VFI_EGR_MEMBER_PORTS_PROFILEt_MEMBER_PORTSf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 0,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56996_a0_lrd_bcmltx_port_array_to_pbmp_vfi_egr_member_ports_profile_dst_field_desc_d4[1] = {
    {
        .field_id  = PORT_BITMAPf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 271,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmlrd_field_xfrm_desc_t
bcm56996_a0_lta_bcmltx_port_array_to_pbmp_xfrm_handler_fwd_s18_d4_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56996_A0_LTA_BCMLTX_PORT_ARRAY_TO_PBMP_XFRM_HANDLER_FWD_S18_D4_ID,
    .src_fields = 1,
    .src = bcm56996_a0_lrd_bcmltx_port_array_to_pbmp_src_field_desc_s18,
    .dst_fields = 1,
    .dst = bcm56996_a0_lrd_bcmltx_port_array_to_pbmp_vfi_egr_member_ports_profile_dst_field_desc_d4,
};

const bcmlrd_field_xfrm_desc_t
bcm56996_a0_lta_bcmltx_port_array_to_pbmp_xfrm_handler_rev_s18_d4_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56996_A0_LTA_BCMLTX_PORT_ARRAY_TO_PBMP_XFRM_HANDLER_REV_S18_D4_ID,
    .src_fields = 1,
    .src = bcm56996_a0_lrd_bcmltx_port_array_to_pbmp_vfi_egr_member_ports_profile_dst_field_desc_d4,
    .dst_fields = 1,
    .dst = bcm56996_a0_lrd_bcmltx_port_array_to_pbmp_src_field_desc_s18,
};


static const bcmlrd_map_entry_t bcm56996_a0_lrd_vfi_egr_member_ports_profilet_egr_vfi_membership_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = BCMLRD_FIELD_INDEX,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 11,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = VFI_EGR_MEMBER_PORTS_PROFILEt_VFI_EGR_MEMBER_PORTS_PROFILE_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 11,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 1 */
        .entry_type = BCMLRD_MAP_ENTRY_FWD_VALUE_FIELD_XFRM_HANDLER,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .xfrm = {
                /* handler: bcm56996_a0_lta_bcmltx_port_array_to_pbmp_xfrm_handler_fwd_s18_d4 */
                .desc = &bcm56996_a0_lta_bcmltx_port_array_to_pbmp_xfrm_handler_fwd_s18_d4_desc,
            },
        },
    },
    { /* 2 */
        .entry_type = BCMLRD_MAP_ENTRY_REV_VALUE_FIELD_XFRM_HANDLER,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .xfrm = {
                /* handler: bcm56996_a0_lta_bcmltx_port_array_to_pbmp_xfrm_handler_rev_s18_d4 */
                .desc = &bcm56996_a0_lta_bcmltx_port_array_to_pbmp_xfrm_handler_rev_s18_d4_desc,
            },
        },
    },
};
static const bcmlrd_map_group_t bcm56996_a0_lrd_vfi_egr_member_ports_profile_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = EGR_VFI_MEMBERSHIPm,
        },
        .entries = 3,
        .entry = bcm56996_a0_lrd_vfi_egr_member_ports_profilet_egr_vfi_membership_map_entry
    },
};
const bcmlrd_map_t bcm56996_a0_lrd_vfi_egr_member_ports_profile_map = {
    .src_id = VFI_EGR_MEMBER_PORTS_PROFILEt,
    .field_data = &bcm56996_a0_lrd_vfi_egr_member_ports_profile_map_field_data,
    .groups = 1,
    .group  = bcm56996_a0_lrd_vfi_egr_member_ports_profile_map_group,
    .table_attr = &bcm56996_a0_lrd_vfi_egr_member_ports_profilet_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};
