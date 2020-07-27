/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from Logical Table mapping files.
 *
 * Tool: $SDK/INTERNAL/fltg/bin/fltg
 *
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */
/* Logical Table Adaptor for component bcmltx */
/* Handler: bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_wide_l3_ipv6_multicast_2_tablet_ip_hdr_sipf_0_xfrm_handler */
#include <bcmlrd/bcmlrd_types.h>
#include <bcmltd/chip/bcmltd_id.h>
#include <bcmltx/bcmltx_field_demux_wide.h>
#include <bcmdrd/chip/bcm56880_a0_enum.h>
#include <bcmlrd/chip/bcm56880_a0/dna_4_6_6/bcm56880_a0_dna_4_6_6_lrd_xfrm_field_desc.h>


extern const bcmltd_field_desc_t
bcm56880_a0_dna_4_6_6_lrd_field_demux_wide_l3_ipv6_multicast_2_tablet_ip_hdr_sipf_0_src_field_desc_s0[];

static const bcmltd_field_desc_t
bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_wide_l3_ipv6_multicast_2_tablet_ip_hdr_sipf_0_dst_field_desc[3] = {
    {
        .field_id  = BCMLTD_INTERNAL_FIELD_BASE + 106,
        .field_idx = 0,
        .minbit    = 222,
        .maxbit    = 239,
        .entry_idx = 0,
        .sym       = "IFTA80_E2T_03_B0_QUADm.TABLE_FIELDS_1f[116:99]",
        .reserved  = 0
    },
    {
        .field_id  = BCMLTD_INTERNAL_FIELD_BASE + 39,
        .field_idx = 0,
        .minbit    = 243,
        .maxbit    = 304,
        .entry_idx = 0,
        .sym       = "IFTA80_E2T_03_B0_QUADm.TABLE_FIELDS_2f[61:0]",
        .reserved  = 0
    },
    {
        .field_id  = BCMLTD_INTERNAL_FIELD_BASE + 107,
        .field_idx = 0,
        .minbit    = 47,
        .maxbit    = 94,
        .entry_idx = 0,
        .sym       = "IFTA80_E2T_03_B0_QUADm.TABLE_FIELDS_0f[87:40]",
        .reserved  = 0
    },
};

static const
bcmltd_field_list_t
bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_wide_l3_ipv6_multicast_2_tablet_ip_hdr_sipf_0_src_list_s0 = {
    .field_num = 3,
    .field_array = bcm56880_a0_dna_4_6_6_lrd_field_demux_wide_l3_ipv6_multicast_2_tablet_ip_hdr_sipf_0_src_field_desc_s0
};

static const bcmltd_field_list_t
bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_wide_l3_ipv6_multicast_2_tablet_ip_hdr_sipf_0_dst_list_d0 = {
    .field_num = 3,
    .field_array = bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_wide_l3_ipv6_multicast_2_tablet_ip_hdr_sipf_0_dst_field_desc
};

static const uint32_t
bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_wide_l3_ipv6_multicast_2_tablet_ip_hdr_sipf_0_transform_src_s0[1] = {
    BCM56880_A0_DNA_4_6_6_L3_IPV6_MULTICAST_2_TABLEt_IP_HDR_SIPf,
};

static const uint32_t
bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_wide_l3_ipv6_multicast_2_tablet_ip_hdr_sipf_0_transform_dst_d0[3] = {
    BCMLTD_INTERNAL_FIELD_BASE + 106,
    BCMLTD_INTERNAL_FIELD_BASE + 39,
    BCMLTD_INTERNAL_FIELD_BASE + 107,
};

static const bcmltd_generic_arg_t
bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_wide_l3_ipv6_multicast_2_tablet_ip_hdr_sipf_0_comp_data = {
    .sid       = BCM56880_A0_DNA_4_6_6_L3_IPV6_MULTICAST_2_TABLEt,
    .values    = 0,
    .value     = NULL,
    .user_data = NULL
};

static const bcmltd_transform_arg_t
bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_wide_l3_ipv6_multicast_2_tablet_ip_hdr_sipf_0_xfrm_handler_fwd_arg_s0_d0 = {
    .values      = 0,
    .value       = NULL,
    .tables      = 0,
    .table       = NULL,
    .fields      = 1,
    .field       = bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_wide_l3_ipv6_multicast_2_tablet_ip_hdr_sipf_0_transform_src_s0,
    .field_list  = &bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_wide_l3_ipv6_multicast_2_tablet_ip_hdr_sipf_0_src_list_s0,
    .rfields     = 3,
    .rfield      = bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_wide_l3_ipv6_multicast_2_tablet_ip_hdr_sipf_0_transform_dst_d0,
    .rfield_list = &bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_wide_l3_ipv6_multicast_2_tablet_ip_hdr_sipf_0_dst_list_d0,
    .comp_data   = &bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_wide_l3_ipv6_multicast_2_tablet_ip_hdr_sipf_0_comp_data
};

static const bcmltd_transform_arg_t
bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_wide_l3_ipv6_multicast_2_tablet_ip_hdr_sipf_0_xfrm_handler_rev_arg_s0_d0 = {
    .values      = 0,
    .value       = NULL,
    .tables      = 0,
    .table       = NULL,
    .fields      = 3,
    .field       = bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_wide_l3_ipv6_multicast_2_tablet_ip_hdr_sipf_0_transform_dst_d0,
    .field_list  = &bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_wide_l3_ipv6_multicast_2_tablet_ip_hdr_sipf_0_dst_list_d0,
    .rfields     = 1,
    .rfield      = bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_wide_l3_ipv6_multicast_2_tablet_ip_hdr_sipf_0_transform_src_s0,
    .rfield_list = &bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_wide_l3_ipv6_multicast_2_tablet_ip_hdr_sipf_0_src_list_s0,
    .comp_data   = &bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_wide_l3_ipv6_multicast_2_tablet_ip_hdr_sipf_0_comp_data
};

const bcmltd_xfrm_handler_t
bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_wide_l3_ipv6_multicast_2_tablet_ip_hdr_sipf_0_xfrm_handler_fwd_s0_d0 = {
    .transform     = bcmltx_field_demux_wide_transform,
    .arg           = &bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_wide_l3_ipv6_multicast_2_tablet_ip_hdr_sipf_0_xfrm_handler_fwd_arg_s0_d0
};

const bcmltd_xfrm_handler_t
bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_wide_l3_ipv6_multicast_2_tablet_ip_hdr_sipf_0_xfrm_handler_rev_s0_d0 = {
    .transform     = bcmltx_field_mux_wide_transform,
    .arg           = &bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_wide_l3_ipv6_multicast_2_tablet_ip_hdr_sipf_0_xfrm_handler_rev_arg_s0_d0
};


