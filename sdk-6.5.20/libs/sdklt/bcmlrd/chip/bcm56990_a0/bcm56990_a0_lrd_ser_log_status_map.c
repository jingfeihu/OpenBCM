/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/ser/bcm56990_a0/bcm56990_a0_SER_LOG_STATUS.map.ltl for
 *      bcm56990_a0
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
#include <bcmlrd/chip/bcm56990_a0/bcm56990_a0_lrd_field_data.h>
#include <bcmlrd/chip/bcm56990_a0/bcm56990_a0_lrd_ltm_intf.h>
#include <bcmlrd/chip/bcm56990_a0/bcm56990_a0_lrd_xfrm_field_desc.h>
#include <bcmdrd/chip/bcm56990_a0_enum.h>
#include "bcmltd/chip/bcmltd_common_enumpool.h"
#include "bcm56990_a0_lrd_enumpool.h"
#include <bcmltd/bcmltd_handler.h>
/* SER_LOG_STATUS field init */
static const bcmlrd_field_data_t bcm56990_a0_lrd_ser_log_status_map_field_data_mmd[] = {
    { /* 0 SER_LOG_ID */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56990_a0_lrd_ifd_u16_0x0,
      .def = &bcm56990_a0_lrd_ifd_u16_0x0,
      .max = &bcm56990_a0_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56990_a0_lrd_ser_log_status_map_field_data = {
    .fields = 1,
    .field = bcm56990_a0_lrd_ser_log_status_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56990_a0_lrd_ser_log_statust_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_ENTRY_LIMIT,
        .value = 1,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
};

static const bcmlrd_map_attr_t bcm56990_a0_lrd_ser_log_statust_attr_group = {
    .attributes = 2,
    .attr = bcm56990_a0_lrd_ser_log_statust_attr_entry,
};

static const bcmlrd_map_entry_t bcm56990_a0_lrd_bcmimm_ser_log_status_entry[] = {
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
            /* handler: bcm56990_a0_lta_bcmimm_ser_log_status_cth_handler */
            .handler_id = BCMLTD_TABLE_BCM56990_A0_LTA_BCMIMM_SER_LOG_STATUS_CTH_HANDLER_ID
        }
    },
};
/* Map conditions */
static const bcmlrd_condition_t
bcm56990_a0_lrd_ser_log_status_map_condition[] = {
    {
        .op    = BCMLRD_CONDITION_AND,
        .table = SER_CONFIGt,
        .field = SER_CONFIGt_SER_ENABLEf,
        .value = 1
    },
};

static const bcmlrd_cond_expr_t
bcm56990_a0_lrd_ser_log_status_map_cond_expr[] = {
    {
        .num_cond = 1,
        .cond     = bcm56990_a0_lrd_ser_log_status_map_condition + 0,
    },
};

static const bcmlrd_cond_data_t
bcm56990_a0_lrd_ser_log_status_map_cond = {
    .table_expr = bcm56990_a0_lrd_ser_log_status_map_cond_expr + 0,
};
static const bcmlrd_map_group_t bcm56990_a0_lrd_ser_log_status_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_CUSTOM,
            .id = 0,
        },
        .entries = 1,
        .entry = bcm56990_a0_lrd_bcmimm_ser_log_status_entry
    },
};
const bcmlrd_map_t bcm56990_a0_lrd_ser_log_status_map = {
    .src_id = SER_LOG_STATUSt,
    .field_data = &bcm56990_a0_lrd_ser_log_status_map_field_data,
    .groups = 1,
    .group  = bcm56990_a0_lrd_ser_log_status_map_group,
    .table_attr = &bcm56990_a0_lrd_ser_log_statust_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE,
    .cond = &bcm56990_a0_lrd_ser_log_status_map_cond,
};
