/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/ctr/bcm56780_a0/bcm56780_a0_CTR_ING_EFLEX_TRIGGER.map.ltl for
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
/* CTR_ING_EFLEX_TRIGGER field init */
static const bcmlrd_field_data_t bcm56780_a0_ina_2_4_13_lrd_ctr_ing_eflex_trigger_map_field_data_mmd[] = {
    { /* 0 CTR_ING_EFLEX_ACTION_PROFILE_ID */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_ina_2_4_13_lrd_ifd_u16_0x1,
      .def = &bcm56780_a0_ina_2_4_13_lrd_ifd_u16_0x1,
      .max = &bcm56780_a0_ina_2_4_13_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 1 TRIGGER */
      .flags = 0,
      .min = &bcm56780_a0_ina_2_4_13_lrd_ifd_is_true_0x0,
      .def = &bcm56780_a0_ina_2_4_13_lrd_ifd_is_true_0x0,
      .max = &bcm56780_a0_ina_2_4_13_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 2 START */
      .flags = BCMLTD_FIELD_F_ENUM,
      .min = &bcm56780_a0_ina_2_4_13_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_ina_2_4_13_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_ina_2_4_13_lrd_ifd_u32_0x1,
      .depth = 0,
      .width = 1,
      .edata = BCMLTD_COMMON_CTR_EFLEX_START_TRIGGER_T_DATA,
    },
    { /* 3 STOP */
      .flags = BCMLTD_FIELD_F_ENUM,
      .min = &bcm56780_a0_ina_2_4_13_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_ina_2_4_13_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_ina_2_4_13_lrd_ifd_u32_0x2,
      .depth = 0,
      .width = 2,
      .edata = BCM56780_A0_LRD_CTR_EFLEX_STOP_TRIGGER_T_DATA,
    },
    { /* 4 START_VALUE */
      .flags = 0,
      .min = &bcm56780_a0_ina_2_4_13_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_ina_2_4_13_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_ina_2_4_13_lrd_ifd_u32_0xffffffff,
      .depth = 0,
      .width = 32,
      .edata = NULL,
    },
    { /* 5 STOP_VALUE */
      .flags = 0,
      .min = &bcm56780_a0_ina_2_4_13_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_ina_2_4_13_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_ina_2_4_13_lrd_ifd_u32_0xffffffff,
      .depth = 0,
      .width = 32,
      .edata = NULL,
    },
    { /* 6 COND_MASK */
      .flags = 0,
      .min = &bcm56780_a0_ina_2_4_13_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_ina_2_4_13_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_ina_2_4_13_lrd_ifd_u32_0xffffffff,
      .depth = 0,
      .width = 32,
      .edata = NULL,
    },
    { /* 7 START_TIME_OFFSET */
      .flags = 0,
      .min = &bcm56780_a0_ina_2_4_13_lrd_ifd_u64_0x0,
      .def = &bcm56780_a0_ina_2_4_13_lrd_ifd_u64_0x0,
      .max = &bcm56780_a0_ina_2_4_13_lrd_ifd_u64_0xffffffffffffffff,
      .depth = 0,
      .width = 64,
      .edata = NULL,
    },
    { /* 8 NUM_PERIOD */
      .flags = 0,
      .min = &bcm56780_a0_ina_2_4_13_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_ina_2_4_13_lrd_ifd_u16_0x1,
      .max = &bcm56780_a0_ina_2_4_13_lrd_ifd_u16_0xff,
      .depth = 0,
      .width = 8,
      .edata = NULL,
    },
    { /* 9 NUM_ACTIONS */
      .flags = 0,
      .min = &bcm56780_a0_ina_2_4_13_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_ina_2_4_13_lrd_ifd_u16_0x1,
      .max = &bcm56780_a0_ina_2_4_13_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 10 COMPARE_START */
      .flags = 0,
      .min = &bcm56780_a0_ina_2_4_13_lrd_ifd_is_true_0x0,
      .def = &bcm56780_a0_ina_2_4_13_lrd_ifd_is_true_0x0,
      .max = &bcm56780_a0_ina_2_4_13_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 11 COMPARE_STOP */
      .flags = 0,
      .min = &bcm56780_a0_ina_2_4_13_lrd_ifd_is_true_0x0,
      .def = &bcm56780_a0_ina_2_4_13_lrd_ifd_is_true_0x0,
      .max = &bcm56780_a0_ina_2_4_13_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 12 SCALE */
      .flags = BCMLTD_FIELD_F_ENUM,
      .min = &bcm56780_a0_ina_2_4_13_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_ina_2_4_13_lrd_ifd_u32_0x1,
      .max = &bcm56780_a0_ina_2_4_13_lrd_ifd_u32_0xa,
      .depth = 0,
      .width = 4,
      .edata = BCM56780_A0_LRD_CTR_EFLEX_SCALE_T_DATA,
    },
    { /* 13 INTERVAL_SHIFT */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56780_a0_ina_2_4_13_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_ina_2_4_13_lrd_ifd_u16_0x0,
      .max = &bcm56780_a0_ina_2_4_13_lrd_ifd_u16_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 14 INTERVAL_SIZE */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56780_a0_ina_2_4_13_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_ina_2_4_13_lrd_ifd_u16_0x0,
      .max = &bcm56780_a0_ina_2_4_13_lrd_ifd_u16_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 15 OPERATIONAL_STATE */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLTD_FIELD_F_ENUM,
      .min = &bcm56780_a0_ina_2_4_13_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_ina_2_4_13_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_ina_2_4_13_lrd_ifd_u32_0x1,
      .depth = 0,
      .width = 1,
      .edata = BCMLTD_COMMON_CTR_EFLEX_STATE_T_DATA,
    },
};
const bcmlrd_map_field_data_t bcm56780_a0_ina_2_4_13_lrd_ctr_ing_eflex_trigger_map_field_data = {
    .fields = 16,
    .field = bcm56780_a0_ina_2_4_13_lrd_ctr_ing_eflex_trigger_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56780_a0_ina_2_4_13_lrd_ctr_ing_eflex_triggert_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_ENTRY_LIMIT,
        .value = 124,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = true,
    },
};

static const bcmlrd_map_attr_t bcm56780_a0_ina_2_4_13_lrd_ctr_ing_eflex_triggert_attr_group = {
    .attributes = 2,
    .attr = bcm56780_a0_ina_2_4_13_lrd_ctr_ing_eflex_triggert_attr_entry,
};

static const bcmlrd_map_entry_t bcm56780_a0_ina_2_4_13_lrd_bcmimm_ctr_ing_eflex_trigger_entry[] = {
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
            /* handler: bcm56780_a0_ina_2_4_13_lta_bcmimm_ctr_ing_eflex_trigger_cth_handler */
            .handler_id = BCMLTD_TABLE_BCM56780_A0_INA_2_4_13_LTA_BCMIMM_CTR_ING_EFLEX_TRIGGER_CTH_HANDLER_ID
        }
    },
};
static const bcmlrd_map_entry_t
bcm56780_a0_ina_2_4_13_lrd_bcmltx_ctr_ing_eflex_trigger_validate_entry[] = {
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
            /* handler: bcm56780_a0_ina_2_4_13_lta_bcmltx_ctr_ing_eflex_trigger_std_val_fv_handler */
            .handler_id = BCMLTD_VALIDATE_BCM56780_A0_INA_2_4_13_LTA_BCMLTX_CTR_ING_EFLEX_TRIGGER_STD_VAL_FV_HANDLER_ID
        }
    },
};
const bcmlrd_field_selector_t bcm56780_a0_ina_2_4_13_lrd_ctr_ing_eflex_trigger_map_select[] = {
    { /* Node:0, Type:ROOT, START */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_ROOT,
        .field_id = CTR_ING_EFLEX_TRIGGERt_STARTf,
        .group_index = BCMLRD_INVALID_SELECTOR_INDEX,
        .entry_index = BCMLRD_INVALID_SELECTOR_INDEX,
        .selection_parent = BCMLRD_INVALID_SELECTOR_INDEX,
        .group = BCMLRD_INVALID_SELECTOR_INDEX,
        .selector_id = BCMLRD_INVALID_SELECTOR_INDEX,
        .selector_value = BCMLRD_INVALID_SELECTOR_INDEX
    },
    { /* Node:1, Type:FIELD, START_TIME_OFFSET */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_FIELD,
        .field_id = CTR_ING_EFLEX_TRIGGERt_START_TIME_OFFSETf,
        .group_index = BCMLRD_INVALID_SELECTOR_INDEX,
        .entry_index = BCMLRD_INVALID_SELECTOR_INDEX,
        .selection_parent = 0,
        .group = 0,
        .selector_id = CTR_ING_EFLEX_TRIGGERt_STARTf,
        .selector_value = 0 /* TIME */
    },
    { /* Node:2, Type:FIELD, START_VALUE */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_FIELD,
        .field_id = CTR_ING_EFLEX_TRIGGERt_START_VALUEf,
        .group_index = BCMLRD_INVALID_SELECTOR_INDEX,
        .entry_index = BCMLRD_INVALID_SELECTOR_INDEX,
        .selection_parent = 0,
        .group = 0,
        .selector_id = CTR_ING_EFLEX_TRIGGERt_STARTf,
        .selector_value = 1 /* CONDITION */
    },
    { /* Node:3, Type:FIELD, COND_MASK */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_FIELD,
        .field_id = CTR_ING_EFLEX_TRIGGERt_COND_MASKf,
        .group_index = BCMLRD_INVALID_SELECTOR_INDEX,
        .entry_index = BCMLRD_INVALID_SELECTOR_INDEX,
        .selection_parent = 0,
        .group = 0,
        .selector_id = CTR_ING_EFLEX_TRIGGERt_STARTf,
        .selector_value = 1 /* CONDITION */
    },
    { /* Node:4, Type:ROOT, STOP */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_ROOT,
        .field_id = CTR_ING_EFLEX_TRIGGERt_STOPf,
        .group_index = BCMLRD_INVALID_SELECTOR_INDEX,
        .entry_index = BCMLRD_INVALID_SELECTOR_INDEX,
        .selection_parent = BCMLRD_INVALID_SELECTOR_INDEX,
        .group = BCMLRD_INVALID_SELECTOR_INDEX,
        .selector_id = BCMLRD_INVALID_SELECTOR_INDEX,
        .selector_value = BCMLRD_INVALID_SELECTOR_INDEX
    },
    { /* Node:5, Type:FIELD, NUM_PERIOD */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_FIELD,
        .field_id = CTR_ING_EFLEX_TRIGGERt_NUM_PERIODf,
        .group_index = BCMLRD_INVALID_SELECTOR_INDEX,
        .entry_index = BCMLRD_INVALID_SELECTOR_INDEX,
        .selection_parent = 4,
        .group = 0,
        .selector_id = CTR_ING_EFLEX_TRIGGERt_STOPf,
        .selector_value = 0 /* PERIOD */
    },
    { /* Node:6, Type:FIELD, SCALE */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_FIELD,
        .field_id = CTR_ING_EFLEX_TRIGGERt_SCALEf,
        .group_index = BCMLRD_INVALID_SELECTOR_INDEX,
        .entry_index = BCMLRD_INVALID_SELECTOR_INDEX,
        .selection_parent = 4,
        .group = 0,
        .selector_id = CTR_ING_EFLEX_TRIGGERt_STOPf,
        .selector_value = 0 /* PERIOD */
    },
    { /* Node:7, Type:FIELD, STOP_VALUE */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_FIELD,
        .field_id = CTR_ING_EFLEX_TRIGGERt_STOP_VALUEf,
        .group_index = BCMLRD_INVALID_SELECTOR_INDEX,
        .entry_index = BCMLRD_INVALID_SELECTOR_INDEX,
        .selection_parent = 4,
        .group = 0,
        .selector_id = CTR_ING_EFLEX_TRIGGERt_STOPf,
        .selector_value = 1 /* CONDITION */
    },
    { /* Node:8, Type:FIELD, COND_MASK */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_FIELD,
        .field_id = CTR_ING_EFLEX_TRIGGERt_COND_MASKf,
        .group_index = BCMLRD_INVALID_SELECTOR_INDEX,
        .entry_index = BCMLRD_INVALID_SELECTOR_INDEX,
        .selection_parent = 4,
        .group = 1,
        .selector_id = CTR_ING_EFLEX_TRIGGERt_STOPf,
        .selector_value = 1 /* CONDITION */
    },
    { /* Node:9, Type:FIELD, NUM_ACTIONS */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_FIELD,
        .field_id = CTR_ING_EFLEX_TRIGGERt_NUM_ACTIONSf,
        .group_index = BCMLRD_INVALID_SELECTOR_INDEX,
        .entry_index = BCMLRD_INVALID_SELECTOR_INDEX,
        .selection_parent = 4,
        .group = 0,
        .selector_id = CTR_ING_EFLEX_TRIGGERt_STOPf,
        .selector_value = 2 /* ACTION_COUNT */
    },
};

const bcmlrd_field_selector_data_t bcm56780_a0_ina_2_4_13_lrd_ctr_ing_eflex_trigger_map_select_data = {
    .num_field_selector = 10,
    .field_selector = bcm56780_a0_ina_2_4_13_lrd_ctr_ing_eflex_trigger_map_select,
};

static const bcmlrd_map_group_t bcm56780_a0_ina_2_4_13_lrd_ctr_ing_eflex_trigger_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_CUSTOM,
            .id = 0,
        },
        .entries = 1,
        .entry = bcm56780_a0_ina_2_4_13_lrd_bcmimm_ctr_ing_eflex_trigger_entry
    },
    {
        .dest = {
            .kind = BCMLRD_MAP_VALIDATION,
            .id = 0,
        },
        .entries = 1,
        .entry = bcm56780_a0_ina_2_4_13_lrd_bcmltx_ctr_ing_eflex_trigger_validate_entry
    },
};
const bcmlrd_map_t bcm56780_a0_ina_2_4_13_lrd_ctr_ing_eflex_trigger_map = {
    .src_id = CTR_ING_EFLEX_TRIGGERt,
    .field_data = &bcm56780_a0_ina_2_4_13_lrd_ctr_ing_eflex_trigger_map_field_data,
    .groups = 2,
    .group  = bcm56780_a0_ina_2_4_13_lrd_ctr_ing_eflex_trigger_map_group,
    .table_attr = &bcm56780_a0_ina_2_4_13_lrd_ctr_ing_eflex_triggert_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE,
    .sel = &bcm56780_a0_ina_2_4_13_lrd_ctr_ing_eflex_trigger_map_select_data,
};
