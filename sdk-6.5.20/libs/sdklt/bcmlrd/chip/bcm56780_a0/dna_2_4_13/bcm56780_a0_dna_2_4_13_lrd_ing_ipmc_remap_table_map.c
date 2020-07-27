/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/npl/bcm56780_a0/dna_2_4_13/bcm56780_a0_dna_2_4_13_ING_IPMC_REMAP_TABLE.map.ltl for
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
#include <bcmltd/bcmltd_handler.h>
/* ING_IPMC_REMAP_TABLE field init */
static const bcmlrd_field_data_t bcm56780_a0_dna_2_4_13_lrd_ing_ipmc_remap_table_map_field_data_mmd[] = {
    { /* 0 IPMC_INDEX */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_dna_2_4_13_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_dna_2_4_13_lrd_ifd_u16_0x0,
      .max = &bcm56780_a0_dna_2_4_13_lrd_ifd_u16_0x3fff,
      .depth = 0,
      .width = 14,
      .edata = NULL,
    },
    { /* 1 REMAPPED_IPMC_INDEX */
      .flags = 0,
      .min = &bcm56780_a0_dna_2_4_13_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_dna_2_4_13_lrd_ifd_u16_0x0,
      .max = &bcm56780_a0_dna_2_4_13_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 2 STRENGTH_PROFILE_INDEX */
      .flags = 0,
      .min = &bcm56780_a0_dna_2_4_13_lrd_ifd_u8_0x0,
      .def = &bcm56780_a0_dna_2_4_13_lrd_ifd_u8_0x0,
      .max = &bcm56780_a0_dna_2_4_13_lrd_ifd_u8_0x1f,
      .depth = 0,
      .width = 5,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56780_a0_dna_2_4_13_lrd_ing_ipmc_remap_table_map_field_data = {
    .fields = 3,
    .field = bcm56780_a0_dna_2_4_13_lrd_ing_ipmc_remap_table_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56780_a0_dna_2_4_13_lrd_ing_ipmc_remap_tablet_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MAX_INDEX,
        .value = 16383,
    },
    { /* 2 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MIN_INDEX,
        .value = 0,
    },
    { /* 3 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TRACK_INDEX_MAX_INDEX,
        .value = 16383,
    },
    { /* 4 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TRACK_INDEX_MIN_INDEX,
        .value = 0,
    },
};

static const bcmlrd_map_attr_t bcm56780_a0_dna_2_4_13_lrd_ing_ipmc_remap_tablet_attr_group = {
    .attributes = 5,
    .attr = bcm56780_a0_dna_2_4_13_lrd_ing_ipmc_remap_tablet_attr_entry,
};


const bcmltd_field_desc_t
bcm56780_a0_dna_2_4_13_lrd_bcmltx_copy_field_src_field_desc_s8[1] = {
    {
        .field_id  = BCM56780_A0_DNA_2_4_13_ING_IPMC_REMAP_TABLEt_IPMC_INDEXf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 13,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56780_a0_dna_2_4_13_lrd_bcmltx_copy_field_ing_ipmc_remap_table_dst_field_desc_d0[1] = {
    {
        .field_id  = BCMLRD_FIELD_TRACK_INDEX,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 31,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmltd_field_desc_t
bcm56780_a0_dna_2_4_13_lrd_bcmltx_divmod_depth_expand_tile_mode_src_field_desc_s4[1] = {
    {
        .field_id  = BCM56780_A0_DNA_2_4_13_ING_IPMC_REMAP_TABLEt_IPMC_INDEXf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 13,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56780_a0_dna_2_4_13_lrd_bcmltx_divmod_depth_expand_tile_mode_ing_ipmc_remap_table_dst_field_desc_d1[3] = {
    {
        .field_id  = BCMLRD_FIELD_INDEX,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 13,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = BCMLRD_FIELD_TABLE_SEL,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 7,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = BCMLRD_FIELD_SELECTOR,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 31,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const uint32_t
bcm56780_a0_dna_2_4_13_lrd_divmod_depth_expand_tile_mode_transform_tbl_t4[1] = {
    MEMDB_IFTA130_MEM4m,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_dna_2_4_13_lta_bcmltx_copy_field_xfrm_handler_fwd_s8_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_DNA_2_4_13_LTA_BCMLTX_COPY_FIELD_XFRM_HANDLER_FWD_S8_D0_ID,
    .src_fields = 1,
    .src = bcm56780_a0_dna_2_4_13_lrd_bcmltx_copy_field_src_field_desc_s8,
    .dst_fields = 1,
    .dst = bcm56780_a0_dna_2_4_13_lrd_bcmltx_copy_field_ing_ipmc_remap_table_dst_field_desc_d0,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_dna_2_4_13_lta_bcmltx_copy_field_xfrm_handler_rev_s8_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_DNA_2_4_13_LTA_BCMLTX_COPY_FIELD_XFRM_HANDLER_REV_S8_D0_ID,
    .src_fields = 1,
    .src = bcm56780_a0_dna_2_4_13_lrd_bcmltx_copy_field_ing_ipmc_remap_table_dst_field_desc_d0,
    .dst_fields = 1,
    .dst = bcm56780_a0_dna_2_4_13_lrd_bcmltx_copy_field_src_field_desc_s8,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_dna_2_4_13_lta_bcmltx_divmod_depth_expand_tile_mode_xfrm_handler_fwd_s4_d1_t4_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_DNA_2_4_13_LTA_BCMLTX_DIVMOD_DEPTH_EXPAND_TILE_MODE_XFRM_HANDLER_FWD_S4_D1_T4_ID,
    .src_fields = 1,
    .src = bcm56780_a0_dna_2_4_13_lrd_bcmltx_divmod_depth_expand_tile_mode_src_field_desc_s4,
    .dst_fields = 3,
    .dst = bcm56780_a0_dna_2_4_13_lrd_bcmltx_divmod_depth_expand_tile_mode_ing_ipmc_remap_table_dst_field_desc_d1,
    .tables = 1,
    .tbl = bcm56780_a0_dna_2_4_13_lrd_divmod_depth_expand_tile_mode_transform_tbl_t4,
};


static const bcmlrd_map_entry_t bcm56780_a0_dna_2_4_13_lrd_ing_ipmc_remap_tablet_memdb_ifta130_mem4_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATAf,
            .field_idx = 0,
            .minbit    = 2,
            .maxbit    = 6,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56780_A0_DNA_2_4_13_ING_IPMC_REMAP_TABLEt_STRENGTH_PROFILE_INDEXf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 4,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 1 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATAf,
            .field_idx = 0,
            .minbit    = 7,
            .maxbit    = 22,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56780_A0_DNA_2_4_13_ING_IPMC_REMAP_TABLEt_REMAPPED_IPMC_INDEXf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 15,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 2 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATAf,
            .field_idx = 0,
            .minbit    = 45,
            .maxbit    = 49,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56780_A0_DNA_2_4_13_ING_IPMC_REMAP_TABLEt_STRENGTH_PROFILE_INDEXf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 4,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 3 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATAf,
            .field_idx = 0,
            .minbit    = 50,
            .maxbit    = 65,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56780_A0_DNA_2_4_13_ING_IPMC_REMAP_TABLEt_REMAPPED_IPMC_INDEXf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 15,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 4 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_VALUE,
        .desc = {
            .field_id  = DATAf,
            .field_idx = 0,
            .minbit    = 86,
            .maxbit    = 86,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 1,
            }
        },
    },
    { /* 5 */
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
                /* handler: bcm56780_a0_dna_2_4_13_lta_bcmltx_copy_field_xfrm_handler_fwd_s8_d0 */
                .desc = &bcm56780_a0_dna_2_4_13_lta_bcmltx_copy_field_xfrm_handler_fwd_s8_d0_desc,
            },
        },
    },
    { /* 6 */
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
                /* handler: bcm56780_a0_dna_2_4_13_lta_bcmltx_copy_field_xfrm_handler_rev_s8_d0 */
                .desc = &bcm56780_a0_dna_2_4_13_lta_bcmltx_copy_field_xfrm_handler_rev_s8_d0_desc,
            },
        },
    },
    { /* 7 */
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
                /* handler: bcm56780_a0_dna_2_4_13_lta_bcmltx_divmod_depth_expand_tile_mode_xfrm_handler_fwd_s4_d1_t4 */
                .desc = &bcm56780_a0_dna_2_4_13_lta_bcmltx_divmod_depth_expand_tile_mode_xfrm_handler_fwd_s4_d1_t4_desc,
            },
        },
    },
};
static const bcmlrd_map_entry_t
bcm56780_a0_dna_2_4_13_lrd_bcmltx_ing_ipmc_remap_table_table_entry_limit_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_TABLE_ENTRY_LIMIT_HANDLER,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            /* handler: bcm56780_a0_dna_2_4_13_lta_bcmltx_ing_ipmc_remap_table_divmod_depth_expand_tile_mode_table_entry_limit_handler */
            .handler_id = BCMLTD_TABLE_ENTRY_LIMIT_BCM56780_A0_DNA_2_4_13_LTA_BCMLTX_ING_IPMC_REMAP_TABLE_DIVMOD_DEPTH_EXPAND_TILE_MODE_TABLE_ENTRY_LIMIT_HANDLER_ID
        }
    },
};
const bcmlrd_field_selector_t bcm56780_a0_dna_2_4_13_lrd_ing_ipmc_remap_table_map_select[] = {
    { /* Node:0, Type:ROOT, MEMDB_IFTA130_MEM4.__SELECTOR */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_ROOT,
        .field_id = BCMLRD_FIELD_SELECTOR,
        .group_index = BCMLRD_INVALID_SELECTOR_INDEX,
        .entry_index = BCMLRD_INVALID_SELECTOR_INDEX,
        .selection_parent = BCMLRD_INVALID_SELECTOR_INDEX,
        .group = BCMLRD_INVALID_SELECTOR_INDEX,
        .selector_id = BCMLRD_INVALID_SELECTOR_INDEX,
        .selector_value = BCMLRD_INVALID_SELECTOR_INDEX
    },
    { /* Node:1, Type:Directmap, STRENGTH_PROFILE_INDEX:MEMDB_IFTA130_MEM4.DATA */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = BCM56780_A0_DNA_2_4_13_ING_IPMC_REMAP_TABLEt_STRENGTH_PROFILE_INDEXf,
        .group_index = 0,
        .entry_index = 0,
        .selection_parent = 0,
        .group = 0,
        .selector_id = BCMLRD_FIELD_SELECTOR,
        .selector_value = 0
    },
    { /* Node:2, Type:Directmap, REMAPPED_IPMC_INDEX:MEMDB_IFTA130_MEM4.DATA */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = BCM56780_A0_DNA_2_4_13_ING_IPMC_REMAP_TABLEt_REMAPPED_IPMC_INDEXf,
        .group_index = 0,
        .entry_index = 1,
        .selection_parent = 0,
        .group = 0,
        .selector_id = BCMLRD_FIELD_SELECTOR,
        .selector_value = 0
    },
    { /* Node:3, Type:Directmap, STRENGTH_PROFILE_INDEX:MEMDB_IFTA130_MEM4.DATA */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = BCM56780_A0_DNA_2_4_13_ING_IPMC_REMAP_TABLEt_STRENGTH_PROFILE_INDEXf,
        .group_index = 0,
        .entry_index = 2,
        .selection_parent = 0,
        .group = 1,
        .selector_id = BCMLRD_FIELD_SELECTOR,
        .selector_value = 1
    },
    { /* Node:4, Type:Directmap, REMAPPED_IPMC_INDEX:MEMDB_IFTA130_MEM4.DATA */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = BCM56780_A0_DNA_2_4_13_ING_IPMC_REMAP_TABLEt_REMAPPED_IPMC_INDEXf,
        .group_index = 0,
        .entry_index = 3,
        .selection_parent = 0,
        .group = 1,
        .selector_id = BCMLRD_FIELD_SELECTOR,
        .selector_value = 1
    },
};

const bcmlrd_field_selector_data_t bcm56780_a0_dna_2_4_13_lrd_ing_ipmc_remap_table_map_select_data = {
    .num_field_selector = 5,
    .field_selector = bcm56780_a0_dna_2_4_13_lrd_ing_ipmc_remap_table_map_select,
};

static const bcmlrd_map_group_t bcm56780_a0_dna_2_4_13_lrd_ing_ipmc_remap_table_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = MEMDB_IFTA130_MEM4m,
        },
        .entries = 8,
        .entry = bcm56780_a0_dna_2_4_13_lrd_ing_ipmc_remap_tablet_memdb_ifta130_mem4_map_entry
    },
    {
        .dest = {
            .kind = BCMLRD_MAP_TABLE_ENTRY_LIMIT,
            .id = 0,
        },
        .entries = 1,
        .entry = bcm56780_a0_dna_2_4_13_lrd_bcmltx_ing_ipmc_remap_table_table_entry_limit_entry
    },
};
const bcmlrd_map_t bcm56780_a0_dna_2_4_13_lrd_ing_ipmc_remap_table_map = {
    .src_id = BCM56780_A0_DNA_2_4_13_ING_IPMC_REMAP_TABLEt,
    .field_data = &bcm56780_a0_dna_2_4_13_lrd_ing_ipmc_remap_table_map_field_data,
    .groups = 2,
    .group  = bcm56780_a0_dna_2_4_13_lrd_ing_ipmc_remap_table_map_group,
    .table_attr = &bcm56780_a0_dna_2_4_13_lrd_ing_ipmc_remap_tablet_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE,
    .sel = &bcm56780_a0_dna_2_4_13_lrd_ing_ipmc_remap_table_map_select_data,
};
