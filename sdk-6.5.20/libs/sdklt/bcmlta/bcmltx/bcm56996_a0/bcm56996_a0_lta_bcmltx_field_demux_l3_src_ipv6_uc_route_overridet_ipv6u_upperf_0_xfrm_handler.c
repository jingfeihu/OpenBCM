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
/* Handler: bcm56996_a0_lta_bcmltx_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_upperf_0_xfrm_handler */
#include <bcmlrd/bcmlrd_types.h>
#include <bcmltd/chip/bcmltd_id.h>
#include <bcmltx/bcmltx_field_demux.h>
#include <bcmdrd/chip/bcm56996_a0_enum.h>
#include <bcmlrd/chip/bcm56996_a0/bcm56996_a0_lrd_xfrm_field_desc.h>


extern const bcmltd_field_desc_t
bcm56996_a0_lrd_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_upperf_0_src_field_desc_s0[];

extern const bcmltd_field_desc_t
bcm56996_a0_lrd_bcmltx_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_upperf_0_dst_field_desc_d0[];

static const
bcmltd_field_list_t
bcm56996_a0_lta_bcmltx_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_upperf_0_src_list_s0 = {
    .field_num = 2,
    .field_array = bcm56996_a0_lrd_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_upperf_0_src_field_desc_s0
};

static const bcmltd_field_list_t
bcm56996_a0_lta_bcmltx_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_upperf_0_dst_list_d0 = {
    .field_num = 2,
    .field_array = bcm56996_a0_lrd_bcmltx_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_upperf_0_dst_field_desc_d0
};

static const uint32_t
bcm56996_a0_lta_bcmltx_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_upperf_0_transform_src_s0[1] = {
    L3_SRC_IPV6_UC_ROUTE_OVERRIDEt_IPV6u_UPPERf,
};

static const uint32_t
bcm56996_a0_lta_bcmltx_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_upperf_0_transform_dst_d0[2] = {
    UPR_KEY1_LPM_V6_KEY_D_IP_ADDR_0f,
    UPR_KEY0_LPM_V6_KEY_D_IP_ADDR_1f,
};

static const bcmltd_generic_arg_t
bcm56996_a0_lta_bcmltx_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_upperf_0_comp_data = {
    .sid       = L3_SRC_IPV6_UC_ROUTE_OVERRIDEt,
    .values    = 0,
    .value     = NULL,
    .user_data = NULL
};

static const bcmltd_transform_arg_t
bcm56996_a0_lta_bcmltx_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_upperf_0_xfrm_handler_fwd_arg_s0_d0 = {
    .values      = 0,
    .value       = NULL,
    .tables      = 0,
    .table       = NULL,
    .fields      = 1,
    .field       = bcm56996_a0_lta_bcmltx_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_upperf_0_transform_src_s0,
    .field_list  = &bcm56996_a0_lta_bcmltx_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_upperf_0_src_list_s0,
    .rfields     = 2,
    .rfield      = bcm56996_a0_lta_bcmltx_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_upperf_0_transform_dst_d0,
    .rfield_list = &bcm56996_a0_lta_bcmltx_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_upperf_0_dst_list_d0,
    .comp_data   = &bcm56996_a0_lta_bcmltx_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_upperf_0_comp_data
};

static const bcmltd_transform_arg_t
bcm56996_a0_lta_bcmltx_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_upperf_0_xfrm_handler_rev_arg_s0_d0 = {
    .values      = 0,
    .value       = NULL,
    .tables      = 0,
    .table       = NULL,
    .fields      = 2,
    .field       = bcm56996_a0_lta_bcmltx_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_upperf_0_transform_dst_d0,
    .field_list  = &bcm56996_a0_lta_bcmltx_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_upperf_0_dst_list_d0,
    .rfields     = 1,
    .rfield      = bcm56996_a0_lta_bcmltx_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_upperf_0_transform_src_s0,
    .rfield_list = &bcm56996_a0_lta_bcmltx_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_upperf_0_src_list_s0,
    .comp_data   = &bcm56996_a0_lta_bcmltx_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_upperf_0_comp_data
};

const bcmltd_xfrm_handler_t
bcm56996_a0_lta_bcmltx_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_upperf_0_xfrm_handler_fwd_s0_d0 = {
    .transform     = bcmltx_field_demux_transform,
    .arg           = &bcm56996_a0_lta_bcmltx_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_upperf_0_xfrm_handler_fwd_arg_s0_d0
};

const bcmltd_xfrm_handler_t
bcm56996_a0_lta_bcmltx_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_upperf_0_xfrm_handler_rev_s0_d0 = {
    .transform     = bcmltx_field_mux_transform,
    .arg           = &bcm56996_a0_lta_bcmltx_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_upperf_0_xfrm_handler_rev_arg_s0_d0
};


