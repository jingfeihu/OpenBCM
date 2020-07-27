/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/trunk/bcm56880_a0/bcm56880_a0_TRUNK_SYSTEM_FAILOVER.map.ltl for
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
/* TRUNK_SYSTEM_FAILOVER field init */
static const bcmlrd_field_data_t bcm56880_a0_lrd_trunk_system_failover_map_field_data_mmd[] = {
    { /* 0 TRUNK_SYSTEM_ID */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56880_a0_lrd_ifd_u16_0x0,
      .def = &bcm56880_a0_lrd_ifd_u16_0x0,
      .max = &bcm56880_a0_lrd_ifd_u16_0x3f,
      .depth = 0,
      .width = 6,
      .edata = NULL,
    },
    { /* 1 FAILOVER_CNT */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_u8_0x1,
      .def = &bcm56880_a0_lrd_ifd_u8_0x1,
      .max = &bcm56880_a0_lrd_ifd_u8_0x8,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 2 FAILOVER_PORT_ID */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_u16_0x0,
      .def = &bcm56880_a0_lrd_ifd_u16_0x0,
      .max = &bcm56880_a0_lrd_ifd_u16_0x9f,
      .depth = 8,
      .width = 8,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56880_a0_lrd_trunk_system_failover_map_field_data = {
    .fields = 3,
    .field = bcm56880_a0_lrd_trunk_system_failover_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56880_a0_lrd_trunk_system_failovert_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MAX_INDEX,
        .value = 63,
    },
    { /* 2 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MIN_INDEX,
        .value = 0,
    },
};

static const bcmlrd_map_attr_t bcm56880_a0_lrd_trunk_system_failovert_attr_group = {
    .attributes = 3,
    .attr = bcm56880_a0_lrd_trunk_system_failovert_attr_entry,
};


const bcmltd_field_desc_t
bcm56880_a0_lrd_bcmltx_trunk_sys_grp_failover_tbl_sel_src_field_desc_s0[1] = {
    {
        .field_id  = TRUNK_SYSTEM_FAILOVERt_TRUNK_SYSTEM_IDf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 15,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56880_a0_lrd_bcmltx_trunk_sys_grp_failover_tbl_sel_trunk_system_failover_dst_field_desc_d0[1] = {
    {
        .field_id  = BCMLRD_FIELD_TABLE_SEL,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 7,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const uint32_t
bcm56880_a0_lrd_trunk_sys_grp_failover_tbl_sel_transform_tbl_t0[64] = {
    IPOST_LAG_SYSTEM_LAG_FAILOVER_0m,
    IPOST_LAG_SYSTEM_LAG_FAILOVER_1m,
    IPOST_LAG_SYSTEM_LAG_FAILOVER_2m,
    IPOST_LAG_SYSTEM_LAG_FAILOVER_3m,
    IPOST_LAG_SYSTEM_LAG_FAILOVER_4m,
    IPOST_LAG_SYSTEM_LAG_FAILOVER_5m,
    IPOST_LAG_SYSTEM_LAG_FAILOVER_6m,
    IPOST_LAG_SYSTEM_LAG_FAILOVER_7m,
    IPOST_LAG_SYSTEM_LAG_FAILOVER_8m,
    IPOST_LAG_SYSTEM_LAG_FAILOVER_9m,
    IPOST_LAG_SYSTEM_LAG_FAILOVER_10m,
    IPOST_LAG_SYSTEM_LAG_FAILOVER_11m,
    IPOST_LAG_SYSTEM_LAG_FAILOVER_12m,
    IPOST_LAG_SYSTEM_LAG_FAILOVER_13m,
    IPOST_LAG_SYSTEM_LAG_FAILOVER_14m,
    IPOST_LAG_SYSTEM_LAG_FAILOVER_15m,
    IPOST_LAG_SYSTEM_LAG_FAILOVER_16m,
    IPOST_LAG_SYSTEM_LAG_FAILOVER_17m,
    IPOST_LAG_SYSTEM_LAG_FAILOVER_18m,
    IPOST_LAG_SYSTEM_LAG_FAILOVER_19m,
    IPOST_LAG_SYSTEM_LAG_FAILOVER_20m,
    IPOST_LAG_SYSTEM_LAG_FAILOVER_21m,
    IPOST_LAG_SYSTEM_LAG_FAILOVER_22m,
    IPOST_LAG_SYSTEM_LAG_FAILOVER_23m,
    IPOST_LAG_SYSTEM_LAG_FAILOVER_24m,
    IPOST_LAG_SYSTEM_LAG_FAILOVER_25m,
    IPOST_LAG_SYSTEM_LAG_FAILOVER_26m,
    IPOST_LAG_SYSTEM_LAG_FAILOVER_27m,
    IPOST_LAG_SYSTEM_LAG_FAILOVER_28m,
    IPOST_LAG_SYSTEM_LAG_FAILOVER_29m,
    IPOST_LAG_SYSTEM_LAG_FAILOVER_30m,
    IPOST_LAG_SYSTEM_LAG_FAILOVER_31m,
    IPOST_LAG_SYSTEM_LAG_FAILOVER_32m,
    IPOST_LAG_SYSTEM_LAG_FAILOVER_33m,
    IPOST_LAG_SYSTEM_LAG_FAILOVER_34m,
    IPOST_LAG_SYSTEM_LAG_FAILOVER_35m,
    IPOST_LAG_SYSTEM_LAG_FAILOVER_36m,
    IPOST_LAG_SYSTEM_LAG_FAILOVER_37m,
    IPOST_LAG_SYSTEM_LAG_FAILOVER_38m,
    IPOST_LAG_SYSTEM_LAG_FAILOVER_39m,
    IPOST_LAG_SYSTEM_LAG_FAILOVER_40m,
    IPOST_LAG_SYSTEM_LAG_FAILOVER_41m,
    IPOST_LAG_SYSTEM_LAG_FAILOVER_42m,
    IPOST_LAG_SYSTEM_LAG_FAILOVER_43m,
    IPOST_LAG_SYSTEM_LAG_FAILOVER_44m,
    IPOST_LAG_SYSTEM_LAG_FAILOVER_45m,
    IPOST_LAG_SYSTEM_LAG_FAILOVER_46m,
    IPOST_LAG_SYSTEM_LAG_FAILOVER_47m,
    IPOST_LAG_SYSTEM_LAG_FAILOVER_48m,
    IPOST_LAG_SYSTEM_LAG_FAILOVER_49m,
    IPOST_LAG_SYSTEM_LAG_FAILOVER_50m,
    IPOST_LAG_SYSTEM_LAG_FAILOVER_51m,
    IPOST_LAG_SYSTEM_LAG_FAILOVER_52m,
    IPOST_LAG_SYSTEM_LAG_FAILOVER_53m,
    IPOST_LAG_SYSTEM_LAG_FAILOVER_54m,
    IPOST_LAG_SYSTEM_LAG_FAILOVER_55m,
    IPOST_LAG_SYSTEM_LAG_FAILOVER_56m,
    IPOST_LAG_SYSTEM_LAG_FAILOVER_57m,
    IPOST_LAG_SYSTEM_LAG_FAILOVER_58m,
    IPOST_LAG_SYSTEM_LAG_FAILOVER_59m,
    IPOST_LAG_SYSTEM_LAG_FAILOVER_60m,
    IPOST_LAG_SYSTEM_LAG_FAILOVER_61m,
    IPOST_LAG_SYSTEM_LAG_FAILOVER_62m,
    IPOST_LAG_SYSTEM_LAG_FAILOVER_63m,
};

const bcmltd_field_desc_t
bcm56880_a0_lrd_bcmltx_trunk_sys_grp_failover_entry_add_src_field_desc_s0[2] = {
    {
        .field_id  = TRUNK_SYSTEM_FAILOVERt_FAILOVER_CNTf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 7,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = TRUNK_SYSTEM_FAILOVERt_FAILOVER_PORT_IDf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 15,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56880_a0_lrd_bcmltx_trunk_sys_grp_failover_entry_add_trunk_system_failover_dst_field_desc_d0[10] = {
    {
        .field_id  = BCMLRD_FIELD_INDEX,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 0,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = FAILOVER_LAG_SIZEf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 2,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = PORT0f,
        .field_idx = 0,
        .minbit    = 3,
        .maxbit    = 10,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = PORT1f,
        .field_idx = 0,
        .minbit    = 11,
        .maxbit    = 18,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = PORT2f,
        .field_idx = 0,
        .minbit    = 19,
        .maxbit    = 26,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = PORT3f,
        .field_idx = 0,
        .minbit    = 27,
        .maxbit    = 34,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = PORT4f,
        .field_idx = 0,
        .minbit    = 35,
        .maxbit    = 42,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = PORT5f,
        .field_idx = 0,
        .minbit    = 43,
        .maxbit    = 50,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = PORT6f,
        .field_idx = 0,
        .minbit    = 51,
        .maxbit    = 58,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = PORT7f,
        .field_idx = 0,
        .minbit    = 59,
        .maxbit    = 66,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmlrd_field_xfrm_desc_t
bcm56880_a0_lta_bcmltx_trunk_sys_grp_failover_tbl_sel_xfrm_handler_fwd_s0_d0_t0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56880_A0_LTA_BCMLTX_TRUNK_SYS_GRP_FAILOVER_TBL_SEL_XFRM_HANDLER_FWD_S0_D0_T0_ID,
    .src_fields = 1,
    .src = bcm56880_a0_lrd_bcmltx_trunk_sys_grp_failover_tbl_sel_src_field_desc_s0,
    .dst_fields = 1,
    .dst = bcm56880_a0_lrd_bcmltx_trunk_sys_grp_failover_tbl_sel_trunk_system_failover_dst_field_desc_d0,
    .tables = 64,
    .tbl = bcm56880_a0_lrd_trunk_sys_grp_failover_tbl_sel_transform_tbl_t0,
};

const bcmlrd_field_xfrm_desc_t
bcm56880_a0_lta_bcmltx_trunk_sys_grp_failover_tbl_sel_xfrm_handler_rev_s0_d0_t0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56880_A0_LTA_BCMLTX_TRUNK_SYS_GRP_FAILOVER_TBL_SEL_XFRM_HANDLER_REV_S0_D0_T0_ID,
    .src_fields = 1,
    .src = bcm56880_a0_lrd_bcmltx_trunk_sys_grp_failover_tbl_sel_trunk_system_failover_dst_field_desc_d0,
    .dst_fields = 1,
    .dst = bcm56880_a0_lrd_bcmltx_trunk_sys_grp_failover_tbl_sel_src_field_desc_s0,
    .tables = 64,
    .tbl = bcm56880_a0_lrd_trunk_sys_grp_failover_tbl_sel_transform_tbl_t0,
};

const bcmlrd_field_xfrm_desc_t
bcm56880_a0_lta_bcmltx_trunk_sys_grp_failover_entry_add_xfrm_handler_fwd_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56880_A0_LTA_BCMLTX_TRUNK_SYS_GRP_FAILOVER_ENTRY_ADD_XFRM_HANDLER_FWD_S0_D0_ID,
    .src_fields = 2,
    .src = bcm56880_a0_lrd_bcmltx_trunk_sys_grp_failover_entry_add_src_field_desc_s0,
    .dst_fields = 10,
    .dst = bcm56880_a0_lrd_bcmltx_trunk_sys_grp_failover_entry_add_trunk_system_failover_dst_field_desc_d0,
};

const bcmlrd_field_xfrm_desc_t
bcm56880_a0_lta_bcmltx_trunk_sys_grp_failover_entry_add_xfrm_handler_rev_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56880_A0_LTA_BCMLTX_TRUNK_SYS_GRP_FAILOVER_ENTRY_ADD_XFRM_HANDLER_REV_S0_D0_ID,
    .src_fields = 10,
    .src = bcm56880_a0_lrd_bcmltx_trunk_sys_grp_failover_entry_add_trunk_system_failover_dst_field_desc_d0,
    .dst_fields = 2,
    .dst = bcm56880_a0_lrd_bcmltx_trunk_sys_grp_failover_entry_add_src_field_desc_s0,
};


static const bcmlrd_map_entry_t bcm56880_a0_lrd_trunk_system_failovert_ipost_lag_system_lag_failover_0_map_entry[] = {
    { /* 0 */
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
                /* handler: bcm56880_a0_lta_bcmltx_trunk_sys_grp_failover_tbl_sel_xfrm_handler_fwd_s0_d0_t0 */
                .desc = &bcm56880_a0_lta_bcmltx_trunk_sys_grp_failover_tbl_sel_xfrm_handler_fwd_s0_d0_t0_desc,
            },
        },
    },
    { /* 1 */
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
                /* handler: bcm56880_a0_lta_bcmltx_trunk_sys_grp_failover_tbl_sel_xfrm_handler_rev_s0_d0_t0 */
                .desc = &bcm56880_a0_lta_bcmltx_trunk_sys_grp_failover_tbl_sel_xfrm_handler_rev_s0_d0_t0_desc,
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
                /* handler: bcm56880_a0_lta_bcmltx_trunk_sys_grp_failover_entry_add_xfrm_handler_fwd_s0_d0 */
                .desc = &bcm56880_a0_lta_bcmltx_trunk_sys_grp_failover_entry_add_xfrm_handler_fwd_s0_d0_desc,
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
                /* handler: bcm56880_a0_lta_bcmltx_trunk_sys_grp_failover_entry_add_xfrm_handler_rev_s0_d0 */
                .desc = &bcm56880_a0_lta_bcmltx_trunk_sys_grp_failover_entry_add_xfrm_handler_rev_s0_d0_desc,
            },
        },
    },
};
static const bcmlrd_map_group_t bcm56880_a0_lrd_trunk_system_failover_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = IPOST_LAG_SYSTEM_LAG_FAILOVER_0m,
        },
        .entries = 4,
        .entry = bcm56880_a0_lrd_trunk_system_failovert_ipost_lag_system_lag_failover_0_map_entry
    },
};
const bcmlrd_map_t bcm56880_a0_lrd_trunk_system_failover_map = {
    .src_id = TRUNK_SYSTEM_FAILOVERt,
    .field_data = &bcm56880_a0_lrd_trunk_system_failover_map_field_data,
    .groups = 1,
    .group  = bcm56880_a0_lrd_trunk_system_failover_map_group,
    .table_attr = &bcm56880_a0_lrd_trunk_system_failovert_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};
