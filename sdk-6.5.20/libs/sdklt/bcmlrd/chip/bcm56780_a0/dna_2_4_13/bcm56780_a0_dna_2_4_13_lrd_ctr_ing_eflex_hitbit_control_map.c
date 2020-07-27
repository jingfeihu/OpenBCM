/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/ctr/bcm56780_a0/bcm56780_a0_CTR_ING_EFLEX_HITBIT_CONTROL.map.ltl for
 *      bcm56780_a0 variant dna_2_4_13
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
#include <bcmlrd/chip/bcm56780_a0/dna_2_4_13/bcm56780_a0_dna_2_4_13_lrd_field_data.h>
#include <bcmlrd/chip/bcm56780_a0/bcm56780_a0_lrd_ltm_intf.h>
#include <bcmlrd/chip/bcm56780_a0/dna_2_4_13/bcm56780_a0_dna_2_4_13_lrd_ltm_intf.h>
#include <bcmlrd/chip/bcm56780_a0/dna_2_4_13/bcm56780_a0_dna_2_4_13_lrd_xfrm_field_desc.h>
#include <bcmdrd/chip/bcm56780_a0_enum.h>
#include "bcmltd/chip/bcmltd_common_enumpool.h"
#include "../bcm56780_a0_lrd_enumpool.h"
#include "bcm56780_a0_dna_2_4_13_lrd_enumpool.h"
#include <bcmltd/id/bcm56780_a0/dna_2_4_13/bcm56780_a0_dna_2_4_13_ltd_id.h> /* LTID_T */
#include <bcmltd/id/bcmltd_common_id.h> /* LTID_T */
#include <bcmltd/bcmltd_handler.h>
/* CTR_ING_EFLEX_HITBIT_CONTROL field init */
static const bcmlrd_field_data_t bcm56780_a0_dna_2_4_13_lrd_ctr_ing_eflex_hitbit_control_map_field_data_mmd[] = {
    { /* 0 TABLE_ID */
      .flags = BCMLTD_FIELD_F_KEY | BCMLTD_FIELD_F_ENUM,
      .min = &bcm56780_a0_dna_2_4_13_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_dna_2_4_13_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_dna_2_4_13_lrd_ifd_u32_0xffffffff,
      .depth = 0,
      .width = 32,
      .edata = BCM56780_A0_DNA_2_4_13_LRD_LTID_T_DATA,
    },
    { /* 1 PIPE */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_dna_2_4_13_lrd_ifd_u8_0x0,
      .def = &bcm56780_a0_dna_2_4_13_lrd_ifd_u8_0x0,
      .max = &bcm56780_a0_dna_2_4_13_lrd_ifd_u8_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 2 DST_CTR_ING_EFLEX_GROUP_ACTION_PROFILE_ID */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56780_a0_dna_2_4_13_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_dna_2_4_13_lrd_ifd_u16_0x0,
      .max = &bcm56780_a0_dna_2_4_13_lrd_ifd_u16_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 3 SRC_CTR_ING_EFLEX_GROUP_ACTION_PROFILE_ID */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56780_a0_dna_2_4_13_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_dna_2_4_13_lrd_ifd_u16_0x0,
      .max = &bcm56780_a0_dna_2_4_13_lrd_ifd_u16_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 4 DST_CTR_ING_EFLEX_ACTION_PROFILE_ID */
      .flags = 0,
      .min = &bcm56780_a0_dna_2_4_13_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_dna_2_4_13_lrd_ifd_u16_0x0,
      .max = &bcm56780_a0_dna_2_4_13_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 5 SRC_CTR_ING_EFLEX_ACTION_PROFILE_ID */
      .flags = 0,
      .min = &bcm56780_a0_dna_2_4_13_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_dna_2_4_13_lrd_ifd_u16_0x0,
      .max = &bcm56780_a0_dna_2_4_13_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 6 OPERATIONAL_STATE */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLTD_FIELD_F_ENUM,
      .min = &bcm56780_a0_dna_2_4_13_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_dna_2_4_13_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_dna_2_4_13_lrd_ifd_u32_0x1,
      .depth = 0,
      .width = 1,
      .edata = BCMLTD_COMMON_CTR_EFLEX_STATE_T_DATA,
    },
};
const bcmlrd_map_field_data_t bcm56780_a0_dna_2_4_13_lrd_ctr_ing_eflex_hitbit_control_map_field_data = {
    .fields = 7,
    .field = bcm56780_a0_dna_2_4_13_lrd_ctr_ing_eflex_hitbit_control_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56780_a0_dna_2_4_13_lrd_ctr_ing_eflex_hitbit_controlt_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_ENTRY_LIMIT,
        .value = 124,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = false,
    },
};

static const bcmlrd_map_attr_t bcm56780_a0_dna_2_4_13_lrd_ctr_ing_eflex_hitbit_controlt_attr_group = {
    .attributes = 2,
    .attr = bcm56780_a0_dna_2_4_13_lrd_ctr_ing_eflex_hitbit_controlt_attr_entry,
};

static const bcmlrd_map_entry_t bcm56780_a0_dna_2_4_13_lrd_bcmimm_ctr_ing_eflex_hitbit_control_entry[] = {
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
            /* handler: bcm56780_a0_dna_2_4_13_lta_bcmimm_ctr_ing_eflex_hitbit_control_cth_handler */
            .handler_id = BCMLTD_TABLE_BCM56780_A0_DNA_2_4_13_LTA_BCMIMM_CTR_ING_EFLEX_HITBIT_CONTROL_CTH_HANDLER_ID
        }
    },
};
static const bcmlrd_map_entry_t
bcm56780_a0_dna_2_4_13_lrd_bcmltx_ctr_ing_eflex_hitbit_control_validate_entry[] = {
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
            /* handler: bcm56780_a0_dna_2_4_13_lta_bcmltx_ctr_ing_eflex_hitbit_control_std_val_fv_handler */
            .handler_id = BCMLTD_VALIDATE_BCM56780_A0_DNA_2_4_13_LTA_BCMLTX_CTR_ING_EFLEX_HITBIT_CONTROL_STD_VAL_FV_HANDLER_ID
        }
    },
};
/* Map conditions */
static const uint32_t
bcm56780_a0_dna_2_4_13_lrd_ctr_ing_eflex_hitbit_control_map_cond_edit[] = {
    0, /* Number of groups. */
    0, /* Number of multi-entry transforms. */
};

static const bcmlrd_condition_t
bcm56780_a0_dna_2_4_13_lrd_ctr_ing_eflex_hitbit_control_map_condition[] = {
    {
        .op    = BCMLRD_CONDITION_AND,
        .table = CTR_EFLEX_CONFIGt,
        .field = CTR_EFLEX_CONFIGt_CTR_ING_EFLEX_OPERMODE_PIPEUNIQUEf,
        .value = 1
    },
};

static const bcmlrd_cond_expr_t
bcm56780_a0_dna_2_4_13_lrd_ctr_ing_eflex_hitbit_control_map_cond_expr[] = {
    {
        .num_cond = 1,
        .cond     = bcm56780_a0_dna_2_4_13_lrd_ctr_ing_eflex_hitbit_control_map_condition + 0,
    },
};

static const bcmlrd_cond_field_t bcm56780_a0_dna_2_4_13_lrd_ctr_ing_eflex_hitbit_control_map_cond_field[] = {
    {
        .field = CTR_ING_EFLEX_HITBIT_CONTROLt_PIPEf,
        .expr  = bcm56780_a0_dna_2_4_13_lrd_ctr_ing_eflex_hitbit_control_map_cond_expr + 0,
        .edit  = bcm56780_a0_dna_2_4_13_lrd_ctr_ing_eflex_hitbit_control_map_cond_edit + 0,
    },
};
static const bcmlrd_cond_data_t
bcm56780_a0_dna_2_4_13_lrd_ctr_ing_eflex_hitbit_control_map_cond = {
    .num_field_cond = 1,
    .field_cond = bcm56780_a0_dna_2_4_13_lrd_ctr_ing_eflex_hitbit_control_map_cond_field
};
static const bcmlrd_map_group_t bcm56780_a0_dna_2_4_13_lrd_ctr_ing_eflex_hitbit_control_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_CUSTOM,
            .id = 0,
        },
        .entries = 1,
        .entry = bcm56780_a0_dna_2_4_13_lrd_bcmimm_ctr_ing_eflex_hitbit_control_entry
    },
    {
        .dest = {
            .kind = BCMLRD_MAP_VALIDATION,
            .id = 0,
        },
        .entries = 1,
        .entry = bcm56780_a0_dna_2_4_13_lrd_bcmltx_ctr_ing_eflex_hitbit_control_validate_entry
    },
};
const bcmlrd_map_t bcm56780_a0_dna_2_4_13_lrd_ctr_ing_eflex_hitbit_control_map = {
    .src_id = CTR_ING_EFLEX_HITBIT_CONTROLt,
    .field_data = &bcm56780_a0_dna_2_4_13_lrd_ctr_ing_eflex_hitbit_control_map_field_data,
    .groups = 2,
    .group  = bcm56780_a0_dna_2_4_13_lrd_ctr_ing_eflex_hitbit_control_map_group,
    .table_attr = &bcm56780_a0_dna_2_4_13_lrd_ctr_ing_eflex_hitbit_controlt_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE,
    .cond = &bcm56780_a0_dna_2_4_13_lrd_ctr_ing_eflex_hitbit_control_map_cond,
};
