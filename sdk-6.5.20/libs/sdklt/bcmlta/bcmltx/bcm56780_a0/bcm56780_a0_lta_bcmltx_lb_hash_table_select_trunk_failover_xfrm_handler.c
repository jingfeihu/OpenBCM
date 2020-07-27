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
/* Handler: bcm56780_a0_lta_bcmltx_lb_hash_table_select_trunk_failover_xfrm_handler */
#include <bcmlrd/bcmlrd_types.h>
#include <bcmltd/chip/bcmltd_id.h>
#include <bcmltx/bcmlb/bcmltx_lb_hash_table_select_trunk_failover.h>
#include <bcmdrd/chip/bcm56780_a0_enum.h>
#include <bcmlrd/chip/bcm56780_a0/bcm56780_a0_lrd_xfrm_field_desc.h>

extern const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_lb_hash_table_select_trunk_failover_src_field_desc_s0[];

extern const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_lb_hash_table_select_trunk_failover_src_field_desc_s1[];

extern const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_lb_hash_table_select_trunk_failover_lb_hash_trunk_failover_output_selection_dst_field_desc_d0[];

extern const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_lb_hash_table_select_trunk_failover_lb_hash_trunk_system_failover_output_selection_dst_field_desc_d0[];

static const
bcmltd_field_list_t
bcm56780_a0_lta_bcmltx_lb_hash_table_select_trunk_failover_src_list_s0 = {
    .field_num = 1,
    .field_array = bcm56780_a0_lrd_bcmltx_lb_hash_table_select_trunk_failover_src_field_desc_s0
};

static const
bcmltd_field_list_t
bcm56780_a0_lta_bcmltx_lb_hash_table_select_trunk_failover_src_list_s1 = {
    .field_num = 1,
    .field_array = bcm56780_a0_lrd_bcmltx_lb_hash_table_select_trunk_failover_src_field_desc_s1
};

static const bcmltd_field_list_t
bcm56780_a0_lrd_bcmltx_lb_hash_table_select_trunk_failover_lb_hash_trunk_failover_output_selection_dst_list_d0 = {
    .field_num = 1,
    .field_array = bcm56780_a0_lrd_bcmltx_lb_hash_table_select_trunk_failover_lb_hash_trunk_failover_output_selection_dst_field_desc_d0
};

static const bcmltd_field_list_t
bcm56780_a0_lrd_bcmltx_lb_hash_table_select_trunk_failover_lb_hash_trunk_system_failover_output_selection_dst_list_d0 = {
    .field_num = 1,
    .field_array = bcm56780_a0_lrd_bcmltx_lb_hash_table_select_trunk_failover_lb_hash_trunk_system_failover_output_selection_dst_field_desc_d0
};

static const uint32_t
bcm56780_a0_lta_bcmltx_lb_hash_table_select_trunk_failover_transform_src_s0[1] = {
    LB_HASH_TRUNK_FAILOVER_OUTPUT_SELECTIONt_LB_HASH_INSTANCEf,
};

static const uint32_t
bcm56780_a0_lta_bcmltx_lb_hash_table_select_trunk_failover_transform_src_s1[1] = {
    LB_HASH_TRUNK_SYSTEM_FAILOVER_OUTPUT_SELECTIONt_LB_HASH_INSTANCEf,
};

static const uint32_t
bcm56780_a0_lrd_bcmltx_lb_hash_table_select_trunk_failover_lb_hash_trunk_failover_output_selection_transform_dst_d0[1] = {
    BCMLRD_FIELD_TABLE_SEL,
};

static const uint32_t
bcm56780_a0_lrd_bcmltx_lb_hash_table_select_trunk_failover_lb_hash_trunk_system_failover_output_selection_transform_dst_d0[1] = {
    BCMLRD_FIELD_TABLE_SEL,
};

static const bcmltd_generic_arg_t
bcm56780_a0_lta_bcmltx_lb_hash_table_select_trunk_failover_comp_data = {
    .sid       = LB_HASH_TRUNK_FAILOVER_OUTPUT_SELECTIONt,
    .values    = 0,
    .value     = NULL,
    .user_data = NULL
};

static const bcmltd_generic_arg_t
bcm56780_a0_lta_bcmltx_lb_hash_table_select_trunk_failover_comp_data1 = {
    .sid       = LB_HASH_TRUNK_SYSTEM_FAILOVER_OUTPUT_SELECTIONt,
    .values    = 0,
    .value     = NULL,
    .user_data = NULL
};

static const bcmltd_transform_arg_t
bcm56780_a0_lta_bcmltx_lb_hash_table_select_trunk_failover_xfrm_handler_fwd_arg_s0_d0_t0 = {
    .values      = 0,
    .value       = NULL,
    .tables      = 2,
    .table       = bcm56780_a0_lrd_lb_hash_table_select_trunk_failover_transform_tbl_t0,
    .fields      = 1,
    .field       = bcm56780_a0_lta_bcmltx_lb_hash_table_select_trunk_failover_transform_src_s0,
    .field_list  = &bcm56780_a0_lta_bcmltx_lb_hash_table_select_trunk_failover_src_list_s0,
    .rfields     = 1,
    .rfield      = bcm56780_a0_lrd_bcmltx_lb_hash_table_select_trunk_failover_lb_hash_trunk_failover_output_selection_transform_dst_d0,
    .rfield_list = &bcm56780_a0_lrd_bcmltx_lb_hash_table_select_trunk_failover_lb_hash_trunk_failover_output_selection_dst_list_d0,
    .comp_data   = &bcm56780_a0_lta_bcmltx_lb_hash_table_select_trunk_failover_comp_data
};

static const bcmltd_transform_arg_t
bcm56780_a0_lta_bcmltx_lb_hash_table_select_trunk_failover_xfrm_handler_rev_arg_s0_d0_t0 = {
    .values      = 0,
    .value       = NULL,
    .tables      = 2,
    .table       = bcm56780_a0_lrd_lb_hash_table_select_trunk_failover_transform_tbl_t0,
    .fields      = 1,
    .field       = bcm56780_a0_lrd_bcmltx_lb_hash_table_select_trunk_failover_lb_hash_trunk_failover_output_selection_transform_dst_d0,
    .field_list  = &bcm56780_a0_lrd_bcmltx_lb_hash_table_select_trunk_failover_lb_hash_trunk_failover_output_selection_dst_list_d0,
    .rfields     = 1,
    .rfield      = bcm56780_a0_lta_bcmltx_lb_hash_table_select_trunk_failover_transform_src_s0,
    .rfield_list = &bcm56780_a0_lta_bcmltx_lb_hash_table_select_trunk_failover_src_list_s0,
    .comp_data   = &bcm56780_a0_lta_bcmltx_lb_hash_table_select_trunk_failover_comp_data
};

static const bcmltd_transform_arg_t
bcm56780_a0_lta_bcmltx_lb_hash_table_select_trunk_failover_xfrm_handler_fwd_arg_s1_d0_t1 = {
    .values      = 0,
    .value       = NULL,
    .tables      = 2,
    .table       = bcm56780_a0_lrd_lb_hash_table_select_trunk_failover_transform_tbl_t1,
    .fields      = 1,
    .field       = bcm56780_a0_lta_bcmltx_lb_hash_table_select_trunk_failover_transform_src_s1,
    .field_list  = &bcm56780_a0_lta_bcmltx_lb_hash_table_select_trunk_failover_src_list_s1,
    .rfields     = 1,
    .rfield      = bcm56780_a0_lrd_bcmltx_lb_hash_table_select_trunk_failover_lb_hash_trunk_system_failover_output_selection_transform_dst_d0,
    .rfield_list = &bcm56780_a0_lrd_bcmltx_lb_hash_table_select_trunk_failover_lb_hash_trunk_system_failover_output_selection_dst_list_d0,
    .comp_data   = &bcm56780_a0_lta_bcmltx_lb_hash_table_select_trunk_failover_comp_data1
};

static const bcmltd_transform_arg_t
bcm56780_a0_lta_bcmltx_lb_hash_table_select_trunk_failover_xfrm_handler_rev_arg_s1_d0_t1 = {
    .values      = 0,
    .value       = NULL,
    .tables      = 2,
    .table       = bcm56780_a0_lrd_lb_hash_table_select_trunk_failover_transform_tbl_t1,
    .fields      = 1,
    .field       = bcm56780_a0_lrd_bcmltx_lb_hash_table_select_trunk_failover_lb_hash_trunk_system_failover_output_selection_transform_dst_d0,
    .field_list  = &bcm56780_a0_lrd_bcmltx_lb_hash_table_select_trunk_failover_lb_hash_trunk_system_failover_output_selection_dst_list_d0,
    .rfields     = 1,
    .rfield      = bcm56780_a0_lta_bcmltx_lb_hash_table_select_trunk_failover_transform_src_s1,
    .rfield_list = &bcm56780_a0_lta_bcmltx_lb_hash_table_select_trunk_failover_src_list_s1,
    .comp_data   = &bcm56780_a0_lta_bcmltx_lb_hash_table_select_trunk_failover_comp_data1
};

const bcmltd_xfrm_handler_t
bcm56780_a0_lta_bcmltx_lb_hash_table_select_trunk_failover_xfrm_handler_fwd_s0_d0_t0 = {
    .transform     = bcmltx_lb_hash_table_select_trunk_failover_transform,
    .arg           = &bcm56780_a0_lta_bcmltx_lb_hash_table_select_trunk_failover_xfrm_handler_fwd_arg_s0_d0_t0
};

const bcmltd_xfrm_handler_t
bcm56780_a0_lta_bcmltx_lb_hash_table_select_trunk_failover_xfrm_handler_fwd_s1_d0_t1 = {
    .transform     = bcmltx_lb_hash_table_select_trunk_failover_transform,
    .arg           = &bcm56780_a0_lta_bcmltx_lb_hash_table_select_trunk_failover_xfrm_handler_fwd_arg_s1_d0_t1
};

const bcmltd_xfrm_handler_t
bcm56780_a0_lta_bcmltx_lb_hash_table_select_trunk_failover_xfrm_handler_rev_s0_d0_t0 = {
    .transform     = bcmltx_lb_hash_table_select_trunk_failover_rev_transform,
    .arg           = &bcm56780_a0_lta_bcmltx_lb_hash_table_select_trunk_failover_xfrm_handler_rev_arg_s0_d0_t0
};

const bcmltd_xfrm_handler_t
bcm56780_a0_lta_bcmltx_lb_hash_table_select_trunk_failover_xfrm_handler_rev_s1_d0_t1 = {
    .transform     = bcmltx_lb_hash_table_select_trunk_failover_rev_transform,
    .arg           = &bcm56780_a0_lta_bcmltx_lb_hash_table_select_trunk_failover_xfrm_handler_rev_arg_s1_d0_t1
};


