/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/phb/bcm56996_a0/bcm56996_a0_PHB_ING_L2_UNTAGGED_TO_INT_PRI.map.ltl for
 *      bcm56996_a0
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
#include <bcmlrd/chip/bcm56996_a0/bcm56996_a0_lrd_field_data.h>
#include <bcmlrd/chip/bcm56996_a0/bcm56996_a0_lrd_ltm_intf.h>
#include <bcmlrd/chip/bcm56996_a0/bcm56996_a0_lrd_xfrm_field_desc.h>
#include <bcmdrd/chip/bcm56996_a0_enum.h>
#include "bcmltd/chip/bcmltd_common_enumpool.h"
#include "bcm56996_a0_lrd_enumpool.h"
/* PHB_ING_L2_UNTAGGED_TO_INT_PRI field init */
static const bcmlrd_field_data_t bcm56996_a0_lrd_phb_ing_l2_untagged_to_int_pri_map_field_data_mmd[] = {
    { /* 0 PHB_ING_L2_UNTAGGED_TO_INT_PRI_ID */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56996_a0_lrd_ifd_u8_0x0,
      .def = &bcm56996_a0_lrd_ifd_u8_0x0,
      .max = &bcm56996_a0_lrd_ifd_u8_0x3f,
      .depth = 0,
      .width = 6,
      .edata = NULL,
    },
    { /* 1 INT_PRI */
      .flags = 0,
      .min = &bcm56996_a0_lrd_ifd_u8_0x0,
      .def = &bcm56996_a0_lrd_ifd_u8_0x0,
      .max = &bcm56996_a0_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 2 CNG */
      .flags = 0,
      .min = &bcm56996_a0_lrd_ifd_u8_0x0,
      .def = &bcm56996_a0_lrd_ifd_u8_0x0,
      .max = &bcm56996_a0_lrd_ifd_u8_0x3,
      .depth = 0,
      .width = 2,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56996_a0_lrd_phb_ing_l2_untagged_to_int_pri_map_field_data = {
    .fields = 3,
    .field = bcm56996_a0_lrd_phb_ing_l2_untagged_to_int_pri_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56996_a0_lrd_phb_ing_l2_untagged_to_int_prit_attr_entry[] = {
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

static const bcmlrd_map_attr_t bcm56996_a0_lrd_phb_ing_l2_untagged_to_int_prit_attr_group = {
    .attributes = 3,
    .attr = bcm56996_a0_lrd_phb_ing_l2_untagged_to_int_prit_attr_entry,
};

static const bcmlrd_map_entry_t bcm56996_a0_lrd_phb_ing_l2_untagged_to_int_prit_ing_untagged_phb_map_entry[] = {
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
                    .field_id = PHB_ING_L2_UNTAGGED_TO_INT_PRIt_PHB_ING_L2_UNTAGGED_TO_INT_PRI_IDf,
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
            .field_id  = PRIf,
            .field_idx = 0,
            .minbit    = 2,
            .maxbit    = 5,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = PHB_ING_L2_UNTAGGED_TO_INT_PRIt_INT_PRIf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 2 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = CNGf,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 1,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = PHB_ING_L2_UNTAGGED_TO_INT_PRIt_CNGf,
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
static const bcmlrd_map_group_t bcm56996_a0_lrd_phb_ing_l2_untagged_to_int_pri_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = ING_UNTAGGED_PHBm,
        },
        .entries = 3,
        .entry = bcm56996_a0_lrd_phb_ing_l2_untagged_to_int_prit_ing_untagged_phb_map_entry
    },
};
const bcmlrd_map_t bcm56996_a0_lrd_phb_ing_l2_untagged_to_int_pri_map = {
    .src_id = PHB_ING_L2_UNTAGGED_TO_INT_PRIt,
    .field_data = &bcm56996_a0_lrd_phb_ing_l2_untagged_to_int_pri_map_field_data,
    .groups = 1,
    .group  = bcm56996_a0_lrd_phb_ing_l2_untagged_to_int_pri_map_group,
    .table_attr = &bcm56996_a0_lrd_phb_ing_l2_untagged_to_int_prit_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};
