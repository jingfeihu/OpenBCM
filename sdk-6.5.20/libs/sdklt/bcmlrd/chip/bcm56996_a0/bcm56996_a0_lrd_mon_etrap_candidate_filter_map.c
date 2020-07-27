/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/mon/bcm56996_a0/bcm56996_a0_MON_ETRAP_CANDIDATE_FILTER.map.ltl for
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
/* MON_ETRAP_CANDIDATE_FILTER field init */
static const bcmlrd_field_data_t bcm56996_a0_lrd_mon_etrap_candidate_filter_map_field_data_mmd[] = {
    { /* 0 FILTER_HASH_SELECT */
      .flags = BCMLTD_FIELD_F_ENUM,
      .min = &bcm56996_a0_lrd_ifd_u32_0x0,
      .def = &bcm56996_a0_lrd_ifd_u32_0x0,
      .max = &bcm56996_a0_lrd_ifd_u32_0x3,
      .depth = 4,
      .width = 2,
      .edata = BCM56996_A0_LRD_ETRAP_HASH_SEL_T_DATA,
    },
    { /* 1 FILTER_HASH_ROTATE_BITS */
      .flags = 0,
      .min = &bcm56996_a0_lrd_ifd_u8_0x0,
      .def = &bcm56996_a0_lrd_ifd_u8_0x0,
      .max = &bcm56996_a0_lrd_ifd_u8_0xf,
      .depth = 4,
      .width = 4,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56996_a0_lrd_mon_etrap_candidate_filter_map_field_data = {
    .fields = 2,
    .field = bcm56996_a0_lrd_mon_etrap_candidate_filter_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56996_a0_lrd_mon_etrap_candidate_filtert_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
};

static const bcmlrd_map_attr_t bcm56996_a0_lrd_mon_etrap_candidate_filtert_attr_group = {
    .attributes = 1,
    .attr = bcm56996_a0_lrd_mon_etrap_candidate_filtert_attr_entry,
};


const bcmltd_field_desc_t
bcm56996_a0_lrd_bcmltx_mon_etrap_filt_hash_sel_src_field_desc_s0[1] = {
    {
        .field_id  = MON_ETRAP_CANDIDATE_FILTERt_FILTER_HASH_SELECTf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 31,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56996_a0_lrd_bcmltx_mon_etrap_filt_hash_sel_mon_etrap_candidate_filter_dst_field_desc_d0[4] = {
    {
        .field_id  = FILTER_0_HASH_SELf,
        .field_idx = 0,
        .minbit    = 4,
        .maxbit    = 5,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = FILTER_1_HASH_SELf,
        .field_idx = 0,
        .minbit    = 10,
        .maxbit    = 11,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = FILTER_2_HASH_SELf,
        .field_idx = 0,
        .minbit    = 16,
        .maxbit    = 17,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = FILTER_3_HASH_SELf,
        .field_idx = 0,
        .minbit    = 22,
        .maxbit    = 23,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmltd_field_desc_t
bcm56996_a0_lrd_bcmltx_mon_etrap_filt_hash_sel_src_field_desc_s1[1] = {
    {
        .field_id  = MON_ETRAP_CANDIDATE_FILTERt_FILTER_HASH_ROTATE_BITSf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 7,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56996_a0_lrd_bcmltx_mon_etrap_filt_hash_sel_mon_etrap_candidate_filter_dst_field_desc_d1[4] = {
    {
        .field_id  = FILTER_0_HASH_ROTRf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 3,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = FILTER_1_HASH_ROTRf,
        .field_idx = 0,
        .minbit    = 6,
        .maxbit    = 9,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = FILTER_2_HASH_ROTRf,
        .field_idx = 0,
        .minbit    = 12,
        .maxbit    = 15,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = FILTER_3_HASH_ROTRf,
        .field_idx = 0,
        .minbit    = 18,
        .maxbit    = 21,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmlrd_field_xfrm_desc_t
bcm56996_a0_lta_bcmltx_mon_etrap_filt_hash_sel_xfrm_handler_fwd_s0_d0_x0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56996_A0_LTA_BCMLTX_MON_ETRAP_FILT_HASH_SEL_XFRM_HANDLER_FWD_S0_D0_X0_ID,
    .src_fields = 1,
    .src = bcm56996_a0_lrd_bcmltx_mon_etrap_filt_hash_sel_src_field_desc_s0,
    .dst_fields = 4,
    .dst = bcm56996_a0_lrd_bcmltx_mon_etrap_filt_hash_sel_mon_etrap_candidate_filter_dst_field_desc_d0,
};

const bcmlrd_field_xfrm_desc_t
bcm56996_a0_lta_bcmltx_mon_etrap_filt_hash_sel_xfrm_handler_rev_s0_d0_x0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56996_A0_LTA_BCMLTX_MON_ETRAP_FILT_HASH_SEL_XFRM_HANDLER_REV_S0_D0_X0_ID,
    .src_fields = 4,
    .src = bcm56996_a0_lrd_bcmltx_mon_etrap_filt_hash_sel_mon_etrap_candidate_filter_dst_field_desc_d0,
    .dst_fields = 1,
    .dst = bcm56996_a0_lrd_bcmltx_mon_etrap_filt_hash_sel_src_field_desc_s0,
};

const bcmlrd_field_xfrm_desc_t
bcm56996_a0_lta_bcmltx_mon_etrap_filt_hash_sel_xfrm_handler_fwd_s1_d1_x0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56996_A0_LTA_BCMLTX_MON_ETRAP_FILT_HASH_SEL_XFRM_HANDLER_FWD_S1_D1_X0_ID,
    .src_fields = 1,
    .src = bcm56996_a0_lrd_bcmltx_mon_etrap_filt_hash_sel_src_field_desc_s1,
    .dst_fields = 4,
    .dst = bcm56996_a0_lrd_bcmltx_mon_etrap_filt_hash_sel_mon_etrap_candidate_filter_dst_field_desc_d1,
};

const bcmlrd_field_xfrm_desc_t
bcm56996_a0_lta_bcmltx_mon_etrap_filt_hash_sel_xfrm_handler_rev_s1_d1_x0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56996_A0_LTA_BCMLTX_MON_ETRAP_FILT_HASH_SEL_XFRM_HANDLER_REV_S1_D1_X0_ID,
    .src_fields = 4,
    .src = bcm56996_a0_lrd_bcmltx_mon_etrap_filt_hash_sel_mon_etrap_candidate_filter_dst_field_desc_d1,
    .dst_fields = 1,
    .dst = bcm56996_a0_lrd_bcmltx_mon_etrap_filt_hash_sel_src_field_desc_s1,
};


static const bcmlrd_map_entry_t bcm56996_a0_lrd_mon_etrap_candidate_filtert_etrap_filt_cfg_map_entry[] = {
    { /* 0 */
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
                /* handler: bcm56996_a0_lta_bcmltx_mon_etrap_filt_hash_sel_xfrm_handler_fwd_s0_d0_x0 */
                .desc = &bcm56996_a0_lta_bcmltx_mon_etrap_filt_hash_sel_xfrm_handler_fwd_s0_d0_x0_desc,
            },
        },
    },
    { /* 1 */
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
                /* handler: bcm56996_a0_lta_bcmltx_mon_etrap_filt_hash_sel_xfrm_handler_rev_s0_d0_x0 */
                .desc = &bcm56996_a0_lta_bcmltx_mon_etrap_filt_hash_sel_xfrm_handler_rev_s0_d0_x0_desc,
            },
        },
    },
    { /* 2 */
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
                /* handler: bcm56996_a0_lta_bcmltx_mon_etrap_filt_hash_sel_xfrm_handler_fwd_s1_d1_x0 */
                .desc = &bcm56996_a0_lta_bcmltx_mon_etrap_filt_hash_sel_xfrm_handler_fwd_s1_d1_x0_desc,
            },
        },
    },
    { /* 3 */
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
                /* handler: bcm56996_a0_lta_bcmltx_mon_etrap_filt_hash_sel_xfrm_handler_rev_s1_d1_x0 */
                .desc = &bcm56996_a0_lta_bcmltx_mon_etrap_filt_hash_sel_xfrm_handler_rev_s1_d1_x0_desc,
            },
        },
    },
};
static const bcmlrd_map_group_t bcm56996_a0_lrd_mon_etrap_candidate_filter_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = ETRAP_FILT_CFGr,
        },
        .entries = 4,
        .entry = bcm56996_a0_lrd_mon_etrap_candidate_filtert_etrap_filt_cfg_map_entry
    },
};
const bcmlrd_map_t bcm56996_a0_lrd_mon_etrap_candidate_filter_map = {
    .src_id = MON_ETRAP_CANDIDATE_FILTERt,
    .field_data = &bcm56996_a0_lrd_mon_etrap_candidate_filter_map_field_data,
    .groups = 1,
    .group  = bcm56996_a0_lrd_mon_etrap_candidate_filter_map_group,
    .table_attr = &bcm56996_a0_lrd_mon_etrap_candidate_filtert_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};
