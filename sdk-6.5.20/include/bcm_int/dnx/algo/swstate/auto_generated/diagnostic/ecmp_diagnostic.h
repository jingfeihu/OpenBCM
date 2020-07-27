/** \file algo/swstate/auto_generated/diagnostic/ecmp_diagnostic.h
 *
 * sw state functions declarations
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 */
/*
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#ifndef __ECMP_DIAGNOSTIC_H__
#define __ECMP_DIAGNOSTIC_H__

#include <soc/dnxc/swstate/dnxc_sw_state_h_includes.h>
#include <soc/dnxc/swstate/dnx_sw_state_dump.h>
#include <soc/dnxc/swstate/dnx_sw_state_size.h>
#include <soc/dnxc/swstate/dnx_sw_state_diagnostic_operation_counters.h>
#include <bcm_int/dnx/algo/swstate/auto_generated/types/ecmp_types.h>
#include <bcm_int/dnx/algo/res_mngr/res_mngr.h>
#include <bcm_int/dnx/algo/res_mngr/res_mngr_internal.h>
#include <soc/dnxc/swstate/callbacks/sw_state_ll_callbacks.h>
#include <soc/dnxc/swstate/types/sw_state_linked_list.h>
#if defined(DNX_SW_STATE_DIAGNOSTIC)
typedef enum {
    ECMP_DB_INFO_INFO,
    ECMP_DB_INFO_MEMBERS_TBL_ADDR_PROFILE_LINK_LISTS_INFO,
    ECMP_DB_INFO_CONSISTENT_HASHING_MANAGER_HANDLE_INFO,
    ECMP_DB_INFO_ECMP_RES_MANAGER_INFO,
    ECMP_DB_INFO_ECMP_EXTENDED_RES_MANAGER_INFO,
    ECMP_DB_INFO_ECMP_HIERARCHY_INFO,
    ECMP_DB_INFO_ECMP_NOF_USED_ELEMENTS_PER_GRAIN_INFO,
    ECMP_DB_INFO_ECMP_FEC_MEMBERS_TABLE_INFO,
    ECMP_DB_INFO_ECMP_GROUP_SIZE_MINUS_ONE_INFO,
    ECMP_DB_INFO_INFO_NOF_ENTRIES
} sw_state_ecmp_db_info_layout_e;


extern dnx_sw_state_diagnostic_info_t ecmp_db_info_info[SOC_MAX_NUM_DEVICES][ECMP_DB_INFO_INFO_NOF_ENTRIES];

extern const char* ecmp_db_info_layout_str[ECMP_DB_INFO_INFO_NOF_ENTRIES];
int ecmp_db_info_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int ecmp_db_info_members_tbl_addr_profile_link_lists_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int ecmp_db_info_consistent_hashing_manager_handle_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int ecmp_db_info_ecmp_res_manager_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int ecmp_db_info_ecmp_extended_res_manager_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int ecmp_db_info_ecmp_hierarchy_dump(
    int unit, int ecmp_hierarchy_idx_0, dnx_sw_state_dump_filters_t filters);

int ecmp_db_info_ecmp_nof_used_elements_per_grain_dump(
    int unit, int ecmp_nof_used_elements_per_grain_idx_0, dnx_sw_state_dump_filters_t filters);

int ecmp_db_info_ecmp_fec_members_table_dump(
    int unit, int ecmp_fec_members_table_idx_0, int ecmp_fec_members_table_idx_1, dnx_sw_state_dump_filters_t filters);

int ecmp_db_info_ecmp_group_size_minus_one_dump(
    int unit, int ecmp_group_size_minus_one_idx_0, int ecmp_group_size_minus_one_idx_1, dnx_sw_state_dump_filters_t filters);

#endif /* DNX_SW_STATE_DIAGNOSTIC */

#endif /* __ECMP_DIAGNOSTIC_H__ */
