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
/* Handler: bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_route_overridet_ipv6u_upper_maskf_0_xfrm_handler */
#include <bcmlrd/bcmlrd_types.h>
#include <bcmltd/chip/bcmltd_id.h>
#include <bcmltx/bcmltx_field_demux.h>
#include <bcmdrd/chip/bcm56780_a0_enum.h>
#include <bcmlrd/chip/bcm56780_a0/ina_2_4_13/bcm56780_a0_ina_2_4_13_lrd_xfrm_field_desc.h>


extern const bcmltd_field_desc_t
bcm56780_a0_ina_2_4_13_lrd_field_demux_l3_ipv6_uc_route_overridet_ipv6u_upper_maskf_0_src_field_desc_s0[];

static const bcmltd_field_desc_t
bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_route_overridet_ipv6u_upper_maskf_0_dst_field_desc[6] = {
    {
        .field_id  = BCMLTD_INTERNAL_FIELD_BASE + 193,
        .field_idx = 0,
        .minbit    = 402,
        .maxbit    = 405,
        .entry_idx = 0,
        .sym       = "MEMDB_TCAM_IFTA80_MEM0_0_MEM0_1m.MASK1f.ENTRY0[93:90]",
        .reserved  = 0
    },
    {
        .field_id  = BCMLTD_INTERNAL_FIELD_BASE + 195,
        .field_idx = 0,
        .minbit    = 406,
        .maxbit    = 411,
        .entry_idx = 0,
        .sym       = "MEMDB_TCAM_IFTA80_MEM0_0_MEM0_1m.MASK1f.ENTRY0[99:94]",
        .reserved  = 0
    },
    {
        .field_id  = BCMLTD_INTERNAL_FIELD_BASE + 115,
        .field_idx = 0,
        .minbit    = 336,
        .maxbit    = 359,
        .entry_idx = 0,
        .sym       = "MEMDB_TCAM_IFTA80_MEM0_0_MEM0_1m.MASK1f.ENTRY0[47:24]",
        .reserved  = 0
    },
    {
        .field_id  = BCMLTD_INTERNAL_FIELD_BASE + 119,
        .field_idx = 0,
        .minbit    = 360,
        .maxbit    = 361,
        .entry_idx = 0,
        .sym       = "MEMDB_TCAM_IFTA80_MEM0_0_MEM0_1m.MASK1f.ENTRY0[49:48]",
        .reserved  = 0
    },
    {
        .field_id  = BCMLTD_INTERNAL_FIELD_BASE + 121,
        .field_idx = 0,
        .minbit    = 366,
        .maxbit    = 387,
        .entry_idx = 0,
        .sym       = "MEMDB_TCAM_IFTA80_MEM0_0_MEM0_1m.MASK1f.ENTRY0[75:54]",
        .reserved  = 0
    },
    {
        .field_id  = BCMLTD_INTERNAL_FIELD_BASE + 129,
        .field_idx = 0,
        .minbit    = 320,
        .maxbit    = 335,
        .entry_idx = 0,
        .sym       = "MEMDB_TCAM_IFTA80_MEM0_0_MEM0_1m.MASK1f.ENTRY0[23:8]",
        .reserved  = 0
    },
};

static const
bcmltd_field_list_t
bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_route_overridet_ipv6u_upper_maskf_0_src_list_s0 = {
    .field_num = 6,
    .field_array = bcm56780_a0_ina_2_4_13_lrd_field_demux_l3_ipv6_uc_route_overridet_ipv6u_upper_maskf_0_src_field_desc_s0
};

static const bcmltd_field_list_t
bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_route_overridet_ipv6u_upper_maskf_0_dst_list_d0 = {
    .field_num = 6,
    .field_array = bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_route_overridet_ipv6u_upper_maskf_0_dst_field_desc
};

static const uint32_t
bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_route_overridet_ipv6u_upper_maskf_0_transform_src_s0[1] = {
    BCM56780_A0_INA_2_4_13_L3_IPV6_UC_ROUTE_OVERRIDEt_IPV6u_UPPER_MASKf,
};

static const uint32_t
bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_route_overridet_ipv6u_upper_maskf_0_transform_dst_d0[6] = {
    BCMLTD_INTERNAL_FIELD_BASE + 193,
    BCMLTD_INTERNAL_FIELD_BASE + 195,
    BCMLTD_INTERNAL_FIELD_BASE + 115,
    BCMLTD_INTERNAL_FIELD_BASE + 119,
    BCMLTD_INTERNAL_FIELD_BASE + 121,
    BCMLTD_INTERNAL_FIELD_BASE + 129,
};

static const bcmltd_generic_arg_t
bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_route_overridet_ipv6u_upper_maskf_0_comp_data = {
    .sid       = BCM56780_A0_INA_2_4_13_L3_IPV6_UC_ROUTE_OVERRIDEt,
    .values    = 0,
    .value     = NULL,
    .user_data = NULL
};

static const bcmltd_transform_arg_t
bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_route_overridet_ipv6u_upper_maskf_0_xfrm_handler_fwd_arg_s0_d0 = {
    .values      = 0,
    .value       = NULL,
    .tables      = 0,
    .table       = NULL,
    .fields      = 1,
    .field       = bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_route_overridet_ipv6u_upper_maskf_0_transform_src_s0,
    .field_list  = &bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_route_overridet_ipv6u_upper_maskf_0_src_list_s0,
    .rfields     = 6,
    .rfield      = bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_route_overridet_ipv6u_upper_maskf_0_transform_dst_d0,
    .rfield_list = &bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_route_overridet_ipv6u_upper_maskf_0_dst_list_d0,
    .comp_data   = &bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_route_overridet_ipv6u_upper_maskf_0_comp_data
};

static const bcmltd_transform_arg_t
bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_route_overridet_ipv6u_upper_maskf_0_xfrm_handler_rev_arg_s0_d0 = {
    .values      = 0,
    .value       = NULL,
    .tables      = 0,
    .table       = NULL,
    .fields      = 6,
    .field       = bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_route_overridet_ipv6u_upper_maskf_0_transform_dst_d0,
    .field_list  = &bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_route_overridet_ipv6u_upper_maskf_0_dst_list_d0,
    .rfields     = 1,
    .rfield      = bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_route_overridet_ipv6u_upper_maskf_0_transform_src_s0,
    .rfield_list = &bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_route_overridet_ipv6u_upper_maskf_0_src_list_s0,
    .comp_data   = &bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_route_overridet_ipv6u_upper_maskf_0_comp_data
};

const bcmltd_xfrm_handler_t
bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_route_overridet_ipv6u_upper_maskf_0_xfrm_handler_fwd_s0_d0 = {
    .transform     = bcmltx_field_demux_transform,
    .arg           = &bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_route_overridet_ipv6u_upper_maskf_0_xfrm_handler_fwd_arg_s0_d0
};

const bcmltd_xfrm_handler_t
bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_route_overridet_ipv6u_upper_maskf_0_xfrm_handler_rev_s0_d0 = {
    .transform     = bcmltx_field_mux_transform,
    .arg           = &bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_route_overridet_ipv6u_upper_maskf_0_xfrm_handler_rev_arg_s0_d0
};


