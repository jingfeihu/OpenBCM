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
/* Handler: bcm56780_a0_dna_2_4_13_lta_bcmltx_mon_array_to_pbmp_xfrm_handler */
#include <bcmlrd/bcmlrd_types.h>
#include <bcmltd/chip/bcmltd_id.h>
#include <bcmltx/bcmmon/bcmltx_mon_array_to_pbmp.h>
#include <bcmdrd/chip/bcm56780_a0_enum.h>
#include <bcmlrd/chip/bcm56780_a0/dna_2_4_13/bcm56780_a0_dna_2_4_13_lrd_xfrm_field_desc.h>

extern const bcmltd_field_desc_t
bcm56780_a0_dna_2_4_13_lrd_bcmltx_mon_array_to_pbmp_src_field_desc_s0[];

extern const bcmltd_field_desc_t
bcm56780_a0_dna_2_4_13_lrd_bcmltx_mon_array_to_pbmp_src_field_desc_s1[];

extern const bcmltd_field_desc_t
bcm56780_a0_dna_2_4_13_lrd_bcmltx_mon_array_to_pbmp_src_field_desc_s2[];

extern const bcmltd_field_desc_t
bcm56780_a0_dna_2_4_13_lrd_bcmltx_mon_array_to_pbmp_mon_redirect_profile_dst_field_desc_d0[];

extern const bcmltd_field_desc_t
bcm56780_a0_dna_2_4_13_lrd_bcmltx_mon_array_to_pbmp_mon_redirect_profile_dst_field_desc_d1[];

extern const bcmltd_field_desc_t
bcm56780_a0_dna_2_4_13_lrd_bcmltx_mon_array_to_pbmp_mon_redirect_profile_dst_field_desc_d2[];

static const
bcmltd_field_list_t
bcm56780_a0_dna_2_4_13_lta_bcmltx_mon_array_to_pbmp_src_list_s0 = {
    .field_num = 1,
    .field_array = bcm56780_a0_dna_2_4_13_lrd_bcmltx_mon_array_to_pbmp_src_field_desc_s0
};

static const
bcmltd_field_list_t
bcm56780_a0_dna_2_4_13_lta_bcmltx_mon_array_to_pbmp_src_list_s1 = {
    .field_num = 1,
    .field_array = bcm56780_a0_dna_2_4_13_lrd_bcmltx_mon_array_to_pbmp_src_field_desc_s1
};

static const
bcmltd_field_list_t
bcm56780_a0_dna_2_4_13_lta_bcmltx_mon_array_to_pbmp_src_list_s2 = {
    .field_num = 1,
    .field_array = bcm56780_a0_dna_2_4_13_lrd_bcmltx_mon_array_to_pbmp_src_field_desc_s2
};

static const bcmltd_field_list_t
bcm56780_a0_dna_2_4_13_lrd_bcmltx_mon_array_to_pbmp_mon_redirect_profile_dst_list_d0 = {
    .field_num = 1,
    .field_array = bcm56780_a0_dna_2_4_13_lrd_bcmltx_mon_array_to_pbmp_mon_redirect_profile_dst_field_desc_d0
};

static const bcmltd_field_list_t
bcm56780_a0_dna_2_4_13_lrd_bcmltx_mon_array_to_pbmp_mon_redirect_profile_dst_list_d1 = {
    .field_num = 1,
    .field_array = bcm56780_a0_dna_2_4_13_lrd_bcmltx_mon_array_to_pbmp_mon_redirect_profile_dst_field_desc_d1
};

static const bcmltd_field_list_t
bcm56780_a0_dna_2_4_13_lrd_bcmltx_mon_array_to_pbmp_mon_redirect_profile_dst_list_d2 = {
    .field_num = 1,
    .field_array = bcm56780_a0_dna_2_4_13_lrd_bcmltx_mon_array_to_pbmp_mon_redirect_profile_dst_field_desc_d2
};

static const uint32_t
bcm56780_a0_dna_2_4_13_lta_bcmltx_mon_array_to_pbmp_transform_src_s0[1] = {
    MON_REDIRECT_PROFILEt_CPU_DMA_HEADER_WORDf,
};

static const uint32_t
bcm56780_a0_dna_2_4_13_lta_bcmltx_mon_array_to_pbmp_transform_src_s1[1] = {
    MON_REDIRECT_PROFILEt_CPU_DMA_HEADER_FLEX_WORDf,
};

static const uint32_t
bcm56780_a0_dna_2_4_13_lta_bcmltx_mon_array_to_pbmp_transform_src_s2[1] = {
    MON_REDIRECT_PROFILEt_NIH_HEADER_FIELDf,
};

static const uint32_t
bcm56780_a0_dna_2_4_13_lrd_bcmltx_mon_array_to_pbmp_mon_redirect_profile_transform_dst_d0[1] = {
    CPU_DMA_HEADER_SUBTYPEf,
};

static const uint32_t
bcm56780_a0_dna_2_4_13_lrd_bcmltx_mon_array_to_pbmp_mon_redirect_profile_transform_dst_d1[1] = {
    CPU_DMA_HEADER_WORD_SELECT_BITMAPf,
};

static const uint32_t
bcm56780_a0_dna_2_4_13_lrd_bcmltx_mon_array_to_pbmp_mon_redirect_profile_transform_dst_d2[1] = {
    NIH_HEADER_SUBTYPEf,
};

static const bcmltd_generic_arg_t
bcm56780_a0_dna_2_4_13_lta_bcmltx_mon_array_to_pbmp_comp_data = {
    .sid       = MON_REDIRECT_PROFILEt,
    .values    = 0,
    .value     = NULL,
    .user_data = NULL
};

static const bcmltd_transform_arg_t
bcm56780_a0_dna_2_4_13_lta_bcmltx_mon_array_to_pbmp_xfrm_handler_fwd_arg_s0_d0 = {
    .values      = 0,
    .value       = NULL,
    .tables      = 0,
    .table       = NULL,
    .fields      = 1,
    .field       = bcm56780_a0_dna_2_4_13_lta_bcmltx_mon_array_to_pbmp_transform_src_s0,
    .field_list  = &bcm56780_a0_dna_2_4_13_lta_bcmltx_mon_array_to_pbmp_src_list_s0,
    .rfields     = 1,
    .rfield      = bcm56780_a0_dna_2_4_13_lrd_bcmltx_mon_array_to_pbmp_mon_redirect_profile_transform_dst_d0,
    .rfield_list = &bcm56780_a0_dna_2_4_13_lrd_bcmltx_mon_array_to_pbmp_mon_redirect_profile_dst_list_d0,
    .comp_data   = &bcm56780_a0_dna_2_4_13_lta_bcmltx_mon_array_to_pbmp_comp_data
};

static const bcmltd_transform_arg_t
bcm56780_a0_dna_2_4_13_lta_bcmltx_mon_array_to_pbmp_xfrm_handler_rev_arg_s0_d0 = {
    .values      = 0,
    .value       = NULL,
    .tables      = 0,
    .table       = NULL,
    .fields      = 1,
    .field       = bcm56780_a0_dna_2_4_13_lrd_bcmltx_mon_array_to_pbmp_mon_redirect_profile_transform_dst_d0,
    .field_list  = &bcm56780_a0_dna_2_4_13_lrd_bcmltx_mon_array_to_pbmp_mon_redirect_profile_dst_list_d0,
    .rfields     = 1,
    .rfield      = bcm56780_a0_dna_2_4_13_lta_bcmltx_mon_array_to_pbmp_transform_src_s0,
    .rfield_list = &bcm56780_a0_dna_2_4_13_lta_bcmltx_mon_array_to_pbmp_src_list_s0,
    .comp_data   = &bcm56780_a0_dna_2_4_13_lta_bcmltx_mon_array_to_pbmp_comp_data
};

static const bcmltd_transform_arg_t
bcm56780_a0_dna_2_4_13_lta_bcmltx_mon_array_to_pbmp_xfrm_handler_fwd_arg_s1_d1 = {
    .values      = 0,
    .value       = NULL,
    .tables      = 0,
    .table       = NULL,
    .fields      = 1,
    .field       = bcm56780_a0_dna_2_4_13_lta_bcmltx_mon_array_to_pbmp_transform_src_s1,
    .field_list  = &bcm56780_a0_dna_2_4_13_lta_bcmltx_mon_array_to_pbmp_src_list_s1,
    .rfields     = 1,
    .rfield      = bcm56780_a0_dna_2_4_13_lrd_bcmltx_mon_array_to_pbmp_mon_redirect_profile_transform_dst_d1,
    .rfield_list = &bcm56780_a0_dna_2_4_13_lrd_bcmltx_mon_array_to_pbmp_mon_redirect_profile_dst_list_d1,
    .comp_data   = &bcm56780_a0_dna_2_4_13_lta_bcmltx_mon_array_to_pbmp_comp_data
};

static const bcmltd_transform_arg_t
bcm56780_a0_dna_2_4_13_lta_bcmltx_mon_array_to_pbmp_xfrm_handler_rev_arg_s1_d1 = {
    .values      = 0,
    .value       = NULL,
    .tables      = 0,
    .table       = NULL,
    .fields      = 1,
    .field       = bcm56780_a0_dna_2_4_13_lrd_bcmltx_mon_array_to_pbmp_mon_redirect_profile_transform_dst_d1,
    .field_list  = &bcm56780_a0_dna_2_4_13_lrd_bcmltx_mon_array_to_pbmp_mon_redirect_profile_dst_list_d1,
    .rfields     = 1,
    .rfield      = bcm56780_a0_dna_2_4_13_lta_bcmltx_mon_array_to_pbmp_transform_src_s1,
    .rfield_list = &bcm56780_a0_dna_2_4_13_lta_bcmltx_mon_array_to_pbmp_src_list_s1,
    .comp_data   = &bcm56780_a0_dna_2_4_13_lta_bcmltx_mon_array_to_pbmp_comp_data
};

static const bcmltd_transform_arg_t
bcm56780_a0_dna_2_4_13_lta_bcmltx_mon_array_to_pbmp_xfrm_handler_fwd_arg_s2_d2 = {
    .values      = 0,
    .value       = NULL,
    .tables      = 0,
    .table       = NULL,
    .fields      = 1,
    .field       = bcm56780_a0_dna_2_4_13_lta_bcmltx_mon_array_to_pbmp_transform_src_s2,
    .field_list  = &bcm56780_a0_dna_2_4_13_lta_bcmltx_mon_array_to_pbmp_src_list_s2,
    .rfields     = 1,
    .rfield      = bcm56780_a0_dna_2_4_13_lrd_bcmltx_mon_array_to_pbmp_mon_redirect_profile_transform_dst_d2,
    .rfield_list = &bcm56780_a0_dna_2_4_13_lrd_bcmltx_mon_array_to_pbmp_mon_redirect_profile_dst_list_d2,
    .comp_data   = &bcm56780_a0_dna_2_4_13_lta_bcmltx_mon_array_to_pbmp_comp_data
};

static const bcmltd_transform_arg_t
bcm56780_a0_dna_2_4_13_lta_bcmltx_mon_array_to_pbmp_xfrm_handler_rev_arg_s2_d2 = {
    .values      = 0,
    .value       = NULL,
    .tables      = 0,
    .table       = NULL,
    .fields      = 1,
    .field       = bcm56780_a0_dna_2_4_13_lrd_bcmltx_mon_array_to_pbmp_mon_redirect_profile_transform_dst_d2,
    .field_list  = &bcm56780_a0_dna_2_4_13_lrd_bcmltx_mon_array_to_pbmp_mon_redirect_profile_dst_list_d2,
    .rfields     = 1,
    .rfield      = bcm56780_a0_dna_2_4_13_lta_bcmltx_mon_array_to_pbmp_transform_src_s2,
    .rfield_list = &bcm56780_a0_dna_2_4_13_lta_bcmltx_mon_array_to_pbmp_src_list_s2,
    .comp_data   = &bcm56780_a0_dna_2_4_13_lta_bcmltx_mon_array_to_pbmp_comp_data
};

const bcmltd_xfrm_handler_t
bcm56780_a0_dna_2_4_13_lta_bcmltx_mon_array_to_pbmp_xfrm_handler_fwd_s0_d0 = {
    .transform     = bcmltx_mon_array_to_pbmp_transform,
    .arg           = &bcm56780_a0_dna_2_4_13_lta_bcmltx_mon_array_to_pbmp_xfrm_handler_fwd_arg_s0_d0
};

const bcmltd_xfrm_handler_t
bcm56780_a0_dna_2_4_13_lta_bcmltx_mon_array_to_pbmp_xfrm_handler_fwd_s1_d1 = {
    .transform     = bcmltx_mon_array_to_pbmp_transform,
    .arg           = &bcm56780_a0_dna_2_4_13_lta_bcmltx_mon_array_to_pbmp_xfrm_handler_fwd_arg_s1_d1
};

const bcmltd_xfrm_handler_t
bcm56780_a0_dna_2_4_13_lta_bcmltx_mon_array_to_pbmp_xfrm_handler_fwd_s2_d2 = {
    .transform     = bcmltx_mon_array_to_pbmp_transform,
    .arg           = &bcm56780_a0_dna_2_4_13_lta_bcmltx_mon_array_to_pbmp_xfrm_handler_fwd_arg_s2_d2
};

const bcmltd_xfrm_handler_t
bcm56780_a0_dna_2_4_13_lta_bcmltx_mon_array_to_pbmp_xfrm_handler_rev_s0_d0 = {
    .transform     = bcmltx_mon_array_to_pbmp_rev_transform,
    .arg           = &bcm56780_a0_dna_2_4_13_lta_bcmltx_mon_array_to_pbmp_xfrm_handler_rev_arg_s0_d0
};

const bcmltd_xfrm_handler_t
bcm56780_a0_dna_2_4_13_lta_bcmltx_mon_array_to_pbmp_xfrm_handler_rev_s1_d1 = {
    .transform     = bcmltx_mon_array_to_pbmp_rev_transform,
    .arg           = &bcm56780_a0_dna_2_4_13_lta_bcmltx_mon_array_to_pbmp_xfrm_handler_rev_arg_s1_d1
};

const bcmltd_xfrm_handler_t
bcm56780_a0_dna_2_4_13_lta_bcmltx_mon_array_to_pbmp_xfrm_handler_rev_s2_d2 = {
    .transform     = bcmltx_mon_array_to_pbmp_rev_transform,
    .arg           = &bcm56780_a0_dna_2_4_13_lta_bcmltx_mon_array_to_pbmp_xfrm_handler_rev_arg_s2_d2
};


