/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/flex_state/bcm56780_a0/bcm56780_a0_FLEX_STATE_EGR_ERROR_STATS.map.ltl for
 *      bcm56780_a0 variant ina_2_4_13
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
#include <bcmlrd/chip/bcm56780_a0/ina_2_4_13/bcm56780_a0_ina_2_4_13_lrd_field_data.h>
#include <bcmlrd/chip/bcm56780_a0/bcm56780_a0_lrd_ltm_intf.h>
#include <bcmlrd/chip/bcm56780_a0/ina_2_4_13/bcm56780_a0_ina_2_4_13_lrd_ltm_intf.h>
#include <bcmlrd/chip/bcm56780_a0/ina_2_4_13/bcm56780_a0_ina_2_4_13_lrd_xfrm_field_desc.h>
#include <bcmdrd/chip/bcm56780_a0_enum.h>
#include "bcmltd/chip/bcmltd_common_enumpool.h"
#include "../bcm56780_a0_lrd_enumpool.h"
#include "bcm56780_a0_ina_2_4_13_lrd_enumpool.h"
#include <bcmltd/bcmltd_handler.h>
/* FLEX_STATE_EGR_ERROR_STATS field init */
static const bcmlrd_field_data_t bcm56780_a0_ina_2_4_13_lrd_flex_state_egr_error_stats_map_field_data_mmd[] = {
    { /* 0 PIPE */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_ina_2_4_13_lrd_ifd_u8_0x0,
      .def = &bcm56780_a0_ina_2_4_13_lrd_ifd_u8_0x0,
      .max = &bcm56780_a0_ina_2_4_13_lrd_ifd_u8_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 1 INSTANCE */
      .flags = BCMLTD_FIELD_F_KEY | BCMLTD_FIELD_F_ENUM,
      .min = &bcm56780_a0_ina_2_4_13_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_ina_2_4_13_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_ina_2_4_13_lrd_ifd_u32_0x1,
      .depth = 0,
      .width = 1,
      .edata = BCM56780_A0_INA_2_4_13_LRD_FLEX_STATE_EGR_INSTANCE_T_DATA,
    },
    { /* 2 ACTION_MISCONFIG */
      .flags = 0,
      .min = &bcm56780_a0_ina_2_4_13_lrd_ifd_u64_0x0,
      .def = &bcm56780_a0_ina_2_4_13_lrd_ifd_u64_0x0,
      .max = &bcm56780_a0_ina_2_4_13_lrd_ifd_u64_0xffffffffffffffff,
      .depth = 0,
      .width = 64,
      .edata = NULL,
    },
    { /* 3 TOO_MANY_ACTIONS */
      .flags = 0,
      .min = &bcm56780_a0_ina_2_4_13_lrd_ifd_u64_0x0,
      .def = &bcm56780_a0_ina_2_4_13_lrd_ifd_u64_0x0,
      .max = &bcm56780_a0_ina_2_4_13_lrd_ifd_u64_0xffffffffffffffff,
      .depth = 0,
      .width = 64,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56780_a0_ina_2_4_13_lrd_flex_state_egr_error_stats_map_field_data = {
    .fields = 4,
    .field = bcm56780_a0_ina_2_4_13_lrd_flex_state_egr_error_stats_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56780_a0_ina_2_4_13_lrd_flex_state_egr_error_statst_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_ENTRY_LIMIT,
        .value = 4,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = true,
    },
};

static const bcmlrd_map_attr_t bcm56780_a0_ina_2_4_13_lrd_flex_state_egr_error_statst_attr_group = {
    .attributes = 2,
    .attr = bcm56780_a0_ina_2_4_13_lrd_flex_state_egr_error_statst_attr_entry,
};

static const bcmlrd_map_entry_t bcm56780_a0_ina_2_4_13_lrd_bcmimm_flex_state_egr_error_stats_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_TABLE_HANDLER,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            /* handler: bcm56780_a0_ina_2_4_13_lta_bcmimm_flex_state_egr_error_stats_cth_handler */
            .handler_id = BCMLTD_TABLE_BCM56780_A0_INA_2_4_13_LTA_BCMIMM_FLEX_STATE_EGR_ERROR_STATS_CTH_HANDLER_ID
        }
    },
};
static const bcmlrd_map_group_t bcm56780_a0_ina_2_4_13_lrd_flex_state_egr_error_stats_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_CUSTOM,
            .id = 0,
        },
        .entries = 1,
        .entry = bcm56780_a0_ina_2_4_13_lrd_bcmimm_flex_state_egr_error_stats_entry
    },
};
const bcmlrd_map_t bcm56780_a0_ina_2_4_13_lrd_flex_state_egr_error_stats_map = {
    .src_id = FLEX_STATE_EGR_ERROR_STATSt,
    .field_data = &bcm56780_a0_ina_2_4_13_lrd_flex_state_egr_error_stats_map_field_data,
    .groups = 1,
    .group  = bcm56780_a0_ina_2_4_13_lrd_flex_state_egr_error_stats_map_group,
    .table_attr = &bcm56780_a0_ina_2_4_13_lrd_flex_state_egr_error_statst_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};
