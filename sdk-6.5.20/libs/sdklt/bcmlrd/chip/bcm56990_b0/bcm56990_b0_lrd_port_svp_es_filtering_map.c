/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/port/bcm56990_b0/bcm56990_b0_PORT_SVP_ES_FILTERING.map.ltl for
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
/* PORT_SVP_ES_FILTERING field init */
static const bcmlrd_field_data_t bcm56990_b0_lrd_port_svp_es_filtering_map_field_data_mmd[] = {
    { /* 0 PORT_SVP_ID */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56990_b0_lrd_ifd_u16_0x0,
      .def = &bcm56990_b0_lrd_ifd_u16_0x0,
      .max = &bcm56990_b0_lrd_ifd_u16_0x1fff,
      .depth = 0,
      .width = 13,
      .edata = NULL,
    },
    { /* 1 ES_DROP */
      .flags = 0,
      .min = &bcm56990_b0_lrd_ifd_is_true_0x0,
      .def = &bcm56990_b0_lrd_ifd_is_true_0x0,
      .max = &bcm56990_b0_lrd_ifd_is_true_0x1,
      .depth = 64,
      .width = 1,
      .edata = NULL,
    },
    { /* 2 CTR_EGR_EFLEX_OBJECT */
      .flags = 0,
      .min = &bcm56990_b0_lrd_ifd_u16_0x0,
      .def = &bcm56990_b0_lrd_ifd_u16_0x0,
      .max = &bcm56990_b0_lrd_ifd_u16_0x3fff,
      .depth = 0,
      .width = 14,
      .edata = NULL,
    },
    { /* 3 CTR_EGR_EFLEX_ACTION */
      .flags = 0,
      .min = &bcm56990_b0_lrd_ifd_u8_0x0,
      .def = &bcm56990_b0_lrd_ifd_u8_0x0,
      .max = &bcm56990_b0_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56990_b0_lrd_port_svp_es_filtering_map_field_data = {
    .fields = 4,
    .field = bcm56990_b0_lrd_port_svp_es_filtering_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56990_b0_lrd_port_svp_es_filteringt_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_SIZE,
        .value = 16384,
    },
};

static const bcmlrd_map_attr_t bcm56990_b0_lrd_port_svp_es_filteringt_attr_group = {
    .attributes = 2,
    .attr = bcm56990_b0_lrd_port_svp_es_filteringt_attr_entry,
};


const bcmltd_field_desc_t
bcm56990_b0_lrd_bcmltx_port_array_to_pbmp_src_field_desc_s15[1] = {
    {
        .field_id  = PORT_SVP_ES_FILTERINGt_ES_DROPf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 0,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56990_b0_lrd_bcmltx_port_array_to_pbmp_port_svp_es_filtering_dst_field_desc_d6[1] = {
    {
        .field_id  = SVPv_SVP_FILTERING_BITMAPf,
        .field_idx = 0,
        .minbit    = 38,
        .maxbit    = 101,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmlrd_field_xfrm_desc_t
bcm56990_b0_lta_bcmltx_port_array_to_pbmp_xfrm_handler_fwd_s15_d6_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_B0_LTA_BCMLTX_PORT_ARRAY_TO_PBMP_XFRM_HANDLER_FWD_S15_D6_ID,
    .src_fields = 1,
    .src = bcm56990_b0_lrd_bcmltx_port_array_to_pbmp_src_field_desc_s15,
    .dst_fields = 1,
    .dst = bcm56990_b0_lrd_bcmltx_port_array_to_pbmp_port_svp_es_filtering_dst_field_desc_d6,
};

const bcmlrd_field_xfrm_desc_t
bcm56990_b0_lta_bcmltx_port_array_to_pbmp_xfrm_handler_rev_s15_d6_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_B0_LTA_BCMLTX_PORT_ARRAY_TO_PBMP_XFRM_HANDLER_REV_S15_D6_ID,
    .src_fields = 1,
    .src = bcm56990_b0_lrd_bcmltx_port_array_to_pbmp_port_svp_es_filtering_dst_field_desc_d6,
    .dst_fields = 1,
    .dst = bcm56990_b0_lrd_bcmltx_port_array_to_pbmp_src_field_desc_s15,
};


static const bcmlrd_map_entry_t bcm56990_b0_lrd_port_svp_es_filteringt_egr_adapt_single_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = BASE_VALIDf,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 2,
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
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = KEY_TYPEf,
            .field_idx = 0,
            .minbit    = 3,
            .maxbit    = 5,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 5,
            }
        },
    },
    { /* 2 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = SVPv_SVPf,
            .field_idx = 0,
            .minbit    = 6,
            .maxbit    = 18,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = PORT_SVP_ES_FILTERINGt_PORT_SVP_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 12,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 3 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = SVPv_FLEX_CTR_OBJECTf,
            .field_idx = 0,
            .minbit    = 102,
            .maxbit    = 115,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = PORT_SVP_ES_FILTERINGt_CTR_EGR_EFLEX_OBJECTf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 13,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 4 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = SVPv_FLEX_CTR_ACTIONf,
            .field_idx = 0,
            .minbit    = 116,
            .maxbit    = 119,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = PORT_SVP_ES_FILTERINGt_CTR_EGR_EFLEX_ACTIONf,
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
                /* handler: bcm56990_b0_lta_bcmltx_port_array_to_pbmp_xfrm_handler_fwd_s15_d6 */
                .desc = &bcm56990_b0_lta_bcmltx_port_array_to_pbmp_xfrm_handler_fwd_s15_d6_desc,
            },
        },
    },
    { /* 6 */
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
                /* handler: bcm56990_b0_lta_bcmltx_port_array_to_pbmp_xfrm_handler_rev_s15_d6 */
                .desc = &bcm56990_b0_lta_bcmltx_port_array_to_pbmp_xfrm_handler_rev_s15_d6_desc,
            },
        },
    },
};
static const bcmlrd_map_group_t bcm56990_b0_lrd_port_svp_es_filtering_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = EGR_ADAPT_SINGLEm,
        },
        .entries = 7,
        .entry = bcm56990_b0_lrd_port_svp_es_filteringt_egr_adapt_single_map_entry
    },
};
const bcmlrd_map_t bcm56990_b0_lrd_port_svp_es_filtering_map = {
    .src_id = PORT_SVP_ES_FILTERINGt,
    .field_data = &bcm56990_b0_lrd_port_svp_es_filtering_map_field_data,
    .groups = 1,
    .group  = bcm56990_b0_lrd_port_svp_es_filtering_map_group,
    .table_attr = &bcm56990_b0_lrd_port_svp_es_filteringt_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};
