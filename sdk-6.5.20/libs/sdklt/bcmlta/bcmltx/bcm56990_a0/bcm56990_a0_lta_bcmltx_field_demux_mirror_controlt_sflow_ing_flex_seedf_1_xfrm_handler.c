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
/* Handler: bcm56990_a0_lta_bcmltx_field_demux_mirror_controlt_sflow_ing_flex_seedf_1_xfrm_handler */
#include <bcmlrd/bcmlrd_types.h>
#include <bcmltd/chip/bcmltd_id.h>
#include <bcmltx/bcmltx_field_demux.h>
#include <bcmdrd/chip/bcm56990_a0_enum.h>
#include <bcmlrd/chip/bcm56990_a0/bcm56990_a0_lrd_xfrm_field_desc.h>


extern const bcmltd_field_desc_t
bcm56990_a0_lrd_field_demux_mirror_controlt_sflow_ing_flex_seedf_1_src_field_desc_s1[];

static const bcmltd_field_desc_t
bcm56990_a0_lta_bcmltx_field_demux_mirror_controlt_sflow_ing_flex_seedf_1_dst_field_desc[2] = {
    {
        .field_id  = BCMLTD_INTERNAL_FIELD_BASE + 55,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 15,
        .entry_idx = 0,
        .sym       = "SFLOW_ING_FLEX_RAND_SEED_INST1m.SEED_LOf[15:0]",
        .reserved  = 0
    },
    {
        .field_id  = BCMLTD_INTERNAL_FIELD_BASE + 56,
        .field_idx = 0,
        .minbit    = 16,
        .maxbit    = 32,
        .entry_idx = 0,
        .sym       = "SFLOW_ING_FLEX_RAND_SEED_INST1m.SEED_HIf[16:0]",
        .reserved  = 0
    },
};

static const
bcmltd_field_list_t
bcm56990_a0_lta_bcmltx_field_demux_mirror_controlt_sflow_ing_flex_seedf_1_src_list_s0 = {
    .field_num = 2,
    .field_array = bcm56990_a0_lrd_field_demux_mirror_controlt_sflow_ing_flex_seedf_1_src_field_desc_s1
};

static const bcmltd_field_list_t
bcm56990_a0_lta_bcmltx_field_demux_mirror_controlt_sflow_ing_flex_seedf_1_dst_list_d0 = {
    .field_num = 2,
    .field_array = bcm56990_a0_lta_bcmltx_field_demux_mirror_controlt_sflow_ing_flex_seedf_1_dst_field_desc
};

static const uint32_t
bcm56990_a0_lta_bcmltx_field_demux_mirror_controlt_sflow_ing_flex_seedf_1_transform_src_s0[1] = {
    MIRROR_CONTROLt_SFLOW_ING_FLEX_SEEDf,
};

static const uint32_t
bcm56990_a0_lta_bcmltx_field_demux_mirror_controlt_sflow_ing_flex_seedf_1_transform_dst_d0[2] = {
    BCMLTD_INTERNAL_FIELD_BASE + 55,
    BCMLTD_INTERNAL_FIELD_BASE + 56,
};

static const bcmltd_generic_arg_t
bcm56990_a0_lta_bcmltx_field_demux_mirror_controlt_sflow_ing_flex_seedf_1_comp_data = {
    .sid       = MIRROR_CONTROLt,
    .values    = 0,
    .value     = NULL,
    .user_data = NULL
};

static const bcmltd_transform_arg_t
bcm56990_a0_lta_bcmltx_field_demux_mirror_controlt_sflow_ing_flex_seedf_1_xfrm_handler_fwd_arg_s0_d0 = {
    .values      = 0,
    .value       = NULL,
    .tables      = 0,
    .table       = NULL,
    .fields      = 1,
    .field       = bcm56990_a0_lta_bcmltx_field_demux_mirror_controlt_sflow_ing_flex_seedf_1_transform_src_s0,
    .field_list  = &bcm56990_a0_lta_bcmltx_field_demux_mirror_controlt_sflow_ing_flex_seedf_1_src_list_s0,
    .rfields     = 2,
    .rfield      = bcm56990_a0_lta_bcmltx_field_demux_mirror_controlt_sflow_ing_flex_seedf_1_transform_dst_d0,
    .rfield_list = &bcm56990_a0_lta_bcmltx_field_demux_mirror_controlt_sflow_ing_flex_seedf_1_dst_list_d0,
    .comp_data   = &bcm56990_a0_lta_bcmltx_field_demux_mirror_controlt_sflow_ing_flex_seedf_1_comp_data
};

const bcmltd_xfrm_handler_t
bcm56990_a0_lta_bcmltx_field_demux_mirror_controlt_sflow_ing_flex_seedf_1_xfrm_handler_fwd_s0_d0 = {
    .transform     = bcmltx_field_demux_transform,
    .arg           = &bcm56990_a0_lta_bcmltx_field_demux_mirror_controlt_sflow_ing_flex_seedf_1_xfrm_handler_fwd_arg_s0_d0
};


