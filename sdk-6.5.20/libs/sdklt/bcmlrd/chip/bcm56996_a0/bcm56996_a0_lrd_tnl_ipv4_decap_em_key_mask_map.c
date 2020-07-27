/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/tnl/bcm56996_a0/bcm56996_a0_TNL_IPV4_DECAP_EM_KEY_MASK.map.ltl for
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
/* TNL_IPV4_DECAP_EM_KEY_MASK field init */
static const bcmlrd_field_data_t bcm56996_a0_lrd_tnl_ipv4_decap_em_key_mask_map_field_data_mmd[] = {
    { /* 0 GLOBAL_KEY_MASK */
      .flags = 0,
      .min = &bcm56996_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56996_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56996_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 1 SRC_IPV4_MASK */
      .flags = 0,
      .min = &bcm56996_a0_lrd_ifd_u32_0x0,
      .def = &bcm56996_a0_lrd_ifd_u32_0x0,
      .max = &bcm56996_a0_lrd_ifd_u32_0xffffffff,
      .depth = 0,
      .width = 32,
      .edata = NULL,
    },
    { /* 2 DST_IPV4_MASK */
      .flags = 0,
      .min = &bcm56996_a0_lrd_ifd_u32_0x0,
      .def = &bcm56996_a0_lrd_ifd_u32_0x0,
      .max = &bcm56996_a0_lrd_ifd_u32_0xffffffff,
      .depth = 0,
      .width = 32,
      .edata = NULL,
    },
    { /* 3 IP_PROTOCOL_MASK */
      .flags = 0,
      .min = &bcm56996_a0_lrd_ifd_u8_0x0,
      .def = &bcm56996_a0_lrd_ifd_u8_0x0,
      .max = &bcm56996_a0_lrd_ifd_u8_0xff,
      .depth = 0,
      .width = 8,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56996_a0_lrd_tnl_ipv4_decap_em_key_mask_map_field_data = {
    .fields = 4,
    .field = bcm56996_a0_lrd_tnl_ipv4_decap_em_key_mask_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56996_a0_lrd_tnl_ipv4_decap_em_key_maskt_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = false,
    },
};

static const bcmlrd_map_attr_t bcm56996_a0_lrd_tnl_ipv4_decap_em_key_maskt_attr_group = {
    .attributes = 1,
    .attr = bcm56996_a0_lrd_tnl_ipv4_decap_em_key_maskt_attr_entry,
};

static const bcmlrd_map_entry_t bcm56996_a0_lrd_tnl_ipv4_decap_em_key_maskt_l3_tunnel_key_attributes_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = BCMLRD_FIELD_INDEX,
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
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = GLOBAL_MASK_ENABLEf,
            .field_idx = 0,
            .minbit    = 16,
            .maxbit    = 16,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_IPV4_DECAP_EM_KEY_MASKt_GLOBAL_KEY_MASKf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 2 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_VALUE,
        .desc = {
            .field_id  = GLOBAL_MASKf,
            .field_idx = 0,
            .minbit    = 17,
            .maxbit    = 19,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 7,
            }
        },
    },
    { /* 3 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = GLOBAL_MASKf,
            .field_idx = 0,
            .minbit    = 20,
            .maxbit    = 51,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_IPV4_DECAP_EM_KEY_MASKt_SRC_IPV4_MASKf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 31,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 4 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = GLOBAL_MASKf,
            .field_idx = 0,
            .minbit    = 52,
            .maxbit    = 83,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_IPV4_DECAP_EM_KEY_MASKt_DST_IPV4_MASKf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 31,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 5 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = GLOBAL_MASKf,
            .field_idx = 0,
            .minbit    = 84,
            .maxbit    = 91,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_IPV4_DECAP_EM_KEY_MASKt_IP_PROTOCOL_MASKf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 7,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
};
static const bcmlrd_map_group_t bcm56996_a0_lrd_tnl_ipv4_decap_em_key_mask_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = L3_TUNNEL_KEY_ATTRIBUTESm,
        },
        .entries = 6,
        .entry = bcm56996_a0_lrd_tnl_ipv4_decap_em_key_maskt_l3_tunnel_key_attributes_map_entry
    },
};
const bcmlrd_map_t bcm56996_a0_lrd_tnl_ipv4_decap_em_key_mask_map = {
    .src_id = TNL_IPV4_DECAP_EM_KEY_MASKt,
    .field_data = &bcm56996_a0_lrd_tnl_ipv4_decap_em_key_mask_map_field_data,
    .groups = 1,
    .group  = bcm56996_a0_lrd_tnl_ipv4_decap_em_key_mask_map_group,
    .table_attr = &bcm56996_a0_lrd_tnl_ipv4_decap_em_key_maskt_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};
