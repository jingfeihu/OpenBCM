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
/* Logical Table Adaptor for component bcmcth */
/* Handler: bcm56990_b0_lta_bcmcth_tnl_encap_id_xfrm_handler */
#include <bcmlrd/bcmlrd_types.h>
#include <bcmltd/chip/bcmltd_id.h>
#include <bcmcth/bcmcth_tnl_encap_id.h>
#include <bcmdrd/chip/bcm56990_b0_enum.h>
#include <bcmlrd/chip/bcm56990_b0/bcm56990_b0_lrd_xfrm_field_desc.h>

static const uint32_t
bcm56990_b0_lta_bcmcth_tnl_encap_id_transform_arg0[1] = {
    2,
};

extern const bcmltd_field_desc_t
bcm56990_b0_lrd_bcmcth_tnl_encap_id_src_field_desc_s0[];

static const bcmltd_field_desc_t
bcm56990_b0_lta_bcmcth_tnl_encap_id_src_field_desc_k0[1] = {
    {
        .field_id  = L3_EIFt_L3_EIF_IDf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 31,
        .entry_idx = 0,
        .reserved  = 0
    },
};

extern const bcmltd_field_desc_t
bcm56990_b0_lrd_bcmcth_tnl_encap_id_l3_eif_dst_field_desc_d0[];

static const
bcmltd_field_list_t
bcm56990_b0_lta_bcmcth_tnl_encap_id_src_list_s0 = {
    .field_num = 4,
    .field_array = bcm56990_b0_lrd_bcmcth_tnl_encap_id_src_field_desc_s0
};

static const
bcmltd_field_list_t
bcm56990_b0_lta_bcmcth_tnl_encap_id_src_list_k0 = {
    .field_num = 1,
    .field_array = bcm56990_b0_lta_bcmcth_tnl_encap_id_src_field_desc_k0
};

static const bcmltd_field_list_t
bcm56990_b0_lrd_bcmcth_tnl_encap_id_l3_eif_dst_list_d0 = {
    .field_num = 1,
    .field_array = bcm56990_b0_lrd_bcmcth_tnl_encap_id_l3_eif_dst_field_desc_d0
};

static const uint32_t
bcm56990_b0_lta_bcmcth_tnl_encap_id_transform_src_s0[4] = {
    L3_EIFt_TNL_TYPEf,
    L3_EIFt_TNL_IPV4_ENCAP_INDEXf,
    L3_EIFt_TNL_IPV6_ENCAP_INDEXf,
    L3_EIFt_TNL_MPLS_ENCAP_INDEXf,
};

static const uint32_t
bcm56990_b0_lta_bcmcth_tnl_encap_id_transform_src_k0[1] = {
    L3_EIFt_L3_EIF_IDf,
};

static const uint32_t
bcm56990_b0_lrd_bcmcth_tnl_encap_id_l3_eif_transform_dst_d0[1] = {
    MPLS_TUNNEL_INDEXf,
};

static const bcmltd_generic_arg_t
bcm56990_b0_lta_bcmcth_tnl_encap_id_comp_data = {
    .sid       = L3_EIFt,
    .values    = 0,
    .value     = NULL,
    .user_data = NULL
};

static const bcmltd_transform_arg_t
bcm56990_b0_lta_bcmcth_tnl_encap_id_xfrm_handler_fwd_arg_s0_k0_d0_x0 = {
    .values      = 1,
    .value       = bcm56990_b0_lta_bcmcth_tnl_encap_id_transform_arg0,
    .tables      = 0,
    .table       = NULL,
    .fields      = 4,
    .field       = bcm56990_b0_lta_bcmcth_tnl_encap_id_transform_src_s0,
    .field_list  = &bcm56990_b0_lta_bcmcth_tnl_encap_id_src_list_s0,
    .kfields     = 1,
    .kfield      = bcm56990_b0_lta_bcmcth_tnl_encap_id_transform_src_k0,
    .kfield_list = &bcm56990_b0_lta_bcmcth_tnl_encap_id_src_list_k0,
    .rfields     = 1,
    .rfield      = bcm56990_b0_lrd_bcmcth_tnl_encap_id_l3_eif_transform_dst_d0,
    .rfield_list = &bcm56990_b0_lrd_bcmcth_tnl_encap_id_l3_eif_dst_list_d0,
    .comp_data   = &bcm56990_b0_lta_bcmcth_tnl_encap_id_comp_data
};

static const bcmltd_transform_arg_t
bcm56990_b0_lta_bcmcth_tnl_encap_id_xfrm_handler_rev_arg_s0_k0_d0_x0 = {
    .values      = 1,
    .value       = bcm56990_b0_lta_bcmcth_tnl_encap_id_transform_arg0,
    .tables      = 0,
    .table       = NULL,
    .fields      = 1,
    .field       = bcm56990_b0_lrd_bcmcth_tnl_encap_id_l3_eif_transform_dst_d0,
    .field_list  = &bcm56990_b0_lrd_bcmcth_tnl_encap_id_l3_eif_dst_list_d0,
    .kfields     = 1,
    .kfield      = bcm56990_b0_lta_bcmcth_tnl_encap_id_transform_src_k0,
    .kfield_list = &bcm56990_b0_lta_bcmcth_tnl_encap_id_src_list_k0,
    .rfields     = 4,
    .rfield      = bcm56990_b0_lta_bcmcth_tnl_encap_id_transform_src_s0,
    .rfield_list = &bcm56990_b0_lta_bcmcth_tnl_encap_id_src_list_s0,
    .comp_data   = &bcm56990_b0_lta_bcmcth_tnl_encap_id_comp_data
};

const bcmltd_xfrm_handler_t
bcm56990_b0_lta_bcmcth_tnl_encap_id_xfrm_handler_fwd_s0_k0_d0_x0 = {
    .ext_transform = bcmcth_tnl_encap_id_transform,
    .arg           = &bcm56990_b0_lta_bcmcth_tnl_encap_id_xfrm_handler_fwd_arg_s0_k0_d0_x0
};

const bcmltd_xfrm_handler_t
bcm56990_b0_lta_bcmcth_tnl_encap_id_xfrm_handler_rev_s0_k0_d0_x0 = {
    .ext_transform = bcmcth_tnl_encap_id_rev_transform,
    .arg           = &bcm56990_b0_lta_bcmcth_tnl_encap_id_xfrm_handler_rev_arg_s0_k0_d0_x0
};


