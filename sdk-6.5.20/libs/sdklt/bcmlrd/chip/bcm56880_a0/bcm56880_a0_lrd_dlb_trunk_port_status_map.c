/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/dlb/bcm56880_a0/bcm56880_a0_DLB_TRUNK_PORT_STATUS.map.ltl for
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
/* DLB_TRUNK_PORT_STATUS field init */
static const bcmlrd_field_data_t bcm56880_a0_lrd_dlb_trunk_port_status_map_field_data_mmd[] = {
    { /* 0 PORT_ID */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56880_a0_lrd_ifd_u16_0x0,
      .def = &bcm56880_a0_lrd_ifd_u16_0x0,
      .max = &bcm56880_a0_lrd_ifd_u16_0x9f,
      .depth = 0,
      .width = 8,
      .edata = NULL,
    },
    { /* 1 LINK_STATE */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56880_a0_lrd_dlb_trunk_port_status_map_field_data = {
    .fields = 2,
    .field = bcm56880_a0_lrd_dlb_trunk_port_status_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56880_a0_lrd_dlb_trunk_port_statust_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = true,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MAX_INDEX,
        .value = 159,
    },
    { /* 2 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MIN_INDEX,
        .value = 0,
    },
    { /* 3 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TRACK_INDEX_MAX_INDEX,
        .value = 159,
    },
    { /* 4 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TRACK_INDEX_MIN_INDEX,
        .value = 0,
    },
};

static const bcmlrd_map_attr_t bcm56880_a0_lrd_dlb_trunk_port_statust_attr_group = {
    .attributes = 5,
    .attr = bcm56880_a0_lrd_dlb_trunk_port_statust_attr_entry,
};


const bcmltd_field_desc_t
bcm56880_a0_lrd_bcmltx_dlb_port_status_src_field_desc_s1[1] = {
    {
        .field_id  = DLB_TRUNK_PORT_STATUSt_LINK_STATEf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 0,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56880_a0_lrd_bcmltx_dlb_port_status_dlb_trunk_port_status_dst_field_desc_d0[1] = {
    {
        .field_id  = BITMAPf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 159,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmltd_field_desc_t
bcm56880_a0_lrd_bcmltx_copy_field_src_field_desc_s4[1] = {
    {
        .field_id  = DLB_TRUNK_PORT_STATUSt_PORT_IDf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 15,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56880_a0_lrd_bcmltx_copy_field_dlb_trunk_port_status_dst_field_desc_d1[1] = {
    {
        .field_id  = BCMLRD_FIELD_TRACK_INDEX,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 31,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmlrd_field_xfrm_desc_t
bcm56880_a0_lta_bcmltx_dlb_port_status_xfrm_handler_rev_s1_k1_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56880_A0_LTA_BCMLTX_DLB_PORT_STATUS_XFRM_HANDLER_REV_S1_K1_D0_ID,
    .src_fields = 1,
    .src = bcm56880_a0_lrd_bcmltx_dlb_port_status_dlb_trunk_port_status_dst_field_desc_d0,
    .dst_fields = 1,
    .dst = bcm56880_a0_lrd_bcmltx_dlb_port_status_src_field_desc_s1,
};

const bcmlrd_field_xfrm_desc_t
bcm56880_a0_lta_bcmltx_copy_field_xfrm_handler_fwd_s4_d1_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56880_A0_LTA_BCMLTX_COPY_FIELD_XFRM_HANDLER_FWD_S4_D1_ID,
    .src_fields = 1,
    .src = bcm56880_a0_lrd_bcmltx_copy_field_src_field_desc_s4,
    .dst_fields = 1,
    .dst = bcm56880_a0_lrd_bcmltx_copy_field_dlb_trunk_port_status_dst_field_desc_d1,
};

const bcmlrd_field_xfrm_desc_t
bcm56880_a0_lta_bcmltx_copy_field_xfrm_handler_rev_s4_d1_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56880_A0_LTA_BCMLTX_COPY_FIELD_XFRM_HANDLER_REV_S4_D1_ID,
    .src_fields = 1,
    .src = bcm56880_a0_lrd_bcmltx_copy_field_dlb_trunk_port_status_dst_field_desc_d1,
    .dst_fields = 1,
    .dst = bcm56880_a0_lrd_bcmltx_copy_field_src_field_desc_s4,
};


static const bcmlrd_map_entry_t bcm56880_a0_lrd_dlb_trunk_port_statust_dlb_lag_port_state_map_entry[] = {
    { /* 0 */
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
                /* handler: bcm56880_a0_lta_bcmltx_dlb_port_status_xfrm_handler_rev_s1_k1_d0 */
                .desc = &bcm56880_a0_lta_bcmltx_dlb_port_status_xfrm_handler_rev_s1_k1_d0_desc,
            },
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
                /* handler: bcm56880_a0_lta_bcmltx_copy_field_xfrm_handler_fwd_s4_d1 */
                .desc = &bcm56880_a0_lta_bcmltx_copy_field_xfrm_handler_fwd_s4_d1_desc,
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
                /* handler: bcm56880_a0_lta_bcmltx_copy_field_xfrm_handler_rev_s4_d1 */
                .desc = &bcm56880_a0_lta_bcmltx_copy_field_xfrm_handler_rev_s4_d1_desc,
            },
        },
    },
};
static const bcmlrd_map_entry_t
bcm56880_a0_lrd_bcmltx_dlb_trunk_port_status_validate_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_VALUE_FIELD_VALIDATION,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            /* handler: bcm56880_a0_lta_bcmltx_dlb_trunk_port_status_std_val_fv_handler */
            .handler_id = BCMLTD_VALIDATE_BCM56880_A0_LTA_BCMLTX_DLB_TRUNK_PORT_STATUS_STD_VAL_FV_HANDLER_ID
        }
    },
};
static const bcmlrd_map_group_t bcm56880_a0_lrd_dlb_trunk_port_status_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = DLB_LAG_PORT_STATEm,
        },
        .entries = 3,
        .entry = bcm56880_a0_lrd_dlb_trunk_port_statust_dlb_lag_port_state_map_entry
    },
    {
        .dest = {
            .kind = BCMLRD_MAP_VALIDATION,
            .id = 0,
        },
        .entries = 1,
        .entry = bcm56880_a0_lrd_bcmltx_dlb_trunk_port_status_validate_entry
    },
};
const bcmlrd_map_t bcm56880_a0_lrd_dlb_trunk_port_status_map = {
    .src_id = DLB_TRUNK_PORT_STATUSt,
    .field_data = &bcm56880_a0_lrd_dlb_trunk_port_status_map_field_data,
    .groups = 2,
    .group  = bcm56880_a0_lrd_dlb_trunk_port_status_map_group,
    .table_attr = &bcm56880_a0_lrd_dlb_trunk_port_statust_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};
