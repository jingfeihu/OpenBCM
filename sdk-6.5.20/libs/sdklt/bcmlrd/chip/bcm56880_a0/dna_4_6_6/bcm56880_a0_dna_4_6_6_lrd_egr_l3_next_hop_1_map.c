/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/npl/bcm56880_a0/dna_4_6_6/bcm56880_a0_dna_4_6_6_EGR_L3_NEXT_HOP_1.map.ltl for
 *      bcm56880_a0 variant dna_4_6_6
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
#include <bcmlrd/chip/bcm56880_a0/dna_4_6_6/bcm56880_a0_dna_4_6_6_lrd_field_data.h>
#include <bcmlrd/chip/bcm56880_a0/bcm56880_a0_lrd_ltm_intf.h>
#include <bcmlrd/chip/bcm56880_a0/dna_4_6_6/bcm56880_a0_dna_4_6_6_lrd_ltm_intf.h>
#include <bcmlrd/chip/bcm56880_a0/dna_4_6_6/bcm56880_a0_dna_4_6_6_lrd_xfrm_field_desc.h>
#include <bcmdrd/chip/bcm56880_a0_enum.h>
#include "bcmltd/chip/bcmltd_common_enumpool.h"
#include "../bcm56880_a0_lrd_enumpool.h"
#include "bcm56880_a0_dna_4_6_6_lrd_enumpool.h"
#include <bcmltd/bcmltd_handler.h>
/* EGR_L3_NEXT_HOP_1 field init */
static const bcmlrd_field_data_t bcm56880_a0_dna_4_6_6_lrd_egr_l3_next_hop_1_map_field_data_mmd[] = {
    { /* 0 L3_NEXT_HOP_1 */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 1 DST_MAC_ADDRESS */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u64_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u64_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u64_0xffffffffffff,
      .depth = 0,
      .width = 48,
      .edata = NULL,
    },
    { /* 2 EDIT_CTRL_ID */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 3 CLASS_ID */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 4 FLEX_CTR_ACTION */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x3f,
      .depth = 0,
      .width = 6,
      .edata = NULL,
    },
    { /* 5 FLEX_CTR_INDEX */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0xfff,
      .depth = 0,
      .width = 12,
      .edata = NULL,
    },
    { /* 6 STRENGTH_PRFL_IDX */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x1f,
      .depth = 0,
      .width = 5,
      .edata = NULL,
    },
    { /* 7 TOS_PTR_STR */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x7,
      .depth = 0,
      .width = 3,
      .edata = NULL,
    },
    { /* 8 TOS_REMARK_BASE_PTR */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0xff,
      .depth = 0,
      .width = 8,
      .edata = NULL,
    },
    { /* 9 SWAP_LABEL */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0xffffffff,
      .depth = 0,
      .width = 32,
      .edata = NULL,
    },
    { /* 10 EXP_REMARK_BASE_PTR */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0xff,
      .depth = 0,
      .width = 8,
      .edata = NULL,
    },
    { /* 11 VIEW_T */
      .flags = BCMLTD_FIELD_F_ENUM,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x1,
      .depth = 0,
      .width = 1,
      .edata = BCM56880_A0_DNA_4_6_6_LRD_NHOP_1_VT_DATA,
    },
};
const bcmlrd_map_field_data_t bcm56880_a0_dna_4_6_6_lrd_egr_l3_next_hop_1_map_field_data = {
    .fields = 12,
    .field = bcm56880_a0_dna_4_6_6_lrd_egr_l3_next_hop_1_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56880_a0_dna_4_6_6_lrd_egr_l3_next_hop_1t_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MAX_INDEX,
        .value = 65535,
    },
    { /* 2 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MIN_INDEX,
        .value = 0,
    },
};

static const bcmlrd_map_attr_t bcm56880_a0_dna_4_6_6_lrd_egr_l3_next_hop_1t_attr_group = {
    .attributes = 3,
    .attr = bcm56880_a0_dna_4_6_6_lrd_egr_l3_next_hop_1t_attr_entry,
};


const bcmltd_field_desc_t
bcm56880_a0_dna_4_6_6_lrd_bcmltx_depth_expand_tile_mode_src_field_desc_s0[1] = {
    {
        .field_id  = BCM56880_A0_DNA_4_6_6_EGR_L3_NEXT_HOP_1t_L3_NEXT_HOP_1f,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 15,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56880_a0_dna_4_6_6_lrd_bcmltx_depth_expand_tile_mode_egr_l3_next_hop_1_dst_field_desc_d0[2] = {
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
};

const uint32_t
bcm56880_a0_dna_4_6_6_lrd_depth_expand_tile_mode_transform_tbl_t0[4] = {
    MEMDB_EFTA10_MEM0m,
    MEMDB_EFTA10_MEM1m,
    MEMDB_EFTA10_MEM2m,
    MEMDB_EFTA10_MEM3m,
};

const bcmlrd_field_xfrm_desc_t
bcm56880_a0_dna_4_6_6_lta_bcmltx_depth_expand_tile_mode_xfrm_handler_fwd_s0_d0_x0_t0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56880_A0_DNA_4_6_6_LTA_BCMLTX_DEPTH_EXPAND_TILE_MODE_XFRM_HANDLER_FWD_S0_D0_X0_T0_ID,
    .src_fields = 1,
    .src = bcm56880_a0_dna_4_6_6_lrd_bcmltx_depth_expand_tile_mode_src_field_desc_s0,
    .dst_fields = 2,
    .dst = bcm56880_a0_dna_4_6_6_lrd_bcmltx_depth_expand_tile_mode_egr_l3_next_hop_1_dst_field_desc_d0,
    .tables = 4,
    .tbl = bcm56880_a0_dna_4_6_6_lrd_depth_expand_tile_mode_transform_tbl_t0,
};

const bcmlrd_field_xfrm_desc_t
bcm56880_a0_dna_4_6_6_lta_bcmltx_depth_expand_tile_mode_xfrm_handler_rev_s0_d0_x0_t0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56880_A0_DNA_4_6_6_LTA_BCMLTX_DEPTH_EXPAND_TILE_MODE_XFRM_HANDLER_REV_S0_D0_X0_T0_ID,
    .src_fields = 2,
    .src = bcm56880_a0_dna_4_6_6_lrd_bcmltx_depth_expand_tile_mode_egr_l3_next_hop_1_dst_field_desc_d0,
    .dst_fields = 1,
    .dst = bcm56880_a0_dna_4_6_6_lrd_bcmltx_depth_expand_tile_mode_src_field_desc_s0,
    .tables = 4,
    .tbl = bcm56880_a0_dna_4_6_6_lrd_depth_expand_tile_mode_transform_tbl_t0,
};


static const bcmlrd_map_entry_t bcm56880_a0_dna_4_6_6_lrd_egr_l3_next_hop_1t_memdb_efta10_mem0_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATAf,
            .field_idx = 0,
            .minbit    = 126,
            .maxbit    = 127,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_6_6_EGR_L3_NEXT_HOP_1t_VIEW_Tf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 1,
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
            .minbit    = 121,
            .maxbit    = 125,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_6_6_EGR_L3_NEXT_HOP_1t_STRENGTH_PRFL_IDXf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 4,
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
            .minbit    = 115,
            .maxbit    = 120,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_6_6_EGR_L3_NEXT_HOP_1t_FLEX_CTR_ACTIONf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 5,
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
            .minbit    = 109,
            .maxbit    = 112,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_6_6_EGR_L3_NEXT_HOP_1t_EDIT_CTRL_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 4 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATAf,
            .field_idx = 0,
            .minbit    = 41,
            .maxbit    = 56,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_6_6_EGR_L3_NEXT_HOP_1t_CLASS_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 15,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 5 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATAf,
            .field_idx = 0,
            .minbit    = 9,
            .maxbit    = 16,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_6_6_EGR_L3_NEXT_HOP_1t_TOS_REMARK_BASE_PTRf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 7,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 6 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATAf,
            .field_idx = 0,
            .minbit    = 57,
            .maxbit    = 104,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_6_6_EGR_L3_NEXT_HOP_1t_DST_MAC_ADDRESSf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 47,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 7 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATAf,
            .field_idx = 0,
            .minbit    = 25,
            .maxbit    = 36,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_6_6_EGR_L3_NEXT_HOP_1t_FLEX_CTR_INDEXf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 11,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 8 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATAf,
            .field_idx = 0,
            .minbit    = 105,
            .maxbit    = 107,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_6_6_EGR_L3_NEXT_HOP_1t_TOS_PTR_STRf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 2,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 9 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATAf,
            .field_idx = 0,
            .minbit    = 117,
            .maxbit    = 120,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_6_6_EGR_L3_NEXT_HOP_1t_EDIT_CTRL_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 10 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATAf,
            .field_idx = 0,
            .minbit    = 1,
            .maxbit    = 8,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_6_6_EGR_L3_NEXT_HOP_1t_EXP_REMARK_BASE_PTRf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 7,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 11 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATAf,
            .field_idx = 0,
            .minbit    = 65,
            .maxbit    = 112,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_6_6_EGR_L3_NEXT_HOP_1t_DST_MAC_ADDRESSf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 47,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 12 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATAf,
            .field_idx = 0,
            .minbit    = 33,
            .maxbit    = 64,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_6_6_EGR_L3_NEXT_HOP_1t_SWAP_LABELf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 31,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 13 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATAf,
            .field_idx = 0,
            .minbit    = 17,
            .maxbit    = 32,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_6_6_EGR_L3_NEXT_HOP_1t_CLASS_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 15,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 14 */
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
                /* handler: bcm56880_a0_dna_4_6_6_lta_bcmltx_depth_expand_tile_mode_xfrm_handler_fwd_s0_d0_x0_t0 */
                .desc = &bcm56880_a0_dna_4_6_6_lta_bcmltx_depth_expand_tile_mode_xfrm_handler_fwd_s0_d0_x0_t0_desc,
            },
        },
    },
    { /* 15 */
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
                /* handler: bcm56880_a0_dna_4_6_6_lta_bcmltx_depth_expand_tile_mode_xfrm_handler_rev_s0_d0_x0_t0 */
                .desc = &bcm56880_a0_dna_4_6_6_lta_bcmltx_depth_expand_tile_mode_xfrm_handler_rev_s0_d0_x0_t0_desc,
            },
        },
    },
};
static const bcmlrd_map_entry_t
bcm56880_a0_dna_4_6_6_lrd_bcmltx_egr_l3_next_hop_1_table_entry_limit_entry[] = {
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
            /* handler: bcm56880_a0_dna_4_6_6_lta_bcmltx_egr_l3_next_hop_1_index_tile_mode_table_entry_limit_handler */
            .handler_id = BCMLTD_TABLE_ENTRY_LIMIT_BCM56880_A0_DNA_4_6_6_LTA_BCMLTX_EGR_L3_NEXT_HOP_1_INDEX_TILE_MODE_TABLE_ENTRY_LIMIT_HANDLER_ID
        }
    },
};
const bcmlrd_field_selector_t bcm56880_a0_dna_4_6_6_lrd_egr_l3_next_hop_1_map_select[] = {
    { /* Node:0, Type:ROOT, VIEW_T */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_ROOT,
        .field_id = BCM56880_A0_DNA_4_6_6_EGR_L3_NEXT_HOP_1t_VIEW_Tf,
        .group_index = BCMLRD_INVALID_SELECTOR_INDEX,
        .entry_index = BCMLRD_INVALID_SELECTOR_INDEX,
        .selection_parent = BCMLRD_INVALID_SELECTOR_INDEX,
        .group = BCMLRD_INVALID_SELECTOR_INDEX,
        .selector_id = BCMLRD_INVALID_SELECTOR_INDEX,
        .selector_value = BCMLRD_INVALID_SELECTOR_INDEX
    },
    { /* Node:1, Type:Directmap, STRENGTH_PRFL_IDX:MEMDB_EFTA10_MEM0.DATA */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = BCM56880_A0_DNA_4_6_6_EGR_L3_NEXT_HOP_1t_STRENGTH_PRFL_IDXf,
        .group_index = 0,
        .entry_index = 1,
        .selection_parent = 0,
        .group = 0,
        .selector_id = BCM56880_A0_DNA_4_6_6_EGR_L3_NEXT_HOP_1t_VIEW_Tf,
        .selector_value = 0 /* VT_NHOP_1 */
    },
    { /* Node:2, Type:Directmap, FLEX_CTR_ACTION:MEMDB_EFTA10_MEM0.DATA */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = BCM56880_A0_DNA_4_6_6_EGR_L3_NEXT_HOP_1t_FLEX_CTR_ACTIONf,
        .group_index = 0,
        .entry_index = 2,
        .selection_parent = 0,
        .group = 0,
        .selector_id = BCM56880_A0_DNA_4_6_6_EGR_L3_NEXT_HOP_1t_VIEW_Tf,
        .selector_value = 0 /* VT_NHOP_1 */
    },
    { /* Node:3, Type:Directmap, EDIT_CTRL_ID:MEMDB_EFTA10_MEM0.DATA */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = BCM56880_A0_DNA_4_6_6_EGR_L3_NEXT_HOP_1t_EDIT_CTRL_IDf,
        .group_index = 0,
        .entry_index = 3,
        .selection_parent = 0,
        .group = 0,
        .selector_id = BCM56880_A0_DNA_4_6_6_EGR_L3_NEXT_HOP_1t_VIEW_Tf,
        .selector_value = 0 /* VT_NHOP_1 */
    },
    { /* Node:4, Type:Directmap, CLASS_ID:MEMDB_EFTA10_MEM0.DATA */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = BCM56880_A0_DNA_4_6_6_EGR_L3_NEXT_HOP_1t_CLASS_IDf,
        .group_index = 0,
        .entry_index = 4,
        .selection_parent = 0,
        .group = 0,
        .selector_id = BCM56880_A0_DNA_4_6_6_EGR_L3_NEXT_HOP_1t_VIEW_Tf,
        .selector_value = 0 /* VT_NHOP_1 */
    },
    { /* Node:5, Type:Directmap, TOS_REMARK_BASE_PTR:MEMDB_EFTA10_MEM0.DATA */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = BCM56880_A0_DNA_4_6_6_EGR_L3_NEXT_HOP_1t_TOS_REMARK_BASE_PTRf,
        .group_index = 0,
        .entry_index = 5,
        .selection_parent = 0,
        .group = 0,
        .selector_id = BCM56880_A0_DNA_4_6_6_EGR_L3_NEXT_HOP_1t_VIEW_Tf,
        .selector_value = 0 /* VT_NHOP_1 */
    },
    { /* Node:6, Type:Directmap, DST_MAC_ADDRESS:MEMDB_EFTA10_MEM0.DATA */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = BCM56880_A0_DNA_4_6_6_EGR_L3_NEXT_HOP_1t_DST_MAC_ADDRESSf,
        .group_index = 0,
        .entry_index = 6,
        .selection_parent = 0,
        .group = 0,
        .selector_id = BCM56880_A0_DNA_4_6_6_EGR_L3_NEXT_HOP_1t_VIEW_Tf,
        .selector_value = 0 /* VT_NHOP_1 */
    },
    { /* Node:7, Type:Directmap, FLEX_CTR_INDEX:MEMDB_EFTA10_MEM0.DATA */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = BCM56880_A0_DNA_4_6_6_EGR_L3_NEXT_HOP_1t_FLEX_CTR_INDEXf,
        .group_index = 0,
        .entry_index = 7,
        .selection_parent = 0,
        .group = 0,
        .selector_id = BCM56880_A0_DNA_4_6_6_EGR_L3_NEXT_HOP_1t_VIEW_Tf,
        .selector_value = 0 /* VT_NHOP_1 */
    },
    { /* Node:8, Type:Directmap, TOS_PTR_STR:MEMDB_EFTA10_MEM0.DATA */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = BCM56880_A0_DNA_4_6_6_EGR_L3_NEXT_HOP_1t_TOS_PTR_STRf,
        .group_index = 0,
        .entry_index = 8,
        .selection_parent = 0,
        .group = 0,
        .selector_id = BCM56880_A0_DNA_4_6_6_EGR_L3_NEXT_HOP_1t_VIEW_Tf,
        .selector_value = 0 /* VT_NHOP_1 */
    },
    { /* Node:9, Type:Directmap, STRENGTH_PRFL_IDX:MEMDB_EFTA10_MEM0.DATA */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = BCM56880_A0_DNA_4_6_6_EGR_L3_NEXT_HOP_1t_STRENGTH_PRFL_IDXf,
        .group_index = 0,
        .entry_index = 1,
        .selection_parent = 0,
        .group = 1,
        .selector_id = BCM56880_A0_DNA_4_6_6_EGR_L3_NEXT_HOP_1t_VIEW_Tf,
        .selector_value = 1 /* VT_NHOP_1_MPLS */
    },
    { /* Node:10, Type:Directmap, EDIT_CTRL_ID:MEMDB_EFTA10_MEM0.DATA */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = BCM56880_A0_DNA_4_6_6_EGR_L3_NEXT_HOP_1t_EDIT_CTRL_IDf,
        .group_index = 0,
        .entry_index = 9,
        .selection_parent = 0,
        .group = 1,
        .selector_id = BCM56880_A0_DNA_4_6_6_EGR_L3_NEXT_HOP_1t_VIEW_Tf,
        .selector_value = 1 /* VT_NHOP_1_MPLS */
    },
    { /* Node:11, Type:Directmap, EXP_REMARK_BASE_PTR:MEMDB_EFTA10_MEM0.DATA */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = BCM56880_A0_DNA_4_6_6_EGR_L3_NEXT_HOP_1t_EXP_REMARK_BASE_PTRf,
        .group_index = 0,
        .entry_index = 10,
        .selection_parent = 0,
        .group = 0,
        .selector_id = BCM56880_A0_DNA_4_6_6_EGR_L3_NEXT_HOP_1t_VIEW_Tf,
        .selector_value = 1 /* VT_NHOP_1_MPLS */
    },
    { /* Node:12, Type:Directmap, DST_MAC_ADDRESS:MEMDB_EFTA10_MEM0.DATA */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = BCM56880_A0_DNA_4_6_6_EGR_L3_NEXT_HOP_1t_DST_MAC_ADDRESSf,
        .group_index = 0,
        .entry_index = 11,
        .selection_parent = 0,
        .group = 1,
        .selector_id = BCM56880_A0_DNA_4_6_6_EGR_L3_NEXT_HOP_1t_VIEW_Tf,
        .selector_value = 1 /* VT_NHOP_1_MPLS */
    },
    { /* Node:13, Type:Directmap, SWAP_LABEL:MEMDB_EFTA10_MEM0.DATA */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = BCM56880_A0_DNA_4_6_6_EGR_L3_NEXT_HOP_1t_SWAP_LABELf,
        .group_index = 0,
        .entry_index = 12,
        .selection_parent = 0,
        .group = 0,
        .selector_id = BCM56880_A0_DNA_4_6_6_EGR_L3_NEXT_HOP_1t_VIEW_Tf,
        .selector_value = 1 /* VT_NHOP_1_MPLS */
    },
    { /* Node:14, Type:Directmap, CLASS_ID:MEMDB_EFTA10_MEM0.DATA */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = BCM56880_A0_DNA_4_6_6_EGR_L3_NEXT_HOP_1t_CLASS_IDf,
        .group_index = 0,
        .entry_index = 13,
        .selection_parent = 0,
        .group = 1,
        .selector_id = BCM56880_A0_DNA_4_6_6_EGR_L3_NEXT_HOP_1t_VIEW_Tf,
        .selector_value = 1 /* VT_NHOP_1_MPLS */
    },
};

const bcmlrd_field_selector_data_t bcm56880_a0_dna_4_6_6_lrd_egr_l3_next_hop_1_map_select_data = {
    .num_field_selector = 15,
    .field_selector = bcm56880_a0_dna_4_6_6_lrd_egr_l3_next_hop_1_map_select,
};

static const bcmlrd_map_group_t bcm56880_a0_dna_4_6_6_lrd_egr_l3_next_hop_1_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = MEMDB_EFTA10_MEM0m,
        },
        .entries = 16,
        .entry = bcm56880_a0_dna_4_6_6_lrd_egr_l3_next_hop_1t_memdb_efta10_mem0_map_entry
    },
    {
        .dest = {
            .kind = BCMLRD_MAP_TABLE_ENTRY_LIMIT,
            .id = 0,
        },
        .entries = 1,
        .entry = bcm56880_a0_dna_4_6_6_lrd_bcmltx_egr_l3_next_hop_1_table_entry_limit_entry
    },
};
const bcmlrd_map_t bcm56880_a0_dna_4_6_6_lrd_egr_l3_next_hop_1_map = {
    .src_id = BCM56880_A0_DNA_4_6_6_EGR_L3_NEXT_HOP_1t,
    .field_data = &bcm56880_a0_dna_4_6_6_lrd_egr_l3_next_hop_1_map_field_data,
    .groups = 2,
    .group  = bcm56880_a0_dna_4_6_6_lrd_egr_l3_next_hop_1_map_group,
    .table_attr = &bcm56880_a0_dna_4_6_6_lrd_egr_l3_next_hop_1t_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE,
    .sel = &bcm56880_a0_dna_4_6_6_lrd_egr_l3_next_hop_1_map_select_data,
};
