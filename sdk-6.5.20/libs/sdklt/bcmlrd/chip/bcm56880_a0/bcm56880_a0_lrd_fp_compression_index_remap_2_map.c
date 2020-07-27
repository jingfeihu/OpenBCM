/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/fp/bcm56880_a0/bcm56880_a0_FP_COMPRESSION_INDEX_REMAP_2.map.ltl for
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
/* FP_COMPRESSION_INDEX_REMAP_2 field init */
static const bcmlrd_field_data_t bcm56880_a0_lrd_fp_compression_index_remap_2_map_field_data_mmd[] = {
    { /* 0 FP_COMPRESSION_INDEX_REMAP_2_ID */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56880_a0_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_lrd_ifd_u8_0xff,
      .depth = 0,
      .width = 8,
      .edata = NULL,
    },
    { /* 1 PIPE */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56880_a0_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_lrd_ifd_u8_0x7,
      .depth = 0,
      .width = 3,
      .edata = NULL,
    },
    { /* 2 REMAPPED_VALUE */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_lrd_ifd_u8_0xff,
      .depth = 0,
      .width = 8,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56880_a0_lrd_fp_compression_index_remap_2_map_field_data = {
    .fields = 3,
    .field = bcm56880_a0_lrd_fp_compression_index_remap_2_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56880_a0_lrd_fp_compression_index_remap_2t_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INSTANCE_MAX_INDEX,
        .value = 7,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INSTANCE_MIN_INDEX,
        .value = 0,
    },
    { /* 2 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = false,
    },
    { /* 3 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MAX_INDEX,
        .value = 255,
    },
    { /* 4 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MIN_INDEX,
        .value = 0,
    },
};

static const bcmlrd_map_attr_t bcm56880_a0_lrd_fp_compression_index_remap_2t_attr_group = {
    .attributes = 5,
    .attr = bcm56880_a0_lrd_fp_compression_index_remap_2t_attr_entry,
};

static const bcmlrd_map_entry_t bcm56880_a0_lrd_fp_compression_index_remap_2t_field_compression_engine_index_mapping_2_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = BCMLRD_FIELD_INSTANCE,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 2,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = FP_COMPRESSION_INDEX_REMAP_2t_PIPEf,
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
                    .field_id = FP_COMPRESSION_INDEX_REMAP_2t_FP_COMPRESSION_INDEX_REMAP_2_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 7,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 2 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = VALUEf,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 7,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = FP_COMPRESSION_INDEX_REMAP_2t_REMAPPED_VALUEf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 7,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
};
/* Map conditions */
static const uint32_t
bcm56880_a0_lrd_fp_compression_index_remap_2_map_cond_edit[] = {
    1, /* Number of groups. */
    0, /* Group ID. */
    1, /* Number of entries. */
    0, /* Entry ID. */
    0, /* Number of multi-entry transforms. */
};

static const bcmlrd_condition_t
bcm56880_a0_lrd_fp_compression_index_remap_2_map_condition[] = {
    {
        .op    = BCMLRD_CONDITION_AND,
        .table = FP_CONFIGt,
        .field = FP_CONFIGt_FP_COMPRESSION_OPERMODE_PIPEUNIQUEf,
        .value = 1
    },
};

static const bcmlrd_cond_expr_t
bcm56880_a0_lrd_fp_compression_index_remap_2_map_cond_expr[] = {
    {
        .num_cond = 1,
        .cond     = bcm56880_a0_lrd_fp_compression_index_remap_2_map_condition + 0,
    },
};

static const bcmlrd_cond_field_t bcm56880_a0_lrd_fp_compression_index_remap_2_map_cond_field[] = {
    {
        .field = FP_COMPRESSION_INDEX_REMAP_2t_PIPEf,
        .expr  = bcm56880_a0_lrd_fp_compression_index_remap_2_map_cond_expr + 0,
        .edit  = bcm56880_a0_lrd_fp_compression_index_remap_2_map_cond_edit + 0,
    },
};
static const bcmlrd_cond_data_t
bcm56880_a0_lrd_fp_compression_index_remap_2_map_cond = {
    .num_field_cond = 1,
    .field_cond = bcm56880_a0_lrd_fp_compression_index_remap_2_map_cond_field
};
static const bcmlrd_map_group_t bcm56880_a0_lrd_fp_compression_index_remap_2_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = FIELD_COMPRESSION_ENGINE_INDEX_MAPPING_2m,
        },
        .entries = 3,
        .entry = bcm56880_a0_lrd_fp_compression_index_remap_2t_field_compression_engine_index_mapping_2_map_entry
    },
};
const bcmlrd_map_t bcm56880_a0_lrd_fp_compression_index_remap_2_map = {
    .src_id = FP_COMPRESSION_INDEX_REMAP_2t,
    .field_data = &bcm56880_a0_lrd_fp_compression_index_remap_2_map_field_data,
    .groups = 1,
    .group  = bcm56880_a0_lrd_fp_compression_index_remap_2_map_group,
    .table_attr = &bcm56880_a0_lrd_fp_compression_index_remap_2t_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE,
    .cond = &bcm56880_a0_lrd_fp_compression_index_remap_2_map_cond,
};
