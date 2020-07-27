/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/l3/bcm56990_b0/bcm56990_b0_L3_EIF.map.ltl for
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
/* L3_EIF field init */
static const bcmlrd_field_data_t bcm56990_b0_lrd_l3_eif_map_field_data_mmd[] = {
    { /* 0 L3_EIF_ID */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56990_b0_lrd_ifd_u32_0x0,
      .def = &bcm56990_b0_lrd_ifd_u32_0x0,
      .max = &bcm56990_b0_lrd_ifd_u32_0x1fff,
      .depth = 0,
      .width = 13,
      .edata = NULL,
    },
    { /* 1 VLAN_ID */
      .flags = 0,
      .min = &bcm56990_b0_lrd_ifd_u16_0x0,
      .def = &bcm56990_b0_lrd_ifd_u16_0x0,
      .max = &bcm56990_b0_lrd_ifd_u16_0xfff,
      .depth = 0,
      .width = 12,
      .edata = NULL,
    },
    { /* 2 MAC_SA */
      .flags = 0,
      .min = &bcm56990_b0_lrd_ifd_u64_0x0,
      .def = &bcm56990_b0_lrd_ifd_u64_0x0,
      .max = &bcm56990_b0_lrd_ifd_u64_0xffffffffffff,
      .depth = 0,
      .width = 48,
      .edata = NULL,
    },
    { /* 3 TTL */
      .flags = 0,
      .min = &bcm56990_b0_lrd_ifd_u8_0x0,
      .def = &bcm56990_b0_lrd_ifd_u8_0x0,
      .max = &bcm56990_b0_lrd_ifd_u8_0xff,
      .depth = 0,
      .width = 8,
      .edata = NULL,
    },
    { /* 4 PHB_EGR_DSCP_ACTION */
      .flags = BCMLTD_FIELD_F_ENUM,
      .min = &bcm56990_b0_lrd_ifd_u32_0x0,
      .def = &bcm56990_b0_lrd_ifd_u32_0x0,
      .max = &bcm56990_b0_lrd_ifd_u32_0x2,
      .depth = 0,
      .width = 2,
      .edata = BCM56990_B0_LRD_PHB_EGR_DSCP_ACTION_T_DATA,
    },
    { /* 5 DSCP */
      .flags = 0,
      .min = &bcm56990_b0_lrd_ifd_u8_0x0,
      .def = &bcm56990_b0_lrd_ifd_u8_0x0,
      .max = &bcm56990_b0_lrd_ifd_u8_0x3f,
      .depth = 0,
      .width = 6,
      .edata = NULL,
    },
    { /* 6 PHB_EGR_IP_INT_PRI_TO_DSCP_ID */
      .flags = 0,
      .min = &bcm56990_b0_lrd_ifd_u8_0x0,
      .def = &bcm56990_b0_lrd_ifd_u8_0x0,
      .max = &bcm56990_b0_lrd_ifd_u8_0x3f,
      .depth = 0,
      .width = 6,
      .edata = NULL,
    },
    { /* 7 PHB_EGR_L2_OTAG_ACTION */
      .flags = BCMLTD_FIELD_F_ENUM,
      .min = &bcm56990_b0_lrd_ifd_u32_0x0,
      .def = &bcm56990_b0_lrd_ifd_u32_0x0,
      .max = &bcm56990_b0_lrd_ifd_u32_0x2,
      .depth = 0,
      .width = 2,
      .edata = BCM56990_B0_LRD_PHB_EGR_L2_TAG_ACTION_T_DATA,
    },
    { /* 8 OPRI */
      .flags = 0,
      .min = &bcm56990_b0_lrd_ifd_u8_0x0,
      .def = &bcm56990_b0_lrd_ifd_u8_0x0,
      .max = &bcm56990_b0_lrd_ifd_u8_0x7,
      .depth = 0,
      .width = 3,
      .edata = NULL,
    },
    { /* 9 OCFI */
      .flags = 0,
      .min = &bcm56990_b0_lrd_ifd_is_true_0x0,
      .def = &bcm56990_b0_lrd_ifd_is_true_0x0,
      .max = &bcm56990_b0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 10 PHB_EGR_L2_INT_PRI_TO_OTAG_ID */
      .flags = 0,
      .min = &bcm56990_b0_lrd_ifd_u8_0x0,
      .def = &bcm56990_b0_lrd_ifd_u8_0x0,
      .max = &bcm56990_b0_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 11 PHB_EGR_L2_ITAG_ACTION */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56990_b0_lrd_ifd_u32_0x0,
      .def = &bcm56990_b0_lrd_ifd_u32_0x0,
      .max = &bcm56990_b0_lrd_ifd_u32_0x0,
      .depth = 0,
      .width = 0,
      .edata = BCM56990_B0_LRD_PHB_EGR_L2_TAG_ACTION_T_DATA,
    },
    { /* 12 IPRI */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56990_b0_lrd_ifd_u8_0x0,
      .def = &bcm56990_b0_lrd_ifd_u8_0x0,
      .max = &bcm56990_b0_lrd_ifd_u8_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 13 ICFI */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56990_b0_lrd_ifd_is_true_0x0,
      .def = &bcm56990_b0_lrd_ifd_is_true_0x0,
      .max = &bcm56990_b0_lrd_ifd_is_true_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 14 PHB_EGR_L2_INT_PRI_TO_ITAG_ID */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56990_b0_lrd_ifd_u8_0x0,
      .def = &bcm56990_b0_lrd_ifd_u8_0x0,
      .max = &bcm56990_b0_lrd_ifd_u8_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 15 L2_SWITCH */
      .flags = 0,
      .min = &bcm56990_b0_lrd_ifd_is_true_0x0,
      .def = &bcm56990_b0_lrd_ifd_is_true_0x0,
      .max = &bcm56990_b0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 16 CLASS_ID */
      .flags = 0,
      .min = &bcm56990_b0_lrd_ifd_u16_0x0,
      .def = &bcm56990_b0_lrd_ifd_u16_0x0,
      .max = &bcm56990_b0_lrd_ifd_u16_0xfff,
      .depth = 0,
      .width = 12,
      .edata = NULL,
    },
    { /* 17 TNL_TYPE */
      .flags = BCMLTD_FIELD_F_ENUM,
      .min = &bcm56990_b0_lrd_ifd_u32_0x0,
      .def = &bcm56990_b0_lrd_ifd_u32_0x0,
      .max = &bcm56990_b0_lrd_ifd_u32_0x3,
      .depth = 0,
      .width = 2,
      .edata = BCM56990_B0_LRD_L3_TNL_TYPE_T_DATA,
    },
    { /* 18 TNL_IPV4_ENCAP_INDEX */
      .flags = 0,
      .min = &bcm56990_b0_lrd_ifd_u16_0x0,
      .def = &bcm56990_b0_lrd_ifd_u16_0x0,
      .max = &bcm56990_b0_lrd_ifd_u16_0x1fff,
      .depth = 0,
      .width = 13,
      .edata = NULL,
    },
    { /* 19 TNL_IPV6_ENCAP_INDEX */
      .flags = 0,
      .min = &bcm56990_b0_lrd_ifd_u16_0x0,
      .def = &bcm56990_b0_lrd_ifd_u16_0x0,
      .max = &bcm56990_b0_lrd_ifd_u16_0xfff,
      .depth = 0,
      .width = 12,
      .edata = NULL,
    },
    { /* 20 TNL_MPLS_ENCAP_INDEX */
      .flags = 0,
      .min = &bcm56990_b0_lrd_ifd_u16_0x0,
      .def = &bcm56990_b0_lrd_ifd_u16_0x0,
      .max = &bcm56990_b0_lrd_ifd_u16_0x7fff,
      .depth = 0,
      .width = 15,
      .edata = NULL,
    },
    { /* 21 CTR_EGR_EFLEX_ACTION */
      .flags = 0,
      .min = &bcm56990_b0_lrd_ifd_u16_0x0,
      .def = &bcm56990_b0_lrd_ifd_u16_0x0,
      .max = &bcm56990_b0_lrd_ifd_u16_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 22 VFI_ID */
      .flags = 0,
      .min = &bcm56990_b0_lrd_ifd_u16_0x0,
      .def = &bcm56990_b0_lrd_ifd_u16_0x0,
      .max = &bcm56990_b0_lrd_ifd_u16_0x1fff,
      .depth = 0,
      .width = 13,
      .edata = NULL,
    },
    { /* 23 EGR_ADAPT_LOOKUP_KEY_MODE */
      .flags = BCMLTD_FIELD_F_ENUM,
      .min = &bcm56990_b0_lrd_ifd_u32_0x0,
      .def = &bcm56990_b0_lrd_ifd_u32_0x0,
      .max = &bcm56990_b0_lrd_ifd_u32_0x6,
      .depth = 0,
      .width = 3,
      .edata = BCM56990_B0_LRD_EGR_ADAPT_LOOKUP_KEY_MODE_T_DATA,
    },
    { /* 24 EGR_ADAPT_PORT_GRP_MODE */
      .flags = BCMLTD_FIELD_F_ENUM,
      .min = &bcm56990_b0_lrd_ifd_u32_0x0,
      .def = &bcm56990_b0_lrd_ifd_u32_0x0,
      .max = &bcm56990_b0_lrd_ifd_u32_0x1,
      .depth = 0,
      .width = 1,
      .edata = BCM56990_B0_LRD_PORT_GRP_MODE_T_DATA,
    },
};
const bcmlrd_map_field_data_t bcm56990_b0_lrd_l3_eif_map_field_data = {
    .fields = 25,
    .field = bcm56990_b0_lrd_l3_eif_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56990_b0_lrd_l3_eift_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MAX_INDEX,
        .value = 8191,
    },
    { /* 2 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MIN_INDEX,
        .value = 0,
    },
};

static const bcmlrd_map_attr_t bcm56990_b0_lrd_l3_eift_attr_group = {
    .attributes = 3,
    .attr = bcm56990_b0_lrd_l3_eift_attr_entry,
};


const bcmltd_field_desc_t
bcm56990_b0_lrd_bcmltx_copy_field_src_field_desc_s12[1] = {
    {
        .field_id  = L3_EIFt_L3_EIF_IDf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 31,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56990_b0_lrd_bcmltx_copy_field_l3_eif_dst_field_desc_d4[1] = {
    {
        .field_id  = BCMLRD_FIELD_INDEX,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 12,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmltd_field_desc_t
bcm56990_b0_lrd_bcmcth_tnl_encap_id_src_field_desc_s0[4] = {
    {
        .field_id  = L3_EIFt_TNL_TYPEf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 31,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = L3_EIFt_TNL_IPV4_ENCAP_INDEXf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 15,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = L3_EIFt_TNL_IPV6_ENCAP_INDEXf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 15,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = L3_EIFt_TNL_MPLS_ENCAP_INDEXf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 15,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56990_b0_lrd_bcmcth_tnl_encap_id_l3_eif_dst_field_desc_d0[1] = {
    {
        .field_id  = MPLS_TUNNEL_INDEXf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 14,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmltd_field_desc_t
bcm56990_b0_lrd_field_demux_l3_eift_phb_egr_ip_int_pri_to_dscp_idf_0_src_field_desc_s0[1] = {
    {
        .field_id  = L3_EIFt_PHB_EGR_IP_INT_PRI_TO_DSCP_IDf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 5,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56990_b0_lrd_bcmltx_field_demux_l3_eift_phb_egr_ip_int_pri_to_dscp_idf_0_dst_field_desc_d0[1] = {
    {
        .field_id  = DSCP_MAPPING_PTRf,
        .field_idx = 0,
        .minbit    = 27,
        .maxbit    = 32,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmlrd_field_xfrm_desc_t
bcm56990_b0_lta_bcmltx_copy_field_xfrm_handler_fwd_s12_d4_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_B0_LTA_BCMLTX_COPY_FIELD_XFRM_HANDLER_FWD_S12_D4_ID,
    .src_fields = 1,
    .src = bcm56990_b0_lrd_bcmltx_copy_field_src_field_desc_s12,
    .dst_fields = 1,
    .dst = bcm56990_b0_lrd_bcmltx_copy_field_l3_eif_dst_field_desc_d4,
};

const bcmlrd_field_xfrm_desc_t
bcm56990_b0_lta_bcmltx_copy_field_xfrm_handler_rev_s12_d4_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_B0_LTA_BCMLTX_COPY_FIELD_XFRM_HANDLER_REV_S12_D4_ID,
    .src_fields = 1,
    .src = bcm56990_b0_lrd_bcmltx_copy_field_l3_eif_dst_field_desc_d4,
    .dst_fields = 1,
    .dst = bcm56990_b0_lrd_bcmltx_copy_field_src_field_desc_s12,
};

const bcmlrd_field_xfrm_desc_t
bcm56990_b0_lta_bcmcth_tnl_encap_id_xfrm_handler_fwd_s0_k0_d0_x0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_B0_LTA_BCMCTH_TNL_ENCAP_ID_XFRM_HANDLER_FWD_S0_K0_D0_X0_ID,
    .src_fields = 4,
    .src = bcm56990_b0_lrd_bcmcth_tnl_encap_id_src_field_desc_s0,
    .dst_fields = 1,
    .dst = bcm56990_b0_lrd_bcmcth_tnl_encap_id_l3_eif_dst_field_desc_d0,
};

const bcmlrd_field_xfrm_desc_t
bcm56990_b0_lta_bcmcth_tnl_encap_id_xfrm_handler_rev_s0_k0_d0_x0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_B0_LTA_BCMCTH_TNL_ENCAP_ID_XFRM_HANDLER_REV_S0_K0_D0_X0_ID,
    .src_fields = 1,
    .src = bcm56990_b0_lrd_bcmcth_tnl_encap_id_l3_eif_dst_field_desc_d0,
    .dst_fields = 4,
    .dst = bcm56990_b0_lrd_bcmcth_tnl_encap_id_src_field_desc_s0,
};

const bcmlrd_field_xfrm_desc_t
bcm56990_b0_lta_bcmltx_field_demux_l3_eift_phb_egr_ip_int_pri_to_dscp_idf_0_xfrm_handler_fwd_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_B0_LTA_BCMLTX_FIELD_DEMUX_L3_EIFT_PHB_EGR_IP_INT_PRI_TO_DSCP_IDF_0_XFRM_HANDLER_FWD_S0_D0_ID,
    .src_fields = 1,
    .src = bcm56990_b0_lrd_field_demux_l3_eift_phb_egr_ip_int_pri_to_dscp_idf_0_src_field_desc_s0,
    .dst_fields = 1,
    .dst = bcm56990_b0_lrd_bcmltx_field_demux_l3_eift_phb_egr_ip_int_pri_to_dscp_idf_0_dst_field_desc_d0,
};

const bcmlrd_field_xfrm_desc_t
bcm56990_b0_lta_bcmltx_field_demux_l3_eift_phb_egr_ip_int_pri_to_dscp_idf_0_xfrm_handler_rev_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_B0_LTA_BCMLTX_FIELD_DEMUX_L3_EIFT_PHB_EGR_IP_INT_PRI_TO_DSCP_IDF_0_XFRM_HANDLER_REV_S0_D0_ID,
    .src_fields = 1,
    .src = bcm56990_b0_lrd_bcmltx_field_demux_l3_eift_phb_egr_ip_int_pri_to_dscp_idf_0_dst_field_desc_d0,
    .dst_fields = 1,
    .dst = bcm56990_b0_lrd_field_demux_l3_eift_phb_egr_ip_int_pri_to_dscp_idf_0_src_field_desc_s0,
};


static const bcmlrd_map_entry_t bcm56990_b0_lrd_l3_eift_egr_l3_intf_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = VIDf,
            .field_idx = 0,
            .minbit    = 15,
            .maxbit    = 26,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = L3_EIFt_VLAN_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 11,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 1 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = MAC_ADDRESSf,
            .field_idx = 0,
            .minbit    = 60,
            .maxbit    = 107,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = L3_EIFt_MAC_SAf,
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
            .field_id  = TTL_THRESHOLDf,
            .field_idx = 0,
            .minbit    = 110,
            .maxbit    = 117,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = L3_EIFt_TTLf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 7,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 3 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = L2_SWITCHf,
            .field_idx = 0,
            .minbit    = 59,
            .maxbit    = 59,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = L3_EIFt_L2_SWITCHf,
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
            .field_id  = CLASS_IDf,
            .field_idx = 0,
            .minbit    = 41,
            .maxbit    = 52,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = L3_EIFt_CLASS_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 11,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 5 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DSCP_SELf,
            .field_idx = 0,
            .minbit    = 53,
            .maxbit    = 54,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = L3_EIFt_PHB_EGR_DSCP_ACTIONf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 1,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 6 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DSCPf,
            .field_idx = 0,
            .minbit    = 27,
            .maxbit    = 32,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = L3_EIFt_DSCPf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 5,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 7 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = OPRI_OCFI_SELf,
            .field_idx = 0,
            .minbit    = 108,
            .maxbit    = 109,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = L3_EIFt_PHB_EGR_L2_OTAG_ACTIONf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 1,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 8 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = OPRIf,
            .field_idx = 0,
            .minbit    = 33,
            .maxbit    = 35,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = L3_EIFt_OPRIf,
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
            .field_id  = OCFIf,
            .field_idx = 0,
            .minbit    = 36,
            .maxbit    = 36,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = L3_EIFt_OCFIf,
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
            .field_id  = OPRI_OCFI_MAPPING_PROFILEf,
            .field_idx = 0,
            .minbit    = 33,
            .maxbit    = 36,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = L3_EIFt_PHB_EGR_L2_INT_PRI_TO_OTAG_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 11 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = FLEX_CTR_ACTIONf,
            .field_idx = 0,
            .minbit    = 55,
            .maxbit    = 58,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = L3_EIFt_CTR_EGR_EFLEX_ACTIONf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 12 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = VFIf,
            .field_idx = 0,
            .minbit    = 118,
            .maxbit    = 130,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = L3_EIFt_VFI_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 12,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 13 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = ADAPT_LOOKUP_KEY_SELf,
            .field_idx = 0,
            .minbit    = 37,
            .maxbit    = 39,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = L3_EIFt_EGR_ADAPT_LOOKUP_KEY_MODEf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 2,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 14 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = ADAPT_PORT_GROUP_ID_SELf,
            .field_idx = 0,
            .minbit    = 40,
            .maxbit    = 40,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = L3_EIFt_EGR_ADAPT_PORT_GRP_MODEf,
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
                /* handler: bcm56990_b0_lta_bcmltx_copy_field_xfrm_handler_fwd_s12_d4 */
                .desc = &bcm56990_b0_lta_bcmltx_copy_field_xfrm_handler_fwd_s12_d4_desc,
            },
        },
    },
    { /* 16 */
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
                /* handler: bcm56990_b0_lta_bcmltx_copy_field_xfrm_handler_rev_s12_d4 */
                .desc = &bcm56990_b0_lta_bcmltx_copy_field_xfrm_handler_rev_s12_d4_desc,
            },
        },
    },
    { /* 17 */
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
                /* handler: bcm56990_b0_lta_bcmcth_tnl_encap_id_xfrm_handler_fwd_s0_k0_d0_x0 */
                .desc = &bcm56990_b0_lta_bcmcth_tnl_encap_id_xfrm_handler_fwd_s0_k0_d0_x0_desc,
            },
        },
    },
    { /* 18 */
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
                /* handler: bcm56990_b0_lta_bcmcth_tnl_encap_id_xfrm_handler_rev_s0_k0_d0_x0 */
                .desc = &bcm56990_b0_lta_bcmcth_tnl_encap_id_xfrm_handler_rev_s0_k0_d0_x0_desc,
            },
        },
    },
    { /* 19 */
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
                /* handler: bcm56990_b0_lta_bcmltx_field_demux_l3_eift_phb_egr_ip_int_pri_to_dscp_idf_0_xfrm_handler_fwd_s0_d0 */
                .desc = &bcm56990_b0_lta_bcmltx_field_demux_l3_eift_phb_egr_ip_int_pri_to_dscp_idf_0_xfrm_handler_fwd_s0_d0_desc,
            },
        },
    },
    { /* 20 */
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
                /* handler: bcm56990_b0_lta_bcmltx_field_demux_l3_eift_phb_egr_ip_int_pri_to_dscp_idf_0_xfrm_handler_rev_s0_d0 */
                .desc = &bcm56990_b0_lta_bcmltx_field_demux_l3_eift_phb_egr_ip_int_pri_to_dscp_idf_0_xfrm_handler_rev_s0_d0_desc,
            },
        },
    },
};
static const bcmlrd_map_entry_t
bcm56990_b0_lrd_bcmcth_l3_eif_table_commit_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_TABLE_COMMIT_HANDLER,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            /* handler: bcm56990_b0_lta_bcmcth_l3_eif_tnl_l3_intf_table_commit_handler */
            .handler_id = BCMLTD_TABLE_COMMIT_BCM56990_B0_LTA_BCMCTH_L3_EIF_TNL_L3_INTF_TABLE_COMMIT_HANDLER_ID
        }
    },
};
const bcmlrd_field_selector_t bcm56990_b0_lrd_l3_eif_map_select[] = {
    { /* Node:0, Type:ROOT, PHB_EGR_DSCP_ACTION */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_ROOT,
        .field_id = L3_EIFt_PHB_EGR_DSCP_ACTIONf,
        .group_index = BCMLRD_INVALID_SELECTOR_INDEX,
        .entry_index = BCMLRD_INVALID_SELECTOR_INDEX,
        .selection_parent = BCMLRD_INVALID_SELECTOR_INDEX,
        .group = BCMLRD_INVALID_SELECTOR_INDEX,
        .selector_id = BCMLRD_INVALID_SELECTOR_INDEX,
        .selector_value = BCMLRD_INVALID_SELECTOR_INDEX
    },
    { /* Node:1, Type:Directmap, DSCP:EGR_L3_INTF.DSCP */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = L3_EIFt_DSCPf,
        .group_index = 0,
        .entry_index = 6,
        .selection_parent = 0,
        .group = 0,
        .selector_id = L3_EIFt_PHB_EGR_DSCP_ACTIONf,
        .selector_value = 1 /* FIXED */
    },
    { /* Node:2, Type:Subfield, PHB_EGR_IP_INT_PRI_TO_DSCP_ID[5:0]:EGR_L3_INTF.DSCP_MAPPING_PTR - Forward */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = L3_EIFt_PHB_EGR_IP_INT_PRI_TO_DSCP_IDf,
        .group_index = 0,
        .entry_index = 19,
        .selection_parent = 0,
        .group = 0,
        .selector_id = L3_EIFt_PHB_EGR_DSCP_ACTIONf,
        .selector_value = 2 /* MAP */
    },
    { /* Node:3, Type:Subfield, PHB_EGR_IP_INT_PRI_TO_DSCP_ID[5:0]:EGR_L3_INTF.DSCP_MAPPING_PTR - Reverse */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = L3_EIFt_PHB_EGR_IP_INT_PRI_TO_DSCP_IDf,
        .group_index = 0,
        .entry_index = 20,
        .selection_parent = 0,
        .group = 0,
        .selector_id = L3_EIFt_PHB_EGR_DSCP_ACTIONf,
        .selector_value = 2 /* MAP */
    },
    { /* Node:4, Type:ROOT, PHB_EGR_L2_OTAG_ACTION */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_ROOT,
        .field_id = L3_EIFt_PHB_EGR_L2_OTAG_ACTIONf,
        .group_index = BCMLRD_INVALID_SELECTOR_INDEX,
        .entry_index = BCMLRD_INVALID_SELECTOR_INDEX,
        .selection_parent = BCMLRD_INVALID_SELECTOR_INDEX,
        .group = BCMLRD_INVALID_SELECTOR_INDEX,
        .selector_id = BCMLRD_INVALID_SELECTOR_INDEX,
        .selector_value = BCMLRD_INVALID_SELECTOR_INDEX
    },
    { /* Node:5, Type:Directmap, OPRI:EGR_L3_INTF.OPRI */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = L3_EIFt_OPRIf,
        .group_index = 0,
        .entry_index = 8,
        .selection_parent = 4,
        .group = 0,
        .selector_id = L3_EIFt_PHB_EGR_L2_OTAG_ACTIONf,
        .selector_value = 1 /* FIXED */
    },
    { /* Node:6, Type:Directmap, OCFI:EGR_L3_INTF.OCFI */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = L3_EIFt_OCFIf,
        .group_index = 0,
        .entry_index = 9,
        .selection_parent = 4,
        .group = 0,
        .selector_id = L3_EIFt_PHB_EGR_L2_OTAG_ACTIONf,
        .selector_value = 1 /* FIXED */
    },
    { /* Node:7, Type:Directmap, PHB_EGR_L2_INT_PRI_TO_OTAG_ID:EGR_L3_INTF.OPRI_OCFI_MAPPING_PROFILE */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = L3_EIFt_PHB_EGR_L2_INT_PRI_TO_OTAG_IDf,
        .group_index = 0,
        .entry_index = 10,
        .selection_parent = 4,
        .group = 0,
        .selector_id = L3_EIFt_PHB_EGR_L2_OTAG_ACTIONf,
        .selector_value = 2 /* MAP */
    },
    { /* Node:8, Type:ROOT, TNL_TYPE */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_ROOT,
        .field_id = L3_EIFt_TNL_TYPEf,
        .group_index = BCMLRD_INVALID_SELECTOR_INDEX,
        .entry_index = BCMLRD_INVALID_SELECTOR_INDEX,
        .selection_parent = BCMLRD_INVALID_SELECTOR_INDEX,
        .group = BCMLRD_INVALID_SELECTOR_INDEX,
        .selector_id = BCMLRD_INVALID_SELECTOR_INDEX,
        .selector_value = BCMLRD_INVALID_SELECTOR_INDEX
    },
    { /* Node:9, Type:FIELD, TNL_IPV4_ENCAP_INDEX */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_FIELD,
        .field_id = L3_EIFt_TNL_IPV4_ENCAP_INDEXf,
        .group_index = BCMLRD_INVALID_SELECTOR_INDEX,
        .entry_index = BCMLRD_INVALID_SELECTOR_INDEX,
        .selection_parent = 8,
        .group = 0,
        .selector_id = L3_EIFt_TNL_TYPEf,
        .selector_value = 1 /* IPV4 */
    },
    { /* Node:10, Type:FIELD, TNL_IPV6_ENCAP_INDEX */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_FIELD,
        .field_id = L3_EIFt_TNL_IPV6_ENCAP_INDEXf,
        .group_index = BCMLRD_INVALID_SELECTOR_INDEX,
        .entry_index = BCMLRD_INVALID_SELECTOR_INDEX,
        .selection_parent = 8,
        .group = 0,
        .selector_id = L3_EIFt_TNL_TYPEf,
        .selector_value = 2 /* IPV6 */
    },
    { /* Node:11, Type:FIELD, TNL_MPLS_ENCAP_INDEX */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_FIELD,
        .field_id = L3_EIFt_TNL_MPLS_ENCAP_INDEXf,
        .group_index = BCMLRD_INVALID_SELECTOR_INDEX,
        .entry_index = BCMLRD_INVALID_SELECTOR_INDEX,
        .selection_parent = 8,
        .group = 0,
        .selector_id = L3_EIFt_TNL_TYPEf,
        .selector_value = 3 /* MPLS */
    },
};

const bcmlrd_field_selector_data_t bcm56990_b0_lrd_l3_eif_map_select_data = {
    .num_field_selector = 12,
    .field_selector = bcm56990_b0_lrd_l3_eif_map_select,
};

static const bcmlrd_map_group_t bcm56990_b0_lrd_l3_eif_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = EGR_L3_INTFm,
        },
        .entries = 21,
        .entry = bcm56990_b0_lrd_l3_eift_egr_l3_intf_map_entry
    },
    {
        .dest = {
            .kind = BCMLRD_MAP_TABLE_COMMIT,
            .id = 0,
        },
        .entries = 1,
        .entry = bcm56990_b0_lrd_bcmcth_l3_eif_table_commit_entry
    },
};
const bcmlrd_map_t bcm56990_b0_lrd_l3_eif_map = {
    .src_id = L3_EIFt,
    .field_data = &bcm56990_b0_lrd_l3_eif_map_field_data,
    .groups = 2,
    .group  = bcm56990_b0_lrd_l3_eif_map_group,
    .table_attr = &bcm56990_b0_lrd_l3_eift_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE,
    .sel = &bcm56990_b0_lrd_l3_eif_map_select_data,
};
