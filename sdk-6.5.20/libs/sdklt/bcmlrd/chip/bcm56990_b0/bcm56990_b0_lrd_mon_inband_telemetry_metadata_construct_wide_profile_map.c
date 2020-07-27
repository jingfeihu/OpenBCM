/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/mon/bcm56990_b0/bcm56990_b0_MON_INBAND_TELEMETRY_METADATA_CONSTRUCT_WIDE_PROFILE.map.ltl for
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
/* MON_INBAND_TELEMETRY_METADATA_CONSTRUCT_WIDE_PROFILE field init */
static const bcmlrd_field_data_t bcm56990_b0_lrd_mon_inband_telemetry_metadata_construct_wide_profile_map_field_data_mmd[] = {
    { /* 0 MON_INBAND_TELEMETRY_METADATA_CONSTRUCT_PROFILE_ID */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56990_b0_lrd_ifd_u8_0x0,
      .def = &bcm56990_b0_lrd_ifd_u8_0x0,
      .max = &bcm56990_b0_lrd_ifd_u8_0x7,
      .depth = 0,
      .width = 3,
      .edata = NULL,
    },
    { /* 1 ENABLE */
      .flags = 0,
      .min = &bcm56990_b0_lrd_ifd_is_true_0x0,
      .def = &bcm56990_b0_lrd_ifd_is_true_0x0,
      .max = &bcm56990_b0_lrd_ifd_is_true_0x1,
      .depth = 12,
      .width = 1,
      .edata = NULL,
    },
    { /* 2 OFFSET */
      .flags = 0,
      .min = &bcm56990_b0_lrd_ifd_u8_0x0,
      .def = &bcm56990_b0_lrd_ifd_u8_0x0,
      .max = &bcm56990_b0_lrd_ifd_u8_0x3f,
      .depth = 12,
      .width = 6,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56990_b0_lrd_mon_inband_telemetry_metadata_construct_wide_profile_map_field_data = {
    .fields = 3,
    .field = bcm56990_b0_lrd_mon_inband_telemetry_metadata_construct_wide_profile_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56990_b0_lrd_mon_inband_telemetry_metadata_construct_wide_profilet_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MAX_INDEX,
        .value = 7,
    },
    { /* 2 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MIN_INDEX,
        .value = 0,
    },
};

static const bcmlrd_map_attr_t bcm56990_b0_lrd_mon_inband_telemetry_metadata_construct_wide_profilet_attr_group = {
    .attributes = 3,
    .attr = bcm56990_b0_lrd_mon_inband_telemetry_metadata_construct_wide_profilet_attr_entry,
};


const bcmltd_field_desc_t
bcm56990_b0_lrd_bcmltx_array_to_multi_fields_set_src_field_desc_s9[1] = {
    {
        .field_id  = MON_INBAND_TELEMETRY_METADATA_CONSTRUCT_WIDE_PROFILEt_ENABLEf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 0,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56990_b0_lrd_bcmltx_array_to_multi_fields_set_mon_inband_telemetry_metadata_construct_wide_profile_dst_field_desc_d7[12] = {
    {
        .field_id  = MD_HDR_FIELD_12_ENABLEf,
        .field_idx = 0,
        .minbit    = 21,
        .maxbit    = 21,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = MD_HDR_FIELD_13_ENABLEf,
        .field_idx = 0,
        .minbit    = 28,
        .maxbit    = 28,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = MD_HDR_FIELD_14_ENABLEf,
        .field_idx = 0,
        .minbit    = 35,
        .maxbit    = 35,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = MD_HDR_FIELD_15_ENABLEf,
        .field_idx = 0,
        .minbit    = 42,
        .maxbit    = 42,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = MD_HDR_FIELD_16_ENABLEf,
        .field_idx = 0,
        .minbit    = 49,
        .maxbit    = 49,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = MD_HDR_FIELD_17_ENABLEf,
        .field_idx = 0,
        .minbit    = 56,
        .maxbit    = 56,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = MD_HDR_FIELD_18_ENABLEf,
        .field_idx = 0,
        .minbit    = 63,
        .maxbit    = 63,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = MD_HDR_FIELD_19_ENABLEf,
        .field_idx = 0,
        .minbit    = 70,
        .maxbit    = 70,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = MD_HDR_FIELD_20_ENABLEf,
        .field_idx = 0,
        .minbit    = 84,
        .maxbit    = 84,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = MD_HDR_FIELD_21_ENABLEf,
        .field_idx = 0,
        .minbit    = 91,
        .maxbit    = 91,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = MD_HDR_FIELD_22_ENABLEf,
        .field_idx = 0,
        .minbit    = 98,
        .maxbit    = 98,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = MD_HDR_FIELD_23_ENABLEf,
        .field_idx = 0,
        .minbit    = 105,
        .maxbit    = 105,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmltd_field_desc_t
bcm56990_b0_lrd_bcmltx_array_to_multi_fields_set_src_field_desc_s10[1] = {
    {
        .field_id  = MON_INBAND_TELEMETRY_METADATA_CONSTRUCT_WIDE_PROFILEt_OFFSETf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 7,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56990_b0_lrd_bcmltx_array_to_multi_fields_set_mon_inband_telemetry_metadata_construct_wide_profile_dst_field_desc_d8[12] = {
    {
        .field_id  = MD_HDR_FIELD_12_SHIFT_OFFSETf,
        .field_idx = 0,
        .minbit    = 22,
        .maxbit    = 27,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = MD_HDR_FIELD_13_SHIFT_OFFSETf,
        .field_idx = 0,
        .minbit    = 29,
        .maxbit    = 34,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = MD_HDR_FIELD_14_SHIFT_OFFSETf,
        .field_idx = 0,
        .minbit    = 36,
        .maxbit    = 41,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = MD_HDR_FIELD_15_SHIFT_OFFSETf,
        .field_idx = 0,
        .minbit    = 43,
        .maxbit    = 48,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = MD_HDR_FIELD_16_SHIFT_OFFSETf,
        .field_idx = 0,
        .minbit    = 50,
        .maxbit    = 55,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = MD_HDR_FIELD_17_SHIFT_OFFSETf,
        .field_idx = 0,
        .minbit    = 57,
        .maxbit    = 62,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = MD_HDR_FIELD_18_SHIFT_OFFSETf,
        .field_idx = 0,
        .minbit    = 64,
        .maxbit    = 69,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = MD_HDR_FIELD_19_SHIFT_OFFSETf,
        .field_idx = 0,
        .minbit    = 71,
        .maxbit    = 76,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = MD_HDR_FIELD_20_SHIFT_OFFSETf,
        .field_idx = 0,
        .minbit    = 85,
        .maxbit    = 90,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = MD_HDR_FIELD_21_SHIFT_OFFSETf,
        .field_idx = 0,
        .minbit    = 92,
        .maxbit    = 97,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = MD_HDR_FIELD_22_SHIFT_OFFSETf,
        .field_idx = 0,
        .minbit    = 99,
        .maxbit    = 104,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = MD_HDR_FIELD_23_SHIFT_OFFSETf,
        .field_idx = 0,
        .minbit    = 106,
        .maxbit    = 111,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmlrd_field_xfrm_desc_t
bcm56990_b0_lta_bcmltx_array_to_multi_fields_set_xfrm_handler_fwd_s9_d7_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_B0_LTA_BCMLTX_ARRAY_TO_MULTI_FIELDS_SET_XFRM_HANDLER_FWD_S9_D7_ID,
    .src_fields = 1,
    .src = bcm56990_b0_lrd_bcmltx_array_to_multi_fields_set_src_field_desc_s9,
    .dst_fields = 12,
    .dst = bcm56990_b0_lrd_bcmltx_array_to_multi_fields_set_mon_inband_telemetry_metadata_construct_wide_profile_dst_field_desc_d7,
};

const bcmlrd_field_xfrm_desc_t
bcm56990_b0_lta_bcmltx_array_to_multi_fields_set_xfrm_handler_rev_s9_d7_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_B0_LTA_BCMLTX_ARRAY_TO_MULTI_FIELDS_SET_XFRM_HANDLER_REV_S9_D7_ID,
    .src_fields = 12,
    .src = bcm56990_b0_lrd_bcmltx_array_to_multi_fields_set_mon_inband_telemetry_metadata_construct_wide_profile_dst_field_desc_d7,
    .dst_fields = 1,
    .dst = bcm56990_b0_lrd_bcmltx_array_to_multi_fields_set_src_field_desc_s9,
};

const bcmlrd_field_xfrm_desc_t
bcm56990_b0_lta_bcmltx_array_to_multi_fields_set_xfrm_handler_fwd_s10_d8_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_B0_LTA_BCMLTX_ARRAY_TO_MULTI_FIELDS_SET_XFRM_HANDLER_FWD_S10_D8_ID,
    .src_fields = 1,
    .src = bcm56990_b0_lrd_bcmltx_array_to_multi_fields_set_src_field_desc_s10,
    .dst_fields = 12,
    .dst = bcm56990_b0_lrd_bcmltx_array_to_multi_fields_set_mon_inband_telemetry_metadata_construct_wide_profile_dst_field_desc_d8,
};

const bcmlrd_field_xfrm_desc_t
bcm56990_b0_lta_bcmltx_array_to_multi_fields_set_xfrm_handler_rev_s10_d8_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_B0_LTA_BCMLTX_ARRAY_TO_MULTI_FIELDS_SET_XFRM_HANDLER_REV_S10_D8_ID,
    .src_fields = 12,
    .src = bcm56990_b0_lrd_bcmltx_array_to_multi_fields_set_mon_inband_telemetry_metadata_construct_wide_profile_dst_field_desc_d8,
    .dst_fields = 1,
    .dst = bcm56990_b0_lrd_bcmltx_array_to_multi_fields_set_src_field_desc_s10,
};


static const bcmlrd_map_entry_t bcm56990_b0_lrd_mon_inband_telemetry_metadata_construct_wide_profilet_egr_md_hdr_const_profile_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = BCMLRD_FIELD_INDEX,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 2,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MON_INBAND_TELEMETRY_METADATA_CONSTRUCT_WIDE_PROFILEt_MON_INBAND_TELEMETRY_METADATA_CONSTRUCT_PROFILE_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 2,
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
                /* handler: bcm56990_b0_lta_bcmltx_array_to_multi_fields_set_xfrm_handler_fwd_s9_d7 */
                .desc = &bcm56990_b0_lta_bcmltx_array_to_multi_fields_set_xfrm_handler_fwd_s9_d7_desc,
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
                /* handler: bcm56990_b0_lta_bcmltx_array_to_multi_fields_set_xfrm_handler_rev_s9_d7 */
                .desc = &bcm56990_b0_lta_bcmltx_array_to_multi_fields_set_xfrm_handler_rev_s9_d7_desc,
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
                /* handler: bcm56990_b0_lta_bcmltx_array_to_multi_fields_set_xfrm_handler_fwd_s10_d8 */
                .desc = &bcm56990_b0_lta_bcmltx_array_to_multi_fields_set_xfrm_handler_fwd_s10_d8_desc,
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
                /* handler: bcm56990_b0_lta_bcmltx_array_to_multi_fields_set_xfrm_handler_rev_s10_d8 */
                .desc = &bcm56990_b0_lta_bcmltx_array_to_multi_fields_set_xfrm_handler_rev_s10_d8_desc,
            },
        },
    },
};
static const bcmlrd_map_group_t bcm56990_b0_lrd_mon_inband_telemetry_metadata_construct_wide_profile_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = EGR_MD_HDR_CONST_PROFILEm,
        },
        .entries = 5,
        .entry = bcm56990_b0_lrd_mon_inband_telemetry_metadata_construct_wide_profilet_egr_md_hdr_const_profile_map_entry
    },
};
const bcmlrd_map_t bcm56990_b0_lrd_mon_inband_telemetry_metadata_construct_wide_profile_map = {
    .src_id = MON_INBAND_TELEMETRY_METADATA_CONSTRUCT_WIDE_PROFILEt,
    .field_data = &bcm56990_b0_lrd_mon_inband_telemetry_metadata_construct_wide_profile_map_field_data,
    .groups = 1,
    .group  = bcm56990_b0_lrd_mon_inband_telemetry_metadata_construct_wide_profile_map_group,
    .table_attr = &bcm56990_b0_lrd_mon_inband_telemetry_metadata_construct_wide_profilet_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};
