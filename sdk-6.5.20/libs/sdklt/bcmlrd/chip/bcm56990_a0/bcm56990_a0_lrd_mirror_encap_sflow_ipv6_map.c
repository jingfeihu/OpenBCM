/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/mirror/bcm56990_a0/bcm56990_a0_MIRROR_ENCAP_SFLOW_IPV6.map.ltl for
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
/* MIRROR_ENCAP_SFLOW_IPV6 field init */
static const bcmlrd_field_data_t bcm56990_a0_lrd_mirror_encap_sflow_ipv6_map_field_data_mmd[] = {
    { /* 0 MIRROR_ENCAP_ID */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56990_a0_lrd_ifd_u8_0x0,
      .def = &bcm56990_a0_lrd_ifd_u8_0x0,
      .max = &bcm56990_a0_lrd_ifd_u8_0x7,
      .depth = 0,
      .width = 3,
      .edata = NULL,
    },
    { /* 1 UNTAG */
      .flags = 0,
      .min = &bcm56990_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56990_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56990_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 2 SRC_MAC */
      .flags = 0,
      .min = &bcm56990_a0_lrd_ifd_u64_0x0,
      .def = &bcm56990_a0_lrd_ifd_u64_0x0,
      .max = &bcm56990_a0_lrd_ifd_u64_0xffffffffffff,
      .depth = 0,
      .width = 48,
      .edata = NULL,
    },
    { /* 3 DST_MAC */
      .flags = 0,
      .min = &bcm56990_a0_lrd_ifd_u64_0x0,
      .def = &bcm56990_a0_lrd_ifd_u64_0x0,
      .max = &bcm56990_a0_lrd_ifd_u64_0xffffffffffff,
      .depth = 0,
      .width = 48,
      .edata = NULL,
    },
    { /* 4 SRC_IPV6_UPPER */
      .flags = 0,
      .min = &bcm56990_a0_lrd_ifd_u64_0x0,
      .def = &bcm56990_a0_lrd_ifd_u64_0x0,
      .max = &bcm56990_a0_lrd_ifd_u64_0xffffffffffffffff,
      .depth = 0,
      .width = 64,
      .edata = NULL,
    },
    { /* 5 SRC_IPV6_LOWER */
      .flags = 0,
      .min = &bcm56990_a0_lrd_ifd_u64_0x0,
      .def = &bcm56990_a0_lrd_ifd_u64_0x0,
      .max = &bcm56990_a0_lrd_ifd_u64_0xffffffffffffffff,
      .depth = 0,
      .width = 64,
      .edata = NULL,
    },
    { /* 6 DST_IPV6_UPPER */
      .flags = 0,
      .min = &bcm56990_a0_lrd_ifd_u64_0x0,
      .def = &bcm56990_a0_lrd_ifd_u64_0x0,
      .max = &bcm56990_a0_lrd_ifd_u64_0xffffffffffffffff,
      .depth = 0,
      .width = 64,
      .edata = NULL,
    },
    { /* 7 DST_IPV6_LOWER */
      .flags = 0,
      .min = &bcm56990_a0_lrd_ifd_u64_0x0,
      .def = &bcm56990_a0_lrd_ifd_u64_0x0,
      .max = &bcm56990_a0_lrd_ifd_u64_0xffffffffffffffff,
      .depth = 0,
      .width = 64,
      .edata = NULL,
    },
    { /* 8 TRAFFIC_CLASS */
      .flags = 0,
      .min = &bcm56990_a0_lrd_ifd_u8_0x0,
      .def = &bcm56990_a0_lrd_ifd_u8_0x0,
      .max = &bcm56990_a0_lrd_ifd_u8_0xff,
      .depth = 0,
      .width = 8,
      .edata = NULL,
    },
    { /* 9 HOP_LIMIT */
      .flags = 0,
      .min = &bcm56990_a0_lrd_ifd_u8_0x0,
      .def = &bcm56990_a0_lrd_ifd_u8_0x0,
      .max = &bcm56990_a0_lrd_ifd_u8_0xff,
      .depth = 0,
      .width = 8,
      .edata = NULL,
    },
    { /* 10 NEXT_HEADER */
      .flags = 0,
      .min = &bcm56990_a0_lrd_ifd_u8_0x0,
      .def = &bcm56990_a0_lrd_ifd_u8_0x0,
      .max = &bcm56990_a0_lrd_ifd_u8_0xff,
      .depth = 0,
      .width = 8,
      .edata = NULL,
    },
    { /* 11 FLOW_LABEL */
      .flags = 0,
      .min = &bcm56990_a0_lrd_ifd_u32_0x0,
      .def = &bcm56990_a0_lrd_ifd_u32_0x0,
      .max = &bcm56990_a0_lrd_ifd_u32_0xfffff,
      .depth = 0,
      .width = 20,
      .edata = NULL,
    },
    { /* 12 L4_DST_PORT */
      .flags = 0,
      .min = &bcm56990_a0_lrd_ifd_u16_0x0,
      .def = &bcm56990_a0_lrd_ifd_u16_0x0,
      .max = &bcm56990_a0_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 13 L4_SRC_PORT */
      .flags = 0,
      .min = &bcm56990_a0_lrd_ifd_u16_0x0,
      .def = &bcm56990_a0_lrd_ifd_u16_0x0,
      .max = &bcm56990_a0_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 14 ETHERTYPE */
      .flags = 0,
      .min = &bcm56990_a0_lrd_ifd_u16_0x0,
      .def = &bcm56990_a0_lrd_ifd_u16_0x0,
      .max = &bcm56990_a0_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 15 OUTER_VLAN */
      .flags = 0,
      .min = &bcm56990_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56990_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56990_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 16 PRI */
      .flags = 0,
      .min = &bcm56990_a0_lrd_ifd_u8_0x0,
      .def = &bcm56990_a0_lrd_ifd_u8_0x0,
      .max = &bcm56990_a0_lrd_ifd_u8_0x7,
      .depth = 0,
      .width = 3,
      .edata = NULL,
    },
    { /* 17 CFI */
      .flags = 0,
      .min = &bcm56990_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56990_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56990_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 18 VLAN_ID */
      .flags = 0,
      .min = &bcm56990_a0_lrd_ifd_u16_0x0,
      .def = &bcm56990_a0_lrd_ifd_u16_0x0,
      .max = &bcm56990_a0_lrd_ifd_u16_0xfff,
      .depth = 0,
      .width = 12,
      .edata = NULL,
    },
    { /* 19 TPID */
      .flags = 0,
      .min = &bcm56990_a0_lrd_ifd_u16_0x0,
      .def = &bcm56990_a0_lrd_ifd_u16_0x0,
      .max = &bcm56990_a0_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 20 HIGIG3 */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56990_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56990_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56990_a0_lrd_ifd_is_true_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 21 HIGIG3_ETHERTYPE */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56990_a0_lrd_ifd_u16_0x0,
      .def = &bcm56990_a0_lrd_ifd_u16_0x0,
      .max = &bcm56990_a0_lrd_ifd_u16_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 22 HIGIG3_BASE_HDR */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56990_a0_lrd_ifd_u64_0x0,
      .def = &bcm56990_a0_lrd_ifd_u64_0x0,
      .max = &bcm56990_a0_lrd_ifd_u64_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56990_a0_lrd_mirror_encap_sflow_ipv6_map_field_data = {
    .fields = 23,
    .field = bcm56990_a0_lrd_mirror_encap_sflow_ipv6_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56990_a0_lrd_mirror_encap_sflow_ipv6t_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_SHARED_INDEX,
        .value = MIRROR_ENCAP_SFLOWt,
    },
    { /* 2 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MAX_INDEX,
        .value = 7,
    },
    { /* 3 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MIN_INDEX,
        .value = 0,
    },
};

static const bcmlrd_map_attr_t bcm56990_a0_lrd_mirror_encap_sflow_ipv6t_attr_group = {
    .attributes = 4,
    .attr = bcm56990_a0_lrd_mirror_encap_sflow_ipv6t_attr_entry,
};


const bcmltd_field_desc_t
bcm56990_a0_lrd_bcmltx_mirror_encap_udp_src_field_desc_s7[2] = {
    {
        .field_id  = MIRROR_ENCAP_SFLOW_IPV6t_L4_SRC_PORTf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 15,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = MIRROR_ENCAP_SFLOW_IPV6t_L4_DST_PORTf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 15,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56990_a0_lrd_bcmltx_mirror_encap_udp_mirror_encap_sflow_ipv6_dst_field_desc_d2[1] = {
    {
        .field_id  = SFLOWv_SFLOW_HEADER_UDPf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 63,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmltd_field_desc_t
bcm56990_a0_lrd_bcmltx_mirror_encap_ipv6_src_field_desc_s4[8] = {
    {
        .field_id  = MIRROR_ENCAP_SFLOW_IPV6t_DST_IPV6u_LOWERf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 63,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = MIRROR_ENCAP_SFLOW_IPV6t_DST_IPV6u_UPPERf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 63,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = MIRROR_ENCAP_SFLOW_IPV6t_SRC_IPV6u_LOWERf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 63,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = MIRROR_ENCAP_SFLOW_IPV6t_SRC_IPV6u_UPPERf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 63,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = MIRROR_ENCAP_SFLOW_IPV6t_HOP_LIMITf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 7,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = MIRROR_ENCAP_SFLOW_IPV6t_NEXT_HEADERf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 7,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = MIRROR_ENCAP_SFLOW_IPV6t_FLOW_LABELf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 19,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = MIRROR_ENCAP_SFLOW_IPV6t_TRAFFIC_CLASSf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 7,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56990_a0_lrd_bcmltx_mirror_encap_ipv6_mirror_encap_sflow_ipv6_dst_field_desc_d2[1] = {
    {
        .field_id  = SFLOW_V6v_SFLOW_HEADER_V6f,
        .field_idx = 0,
        .minbit    = 64,
        .maxbit    = 383,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmltd_field_desc_t
bcm56990_a0_lrd_bcmltx_mirror_encap_vlan_tag_src_field_desc_s10[4] = {
    {
        .field_id  = MIRROR_ENCAP_SFLOW_IPV6t_PRIf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 2,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = MIRROR_ENCAP_SFLOW_IPV6t_CFIf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 0,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = MIRROR_ENCAP_SFLOW_IPV6t_VLAN_IDf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 11,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = MIRROR_ENCAP_SFLOW_IPV6t_TPIDf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 15,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56990_a0_lrd_bcmltx_mirror_encap_vlan_tag_mirror_encap_sflow_ipv6_dst_field_desc_d6[1] = {
    {
        .field_id  = SFLOW_V6v_SFLOW_HEADER_VLAN_TAGf,
        .field_idx = 0,
        .minbit    = 160,
        .maxbit    = 191,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmlrd_field_xfrm_desc_t
bcm56990_a0_lta_bcmltx_mirror_encap_udp_xfrm_handler_fwd_s7_d2_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_A0_LTA_BCMLTX_MIRROR_ENCAP_UDP_XFRM_HANDLER_FWD_S7_D2_ID,
    .src_fields = 2,
    .src = bcm56990_a0_lrd_bcmltx_mirror_encap_udp_src_field_desc_s7,
    .dst_fields = 1,
    .dst = bcm56990_a0_lrd_bcmltx_mirror_encap_udp_mirror_encap_sflow_ipv6_dst_field_desc_d2,
};

const bcmlrd_field_xfrm_desc_t
bcm56990_a0_lta_bcmltx_mirror_encap_udp_xfrm_handler_rev_s7_d2_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_A0_LTA_BCMLTX_MIRROR_ENCAP_UDP_XFRM_HANDLER_REV_S7_D2_ID,
    .src_fields = 1,
    .src = bcm56990_a0_lrd_bcmltx_mirror_encap_udp_mirror_encap_sflow_ipv6_dst_field_desc_d2,
    .dst_fields = 2,
    .dst = bcm56990_a0_lrd_bcmltx_mirror_encap_udp_src_field_desc_s7,
};

const bcmlrd_field_xfrm_desc_t
bcm56990_a0_lta_bcmltx_mirror_encap_ipv6_xfrm_handler_fwd_s4_d2_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_A0_LTA_BCMLTX_MIRROR_ENCAP_IPV6_XFRM_HANDLER_FWD_S4_D2_ID,
    .src_fields = 8,
    .src = bcm56990_a0_lrd_bcmltx_mirror_encap_ipv6_src_field_desc_s4,
    .dst_fields = 1,
    .dst = bcm56990_a0_lrd_bcmltx_mirror_encap_ipv6_mirror_encap_sflow_ipv6_dst_field_desc_d2,
};

const bcmlrd_field_xfrm_desc_t
bcm56990_a0_lta_bcmltx_mirror_encap_ipv6_xfrm_handler_rev_s4_d2_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_A0_LTA_BCMLTX_MIRROR_ENCAP_IPV6_XFRM_HANDLER_REV_S4_D2_ID,
    .src_fields = 1,
    .src = bcm56990_a0_lrd_bcmltx_mirror_encap_ipv6_mirror_encap_sflow_ipv6_dst_field_desc_d2,
    .dst_fields = 8,
    .dst = bcm56990_a0_lrd_bcmltx_mirror_encap_ipv6_src_field_desc_s4,
};

const bcmlrd_field_xfrm_desc_t
bcm56990_a0_lta_bcmltx_mirror_encap_vlan_tag_xfrm_handler_fwd_s10_d6_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_A0_LTA_BCMLTX_MIRROR_ENCAP_VLAN_TAG_XFRM_HANDLER_FWD_S10_D6_ID,
    .src_fields = 4,
    .src = bcm56990_a0_lrd_bcmltx_mirror_encap_vlan_tag_src_field_desc_s10,
    .dst_fields = 1,
    .dst = bcm56990_a0_lrd_bcmltx_mirror_encap_vlan_tag_mirror_encap_sflow_ipv6_dst_field_desc_d6,
};

const bcmlrd_field_xfrm_desc_t
bcm56990_a0_lta_bcmltx_mirror_encap_vlan_tag_xfrm_handler_rev_s10_d6_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_A0_LTA_BCMLTX_MIRROR_ENCAP_VLAN_TAG_XFRM_HANDLER_REV_S10_D6_ID,
    .src_fields = 1,
    .src = bcm56990_a0_lrd_bcmltx_mirror_encap_vlan_tag_mirror_encap_sflow_ipv6_dst_field_desc_d6,
    .dst_fields = 4,
    .dst = bcm56990_a0_lrd_bcmltx_mirror_encap_vlan_tag_src_field_desc_s10,
};


static const bcmlrd_map_entry_t bcm56990_a0_lrd_mirror_encap_sflow_ipv6t_egr_mirror_encap_control_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_VALUE,
        .desc = {
            .field_id  = ENTRY_TYPEf,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 3,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 5,
            }
        },
    },
    { /* 1 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = ENCAP_SPANv_UNTAG_PAYLOADf,
            .field_idx = 0,
            .minbit    = 6,
            .maxbit    = 6,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MIRROR_ENCAP_SFLOW_IPV6t_UNTAGf,
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
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = ENCAP_SPANv_ADD_OUTER_VLANf,
            .field_idx = 0,
            .minbit    = 5,
            .maxbit    = 5,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MIRROR_ENCAP_SFLOW_IPV6t_OUTER_VLANf,
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
                    .field_id = MIRROR_ENCAP_SFLOW_IPV6t_MIRROR_ENCAP_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 2,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
};
static const bcmlrd_map_entry_t bcm56990_a0_lrd_mirror_encap_sflow_ipv6t_egr_mirror_encap_data_1_map_entry[] = {
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
                    .field_id = MIRROR_ENCAP_SFLOW_IPV6t_MIRROR_ENCAP_IDf,
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
                /* handler: bcm56990_a0_lta_bcmltx_mirror_encap_udp_xfrm_handler_fwd_s7_d2 */
                .desc = &bcm56990_a0_lta_bcmltx_mirror_encap_udp_xfrm_handler_fwd_s7_d2_desc,
            },
        },
    },
    { /* 2 */
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
                /* handler: bcm56990_a0_lta_bcmltx_mirror_encap_udp_xfrm_handler_rev_s7_d2 */
                .desc = &bcm56990_a0_lta_bcmltx_mirror_encap_udp_xfrm_handler_rev_s7_d2_desc,
            },
        },
    },
    { /* 3 */
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
                /* handler: bcm56990_a0_lta_bcmltx_mirror_encap_ipv6_xfrm_handler_fwd_s4_d2 */
                .desc = &bcm56990_a0_lta_bcmltx_mirror_encap_ipv6_xfrm_handler_fwd_s4_d2_desc,
            },
        },
    },
    { /* 4 */
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
                /* handler: bcm56990_a0_lta_bcmltx_mirror_encap_ipv6_xfrm_handler_rev_s4_d2 */
                .desc = &bcm56990_a0_lta_bcmltx_mirror_encap_ipv6_xfrm_handler_rev_s4_d2_desc,
            },
        },
    },
};
static const bcmlrd_map_entry_t bcm56990_a0_lrd_mirror_encap_sflow_ipv6t_egr_mirror_encap_data_2_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = SFLOW_V6v_SFLOW_HEADER_DAf,
            .field_idx = 0,
            .minbit    = 112,
            .maxbit    = 159,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MIRROR_ENCAP_SFLOW_IPV6t_DST_MACf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 47,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 1 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = SFLOW_V6v_SFLOW_HEADER_SAf,
            .field_idx = 0,
            .minbit    = 64,
            .maxbit    = 111,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MIRROR_ENCAP_SFLOW_IPV6t_SRC_MACf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 47,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 2 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = SFLOW_V6v_SFLOW_HEADER_ETYPEf,
            .field_idx = 0,
            .minbit    = 192,
            .maxbit    = 207,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MIRROR_ENCAP_SFLOW_IPV6t_ETHERTYPEf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 15,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 3 */
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
                    .field_id = MIRROR_ENCAP_SFLOW_IPV6t_MIRROR_ENCAP_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 2,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 4 */
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
                /* handler: bcm56990_a0_lta_bcmltx_mirror_encap_vlan_tag_xfrm_handler_fwd_s10_d6 */
                .desc = &bcm56990_a0_lta_bcmltx_mirror_encap_vlan_tag_xfrm_handler_fwd_s10_d6_desc,
            },
        },
    },
    { /* 5 */
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
                /* handler: bcm56990_a0_lta_bcmltx_mirror_encap_vlan_tag_xfrm_handler_rev_s10_d6 */
                .desc = &bcm56990_a0_lta_bcmltx_mirror_encap_vlan_tag_xfrm_handler_rev_s10_d6_desc,
            },
        },
    },
};
static const bcmlrd_map_group_t bcm56990_a0_lrd_mirror_encap_sflow_ipv6_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = EGR_MIRROR_ENCAP_CONTROLm,
        },
        .entries = 4,
        .entry = bcm56990_a0_lrd_mirror_encap_sflow_ipv6t_egr_mirror_encap_control_map_entry
    },
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = EGR_MIRROR_ENCAP_DATA_1m,
        },
        .entries = 5,
        .entry = bcm56990_a0_lrd_mirror_encap_sflow_ipv6t_egr_mirror_encap_data_1_map_entry
    },
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = EGR_MIRROR_ENCAP_DATA_2m,
        },
        .entries = 6,
        .entry = bcm56990_a0_lrd_mirror_encap_sflow_ipv6t_egr_mirror_encap_data_2_map_entry
    },
};
const bcmlrd_map_t bcm56990_a0_lrd_mirror_encap_sflow_ipv6_map = {
    .src_id = MIRROR_ENCAP_SFLOW_IPV6t,
    .field_data = &bcm56990_a0_lrd_mirror_encap_sflow_ipv6_map_field_data,
    .groups = 3,
    .group  = bcm56990_a0_lrd_mirror_encap_sflow_ipv6_map_group,
    .table_attr = &bcm56990_a0_lrd_mirror_encap_sflow_ipv6t_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};
