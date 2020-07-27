/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/flex_qos/bcm56780_a0/bcm56780_a0_FLEX_QOS_ING_POLICY.map.ltl for
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
/* FLEX_QOS_ING_POLICY field init */
static const bcmlrd_field_data_t bcm56780_a0_dna_2_4_13_lrd_flex_qos_ing_policy_map_field_data_mmd[] = {
    { /* 0 FLEX_QOS_ING_POLICY_ID */
      .flags = BCMLTD_FIELD_F_KEY | BCMLTD_FIELD_F_ENUM,
      .min = &bcm56780_a0_dna_2_4_13_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_dna_2_4_13_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_dna_2_4_13_lrd_ifd_u32_0x1b,
      .depth = 0,
      .width = 5,
      .edata = BCM56780_A0_DNA_2_4_13_LRD_FLEX_QOS_ING_POLICY_T_DATA,
    },
    { /* 1 FLEX_QOS_ING_PHB_INT_PRI_STRENGTH_PROFILE_ID */
      .flags = 0,
      .min = &bcm56780_a0_dna_2_4_13_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_dna_2_4_13_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_dna_2_4_13_lrd_ifd_u32_0x7,
      .depth = 0,
      .width = 3,
      .edata = NULL,
    },
    { /* 2 FLEX_QOS_ING_PHB_INT_CNG_STRENGTH_PROFILE_ID */
      .flags = 0,
      .min = &bcm56780_a0_dna_2_4_13_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_dna_2_4_13_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_dna_2_4_13_lrd_ifd_u32_0x7,
      .depth = 0,
      .width = 3,
      .edata = NULL,
    },
    { /* 3 INT_CN_MAPPING_PTR */
      .flags = 0,
      .min = &bcm56780_a0_dna_2_4_13_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_dna_2_4_13_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_dna_2_4_13_lrd_ifd_u32_0x7,
      .depth = 0,
      .width = 3,
      .edata = NULL,
    },
    { /* 4 INT_PRI */
      .flags = 0,
      .min = &bcm56780_a0_dna_2_4_13_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_dna_2_4_13_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_dna_2_4_13_lrd_ifd_u32_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 5 INT_CNG */
      .flags = 0,
      .min = &bcm56780_a0_dna_2_4_13_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_dna_2_4_13_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_dna_2_4_13_lrd_ifd_u32_0x3,
      .depth = 0,
      .width = 2,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56780_a0_dna_2_4_13_lrd_flex_qos_ing_policy_map_field_data = {
    .fields = 6,
    .field = bcm56780_a0_dna_2_4_13_lrd_flex_qos_ing_policy_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56780_a0_dna_2_4_13_lrd_flex_qos_ing_policyt_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_PREPOPULATE,
        .value = true,
    },
    { /* 2 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MAX_INDEX,
        .value = 63,
    },
    { /* 3 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MIN_INDEX,
        .value = 0,
    },
};

static const bcmlrd_map_attr_t bcm56780_a0_dna_2_4_13_lrd_flex_qos_ing_policyt_attr_group = {
    .attributes = 4,
    .attr = bcm56780_a0_dna_2_4_13_lrd_flex_qos_ing_policyt_attr_entry,
};

static const bcmlrd_map_entry_t bcm56780_a0_dna_2_4_13_lrd_flex_qos_ing_policyt_flex_qos_phb_lts_tcam_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = BCMLRD_FIELD_INDEX,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 5,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = FLEX_QOS_ING_POLICYt_FLEX_QOS_ING_POLICY_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 5,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 1 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATA0f,
            .field_idx = 0,
            .minbit    = 163,
            .maxbit    = 165,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = FLEX_QOS_ING_POLICYt_INT_CN_MAPPING_PTRf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 2,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 2 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATA0f,
            .field_idx = 0,
            .minbit    = 157,
            .maxbit    = 159,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = FLEX_QOS_ING_POLICYt_FLEX_QOS_ING_PHB_INT_PRI_STRENGTH_PROFILE_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 2,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 3 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATA0f,
            .field_idx = 0,
            .minbit    = 160,
            .maxbit    = 162,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = FLEX_QOS_ING_POLICYt_FLEX_QOS_ING_PHB_INT_CNG_STRENGTH_PROFILE_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 2,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 4 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATA0f,
            .field_idx = 0,
            .minbit    = 151,
            .maxbit    = 154,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = FLEX_QOS_ING_POLICYt_INT_PRIf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 5 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATA0f,
            .field_idx = 0,
            .minbit    = 155,
            .maxbit    = 156,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = FLEX_QOS_ING_POLICYt_INT_CNGf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 1,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
};
static const bcmlrd_map_group_t bcm56780_a0_dna_2_4_13_lrd_flex_qos_ing_policy_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = FLEX_QOS_PHB_LTS_TCAMm,
        },
        .entries = 6,
        .entry = bcm56780_a0_dna_2_4_13_lrd_flex_qos_ing_policyt_flex_qos_phb_lts_tcam_map_entry
    },
};
const bcmlrd_map_t bcm56780_a0_dna_2_4_13_lrd_flex_qos_ing_policy_map = {
    .src_id = FLEX_QOS_ING_POLICYt,
    .field_data = &bcm56780_a0_dna_2_4_13_lrd_flex_qos_ing_policy_map_field_data,
    .groups = 1,
    .group  = bcm56780_a0_dna_2_4_13_lrd_flex_qos_ing_policy_map_group,
    .table_attr = &bcm56780_a0_dna_2_4_13_lrd_flex_qos_ing_policyt_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE
};
