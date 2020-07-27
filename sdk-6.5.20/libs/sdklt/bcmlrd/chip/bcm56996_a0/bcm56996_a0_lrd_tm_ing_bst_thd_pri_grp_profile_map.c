/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/tm/bcm56996_a0/bcm56996_a0_TM_ING_BST_THD_PRI_GRP_PROFILE.map.ltl for
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
/* TM_ING_BST_THD_PRI_GRP_PROFILE field init */
static const bcmlrd_field_data_t bcm56996_a0_lrd_tm_ing_bst_thd_pri_grp_profile_map_field_data_mmd[] = {
    { /* 0 TM_ING_BST_THD_PRI_GRP_PROFILE_ID */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56996_a0_lrd_ifd_u8_0x0,
      .def = &bcm56996_a0_lrd_ifd_u8_0x0,
      .max = &bcm56996_a0_lrd_ifd_u8_0x7,
      .depth = 0,
      .width = 3,
      .edata = NULL,
    },
    { /* 1 SHARED_CELLS */
      .flags = 0,
      .min = &bcm56996_a0_lrd_ifd_u32_0x0,
      .def = &bcm56996_a0_lrd_ifd_u32_0x3ffff,
      .max = &bcm56996_a0_lrd_ifd_u32_0x3ffff,
      .depth = 0,
      .width = 18,
      .edata = NULL,
    },
    { /* 2 HEADROOM_CELLS */
      .flags = 0,
      .min = &bcm56996_a0_lrd_ifd_u32_0x0,
      .def = &bcm56996_a0_lrd_ifd_u32_0x3ffff,
      .max = &bcm56996_a0_lrd_ifd_u32_0x3ffff,
      .depth = 0,
      .width = 18,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56996_a0_lrd_tm_ing_bst_thd_pri_grp_profile_map_field_data = {
    .fields = 3,
    .field = bcm56996_a0_lrd_tm_ing_bst_thd_pri_grp_profile_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56996_a0_lrd_tm_ing_bst_thd_pri_grp_profilet_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = true,
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

static const bcmlrd_map_attr_t bcm56996_a0_lrd_tm_ing_bst_thd_pri_grp_profilet_attr_group = {
    .attributes = 3,
    .attr = bcm56996_a0_lrd_tm_ing_bst_thd_pri_grp_profilet_attr_entry,
};

static const bcmlrd_map_entry_t bcm56996_a0_lrd_tm_ing_bst_thd_pri_grp_profilet_mmu_thdi_bst_pg_hdrm_profile_map_entry[] = {
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
                    .field_id = TM_ING_BST_THD_PRI_GRP_PROFILEt_TM_ING_BST_THD_PRI_GRP_PROFILE_IDf,
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
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = BST_PG_HDRM_THRESHf,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 17,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TM_ING_BST_THD_PRI_GRP_PROFILEt_HEADROOM_CELLSf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 17,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
};
static const bcmlrd_map_entry_t bcm56996_a0_lrd_tm_ing_bst_thd_pri_grp_profilet_mmu_thdi_bst_pg_shared_profile_map_entry[] = {
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
                    .field_id = TM_ING_BST_THD_PRI_GRP_PROFILEt_TM_ING_BST_THD_PRI_GRP_PROFILE_IDf,
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
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = BST_PG_SHARED_THRESHf,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 17,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TM_ING_BST_THD_PRI_GRP_PROFILEt_SHARED_CELLSf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 17,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
};
static const bcmlrd_map_group_t bcm56996_a0_lrd_tm_ing_bst_thd_pri_grp_profile_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = MMU_THDI_BST_PG_HDRM_PROFILEr,
        },
        .entries = 2,
        .entry = bcm56996_a0_lrd_tm_ing_bst_thd_pri_grp_profilet_mmu_thdi_bst_pg_hdrm_profile_map_entry
    },
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = MMU_THDI_BST_PG_SHARED_PROFILEr,
        },
        .entries = 2,
        .entry = bcm56996_a0_lrd_tm_ing_bst_thd_pri_grp_profilet_mmu_thdi_bst_pg_shared_profile_map_entry
    },
};
const bcmlrd_map_t bcm56996_a0_lrd_tm_ing_bst_thd_pri_grp_profile_map = {
    .src_id = TM_ING_BST_THD_PRI_GRP_PROFILEt,
    .field_data = &bcm56996_a0_lrd_tm_ing_bst_thd_pri_grp_profile_map_field_data,
    .groups = 2,
    .group  = bcm56996_a0_lrd_tm_ing_bst_thd_pri_grp_profile_map_group,
    .table_attr = &bcm56996_a0_lrd_tm_ing_bst_thd_pri_grp_profilet_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};
