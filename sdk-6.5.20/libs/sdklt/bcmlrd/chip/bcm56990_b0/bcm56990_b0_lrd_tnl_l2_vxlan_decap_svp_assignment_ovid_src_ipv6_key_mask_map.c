/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/tnl/bcm56990_b0/bcm56990_b0_TNL_L2_VXLAN_DECAP_SVP_ASSIGNMENT_OVID_SRC_IPV6_KEY_MASK.map.ltl for
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
/* TNL_L2_VXLAN_DECAP_SVP_ASSIGNMENT_OVID_SRC_IPV6_KEY_MASK field init */
static const bcmlrd_field_data_t bcm56990_b0_lrd_tnl_l2_vxlan_decap_svp_assignment_ovid_src_ipv6_key_mask_map_field_data_mmd[] = {
    { /* 0 GLOBAL_KEY_MASK */
      .flags = 0,
      .min = &bcm56990_b0_lrd_ifd_is_true_0x0,
      .def = &bcm56990_b0_lrd_ifd_is_true_0x0,
      .max = &bcm56990_b0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 1 OVID_MASK */
      .flags = 0,
      .min = &bcm56990_b0_lrd_ifd_u16_0x0,
      .def = &bcm56990_b0_lrd_ifd_u16_0x0,
      .max = &bcm56990_b0_lrd_ifd_u16_0xfff,
      .depth = 0,
      .width = 12,
      .edata = NULL,
    },
    { /* 2 OUTER_SRC_IPV6_MASK_UPPER */
      .flags = 0,
      .min = &bcm56990_b0_lrd_ifd_u64_0x0,
      .def = &bcm56990_b0_lrd_ifd_u64_0x0,
      .max = &bcm56990_b0_lrd_ifd_u64_0xffffffffffffffff,
      .depth = 0,
      .width = 64,
      .edata = NULL,
    },
    { /* 3 OUTER_SRC_IPV6_MASK_LOWER */
      .flags = 0,
      .min = &bcm56990_b0_lrd_ifd_u64_0x0,
      .def = &bcm56990_b0_lrd_ifd_u64_0x0,
      .max = &bcm56990_b0_lrd_ifd_u64_0xffffffffffffffff,
      .depth = 0,
      .width = 64,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56990_b0_lrd_tnl_l2_vxlan_decap_svp_assignment_ovid_src_ipv6_key_mask_map_field_data = {
    .fields = 4,
    .field = bcm56990_b0_lrd_tnl_l2_vxlan_decap_svp_assignment_ovid_src_ipv6_key_mask_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56990_b0_lrd_tnl_l2_vxlan_decap_svp_assignment_ovid_src_ipv6_key_maskt_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = false,
    },
};

static const bcmlrd_map_attr_t bcm56990_b0_lrd_tnl_l2_vxlan_decap_svp_assignment_ovid_src_ipv6_key_maskt_attr_group = {
    .attributes = 1,
    .attr = bcm56990_b0_lrd_tnl_l2_vxlan_decap_svp_assignment_ovid_src_ipv6_key_maskt_attr_entry,
};


const bcmltd_field_desc_t
bcm56990_b0_lrd_field_demux_tnl_l2_vxlan_decap_svp_assignment_ovid_src_ipv6_key_maskt_outer_src_ipv6_masku_upperf_0_src_field_desc_s0[2] = {
    {
        .field_id  = TNL_L2_VXLAN_DECAP_SVP_ASSIGNMENT_OVID_SRC_IPV6_KEY_MASKt_OUTER_SRC_IPV6_MASKu_UPPERf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 36,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = TNL_L2_VXLAN_DECAP_SVP_ASSIGNMENT_OVID_SRC_IPV6_KEY_MASKt_OUTER_SRC_IPV6_MASKu_UPPERf,
        .field_idx = 0,
        .minbit    = 37,
        .maxbit    = 63,
        .entry_idx = 0,
        .reserved  = 0
    },
};

static const bcmltd_field_desc_t
bcm56990_b0_lrd_field_demux_tnl_l2_vxlan_decap_svp_assignment_ovid_src_ipv6_key_maskt_outer_src_ipv6_masku_upperf_0_dst_field_desc[2] = {
    {
        .field_id  = GLOBAL_MASKf,
        .field_idx = 0,
        .minbit    = 97,
        .maxbit    = 133,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = GLOBAL_MASKf,
        .field_idx = 0,
        .minbit    = 137,
        .maxbit    = 163,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmlrd_field_xfrm_desc_t
bcm56990_b0_lta_bcmltx_field_demux_tnl_l2_vxlan_decap_svp_assignment_ovid_src_ipv6_key_maskt_outer_src_ipv6_masku_upperf_0_xfrm_handler_fwd_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_B0_LTA_BCMLTX_FIELD_DEMUX_TNL_L2_VXLAN_DECAP_SVP_ASSIGNMENT_OVID_SRC_IPV6_KEY_MASKT_OUTER_SRC_IPV6_MASKU_UPPERF_0_XFRM_HANDLER_FWD_S0_D0_ID,
    .src_fields = 2,
    .src = bcm56990_b0_lrd_field_demux_tnl_l2_vxlan_decap_svp_assignment_ovid_src_ipv6_key_maskt_outer_src_ipv6_masku_upperf_0_src_field_desc_s0,
    .dst_fields = 2,
    .dst = bcm56990_b0_lrd_field_demux_tnl_l2_vxlan_decap_svp_assignment_ovid_src_ipv6_key_maskt_outer_src_ipv6_masku_upperf_0_dst_field_desc,
};

const bcmlrd_field_xfrm_desc_t
bcm56990_b0_lta_bcmltx_field_demux_tnl_l2_vxlan_decap_svp_assignment_ovid_src_ipv6_key_maskt_outer_src_ipv6_masku_upperf_0_xfrm_handler_rev_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_B0_LTA_BCMLTX_FIELD_DEMUX_TNL_L2_VXLAN_DECAP_SVP_ASSIGNMENT_OVID_SRC_IPV6_KEY_MASKT_OUTER_SRC_IPV6_MASKU_UPPERF_0_XFRM_HANDLER_REV_S0_D0_ID,
    .src_fields = 2,
    .src = bcm56990_b0_lrd_field_demux_tnl_l2_vxlan_decap_svp_assignment_ovid_src_ipv6_key_maskt_outer_src_ipv6_masku_upperf_0_dst_field_desc,
    .dst_fields = 2,
    .dst = bcm56990_b0_lrd_field_demux_tnl_l2_vxlan_decap_svp_assignment_ovid_src_ipv6_key_maskt_outer_src_ipv6_masku_upperf_0_src_field_desc_s0,
};


static const bcmlrd_map_entry_t bcm56990_b0_lrd_tnl_l2_vxlan_decap_svp_assignment_ovid_src_ipv6_key_maskt_mpls_entry_key_attributes_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = BCMLRD_FIELD_INDEX,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 3,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 7,
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
                    .field_id = TNL_L2_VXLAN_DECAP_SVP_ASSIGNMENT_OVID_SRC_IPV6_KEY_MASKt_GLOBAL_KEY_MASKf,
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
            .maxbit    = 20,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 0xf,
            }
        },
    },
    { /* 3 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = GLOBAL_MASKf,
            .field_idx = 0,
            .minbit    = 21,
            .maxbit    = 32,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_L2_VXLAN_DECAP_SVP_ASSIGNMENT_OVID_SRC_IPV6_KEY_MASKt_OVID_MASKf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 11,
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
            .minbit    = 33,
            .maxbit    = 96,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_L2_VXLAN_DECAP_SVP_ASSIGNMENT_OVID_SRC_IPV6_KEY_MASKt_OUTER_SRC_IPV6_MASKu_LOWERf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 63,
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
                /* handler: bcm56990_b0_lta_bcmltx_field_demux_tnl_l2_vxlan_decap_svp_assignment_ovid_src_ipv6_key_maskt_outer_src_ipv6_masku_upperf_0_xfrm_handler_fwd_s0_d0 */
                .desc = &bcm56990_b0_lta_bcmltx_field_demux_tnl_l2_vxlan_decap_svp_assignment_ovid_src_ipv6_key_maskt_outer_src_ipv6_masku_upperf_0_xfrm_handler_fwd_s0_d0_desc,
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
                /* handler: bcm56990_b0_lta_bcmltx_field_demux_tnl_l2_vxlan_decap_svp_assignment_ovid_src_ipv6_key_maskt_outer_src_ipv6_masku_upperf_0_xfrm_handler_rev_s0_d0 */
                .desc = &bcm56990_b0_lta_bcmltx_field_demux_tnl_l2_vxlan_decap_svp_assignment_ovid_src_ipv6_key_maskt_outer_src_ipv6_masku_upperf_0_xfrm_handler_rev_s0_d0_desc,
            },
        },
    },
};
static const bcmlrd_map_group_t bcm56990_b0_lrd_tnl_l2_vxlan_decap_svp_assignment_ovid_src_ipv6_key_mask_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = MPLS_ENTRY_KEY_ATTRIBUTESm,
        },
        .entries = 7,
        .entry = bcm56990_b0_lrd_tnl_l2_vxlan_decap_svp_assignment_ovid_src_ipv6_key_maskt_mpls_entry_key_attributes_map_entry
    },
};
const bcmlrd_map_t bcm56990_b0_lrd_tnl_l2_vxlan_decap_svp_assignment_ovid_src_ipv6_key_mask_map = {
    .src_id = TNL_L2_VXLAN_DECAP_SVP_ASSIGNMENT_OVID_SRC_IPV6_KEY_MASKt,
    .field_data = &bcm56990_b0_lrd_tnl_l2_vxlan_decap_svp_assignment_ovid_src_ipv6_key_mask_map_field_data,
    .groups = 1,
    .group  = bcm56990_b0_lrd_tnl_l2_vxlan_decap_svp_assignment_ovid_src_ipv6_key_mask_map_group,
    .table_attr = &bcm56990_b0_lrd_tnl_l2_vxlan_decap_svp_assignment_ovid_src_ipv6_key_maskt_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};
