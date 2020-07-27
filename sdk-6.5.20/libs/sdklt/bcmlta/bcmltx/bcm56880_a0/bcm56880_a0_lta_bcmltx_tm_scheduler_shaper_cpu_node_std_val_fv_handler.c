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
/* Handler: bcm56880_a0_lta_bcmltx_tm_scheduler_shaper_cpu_node_std_val_fv_handler */
#include <bcmltd/chip/bcmltd_id.h>
#include <bcmdrd/chip/bcm56880_a0_enum.h>
#include <bcmltx/bcmltx_std_table_validator.h>

static const uint32_t
bcm56880_a0_lta_bcmltx_tm_scheduler_shaper_cpu_node_std_val_validate_src[4] = {
    TM_SCHEDULER_SHAPER_CPU_NODEt_MAX_BANDWIDTH_KBPS_OPERf,
    TM_SCHEDULER_SHAPER_CPU_NODEt_MIN_BANDWIDTH_KBPS_OPERf,
    TM_SCHEDULER_SHAPER_CPU_NODEt_MAX_BURST_SIZE_KBITS_OPERf,
    TM_SCHEDULER_SHAPER_CPU_NODEt_MIN_BURST_SIZE_KBITS_OPERf,
};

static const bcmltd_generic_arg_t
bcm56880_a0_lta_bcmltx_tm_scheduler_shaper_cpu_node_std_val_comp_data = {
    .sid       = TM_SCHEDULER_SHAPER_CPU_NODEt,
    .values    = 0,
    .value     = NULL,
    .user_data = NULL
};

const bcmltd_field_val_arg_t
bcm56880_a0_lta_bcmltx_tm_scheduler_shaper_cpu_node_std_val_fv_handler_arg = {
    .values = 0,
    .value = NULL,
    .fields = 4,
    .field = bcm56880_a0_lta_bcmltx_tm_scheduler_shaper_cpu_node_std_val_validate_src,
    .comp_data = &bcm56880_a0_lta_bcmltx_tm_scheduler_shaper_cpu_node_std_val_comp_data
};

const bcmltd_field_val_handler_t
bcm56880_a0_lta_bcmltx_tm_scheduler_shaper_cpu_node_std_val_fv_handler = {
    .validate = bcmltx_std_table_validator,
    .arg      = &bcm56880_a0_lta_bcmltx_tm_scheduler_shaper_cpu_node_std_val_fv_handler_arg
};


