/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/l3/bcm56990_b0/bcm56990_b0_L3_MC_MTU.map.ltl for
 *      bcm56990_b0
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
#include <bcmlrd/chip/bcm56990_b0/bcm56990_b0_lrd_field_data.h>
#include <bcmlrd/chip/bcm56990_b0/bcm56990_b0_lrd_ltm_intf.h>
#include <bcmlrd/chip/bcm56990_b0/bcm56990_b0_lrd_xfrm_field_desc.h>
#include <bcmdrd/chip/bcm56990_b0_enum.h>
#include "bcmltd/chip/bcmltd_common_enumpool.h"
#include "bcm56990_b0_lrd_enumpool.h"
#include <bcmltd/bcmltd_handler.h>
/* L3_MC_MTU field init */
static const bcmlrd_field_data_t bcm56990_b0_lrd_l3_mc_mtu_map_field_data_mmd[] = {
    { /* 0 TM_MC_GROUP_ID */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56990_b0_lrd_ifd_u16_0x0,
      .def = &bcm56990_b0_lrd_ifd_u16_0x0,
      .max = &bcm56990_b0_lrd_ifd_u16_0x1ff,
      .depth = 0,
      .width = 9,
      .edata = NULL,
    },
    { /* 1 L3_MTU */
      .flags = 0,
      .min = &bcm56990_b0_lrd_ifd_u16_0x0,
      .def = &bcm56990_b0_lrd_ifd_u16_0x3fff,
      .max = &bcm56990_b0_lrd_ifd_u16_0x3fff,
      .depth = 0,
      .width = 14,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56990_b0_lrd_l3_mc_mtu_map_field_data = {
    .fields = 2,
    .field = bcm56990_b0_lrd_l3_mc_mtu_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56990_b0_lrd_l3_mc_mtut_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MAX_INDEX,
        .value = 8703,
    },
    { /* 2 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MIN_INDEX,
        .value = 8192,
    },
};

static const bcmlrd_map_attr_t bcm56990_b0_lrd_l3_mc_mtut_attr_group = {
    .attributes = 3,
    .attr = bcm56990_b0_lrd_l3_mc_mtut_attr_entry,
};


const bcmltd_field_desc_t
bcm56990_b0_lrd_bcmltx_l3mc_mtu_index_src_field_desc_s0[1] = {
    {
        .field_id  = L3_MC_MTUt_TM_MC_GROUP_IDf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 15,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56990_b0_lrd_bcmltx_l3mc_mtu_index_l3_mc_mtu_dst_field_desc_d0[1] = {
    {
        .field_id  = BCMLRD_FIELD_INDEX,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 13,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmlrd_field_xfrm_desc_t
bcm56990_b0_lta_bcmltx_l3mc_mtu_index_xfrm_handler_fwd_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_B0_LTA_BCMLTX_L3MC_MTU_INDEX_XFRM_HANDLER_FWD_S0_D0_ID,
    .src_fields = 1,
    .src = bcm56990_b0_lrd_bcmltx_l3mc_mtu_index_src_field_desc_s0,
    .dst_fields = 1,
    .dst = bcm56990_b0_lrd_bcmltx_l3mc_mtu_index_l3_mc_mtu_dst_field_desc_d0,
};

const bcmlrd_field_xfrm_desc_t
bcm56990_b0_lta_bcmltx_l3mc_mtu_index_xfrm_handler_rev_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_B0_LTA_BCMLTX_L3MC_MTU_INDEX_XFRM_HANDLER_REV_S0_D0_ID,
    .src_fields = 1,
    .src = bcm56990_b0_lrd_bcmltx_l3mc_mtu_index_l3_mc_mtu_dst_field_desc_d0,
    .dst_fields = 1,
    .dst = bcm56990_b0_lrd_bcmltx_l3mc_mtu_index_src_field_desc_s0,
};


static const bcmlrd_map_entry_t bcm56990_b0_lrd_l3_mc_mtut_l3_mtu_values_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = MTU_SIZEf,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 13,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = L3_MC_MTUt_L3_MTUf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 13,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 1 */
        .entry_type = BCMLRD_MAP_ENTRY_FWD_KEY_FIELD_XFRM_HANDLER,
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
                /* handler: bcm56990_b0_lta_bcmltx_l3mc_mtu_index_xfrm_handler_fwd_s0_d0 */
                .desc = &bcm56990_b0_lta_bcmltx_l3mc_mtu_index_xfrm_handler_fwd_s0_d0_desc,
            },
        },
    },
    { /* 2 */
        .entry_type = BCMLRD_MAP_ENTRY_REV_KEY_FIELD_XFRM_HANDLER,
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
                /* handler: bcm56990_b0_lta_bcmltx_l3mc_mtu_index_xfrm_handler_rev_s0_d0 */
                .desc = &bcm56990_b0_lta_bcmltx_l3mc_mtu_index_xfrm_handler_rev_s0_d0_desc,
            },
        },
    },
};
static const bcmlrd_map_group_t bcm56990_b0_lrd_l3_mc_mtu_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = L3_MTU_VALUESm,
        },
        .entries = 3,
        .entry = bcm56990_b0_lrd_l3_mc_mtut_l3_mtu_values_map_entry
    },
};
const bcmlrd_map_t bcm56990_b0_lrd_l3_mc_mtu_map = {
    .src_id = L3_MC_MTUt,
    .field_data = &bcm56990_b0_lrd_l3_mc_mtu_map_field_data,
    .groups = 1,
    .group  = bcm56990_b0_lrd_l3_mc_mtu_map_group,
    .table_attr = &bcm56990_b0_lrd_l3_mc_mtut_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};
