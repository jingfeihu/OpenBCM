/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/vlan/bcm56780_a0/bcm56780_a0_VLAN_ING_MEMBER_PROFILE.map.ltl for
 *      bcm56780_a0
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
#include <bcmlrd/chip/bcm56780_a0/bcm56780_a0_lrd_field_data.h>
#include <bcmlrd/chip/bcm56780_a0/bcm56780_a0_lrd_ltm_intf.h>
#include <bcmlrd/chip/bcm56780_a0/bcm56780_a0_lrd_xfrm_field_desc.h>
#include <bcmdrd/chip/bcm56780_a0_enum.h>
#include "bcmltd/chip/bcmltd_common_enumpool.h"
#include "bcm56780_a0_lrd_enumpool.h"
#include <bcmltd/bcmltd_handler.h>
/* VLAN_ING_MEMBER_PROFILE field init */
static const bcmlrd_field_data_t bcm56780_a0_lrd_vlan_ing_member_profile_map_field_data_mmd[] = {
    { /* 0 VLAN_ING_MEMBER_PROFILE_ID */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_lrd_ifd_u8_0x0,
      .def = &bcm56780_a0_lrd_ifd_u8_0x0,
      .max = &bcm56780_a0_lrd_ifd_u8_0xff,
      .depth = 0,
      .width = 8,
      .edata = NULL,
    },
    { /* 1 MEMBER_PORTS */
      .flags = 0,
      .min = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56780_a0_lrd_ifd_is_true_0x1,
      .depth = 80,
      .width = 1,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56780_a0_lrd_vlan_ing_member_profile_map_field_data = {
    .fields = 2,
    .field = bcm56780_a0_lrd_vlan_ing_member_profile_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56780_a0_lrd_vlan_ing_member_profilet_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MAX_INDEX,
        .value = 255,
    },
    { /* 2 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MIN_INDEX,
        .value = 0,
    },
};

static const bcmlrd_map_attr_t bcm56780_a0_lrd_vlan_ing_member_profilet_attr_group = {
    .attributes = 3,
    .attr = bcm56780_a0_lrd_vlan_ing_member_profilet_attr_entry,
};


const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_port_array_to_pbmp_src_field_desc_s12[1] = {
    {
        .field_id  = VLAN_ING_MEMBER_PROFILEt_MEMBER_PORTSf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 0,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_port_array_to_pbmp_vlan_ing_member_profile_dst_field_desc_d2[1] = {
    {
        .field_id  = BMPf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 79,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_lta_bcmltx_port_array_to_pbmp_xfrm_handler_fwd_s12_d2_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_LTA_BCMLTX_PORT_ARRAY_TO_PBMP_XFRM_HANDLER_FWD_S12_D2_ID,
    .src_fields = 1,
    .src = bcm56780_a0_lrd_bcmltx_port_array_to_pbmp_src_field_desc_s12,
    .dst_fields = 1,
    .dst = bcm56780_a0_lrd_bcmltx_port_array_to_pbmp_vlan_ing_member_profile_dst_field_desc_d2,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_lta_bcmltx_port_array_to_pbmp_xfrm_handler_rev_s12_d2_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_LTA_BCMLTX_PORT_ARRAY_TO_PBMP_XFRM_HANDLER_REV_S12_D2_ID,
    .src_fields = 1,
    .src = bcm56780_a0_lrd_bcmltx_port_array_to_pbmp_vlan_ing_member_profile_dst_field_desc_d2,
    .dst_fields = 1,
    .dst = bcm56780_a0_lrd_bcmltx_port_array_to_pbmp_src_field_desc_s12,
};


static const bcmlrd_map_entry_t bcm56780_a0_lrd_vlan_ing_member_profilet_membership_check_ing0_bitmap_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = BCMLRD_FIELD_INDEX,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 7,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = VLAN_ING_MEMBER_PROFILEt_VLAN_ING_MEMBER_PROFILE_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 7,
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
                /* handler: bcm56780_a0_lta_bcmltx_port_array_to_pbmp_xfrm_handler_fwd_s12_d2 */
                .desc = &bcm56780_a0_lta_bcmltx_port_array_to_pbmp_xfrm_handler_fwd_s12_d2_desc,
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
                /* handler: bcm56780_a0_lta_bcmltx_port_array_to_pbmp_xfrm_handler_rev_s12_d2 */
                .desc = &bcm56780_a0_lta_bcmltx_port_array_to_pbmp_xfrm_handler_rev_s12_d2_desc,
            },
        },
    },
};
static const bcmlrd_map_group_t bcm56780_a0_lrd_vlan_ing_member_profile_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = MEMBERSHIP_CHECK_ING0_BITMAPm,
        },
        .entries = 3,
        .entry = bcm56780_a0_lrd_vlan_ing_member_profilet_membership_check_ing0_bitmap_map_entry
    },
};
const bcmlrd_map_t bcm56780_a0_lrd_vlan_ing_member_profile_map = {
    .src_id = VLAN_ING_MEMBER_PROFILEt,
    .field_data = &bcm56780_a0_lrd_vlan_ing_member_profile_map_field_data,
    .groups = 1,
    .group  = bcm56780_a0_lrd_vlan_ing_member_profile_map_group,
    .table_attr = &bcm56780_a0_lrd_vlan_ing_member_profilet_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};
