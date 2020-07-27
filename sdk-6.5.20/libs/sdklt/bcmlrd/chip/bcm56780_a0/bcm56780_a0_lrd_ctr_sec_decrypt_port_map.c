/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/ctr/bcm56780_a0/bcm56780_a0_CTR_SEC_DECRYPT_PORT.map.ltl for
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
/* CTR_SEC_DECRYPT_PORT field init */
static const bcmlrd_field_data_t bcm56780_a0_lrd_ctr_sec_decrypt_port_map_field_data_mmd[] = {
    { /* 0 PORT_ID */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_lrd_ifd_u16_0x0,
      .max = &bcm56780_a0_lrd_ifd_u16_0x4f,
      .depth = 0,
      .width = 7,
      .edata = NULL,
    },
    { /* 1 SEC_DECRYPT_SUBPORT_FLOW_MISS */
      .flags = 0,
      .min = &bcm56780_a0_lrd_ifd_u64_0x0,
      .def = &bcm56780_a0_lrd_ifd_u64_0x0,
      .max = &bcm56780_a0_lrd_ifd_u64_0xffffffffff,
      .depth = 0,
      .width = 40,
      .edata = NULL,
    },
    { /* 2 SEC_SC_DECRYPT_MISS */
      .flags = 0,
      .min = &bcm56780_a0_lrd_ifd_u64_0x0,
      .def = &bcm56780_a0_lrd_ifd_u64_0x0,
      .max = &bcm56780_a0_lrd_ifd_u64_0xffffffffff,
      .depth = 0,
      .width = 40,
      .edata = NULL,
    },
    { /* 3 DROP_PKT */
      .flags = 0,
      .min = &bcm56780_a0_lrd_ifd_u64_0x0,
      .def = &bcm56780_a0_lrd_ifd_u64_0x0,
      .max = &bcm56780_a0_lrd_ifd_u64_0xffffffffff,
      .depth = 0,
      .width = 40,
      .edata = NULL,
    },
    { /* 4 OPERATIONAL_STATE */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLTD_FIELD_F_ENUM,
      .min = &bcm56780_a0_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_lrd_ifd_u32_0x1,
      .depth = 0,
      .width = 1,
      .edata = BCMLTD_COMMON_SEC_PORT_ENTRY_STATE_T_DATA,
    },
};
const bcmlrd_map_field_data_t bcm56780_a0_lrd_ctr_sec_decrypt_port_map_field_data = {
    .fields = 5,
    .field = bcm56780_a0_lrd_ctr_sec_decrypt_port_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56780_a0_lrd_ctr_sec_decrypt_portt_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = TRUE,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_PORT_MAX_INDEX,
        .value = 79,
    },
    { /* 2 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_PORT_MIN_INDEX,
        .value = 0,
    },
    { /* 3 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MAX_INDEX,
        .value = 15,
    },
    { /* 4 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MIN_INDEX,
        .value = 0,
    },
    { /* 5 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TRACK_INDEX_MAX_INDEX,
        .value = 80,
    },
    { /* 6 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TRACK_INDEX_MIN_INDEX,
        .value = 0,
    },
};

static const bcmlrd_map_attr_t bcm56780_a0_lrd_ctr_sec_decrypt_portt_attr_group = {
    .attributes = 7,
    .attr = bcm56780_a0_lrd_ctr_sec_decrypt_portt_attr_entry,
};


const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_track_index_src_field_desc_s15[1] = {
    {
        .field_id  = CTR_SEC_DECRYPT_PORTt_PORT_IDf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 15,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_track_index_ctr_sec_decrypt_port_dst_field_desc_d0[1] = {
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
bcm56780_a0_lrd_bcmltx_sec_port_pt_suppress_src_field_desc_s0[1] = {
    {
        .field_id  = CTR_SEC_DECRYPT_PORTt_PORT_IDf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 15,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_sec_port_pt_suppress_ctr_sec_decrypt_port_dst_field_desc_d0[1] = {
    {
        .field_id  = BCMLRD_FIELD_PT_SUPPRESS,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 31,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_port_blk_idx_src_field_desc_s0[1] = {
    {
        .field_id  = CTR_SEC_DECRYPT_PORTt_PORT_IDf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 15,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_port_blk_idx_ctr_sec_decrypt_port_dst_field_desc_d0[2] = {
    {
        .field_id  = BCMLRD_FIELD_INDEX,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 3,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = BCMLRD_FIELD_PORT,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 6,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_sec_port_oper_state_src_field_desc_s0[1] = {
    {
        .field_id  = CTR_SEC_DECRYPT_PORTt_OPERATIONAL_STATEf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 31,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_lta_bcmltx_track_index_xfrm_handler_fwd_s15_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_LTA_BCMLTX_TRACK_INDEX_XFRM_HANDLER_FWD_S15_D0_ID,
    .src_fields = 1,
    .src = bcm56780_a0_lrd_bcmltx_track_index_src_field_desc_s15,
    .dst_fields = 1,
    .dst = bcm56780_a0_lrd_bcmltx_track_index_ctr_sec_decrypt_port_dst_field_desc_d0,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_lta_bcmltx_track_index_xfrm_handler_rev_s15_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_LTA_BCMLTX_TRACK_INDEX_XFRM_HANDLER_REV_S15_D0_ID,
    .src_fields = 1,
    .src = bcm56780_a0_lrd_bcmltx_track_index_ctr_sec_decrypt_port_dst_field_desc_d0,
    .dst_fields = 1,
    .dst = bcm56780_a0_lrd_bcmltx_track_index_src_field_desc_s15,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_lta_bcmltx_sec_port_pt_suppress_xfrm_handler_fwd_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_LTA_BCMLTX_SEC_PORT_PT_SUPPRESS_XFRM_HANDLER_FWD_S0_D0_ID,
    .src_fields = 1,
    .src = bcm56780_a0_lrd_bcmltx_sec_port_pt_suppress_src_field_desc_s0,
    .dst_fields = 1,
    .dst = bcm56780_a0_lrd_bcmltx_sec_port_pt_suppress_ctr_sec_decrypt_port_dst_field_desc_d0,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_lta_bcmltx_port_blk_idx_xfrm_handler_fwd_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_LTA_BCMLTX_PORT_BLK_IDX_XFRM_HANDLER_FWD_S0_D0_ID,
    .src_fields = 1,
    .src = bcm56780_a0_lrd_bcmltx_port_blk_idx_src_field_desc_s0,
    .dst_fields = 2,
    .dst = bcm56780_a0_lrd_bcmltx_port_blk_idx_ctr_sec_decrypt_port_dst_field_desc_d0,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_lta_bcmltx_sec_port_oper_state_xfrm_handler_rev_s0_k0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_LTA_BCMLTX_SEC_PORT_OPER_STATE_XFRM_HANDLER_REV_S0_K0_D0_ID,
    .src_fields = 0,
    .src = NULL,
    .dst_fields = 1,
    .dst = bcm56780_a0_lrd_bcmltx_sec_port_oper_state_src_field_desc_s0,
};


static const bcmlrd_map_entry_t bcm56780_a0_lrd_ctr_sec_decrypt_portt_isec_port_counters_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = SPTCAM_MISSf,
            .field_idx = 0,
            .minbit    = 64,
            .maxbit    = 103,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = CTR_SEC_DECRYPT_PORTt_SEC_DECRYPT_SUBPORT_FLOW_MISSf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 39,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 1 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = SCTCAM_MISSf,
            .field_idx = 0,
            .minbit    = 128,
            .maxbit    = 167,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = CTR_SEC_DECRYPT_PORTt_SEC_SC_DECRYPT_MISSf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 39,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 2 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = PKTDROPf,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 39,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = CTR_SEC_DECRYPT_PORTt_DROP_PKTf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 39,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 3 */
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
                /* handler: bcm56780_a0_lta_bcmltx_track_index_xfrm_handler_fwd_s15_d0 */
                .desc = &bcm56780_a0_lta_bcmltx_track_index_xfrm_handler_fwd_s15_d0_desc,
            },
        },
    },
    { /* 4 */
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
                /* handler: bcm56780_a0_lta_bcmltx_track_index_xfrm_handler_rev_s15_d0 */
                .desc = &bcm56780_a0_lta_bcmltx_track_index_xfrm_handler_rev_s15_d0_desc,
            },
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
                /* handler: bcm56780_a0_lta_bcmltx_sec_port_pt_suppress_xfrm_handler_fwd_s0_d0 */
                .desc = &bcm56780_a0_lta_bcmltx_sec_port_pt_suppress_xfrm_handler_fwd_s0_d0_desc,
            },
        },
    },
    { /* 6 */
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
                /* handler: bcm56780_a0_lta_bcmltx_port_blk_idx_xfrm_handler_fwd_s0_d0 */
                .desc = &bcm56780_a0_lta_bcmltx_port_blk_idx_xfrm_handler_fwd_s0_d0_desc,
            },
        },
    },
    { /* 7 */
        .entry_type = BCMLRD_MAP_ENTRY_ALWAYS_REV_VALUE_FIELD_XFRM_HANDLER,
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
                /* handler: bcm56780_a0_lta_bcmltx_sec_port_oper_state_xfrm_handler_rev_s0_k0_d0 */
                .desc = &bcm56780_a0_lta_bcmltx_sec_port_oper_state_xfrm_handler_rev_s0_k0_d0_desc,
            },
        },
    },
};
static const bcmlrd_map_entry_t
bcm56780_a0_lrd_bcmltx_ctr_sec_decrypt_port_validate_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_VALUE_FIELD_VALIDATION,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            /* handler: bcm56780_a0_lta_bcmltx_ctr_sec_decrypt_port_std_val_fv_handler */
            .handler_id = BCMLTD_VALIDATE_BCM56780_A0_LTA_BCMLTX_CTR_SEC_DECRYPT_PORT_STD_VAL_FV_HANDLER_ID
        }
    },
};
static const bcmlrd_map_group_t bcm56780_a0_lrd_ctr_sec_decrypt_port_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = ISEC_PORT_COUNTERSm,
        },
        .entries = 8,
        .entry = bcm56780_a0_lrd_ctr_sec_decrypt_portt_isec_port_counters_map_entry
    },
    {
        .dest = {
            .kind = BCMLRD_MAP_VALIDATION,
            .id = 0,
        },
        .entries = 1,
        .entry = bcm56780_a0_lrd_bcmltx_ctr_sec_decrypt_port_validate_entry
    },
};
const bcmlrd_map_t bcm56780_a0_lrd_ctr_sec_decrypt_port_map = {
    .src_id = CTR_SEC_DECRYPT_PORTt,
    .field_data = &bcm56780_a0_lrd_ctr_sec_decrypt_port_map_field_data,
    .groups = 2,
    .group  = bcm56780_a0_lrd_ctr_sec_decrypt_port_map_group,
    .table_attr = &bcm56780_a0_lrd_ctr_sec_decrypt_portt_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};
