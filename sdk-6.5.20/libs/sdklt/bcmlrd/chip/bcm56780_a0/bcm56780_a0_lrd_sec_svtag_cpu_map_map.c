/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/sec/bcm56780_a0/bcm56780_a0_SEC_SVTAG_CPU_MAP.map.ltl for
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
/* SEC_SVTAG_CPU_MAP field init */
static const bcmlrd_field_data_t bcm56780_a0_lrd_sec_svtag_cpu_map_map_field_data_mmd[] = {
    { /* 0 SEC_BLOCK_ID */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_lrd_ifd_u8_0x0,
      .def = &bcm56780_a0_lrd_ifd_u8_0x0,
      .max = &bcm56780_a0_lrd_ifd_u8_0x5,
      .depth = 0,
      .width = 7,
      .edata = NULL,
    },
    { /* 1 SEC_BLOCK_ID_MASK */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56780_a0_lrd_ifd_u8_0x0,
      .def = &bcm56780_a0_lrd_ifd_u8_0x0,
      .max = &bcm56780_a0_lrd_ifd_u8_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 2 INGRESS_SEC_PORT */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56780_a0_lrd_ifd_is_true_0x1,
      .depth = 16,
      .width = 1,
      .edata = NULL,
    },
    { /* 3 INGRESS_SEC_PORT_MASK */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56780_a0_lrd_ifd_is_true_0x1,
      .depth = 16,
      .width = 1,
      .edata = NULL,
    },
    { /* 4 UNKNOWN_SUB_PORT */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56780_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 5 UNKNOWN_SUB_PORT_MASK */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56780_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 6 INVALID_SECURED_CONTROL_PORT */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56780_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 7 INVALID_SECURED_CONTROL_PORT_MASK */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56780_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 8 INVALID_UNSECURED_CONTROL_PORT */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56780_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 9 INVALID_UNSECURED_CONTROL_PORT_MASK */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56780_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 10 IPV4_CKSUM_MPLS_BOS */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56780_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 11 IPV4_CKSUM_MPLS_BOS_MASK */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56780_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 12 INVALID_SECTAG */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56780_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 13 INVALID_SECTAG_MASK */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56780_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 14 UNKNOWN_SC */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56780_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 15 UNKNOWN_SC_MASK */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56780_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 16 UNKNOWN_SA */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56780_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 17 UNKNOWN_SA_MASK */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56780_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 18 REPLAY_PROTECTION_FAILED */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56780_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 19 REPLAY_PROTECTION_FAILED_MASK */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56780_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 20 SVTAG_PKT_TYPE */
      .flags = BCMLTD_FIELD_F_KEY | BCMLTD_FIELD_F_ENUM,
      .min = &bcm56780_a0_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_lrd_ifd_u32_0x3,
      .depth = 0,
      .width = 2,
      .edata = BCMLTD_COMMON_SEC_SVTAG_PKT_T_DATA,
    },
    { /* 21 SVTAG_PKT_TYPE_MASK */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_lrd_ifd_u32_0x3,
      .depth = 0,
      .width = 2,
      .edata = NULL,
    },
    { /* 22 NAT_KEEPALIVE */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56780_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 23 NAT_KEEPALIVE_MASK */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56780_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 24 IPSEC */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56780_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 25 IPSEC_MASK */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56780_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 26 ENTRY_PRIORITY */
      .flags = 0,
      .min = &bcm56780_a0_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_lrd_ifd_u32_0x7fffffff,
      .depth = 0,
      .width = 31,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56780_a0_lrd_sec_svtag_cpu_map_map_field_data = {
    .fields = 27,
    .field = bcm56780_a0_lrd_sec_svtag_cpu_map_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56780_a0_lrd_sec_svtag_cpu_mapt_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_PORT_SIZE,
        .value = 80,
    },
    { /* 2 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_SIZE,
        .value = 96,
    },
};

static const bcmlrd_map_attr_t bcm56780_a0_lrd_sec_svtag_cpu_mapt_attr_group = {
    .attributes = 3,
    .attr = bcm56780_a0_lrd_sec_svtag_cpu_mapt_attr_entry,
};


const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_array_to_bmp_src_field_desc_s29[1] = {
    {
        .field_id  = SEC_SVTAG_CPU_MAPt_INGRESS_SEC_PORTf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 0,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_array_to_bmp_sec_svtag_cpu_map_dst_field_desc_d3[1] = {
    {
        .field_id  = PORT_MAPf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 15,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_array_to_bmp_src_field_desc_s30[1] = {
    {
        .field_id  = SEC_SVTAG_CPU_MAPt_INGRESS_SEC_PORT_MASKf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 0,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_array_to_bmp_sec_svtag_cpu_map_dst_field_desc_d4[1] = {
    {
        .field_id  = PORT_MAP_MASKf,
        .field_idx = 0,
        .minbit    = 28,
        .maxbit    = 43,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_lta_bcmltx_array_to_bmp_xfrm_handler_fwd_s29_d3_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_LTA_BCMLTX_ARRAY_TO_BMP_XFRM_HANDLER_FWD_S29_D3_ID,
    .src_fields = 1,
    .src = bcm56780_a0_lrd_bcmltx_array_to_bmp_src_field_desc_s29,
    .dst_fields = 1,
    .dst = bcm56780_a0_lrd_bcmltx_array_to_bmp_sec_svtag_cpu_map_dst_field_desc_d3,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_lta_bcmltx_array_to_bmp_xfrm_handler_rev_s29_d3_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_LTA_BCMLTX_ARRAY_TO_BMP_XFRM_HANDLER_REV_S29_D3_ID,
    .src_fields = 1,
    .src = bcm56780_a0_lrd_bcmltx_array_to_bmp_sec_svtag_cpu_map_dst_field_desc_d3,
    .dst_fields = 1,
    .dst = bcm56780_a0_lrd_bcmltx_array_to_bmp_src_field_desc_s29,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_lta_bcmltx_array_to_bmp_xfrm_handler_fwd_s30_d4_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_LTA_BCMLTX_ARRAY_TO_BMP_XFRM_HANDLER_FWD_S30_D4_ID,
    .src_fields = 1,
    .src = bcm56780_a0_lrd_bcmltx_array_to_bmp_src_field_desc_s30,
    .dst_fields = 1,
    .dst = bcm56780_a0_lrd_bcmltx_array_to_bmp_sec_svtag_cpu_map_dst_field_desc_d4,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_lta_bcmltx_array_to_bmp_xfrm_handler_rev_s30_d4_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_LTA_BCMLTX_ARRAY_TO_BMP_XFRM_HANDLER_REV_S30_D4_ID,
    .src_fields = 1,
    .src = bcm56780_a0_lrd_bcmltx_array_to_bmp_sec_svtag_cpu_map_dst_field_desc_d4,
    .dst_fields = 1,
    .dst = bcm56780_a0_lrd_bcmltx_array_to_bmp_src_field_desc_s30,
};


static const bcmlrd_map_entry_t bcm56780_a0_lrd_sec_svtag_cpu_mapt_isec_svtag_cpu_flex_map_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = VALIDf,
            .field_idx = 0,
            .minbit    = 56,
            .maxbit    = 56,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 1,
            }
        },
    },
    { /* 1 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = BCMLRD_FIELD_ENTRY_PRIORITY,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 30,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = SEC_SVTAG_CPU_MAPt_ENTRY_PRIORITYf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 30,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 2 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = BCMLRD_FIELD_PORT,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 6,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = SEC_SVTAG_CPU_MAPt_SEC_BLOCK_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 6,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 3 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = UNKNOWN_SUB_PORTf,
            .field_idx = 0,
            .minbit    = 16,
            .maxbit    = 16,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = SEC_SVTAG_CPU_MAPt_UNKNOWN_SUB_PORTf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 4 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = UNKNOWN_SUB_PORT_MASKf,
            .field_idx = 0,
            .minbit    = 44,
            .maxbit    = 44,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = SEC_SVTAG_CPU_MAPt_UNKNOWN_SUB_PORT_MASKf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 5 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = TAG_CONTROL_PORT_DISABLED_PKTf,
            .field_idx = 0,
            .minbit    = 17,
            .maxbit    = 17,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = SEC_SVTAG_CPU_MAPt_INVALID_SECURED_CONTROL_PORTf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 6 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = TAG_CONTROL_PORT_DISABLED_PKT_MASKf,
            .field_idx = 0,
            .minbit    = 45,
            .maxbit    = 45,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = SEC_SVTAG_CPU_MAPt_INVALID_SECURED_CONTROL_PORT_MASKf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 7 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = UNTAG_CONTROL_PORT_OR_FWD_FRM_DISABLED_PKTf,
            .field_idx = 0,
            .minbit    = 18,
            .maxbit    = 18,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = SEC_SVTAG_CPU_MAPt_INVALID_UNSECURED_CONTROL_PORTf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 8 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = UNTAG_CONTROL_PORT_OR_FWD_FRM_DISABLED_PKT_MASKf,
            .field_idx = 0,
            .minbit    = 46,
            .maxbit    = 46,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = SEC_SVTAG_CPU_MAPt_INVALID_UNSECURED_CONTROL_PORT_MASKf,
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
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = IPV4_CHKSUM_FAIL_OR_MPLS_BOS_NOT_FOUND_PKTf,
            .field_idx = 0,
            .minbit    = 19,
            .maxbit    = 19,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = SEC_SVTAG_CPU_MAPt_IPV4_CKSUM_MPLS_BOSf,
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
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = IPV4_CHKSUM_FAIL_OR_MPLS_BOS_NOT_FOUND_PKT_MASKf,
            .field_idx = 0,
            .minbit    = 47,
            .maxbit    = 47,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = SEC_SVTAG_CPU_MAPt_IPV4_CKSUM_MPLS_BOS_MASKf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 11 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = INV_SECTAGf,
            .field_idx = 0,
            .minbit    = 20,
            .maxbit    = 20,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = SEC_SVTAG_CPU_MAPt_INVALID_SECTAGf,
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
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = INV_SECTAG_MASKf,
            .field_idx = 0,
            .minbit    = 48,
            .maxbit    = 48,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = SEC_SVTAG_CPU_MAPt_INVALID_SECTAG_MASKf,
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
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = NO_SCf,
            .field_idx = 0,
            .minbit    = 21,
            .maxbit    = 21,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = SEC_SVTAG_CPU_MAPt_UNKNOWN_SCf,
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
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = NO_SC_MASKf,
            .field_idx = 0,
            .minbit    = 49,
            .maxbit    = 49,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = SEC_SVTAG_CPU_MAPt_UNKNOWN_SC_MASKf,
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
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = NO_SAf,
            .field_idx = 0,
            .minbit    = 22,
            .maxbit    = 22,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = SEC_SVTAG_CPU_MAPt_UNKNOWN_SAf,
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
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = NO_SA_MASKf,
            .field_idx = 0,
            .minbit    = 50,
            .maxbit    = 50,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = SEC_SVTAG_CPU_MAPt_UNKNOWN_SA_MASKf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 17 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = REPLAY_FAILEDf,
            .field_idx = 0,
            .minbit    = 23,
            .maxbit    = 23,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = SEC_SVTAG_CPU_MAPt_REPLAY_PROTECTION_FAILEDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 18 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = REPLAY_FAILED_MASKf,
            .field_idx = 0,
            .minbit    = 51,
            .maxbit    = 51,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = SEC_SVTAG_CPU_MAPt_REPLAY_PROTECTION_FAILED_MASKf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 19 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = SVTAG_PKT_TYPEf,
            .field_idx = 0,
            .minbit    = 24,
            .maxbit    = 25,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = SEC_SVTAG_CPU_MAPt_SVTAG_PKT_TYPEf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 1,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 20 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = SVTAG_PKT_TYPE_MASKf,
            .field_idx = 0,
            .minbit    = 52,
            .maxbit    = 53,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = SEC_SVTAG_CPU_MAPt_SVTAG_PKT_TYPE_MASKf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 1,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 21 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = NAT_KEEP_ALIVE_PKTf,
            .field_idx = 0,
            .minbit    = 26,
            .maxbit    = 26,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = SEC_SVTAG_CPU_MAPt_NAT_KEEPALIVEf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 22 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = NAT_KEEP_ALIVE_PKT_MASKf,
            .field_idx = 0,
            .minbit    = 54,
            .maxbit    = 54,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = SEC_SVTAG_CPU_MAPt_NAT_KEEPALIVE_MASKf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 23 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = SVTAG_IPSECf,
            .field_idx = 0,
            .minbit    = 27,
            .maxbit    = 27,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = SEC_SVTAG_CPU_MAPt_IPSECf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 24 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = SVTAG_IPSEC_MASKf,
            .field_idx = 0,
            .minbit    = 55,
            .maxbit    = 55,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = SEC_SVTAG_CPU_MAPt_IPSEC_MASKf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 25 */
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
                /* handler: bcm56780_a0_lta_bcmltx_array_to_bmp_xfrm_handler_fwd_s29_d3 */
                .desc = &bcm56780_a0_lta_bcmltx_array_to_bmp_xfrm_handler_fwd_s29_d3_desc,
            },
        },
    },
    { /* 26 */
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
                /* handler: bcm56780_a0_lta_bcmltx_array_to_bmp_xfrm_handler_rev_s29_d3 */
                .desc = &bcm56780_a0_lta_bcmltx_array_to_bmp_xfrm_handler_rev_s29_d3_desc,
            },
        },
    },
    { /* 27 */
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
                /* handler: bcm56780_a0_lta_bcmltx_array_to_bmp_xfrm_handler_fwd_s30_d4 */
                .desc = &bcm56780_a0_lta_bcmltx_array_to_bmp_xfrm_handler_fwd_s30_d4_desc,
            },
        },
    },
    { /* 28 */
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
                /* handler: bcm56780_a0_lta_bcmltx_array_to_bmp_xfrm_handler_rev_s30_d4 */
                .desc = &bcm56780_a0_lta_bcmltx_array_to_bmp_xfrm_handler_rev_s30_d4_desc,
            },
        },
    },
};
static const bcmlrd_map_group_t bcm56780_a0_lrd_sec_svtag_cpu_map_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = ISEC_SVTAG_CPU_FLEX_MAPm,
        },
        .entries = 29,
        .entry = bcm56780_a0_lrd_sec_svtag_cpu_mapt_isec_svtag_cpu_flex_map_map_entry
    },
};
const bcmlrd_map_t bcm56780_a0_lrd_sec_svtag_cpu_map_map = {
    .src_id = SEC_SVTAG_CPU_MAPt,
    .field_data = &bcm56780_a0_lrd_sec_svtag_cpu_map_map_field_data,
    .groups = 1,
    .group  = bcm56780_a0_lrd_sec_svtag_cpu_map_map_group,
    .table_attr = &bcm56780_a0_lrd_sec_svtag_cpu_mapt_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};
