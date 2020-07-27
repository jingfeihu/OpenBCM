/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/vlan/bcm56880_a0/bcm56880_a0_VLAN_ASSIGNMENT_INNER_VLAN_RANGE.map.ltl for
 *      bcm56880_a0
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
#include <bcmlrd/chip/bcm56880_a0/bcm56880_a0_lrd_field_data.h>
#include <bcmlrd/chip/bcm56880_a0/bcm56880_a0_lrd_ltm_intf.h>
#include <bcmlrd/chip/bcm56880_a0/bcm56880_a0_lrd_xfrm_field_desc.h>
#include <bcmdrd/chip/bcm56880_a0_enum.h>
#include "bcmltd/chip/bcmltd_common_enumpool.h"
#include "bcm56880_a0_lrd_enumpool.h"
#include <bcmltd/bcmltd_handler.h>
/* VLAN_ASSIGNMENT_INNER_VLAN_RANGE field init */
static const bcmlrd_field_data_t bcm56880_a0_lrd_vlan_assignment_inner_vlan_range_map_field_data_mmd[] = {
    { /* 0 VLAN_ASSIGNMENT_INNER_VLAN_RANGE_ID */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56880_a0_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_lrd_ifd_u8_0xff,
      .depth = 0,
      .width = 8,
      .edata = NULL,
    },
    { /* 1 VLAN_ID_MIN */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_u16_0x0,
      .def = &bcm56880_a0_lrd_ifd_u16_0x0,
      .max = &bcm56880_a0_lrd_ifd_u16_0xfff,
      .depth = 8,
      .width = 12,
      .edata = NULL,
    },
    { /* 2 VLAN_ID_MAX */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_u16_0x0,
      .def = &bcm56880_a0_lrd_ifd_u16_0x0,
      .max = &bcm56880_a0_lrd_ifd_u16_0xfff,
      .depth = 8,
      .width = 12,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56880_a0_lrd_vlan_assignment_inner_vlan_range_map_field_data = {
    .fields = 3,
    .field = bcm56880_a0_lrd_vlan_assignment_inner_vlan_range_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56880_a0_lrd_vlan_assignment_inner_vlan_ranget_attr_entry[] = {
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

static const bcmlrd_map_attr_t bcm56880_a0_lrd_vlan_assignment_inner_vlan_ranget_attr_group = {
    .attributes = 3,
    .attr = bcm56880_a0_lrd_vlan_assignment_inner_vlan_ranget_attr_entry,
};


const bcmltd_field_desc_t
bcm56880_a0_lrd_bcmltx_vlan_assignment_vlan_range_vlan_id_min_src_field_desc_s0[1] = {
    {
        .field_id  = VLAN_ASSIGNMENT_INNER_VLAN_RANGEt_VLAN_ID_MINf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 11,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56880_a0_lrd_bcmltx_vlan_assignment_vlan_range_vlan_id_min_vlan_assignment_inner_vlan_range_dst_field_desc_d0[8] = {
    {
        .field_id  = RANGE_MIN_0f,
        .field_idx = 0,
        .minbit    = 128,
        .maxbit    = 143,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = RANGE_MIN_1f,
        .field_idx = 0,
        .minbit    = 144,
        .maxbit    = 159,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = RANGE_MIN_2f,
        .field_idx = 0,
        .minbit    = 160,
        .maxbit    = 175,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = RANGE_MIN_3f,
        .field_idx = 0,
        .minbit    = 176,
        .maxbit    = 191,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = RANGE_MIN_4f,
        .field_idx = 0,
        .minbit    = 192,
        .maxbit    = 207,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = RANGE_MIN_5f,
        .field_idx = 0,
        .minbit    = 208,
        .maxbit    = 223,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = RANGE_MIN_6f,
        .field_idx = 0,
        .minbit    = 224,
        .maxbit    = 239,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = RANGE_MIN_7f,
        .field_idx = 0,
        .minbit    = 240,
        .maxbit    = 255,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmltd_field_desc_t
bcm56880_a0_lrd_bcmltx_vlan_assignment_vlan_range_vlan_id_max_src_field_desc_s0[1] = {
    {
        .field_id  = VLAN_ASSIGNMENT_INNER_VLAN_RANGEt_VLAN_ID_MAXf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 11,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56880_a0_lrd_bcmltx_vlan_assignment_vlan_range_vlan_id_max_vlan_assignment_inner_vlan_range_dst_field_desc_d0[8] = {
    {
        .field_id  = RANGE_MAX_0f,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 15,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = RANGE_MAX_1f,
        .field_idx = 0,
        .minbit    = 16,
        .maxbit    = 31,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = RANGE_MAX_2f,
        .field_idx = 0,
        .minbit    = 32,
        .maxbit    = 47,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = RANGE_MAX_3f,
        .field_idx = 0,
        .minbit    = 48,
        .maxbit    = 63,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = RANGE_MAX_4f,
        .field_idx = 0,
        .minbit    = 64,
        .maxbit    = 79,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = RANGE_MAX_5f,
        .field_idx = 0,
        .minbit    = 80,
        .maxbit    = 95,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = RANGE_MAX_6f,
        .field_idx = 0,
        .minbit    = 96,
        .maxbit    = 111,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = RANGE_MAX_7f,
        .field_idx = 0,
        .minbit    = 112,
        .maxbit    = 127,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmlrd_field_xfrm_desc_t
bcm56880_a0_lta_bcmltx_vlan_assignment_vlan_range_vlan_id_min_xfrm_handler_fwd_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56880_A0_LTA_BCMLTX_VLAN_ASSIGNMENT_VLAN_RANGE_VLAN_ID_MIN_XFRM_HANDLER_FWD_S0_D0_ID,
    .src_fields = 1,
    .src = bcm56880_a0_lrd_bcmltx_vlan_assignment_vlan_range_vlan_id_min_src_field_desc_s0,
    .dst_fields = 8,
    .dst = bcm56880_a0_lrd_bcmltx_vlan_assignment_vlan_range_vlan_id_min_vlan_assignment_inner_vlan_range_dst_field_desc_d0,
};

const bcmlrd_field_xfrm_desc_t
bcm56880_a0_lta_bcmltx_vlan_assignment_vlan_range_vlan_id_min_xfrm_handler_rev_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56880_A0_LTA_BCMLTX_VLAN_ASSIGNMENT_VLAN_RANGE_VLAN_ID_MIN_XFRM_HANDLER_REV_S0_D0_ID,
    .src_fields = 8,
    .src = bcm56880_a0_lrd_bcmltx_vlan_assignment_vlan_range_vlan_id_min_vlan_assignment_inner_vlan_range_dst_field_desc_d0,
    .dst_fields = 1,
    .dst = bcm56880_a0_lrd_bcmltx_vlan_assignment_vlan_range_vlan_id_min_src_field_desc_s0,
};

const bcmlrd_field_xfrm_desc_t
bcm56880_a0_lta_bcmltx_vlan_assignment_vlan_range_vlan_id_max_xfrm_handler_fwd_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56880_A0_LTA_BCMLTX_VLAN_ASSIGNMENT_VLAN_RANGE_VLAN_ID_MAX_XFRM_HANDLER_FWD_S0_D0_ID,
    .src_fields = 1,
    .src = bcm56880_a0_lrd_bcmltx_vlan_assignment_vlan_range_vlan_id_max_src_field_desc_s0,
    .dst_fields = 8,
    .dst = bcm56880_a0_lrd_bcmltx_vlan_assignment_vlan_range_vlan_id_max_vlan_assignment_inner_vlan_range_dst_field_desc_d0,
};

const bcmlrd_field_xfrm_desc_t
bcm56880_a0_lta_bcmltx_vlan_assignment_vlan_range_vlan_id_max_xfrm_handler_rev_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56880_A0_LTA_BCMLTX_VLAN_ASSIGNMENT_VLAN_RANGE_VLAN_ID_MAX_XFRM_HANDLER_REV_S0_D0_ID,
    .src_fields = 8,
    .src = bcm56880_a0_lrd_bcmltx_vlan_assignment_vlan_range_vlan_id_max_vlan_assignment_inner_vlan_range_dst_field_desc_d0,
    .dst_fields = 1,
    .dst = bcm56880_a0_lrd_bcmltx_vlan_assignment_vlan_range_vlan_id_max_src_field_desc_s0,
};


static const bcmlrd_map_entry_t bcm56880_a0_lrd_vlan_assignment_inner_vlan_ranget_range_map_profile_1_map_entry[] = {
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
                    .field_id = VLAN_ASSIGNMENT_INNER_VLAN_RANGEt_VLAN_ASSIGNMENT_INNER_VLAN_RANGE_IDf,
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
                /* handler: bcm56880_a0_lta_bcmltx_vlan_assignment_vlan_range_vlan_id_min_xfrm_handler_fwd_s0_d0 */
                .desc = &bcm56880_a0_lta_bcmltx_vlan_assignment_vlan_range_vlan_id_min_xfrm_handler_fwd_s0_d0_desc,
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
                /* handler: bcm56880_a0_lta_bcmltx_vlan_assignment_vlan_range_vlan_id_min_xfrm_handler_rev_s0_d0 */
                .desc = &bcm56880_a0_lta_bcmltx_vlan_assignment_vlan_range_vlan_id_min_xfrm_handler_rev_s0_d0_desc,
            },
        },
    },
    { /* 3 */
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
                /* handler: bcm56880_a0_lta_bcmltx_vlan_assignment_vlan_range_vlan_id_max_xfrm_handler_fwd_s0_d0 */
                .desc = &bcm56880_a0_lta_bcmltx_vlan_assignment_vlan_range_vlan_id_max_xfrm_handler_fwd_s0_d0_desc,
            },
        },
    },
    { /* 4 */
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
                /* handler: bcm56880_a0_lta_bcmltx_vlan_assignment_vlan_range_vlan_id_max_xfrm_handler_rev_s0_d0 */
                .desc = &bcm56880_a0_lta_bcmltx_vlan_assignment_vlan_range_vlan_id_max_xfrm_handler_rev_s0_d0_desc,
            },
        },
    },
};
static const bcmlrd_map_group_t bcm56880_a0_lrd_vlan_assignment_inner_vlan_range_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = RANGE_MAP_PROFILE_1m,
        },
        .entries = 5,
        .entry = bcm56880_a0_lrd_vlan_assignment_inner_vlan_ranget_range_map_profile_1_map_entry
    },
};
const bcmlrd_map_t bcm56880_a0_lrd_vlan_assignment_inner_vlan_range_map = {
    .src_id = VLAN_ASSIGNMENT_INNER_VLAN_RANGEt,
    .field_data = &bcm56880_a0_lrd_vlan_assignment_inner_vlan_range_map_field_data,
    .groups = 1,
    .group  = bcm56880_a0_lrd_vlan_assignment_inner_vlan_range_map_group,
    .table_attr = &bcm56880_a0_lrd_vlan_assignment_inner_vlan_ranget_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};
