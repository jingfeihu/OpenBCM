/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/tnl/bcm56780_a0/bcm56780_a0_TNL_MPLS_LABEL_DECAP_POLICY.map.ltl for
 *      bcm56780_a0
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
#include <bcmlrd/chip/bcm56780_a0/bcm56780_a0_lrd_field_data.h>
#include <bcmlrd/chip/bcm56780_a0/bcm56780_a0_lrd_ltm_intf.h>
#include <bcmlrd/chip/bcm56780_a0/bcm56780_a0_lrd_xfrm_field_desc.h>
#include <bcmdrd/chip/bcm56780_a0_enum.h>
#include "bcmltd/chip/bcmltd_common_enumpool.h"
#include "bcm56780_a0_lrd_enumpool.h"
#include <bcmltd/bcmltd_handler.h>
/* TNL_MPLS_LABEL_DECAP_POLICY field init */
static const bcmlrd_field_data_t bcm56780_a0_lrd_tnl_mpls_label_decap_policy_map_field_data_mmd[] = {
    { /* 0 TNL_MPLS_LABEL_DECAP_POLICY_ID */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_lrd_ifd_u8_0x0,
      .def = &bcm56780_a0_lrd_ifd_u8_0x0,
      .max = &bcm56780_a0_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 1 LABEL_FWD_CTRL_1 */
      .flags = 0,
      .min = &bcm56780_a0_lrd_ifd_u8_0x0,
      .def = &bcm56780_a0_lrd_ifd_u8_0x0,
      .max = &bcm56780_a0_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 2 LABEL_FWD_CTRL_2 */
      .flags = 0,
      .min = &bcm56780_a0_lrd_ifd_u8_0x0,
      .def = &bcm56780_a0_lrd_ifd_u8_0x0,
      .max = &bcm56780_a0_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 3 LABEL_FWD_CTRL_3 */
      .flags = 0,
      .min = &bcm56780_a0_lrd_ifd_u8_0x0,
      .def = &bcm56780_a0_lrd_ifd_u8_0x0,
      .max = &bcm56780_a0_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 4 LABEL_FWD_CTRL_1_MASK */
      .flags = 0,
      .min = &bcm56780_a0_lrd_ifd_u8_0x0,
      .def = &bcm56780_a0_lrd_ifd_u8_0x0,
      .max = &bcm56780_a0_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 5 LABEL_FWD_CTRL_2_MASK */
      .flags = 0,
      .min = &bcm56780_a0_lrd_ifd_u8_0x0,
      .def = &bcm56780_a0_lrd_ifd_u8_0x0,
      .max = &bcm56780_a0_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 6 LABEL_FWD_CTRL_3_MASK */
      .flags = 0,
      .min = &bcm56780_a0_lrd_ifd_u8_0x0,
      .def = &bcm56780_a0_lrd_ifd_u8_0x0,
      .max = &bcm56780_a0_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 7 EFFECTIVE_EXP_REMARK */
      .flags = 0,
      .min = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56780_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 8 EFFECTIVE_EXP_QOS */
      .flags = 0,
      .min = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56780_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 9 DECAP_LOOKUP_LABEL */
      .flags = 0,
      .min = &bcm56780_a0_lrd_ifd_u8_0x0,
      .def = &bcm56780_a0_lrd_ifd_u8_0x0,
      .max = &bcm56780_a0_lrd_ifd_u8_0x3,
      .depth = 0,
      .width = 2,
      .edata = NULL,
    },
    { /* 10 DROP */
      .flags = 0,
      .min = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56780_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 11 POLICY_CMD_SELECT */
      .flags = BCMLTD_FIELD_F_ENUM,
      .min = &bcm56780_a0_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_lrd_ifd_u32_0x2,
      .depth = 12,
      .width = 2,
      .edata = BCM56780_A0_LRD_POLICY_SEL_T_DATA,
    },
    { /* 12 POLICY_OBJ_SELECT */
      .flags = BCMLTD_FIELD_F_ENUM,
      .min = &bcm56780_a0_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_lrd_ifd_u32_0x2,
      .depth = 6,
      .width = 2,
      .edata = BCM56780_A0_LRD_POLICY_SEL_T_DATA,
    },
    { /* 13 POP_LOOKUP_LABEL_1 */
      .flags = 0,
      .min = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56780_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 14 POP_LOOKUP_LABEL_2 */
      .flags = 0,
      .min = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56780_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 15 POP_LOOKUP_LABEL_3 */
      .flags = 0,
      .min = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56780_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 16 TRUST_FWD_POLICY */
      .flags = 0,
      .min = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56780_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56780_a0_lrd_tnl_mpls_label_decap_policy_map_field_data = {
    .fields = 17,
    .field = bcm56780_a0_lrd_tnl_mpls_label_decap_policy_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56780_a0_lrd_tnl_mpls_label_decap_policyt_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MAX_INDEX,
        .value = 15,
    },
    { /* 2 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MIN_INDEX,
        .value = 0,
    },
};

static const bcmlrd_map_attr_t bcm56780_a0_lrd_tnl_mpls_label_decap_policyt_attr_group = {
    .attributes = 3,
    .attr = bcm56780_a0_lrd_tnl_mpls_label_decap_policyt_attr_entry,
};


const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_tnl_mpls_policy_sel_src_field_desc_s2[1] = {
    {
        .field_id  = TNL_MPLS_LABEL_DECAP_POLICYt_POLICY_CMD_SELECTf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 31,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_tnl_mpls_policy_sel_tnl_mpls_label_decap_policy_dst_field_desc_d2[12] = {
    {
        .field_id  = CMD_SEL_0f,
        .field_idx = 0,
        .minbit    = 25,
        .maxbit    = 26,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = CMD_SEL_1f,
        .field_idx = 0,
        .minbit    = 27,
        .maxbit    = 28,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = CMD_SEL_2f,
        .field_idx = 0,
        .minbit    = 29,
        .maxbit    = 30,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = CMD_SEL_3f,
        .field_idx = 0,
        .minbit    = 31,
        .maxbit    = 32,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = CMD_SEL_4f,
        .field_idx = 0,
        .minbit    = 33,
        .maxbit    = 34,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = CMD_SEL_5f,
        .field_idx = 0,
        .minbit    = 35,
        .maxbit    = 36,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = CMD_SEL_6f,
        .field_idx = 0,
        .minbit    = 37,
        .maxbit    = 38,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = CMD_SEL_7f,
        .field_idx = 0,
        .minbit    = 39,
        .maxbit    = 40,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = CMD_SEL_8f,
        .field_idx = 0,
        .minbit    = 41,
        .maxbit    = 42,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = CMD_SEL_9f,
        .field_idx = 0,
        .minbit    = 43,
        .maxbit    = 44,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = CMD_SEL_10f,
        .field_idx = 0,
        .minbit    = 45,
        .maxbit    = 46,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = CMD_SEL_11f,
        .field_idx = 0,
        .minbit    = 47,
        .maxbit    = 48,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_tnl_mpls_policy_sel_src_field_desc_s3[1] = {
    {
        .field_id  = TNL_MPLS_LABEL_DECAP_POLICYt_POLICY_OBJ_SELECTf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 31,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_tnl_mpls_policy_sel_tnl_mpls_label_decap_policy_dst_field_desc_d3[6] = {
    {
        .field_id  = OBJ_SEL_0f,
        .field_idx = 0,
        .minbit    = 49,
        .maxbit    = 50,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = OBJ_SEL_1f,
        .field_idx = 0,
        .minbit    = 51,
        .maxbit    = 52,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = OBJ_SEL_2f,
        .field_idx = 0,
        .minbit    = 53,
        .maxbit    = 54,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = OBJ_SEL_3f,
        .field_idx = 0,
        .minbit    = 55,
        .maxbit    = 56,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = OBJ_SEL_4f,
        .field_idx = 0,
        .minbit    = 57,
        .maxbit    = 58,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = OBJ_SEL_5f,
        .field_idx = 0,
        .minbit    = 59,
        .maxbit    = 60,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_lta_bcmltx_tnl_mpls_policy_sel_xfrm_handler_fwd_s2_d2_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_LTA_BCMLTX_TNL_MPLS_POLICY_SEL_XFRM_HANDLER_FWD_S2_D2_ID,
    .src_fields = 1,
    .src = bcm56780_a0_lrd_bcmltx_tnl_mpls_policy_sel_src_field_desc_s2,
    .dst_fields = 12,
    .dst = bcm56780_a0_lrd_bcmltx_tnl_mpls_policy_sel_tnl_mpls_label_decap_policy_dst_field_desc_d2,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_lta_bcmltx_tnl_mpls_policy_sel_xfrm_handler_rev_s2_d2_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_LTA_BCMLTX_TNL_MPLS_POLICY_SEL_XFRM_HANDLER_REV_S2_D2_ID,
    .src_fields = 12,
    .src = bcm56780_a0_lrd_bcmltx_tnl_mpls_policy_sel_tnl_mpls_label_decap_policy_dst_field_desc_d2,
    .dst_fields = 1,
    .dst = bcm56780_a0_lrd_bcmltx_tnl_mpls_policy_sel_src_field_desc_s2,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_lta_bcmltx_tnl_mpls_policy_sel_xfrm_handler_fwd_s3_d3_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_LTA_BCMLTX_TNL_MPLS_POLICY_SEL_XFRM_HANDLER_FWD_S3_D3_ID,
    .src_fields = 1,
    .src = bcm56780_a0_lrd_bcmltx_tnl_mpls_policy_sel_src_field_desc_s3,
    .dst_fields = 6,
    .dst = bcm56780_a0_lrd_bcmltx_tnl_mpls_policy_sel_tnl_mpls_label_decap_policy_dst_field_desc_d3,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_lta_bcmltx_tnl_mpls_policy_sel_xfrm_handler_rev_s3_d3_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_LTA_BCMLTX_TNL_MPLS_POLICY_SEL_XFRM_HANDLER_REV_S3_D3_ID,
    .src_fields = 6,
    .src = bcm56780_a0_lrd_bcmltx_tnl_mpls_policy_sel_tnl_mpls_label_decap_policy_dst_field_desc_d3,
    .dst_fields = 1,
    .dst = bcm56780_a0_lrd_bcmltx_tnl_mpls_policy_sel_src_field_desc_s3,
};


static const bcmlrd_map_entry_t bcm56780_a0_lrd_tnl_mpls_label_decap_policyt_mpls_pre_proc_term_control_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = BCMLRD_FIELD_INDEX,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 3,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_MPLS_LABEL_DECAP_POLICYt_TNL_MPLS_LABEL_DECAP_POLICY_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 1 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_VALUE,
        .desc = {
            .field_id  = VALIDf,
            .field_idx = 0,
            .minbit    = 24,
            .maxbit    = 24,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 1,
            }
        },
    },
    { /* 2 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = KEYf,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 3,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_MPLS_LABEL_DECAP_POLICYt_LABEL_FWD_CTRL_1f,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 3 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = KEYf,
            .field_idx = 0,
            .minbit    = 4,
            .maxbit    = 7,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_MPLS_LABEL_DECAP_POLICYt_LABEL_FWD_CTRL_2f,
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
            .field_id  = KEYf,
            .field_idx = 0,
            .minbit    = 8,
            .maxbit    = 11,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_MPLS_LABEL_DECAP_POLICYt_LABEL_FWD_CTRL_3f,
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
            .field_id  = MASKf,
            .field_idx = 0,
            .minbit    = 12,
            .maxbit    = 15,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_MPLS_LABEL_DECAP_POLICYt_LABEL_FWD_CTRL_1_MASKf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 6 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = MASKf,
            .field_idx = 0,
            .minbit    = 16,
            .maxbit    = 19,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_MPLS_LABEL_DECAP_POLICYt_LABEL_FWD_CTRL_2_MASKf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 7 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = MASKf,
            .field_idx = 0,
            .minbit    = 20,
            .maxbit    = 23,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_MPLS_LABEL_DECAP_POLICYt_LABEL_FWD_CTRL_3_MASKf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 8 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = EFFECTIVE_EXP_REMARK_PROFILEf,
            .field_idx = 0,
            .minbit    = 69,
            .maxbit    = 69,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_MPLS_LABEL_DECAP_POLICYt_EFFECTIVE_EXP_REMARKf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 9 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = EFFECTIVE_EXP_QOS_PROFILEf,
            .field_idx = 0,
            .minbit    = 68,
            .maxbit    = 68,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_MPLS_LABEL_DECAP_POLICYt_EFFECTIVE_EXP_QOSf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 10 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = LAST_PROC_LABEL_NUMf,
            .field_idx = 0,
            .minbit    = 66,
            .maxbit    = 67,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_MPLS_LABEL_DECAP_POLICYt_DECAP_LOOKUP_LABELf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 1,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 11 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DROPf,
            .field_idx = 0,
            .minbit    = 65,
            .maxbit    = 65,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_MPLS_LABEL_DECAP_POLICYt_DROPf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 12 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = CONTROLf,
            .field_idx = 0,
            .minbit    = 61,
            .maxbit    = 61,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_MPLS_LABEL_DECAP_POLICYt_TRUST_FWD_POLICYf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 13 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = CONTROLf,
            .field_idx = 0,
            .minbit    = 62,
            .maxbit    = 62,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_MPLS_LABEL_DECAP_POLICYt_POP_LOOKUP_LABEL_1f,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 14 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = CONTROLf,
            .field_idx = 0,
            .minbit    = 63,
            .maxbit    = 63,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_MPLS_LABEL_DECAP_POLICYt_POP_LOOKUP_LABEL_2f,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 15 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = CONTROLf,
            .field_idx = 0,
            .minbit    = 64,
            .maxbit    = 64,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_MPLS_LABEL_DECAP_POLICYt_POP_LOOKUP_LABEL_3f,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 16 */
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
                /* handler: bcm56780_a0_lta_bcmltx_tnl_mpls_policy_sel_xfrm_handler_fwd_s2_d2 */
                .desc = &bcm56780_a0_lta_bcmltx_tnl_mpls_policy_sel_xfrm_handler_fwd_s2_d2_desc,
            },
        },
    },
    { /* 17 */
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
                /* handler: bcm56780_a0_lta_bcmltx_tnl_mpls_policy_sel_xfrm_handler_rev_s2_d2 */
                .desc = &bcm56780_a0_lta_bcmltx_tnl_mpls_policy_sel_xfrm_handler_rev_s2_d2_desc,
            },
        },
    },
    { /* 18 */
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
                /* handler: bcm56780_a0_lta_bcmltx_tnl_mpls_policy_sel_xfrm_handler_fwd_s3_d3 */
                .desc = &bcm56780_a0_lta_bcmltx_tnl_mpls_policy_sel_xfrm_handler_fwd_s3_d3_desc,
            },
        },
    },
    { /* 19 */
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
                /* handler: bcm56780_a0_lta_bcmltx_tnl_mpls_policy_sel_xfrm_handler_rev_s3_d3 */
                .desc = &bcm56780_a0_lta_bcmltx_tnl_mpls_policy_sel_xfrm_handler_rev_s3_d3_desc,
            },
        },
    },
};
static const bcmlrd_map_group_t bcm56780_a0_lrd_tnl_mpls_label_decap_policy_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = MPLS_PRE_PROC_TERM_CONTROLm,
        },
        .entries = 20,
        .entry = bcm56780_a0_lrd_tnl_mpls_label_decap_policyt_mpls_pre_proc_term_control_map_entry
    },
};
const bcmlrd_map_t bcm56780_a0_lrd_tnl_mpls_label_decap_policy_map = {
    .src_id = TNL_MPLS_LABEL_DECAP_POLICYt,
    .field_data = &bcm56780_a0_lrd_tnl_mpls_label_decap_policy_map_field_data,
    .groups = 1,
    .group  = bcm56780_a0_lrd_tnl_mpls_label_decap_policy_map_group,
    .table_attr = &bcm56780_a0_lrd_tnl_mpls_label_decap_policyt_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};
