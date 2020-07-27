/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/port/bcm56990_a0/bcm56990_a0_PORT_SYSTEM_POLICY_PROFILE.map.ltl for
 *      bcm56990_a0
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
#include <bcmlrd/chip/bcm56990_a0/bcm56990_a0_lrd_field_data.h>
#include <bcmlrd/chip/bcm56990_a0/bcm56990_a0_lrd_ltm_intf.h>
#include <bcmlrd/chip/bcm56990_a0/bcm56990_a0_lrd_xfrm_field_desc.h>
#include <bcmdrd/chip/bcm56990_a0_enum.h>
#include "bcmltd/chip/bcmltd_common_enumpool.h"
#include "bcm56990_a0_lrd_enumpool.h"
#include <bcmltd/bcmltd_handler.h>
/* PORT_SYSTEM_POLICY_PROFILE field init */
static const bcmlrd_field_data_t bcm56990_a0_lrd_port_system_policy_profile_map_field_data_mmd[] = {
    { /* 0 PIPE */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56990_a0_lrd_ifd_u8_0x0,
      .def = &bcm56990_a0_lrd_ifd_u8_0x0,
      .max = &bcm56990_a0_lrd_ifd_u8_0x3,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 1 PORT_SYSTEM_PROFILE_ID */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56990_a0_lrd_ifd_u16_0x0,
      .def = &bcm56990_a0_lrd_ifd_u16_0x0,
      .max = &bcm56990_a0_lrd_ifd_u16_0x43,
      .depth = 0,
      .width = 7,
      .edata = NULL,
    },
    { /* 2 TRUST_INCOMING_VID */
      .flags = 0,
      .min = &bcm56990_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56990_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56990_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 3 DROP_ON_PRI */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56990_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56990_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56990_a0_lrd_ifd_is_true_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 4 DROP_UNTAG */
      .flags = 0,
      .min = &bcm56990_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56990_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56990_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 5 DROP_TAG */
      .flags = 0,
      .min = &bcm56990_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56990_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56990_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 6 PASS_PAUSE_FRAMES */
      .flags = 0,
      .min = &bcm56990_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56990_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56990_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 7 OUTER_TPID_VERIFY */
      .flags = 0,
      .min = &bcm56990_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56990_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56990_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 8 PASS_ON_OUTER_TPID_MATCH */
      .flags = 0,
      .min = &bcm56990_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56990_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56990_a0_lrd_ifd_is_true_0x1,
      .depth = 4,
      .width = 1,
      .edata = NULL,
    },
    { /* 9 MAC_IP_BIND_LOOKUP_MISS_DROP */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56990_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56990_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56990_a0_lrd_ifd_is_true_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 10 DROP_BPDU */
      .flags = 0,
      .min = &bcm56990_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56990_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56990_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 11 ING_CFI_AS_CNG */
      .flags = 0,
      .min = &bcm56990_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56990_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56990_a0_lrd_ifd_is_true_0x1,
      .depth = 4,
      .width = 1,
      .edata = NULL,
    },
    { /* 12 TNL_L2_PAYLOAD_OUTER_TPID_MATCH */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56990_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56990_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56990_a0_lrd_ifd_is_true_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56990_a0_lrd_port_system_policy_profile_map_field_data = {
    .fields = 13,
    .field = bcm56990_a0_lrd_port_system_policy_profile_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56990_a0_lrd_port_system_policy_profilet_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INSTANCE_MAX_INDEX,
        .value = 15,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INSTANCE_MIN_INDEX,
        .value = 0,
    },
    { /* 2 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
    { /* 3 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MAX_INDEX,
        .value = 67,
    },
    { /* 4 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MIN_INDEX,
        .value = 0,
    },
};

static const bcmlrd_map_attr_t bcm56990_a0_lrd_port_system_policy_profilet_attr_group = {
    .attributes = 5,
    .attr = bcm56990_a0_lrd_port_system_policy_profilet_attr_entry,
};


const bcmltd_field_desc_t
bcm56990_a0_lrd_bcmltx_port_policy_pass_on_outer_tpid_match_src_field_desc_s2[1] = {
    {
        .field_id  = PORT_SYSTEM_POLICY_PROFILEt_PASS_ON_OUTER_TPID_MATCHf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 0,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56990_a0_lrd_bcmltx_port_policy_pass_on_outer_tpid_match_port_system_policy_profile_dst_field_desc_d0[1] = {
    {
        .field_id  = OUTER_TPID_ENABLEf,
        .field_idx = 0,
        .minbit    = 91,
        .maxbit    = 94,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmltd_field_desc_t
bcm56990_a0_lrd_bcmltx_port_policy_ing_cfi_as_cng_src_field_desc_s1[1] = {
    {
        .field_id  = PORT_SYSTEM_POLICY_PROFILEt_ING_CFI_AS_CNGf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 0,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56990_a0_lrd_bcmltx_port_policy_ing_cfi_as_cng_port_system_policy_profile_dst_field_desc_d0[1] = {
    {
        .field_id  = CFI_AS_CNGf,
        .field_idx = 0,
        .minbit    = 17,
        .maxbit    = 20,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmlrd_field_xfrm_desc_t
bcm56990_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_xfrm_handler_fwd_s2_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_A0_LTA_BCMLTX_PORT_POLICY_PASS_ON_OUTER_TPID_MATCH_XFRM_HANDLER_FWD_S2_D0_ID,
    .src_fields = 1,
    .src = bcm56990_a0_lrd_bcmltx_port_policy_pass_on_outer_tpid_match_src_field_desc_s2,
    .dst_fields = 1,
    .dst = bcm56990_a0_lrd_bcmltx_port_policy_pass_on_outer_tpid_match_port_system_policy_profile_dst_field_desc_d0,
};

const bcmlrd_field_xfrm_desc_t
bcm56990_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_xfrm_handler_rev_s2_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_A0_LTA_BCMLTX_PORT_POLICY_PASS_ON_OUTER_TPID_MATCH_XFRM_HANDLER_REV_S2_D0_ID,
    .src_fields = 1,
    .src = bcm56990_a0_lrd_bcmltx_port_policy_pass_on_outer_tpid_match_port_system_policy_profile_dst_field_desc_d0,
    .dst_fields = 1,
    .dst = bcm56990_a0_lrd_bcmltx_port_policy_pass_on_outer_tpid_match_src_field_desc_s2,
};

const bcmlrd_field_xfrm_desc_t
bcm56990_a0_lta_bcmltx_port_policy_ing_cfi_as_cng_xfrm_handler_fwd_s1_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_A0_LTA_BCMLTX_PORT_POLICY_ING_CFI_AS_CNG_XFRM_HANDLER_FWD_S1_D0_ID,
    .src_fields = 1,
    .src = bcm56990_a0_lrd_bcmltx_port_policy_ing_cfi_as_cng_src_field_desc_s1,
    .dst_fields = 1,
    .dst = bcm56990_a0_lrd_bcmltx_port_policy_ing_cfi_as_cng_port_system_policy_profile_dst_field_desc_d0,
};

const bcmlrd_field_xfrm_desc_t
bcm56990_a0_lta_bcmltx_port_policy_ing_cfi_as_cng_xfrm_handler_rev_s1_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_A0_LTA_BCMLTX_PORT_POLICY_ING_CFI_AS_CNG_XFRM_HANDLER_REV_S1_D0_ID,
    .src_fields = 1,
    .src = bcm56990_a0_lrd_bcmltx_port_policy_ing_cfi_as_cng_port_system_policy_profile_dst_field_desc_d0,
    .dst_fields = 1,
    .dst = bcm56990_a0_lrd_bcmltx_port_policy_ing_cfi_as_cng_src_field_desc_s1,
};


static const bcmlrd_map_entry_t bcm56990_a0_lrd_port_system_policy_profilet_lport_tab_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = BCMLRD_FIELD_INSTANCE,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 3,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = PORT_SYSTEM_POLICY_PROFILEt_PIPEf,
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
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = BCMLRD_FIELD_INDEX,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 6,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = PORT_SYSTEM_POLICY_PROFILEt_PORT_SYSTEM_PROFILE_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 6,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 2 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = TRUST_INCOMING_VIDf,
            .field_idx = 0,
            .minbit    = 146,
            .maxbit    = 146,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = PORT_SYSTEM_POLICY_PROFILEt_TRUST_INCOMING_VIDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 3 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = PORT_DIS_UNTAGf,
            .field_idx = 0,
            .minbit    = 99,
            .maxbit    = 99,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = PORT_SYSTEM_POLICY_PROFILEt_DROP_UNTAGf,
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
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = PORT_DIS_TAGf,
            .field_idx = 0,
            .minbit    = 98,
            .maxbit    = 98,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = PORT_SYSTEM_POLICY_PROFILEt_DROP_TAGf,
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
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = PASS_CONTROL_FRAMESf,
            .field_idx = 0,
            .minbit    = 96,
            .maxbit    = 96,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = PORT_SYSTEM_POLICY_PROFILEt_PASS_PAUSE_FRAMESf,
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
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = OUTER_TPID_VERIFYf,
            .field_idx = 0,
            .minbit    = 95,
            .maxbit    = 95,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = PORT_SYSTEM_POLICY_PROFILEt_OUTER_TPID_VERIFYf,
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
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DROP_BPDUf,
            .field_idx = 0,
            .minbit    = 45,
            .maxbit    = 45,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = PORT_SYSTEM_POLICY_PROFILEt_DROP_BPDUf,
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
                /* handler: bcm56990_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_xfrm_handler_fwd_s2_d0 */
                .desc = &bcm56990_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_xfrm_handler_fwd_s2_d0_desc,
            },
        },
    },
    { /* 9 */
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
                /* handler: bcm56990_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_xfrm_handler_rev_s2_d0 */
                .desc = &bcm56990_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_xfrm_handler_rev_s2_d0_desc,
            },
        },
    },
    { /* 10 */
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
                /* handler: bcm56990_a0_lta_bcmltx_port_policy_ing_cfi_as_cng_xfrm_handler_fwd_s1_d0 */
                .desc = &bcm56990_a0_lta_bcmltx_port_policy_ing_cfi_as_cng_xfrm_handler_fwd_s1_d0_desc,
            },
        },
    },
    { /* 11 */
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
                /* handler: bcm56990_a0_lta_bcmltx_port_policy_ing_cfi_as_cng_xfrm_handler_rev_s1_d0 */
                .desc = &bcm56990_a0_lta_bcmltx_port_policy_ing_cfi_as_cng_xfrm_handler_rev_s1_d0_desc,
            },
        },
    },
};
/* Map conditions */
static const uint32_t
bcm56990_a0_lrd_port_system_policy_profile_map_cond_edit[] = {
    1, /* Number of groups. */
    0, /* Group ID. */
    1, /* Number of entries. */
    0, /* Entry ID. */
    0, /* Number of multi-entry transforms. */
};

static const bcmlrd_condition_t
bcm56990_a0_lrd_port_system_policy_profile_map_condition[] = {
    {
        .op    = BCMLRD_CONDITION_AND,
        .table = PORT_CONFIGt,
        .field = PORT_CONFIGt_PORT_SYSTEM_PROFILE_OPERMODE_PIPEUNIQUEf,
        .value = 1
    },
};

static const bcmlrd_cond_expr_t
bcm56990_a0_lrd_port_system_policy_profile_map_cond_expr[] = {
    {
        .num_cond = 1,
        .cond     = bcm56990_a0_lrd_port_system_policy_profile_map_condition + 0,
    },
};

static const bcmlrd_cond_field_t bcm56990_a0_lrd_port_system_policy_profile_map_cond_field[] = {
    {
        .field = PORT_SYSTEM_POLICY_PROFILEt_PIPEf,
        .expr  = bcm56990_a0_lrd_port_system_policy_profile_map_cond_expr + 0,
        .edit  = bcm56990_a0_lrd_port_system_policy_profile_map_cond_edit + 0,
    },
};
static const bcmlrd_cond_data_t
bcm56990_a0_lrd_port_system_policy_profile_map_cond = {
    .num_field_cond = 1,
    .field_cond = bcm56990_a0_lrd_port_system_policy_profile_map_cond_field
};
static const bcmlrd_map_group_t bcm56990_a0_lrd_port_system_policy_profile_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = LPORT_TABm,
        },
        .entries = 12,
        .entry = bcm56990_a0_lrd_port_system_policy_profilet_lport_tab_map_entry
    },
};
const bcmlrd_map_t bcm56990_a0_lrd_port_system_policy_profile_map = {
    .src_id = PORT_SYSTEM_POLICY_PROFILEt,
    .field_data = &bcm56990_a0_lrd_port_system_policy_profile_map_field_data,
    .groups = 1,
    .group  = bcm56990_a0_lrd_port_system_policy_profile_map_group,
    .table_attr = &bcm56990_a0_lrd_port_system_policy_profilet_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE,
    .cond = &bcm56990_a0_lrd_port_system_policy_profile_map_cond,
};
