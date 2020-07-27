/** \file algo/swstate/auto_generated/access/dnx_algo_flexe_general_access.h
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

#ifndef __DNX_ALGO_FLEXE_GENERAL_ACCESS_H__
#define __DNX_ALGO_FLEXE_GENERAL_ACCESS_H__

#ifdef BCM_DNX_SUPPORT
#include <soc/dnxc/swstate/dnxc_sw_state_h_includes.h>
#include <bcm_int/dnx/algo/swstate/auto_generated/types/dnx_algo_flexe_general_types.h>
#include <bcm/port.h>
#include <bcm_int/dnx/algo/res_mngr/res_mngr.h>
#include <bcm_int/dnx/algo/res_mngr/res_mngr_internal.h>
#include <soc/dnx/dnx_data/auto_generated/dnx_data_nif.h>
#include <soc/dnxc/swstate/types/sw_state_mutex.h>
#include <soc/dnxc/swstate/types/sw_state_pbmp.h>
/*
 * TYPEDEFs
 */

/**
 * implemented by: dnx_algo_flexe_general_db_is_init
 */
typedef int (*dnx_algo_flexe_general_db_is_init_cb)(
    int unit, uint8 *is_init);

/**
 * implemented by: dnx_algo_flexe_general_db_init
 */
typedef int (*dnx_algo_flexe_general_db_init_cb)(
    int unit);

/**
 * implemented by: dnx_algo_flexe_general_db_resource_alloc_client_channel_set
 */
typedef int (*dnx_algo_flexe_general_db_resource_alloc_client_channel_set_cb)(
    int unit, dnx_algo_res_t client_channel);

/**
 * implemented by: dnx_algo_flexe_general_db_resource_alloc_client_channel_get
 */
typedef int (*dnx_algo_flexe_general_db_resource_alloc_client_channel_get_cb)(
    int unit, dnx_algo_res_t *client_channel);

/**
 * implemented by: dnx_algo_flexe_general_db_resource_alloc_client_channel_create
 */
typedef int (*dnx_algo_flexe_general_db_resource_alloc_client_channel_create_cb)(
    int unit, dnx_algo_res_create_data_t * data, void *extra_arguments);

/**
 * implemented by: dnx_algo_flexe_general_db_resource_alloc_client_channel_allocate_single
 */
typedef int (*dnx_algo_flexe_general_db_resource_alloc_client_channel_allocate_single_cb)(
    int unit, uint32 flags, void *extra_arguments, int *element);

/**
 * implemented by: dnx_algo_flexe_general_db_resource_alloc_client_channel_free_single
 */
typedef int (*dnx_algo_flexe_general_db_resource_alloc_client_channel_free_single_cb)(
    int unit, int element);

/**
 * implemented by: dnx_algo_flexe_general_db_resource_alloc_client_channel_is_allocated
 */
typedef int (*dnx_algo_flexe_general_db_resource_alloc_client_channel_is_allocated_cb)(
    int unit, int element, uint8 *is_allocated);

/**
 * implemented by: dnx_algo_flexe_general_db_resource_alloc_mac_channel_set
 */
typedef int (*dnx_algo_flexe_general_db_resource_alloc_mac_channel_set_cb)(
    int unit, dnx_algo_res_t mac_channel);

/**
 * implemented by: dnx_algo_flexe_general_db_resource_alloc_mac_channel_get
 */
typedef int (*dnx_algo_flexe_general_db_resource_alloc_mac_channel_get_cb)(
    int unit, dnx_algo_res_t *mac_channel);

/**
 * implemented by: dnx_algo_flexe_general_db_resource_alloc_mac_channel_create
 */
typedef int (*dnx_algo_flexe_general_db_resource_alloc_mac_channel_create_cb)(
    int unit, dnx_algo_res_create_data_t * data, void *extra_arguments);

/**
 * implemented by: dnx_algo_flexe_general_db_resource_alloc_mac_channel_allocate_single
 */
typedef int (*dnx_algo_flexe_general_db_resource_alloc_mac_channel_allocate_single_cb)(
    int unit, uint32 flags, void *extra_arguments, int *element);

/**
 * implemented by: dnx_algo_flexe_general_db_resource_alloc_mac_channel_free_single
 */
typedef int (*dnx_algo_flexe_general_db_resource_alloc_mac_channel_free_single_cb)(
    int unit, int element);

/**
 * implemented by: dnx_algo_flexe_general_db_resource_alloc_mac_channel_is_allocated
 */
typedef int (*dnx_algo_flexe_general_db_resource_alloc_mac_channel_is_allocated_cb)(
    int unit, int element, uint8 *is_allocated);

/**
 * implemented by: dnx_algo_flexe_general_db_resource_alloc_sar_channel_set
 */
typedef int (*dnx_algo_flexe_general_db_resource_alloc_sar_channel_set_cb)(
    int unit, dnx_algo_res_t sar_channel);

/**
 * implemented by: dnx_algo_flexe_general_db_resource_alloc_sar_channel_get
 */
typedef int (*dnx_algo_flexe_general_db_resource_alloc_sar_channel_get_cb)(
    int unit, dnx_algo_res_t *sar_channel);

/**
 * implemented by: dnx_algo_flexe_general_db_resource_alloc_sar_channel_create
 */
typedef int (*dnx_algo_flexe_general_db_resource_alloc_sar_channel_create_cb)(
    int unit, dnx_algo_res_create_data_t * data, void *extra_arguments);

/**
 * implemented by: dnx_algo_flexe_general_db_resource_alloc_sar_channel_allocate_single
 */
typedef int (*dnx_algo_flexe_general_db_resource_alloc_sar_channel_allocate_single_cb)(
    int unit, uint32 flags, void *extra_arguments, int *element);

/**
 * implemented by: dnx_algo_flexe_general_db_resource_alloc_sar_channel_free_single
 */
typedef int (*dnx_algo_flexe_general_db_resource_alloc_sar_channel_free_single_cb)(
    int unit, int element);

/**
 * implemented by: dnx_algo_flexe_general_db_resource_alloc_sar_channel_is_allocated
 */
typedef int (*dnx_algo_flexe_general_db_resource_alloc_sar_channel_is_allocated_cb)(
    int unit, int element, uint8 *is_allocated);

/**
 * implemented by: dnx_algo_flexe_general_db_resource_alloc_flexe_core_port_set
 */
typedef int (*dnx_algo_flexe_general_db_resource_alloc_flexe_core_port_set_cb)(
    int unit, dnx_algo_res_t flexe_core_port);

/**
 * implemented by: dnx_algo_flexe_general_db_resource_alloc_flexe_core_port_get
 */
typedef int (*dnx_algo_flexe_general_db_resource_alloc_flexe_core_port_get_cb)(
    int unit, dnx_algo_res_t *flexe_core_port);

/**
 * implemented by: dnx_algo_flexe_general_db_resource_alloc_flexe_core_port_create
 */
typedef int (*dnx_algo_flexe_general_db_resource_alloc_flexe_core_port_create_cb)(
    int unit, dnx_algo_res_create_data_t * data, void *extra_arguments);

/**
 * implemented by: dnx_algo_flexe_general_db_resource_alloc_flexe_core_port_allocate_several
 */
typedef int (*dnx_algo_flexe_general_db_resource_alloc_flexe_core_port_allocate_several_cb)(
    int unit, uint32 flags, uint32 nof_elements, void *extra_arguments, int *element);

/**
 * implemented by: dnx_algo_flexe_general_db_resource_alloc_flexe_core_port_free_several
 */
typedef int (*dnx_algo_flexe_general_db_resource_alloc_flexe_core_port_free_several_cb)(
    int unit, uint32 nof_elements, int element);

/**
 * implemented by: dnx_algo_flexe_general_db_resource_alloc_flexe_core_port_is_allocated
 */
typedef int (*dnx_algo_flexe_general_db_resource_alloc_flexe_core_port_is_allocated_cb)(
    int unit, int element, uint8 *is_allocated);

/**
 * implemented by: dnx_algo_flexe_general_db_resource_alloc_rmc_id_set
 */
typedef int (*dnx_algo_flexe_general_db_resource_alloc_rmc_id_set_cb)(
    int unit, dnx_algo_res_t rmc_id);

/**
 * implemented by: dnx_algo_flexe_general_db_resource_alloc_rmc_id_get
 */
typedef int (*dnx_algo_flexe_general_db_resource_alloc_rmc_id_get_cb)(
    int unit, dnx_algo_res_t *rmc_id);

/**
 * implemented by: dnx_algo_flexe_general_db_resource_alloc_rmc_id_create
 */
typedef int (*dnx_algo_flexe_general_db_resource_alloc_rmc_id_create_cb)(
    int unit, dnx_algo_res_create_data_t * data, void *extra_arguments);

/**
 * implemented by: dnx_algo_flexe_general_db_resource_alloc_rmc_id_allocate_single
 */
typedef int (*dnx_algo_flexe_general_db_resource_alloc_rmc_id_allocate_single_cb)(
    int unit, uint32 flags, void *extra_arguments, int *element);

/**
 * implemented by: dnx_algo_flexe_general_db_resource_alloc_rmc_id_free_single
 */
typedef int (*dnx_algo_flexe_general_db_resource_alloc_rmc_id_free_single_cb)(
    int unit, int element);

/**
 * implemented by: dnx_algo_flexe_general_db_resource_alloc_rmc_id_is_allocated
 */
typedef int (*dnx_algo_flexe_general_db_resource_alloc_rmc_id_is_allocated_cb)(
    int unit, int element, uint8 *is_allocated);

/**
 * implemented by: dnx_algo_flexe_general_db_group_info_set
 */
typedef int (*dnx_algo_flexe_general_db_group_info_set_cb)(
    int unit, uint32 group_info_idx_0, CONST dnx_algo_flexe_general_group_info_t *group_info);

/**
 * implemented by: dnx_algo_flexe_general_db_group_info_get
 */
typedef int (*dnx_algo_flexe_general_db_group_info_get_cb)(
    int unit, uint32 group_info_idx_0, dnx_algo_flexe_general_group_info_t *group_info);

/**
 * implemented by: dnx_algo_flexe_general_db_group_info_alloc
 */
typedef int (*dnx_algo_flexe_general_db_group_info_alloc_cb)(
    int unit, uint32 nof_instances_to_alloc_0);

/**
 * implemented by: dnx_algo_flexe_general_db_group_info_valid_set
 */
typedef int (*dnx_algo_flexe_general_db_group_info_valid_set_cb)(
    int unit, uint32 group_info_idx_0, int valid);

/**
 * implemented by: dnx_algo_flexe_general_db_group_info_valid_get
 */
typedef int (*dnx_algo_flexe_general_db_group_info_valid_get_cb)(
    int unit, uint32 group_info_idx_0, int *valid);

/**
 * implemented by: dnx_algo_flexe_general_db_group_info_group_id_set
 */
typedef int (*dnx_algo_flexe_general_db_group_info_group_id_set_cb)(
    int unit, uint32 group_info_idx_0, int group_id);

/**
 * implemented by: dnx_algo_flexe_general_db_group_info_group_id_get
 */
typedef int (*dnx_algo_flexe_general_db_group_info_group_id_get_cb)(
    int unit, uint32 group_info_idx_0, int *group_id);

/**
 * implemented by: dnx_algo_flexe_general_db_group_info_phy_ports_set
 */
typedef int (*dnx_algo_flexe_general_db_group_info_phy_ports_set_cb)(
    int unit, uint32 group_info_idx_0, bcm_pbmp_t phy_ports);

/**
 * implemented by: dnx_algo_flexe_general_db_group_info_phy_ports_get
 */
typedef int (*dnx_algo_flexe_general_db_group_info_phy_ports_get_cb)(
    int unit, uint32 group_info_idx_0, bcm_pbmp_t *phy_ports);

/**
 * implemented by: dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_neq
 */
typedef int (*dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_neq_cb)(
    int unit, uint32 group_info_idx_0, _shr_pbmp_t input_pbmp, uint8 *result);

/**
 * implemented by: dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_eq
 */
typedef int (*dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_eq_cb)(
    int unit, uint32 group_info_idx_0, _shr_pbmp_t input_pbmp, uint8 *result);

/**
 * implemented by: dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_member
 */
typedef int (*dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_member_cb)(
    int unit, uint32 group_info_idx_0, uint32 _input_port, uint8 *result);

/**
 * implemented by: dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_not_null
 */
typedef int (*dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_not_null_cb)(
    int unit, uint32 group_info_idx_0, uint8 *result);

/**
 * implemented by: dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_is_null
 */
typedef int (*dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_is_null_cb)(
    int unit, uint32 group_info_idx_0, uint8 *result);

/**
 * implemented by: dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_count
 */
typedef int (*dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_count_cb)(
    int unit, uint32 group_info_idx_0, int *result);

/**
 * implemented by: dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_xor
 */
typedef int (*dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_xor_cb)(
    int unit, uint32 group_info_idx_0, _shr_pbmp_t input_pbmp);

/**
 * implemented by: dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_remove
 */
typedef int (*dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_remove_cb)(
    int unit, uint32 group_info_idx_0, _shr_pbmp_t input_pbmp);

/**
 * implemented by: dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_assign
 */
typedef int (*dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_assign_cb)(
    int unit, uint32 group_info_idx_0, _shr_pbmp_t input_pbmp);

/**
 * implemented by: dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_get
 */
typedef int (*dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_get_cb)(
    int unit, uint32 group_info_idx_0, _shr_pbmp_t *output_pbmp);

/**
 * implemented by: dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_and
 */
typedef int (*dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_and_cb)(
    int unit, uint32 group_info_idx_0, _shr_pbmp_t input_pbmp);

/**
 * implemented by: dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_negate
 */
typedef int (*dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_negate_cb)(
    int unit, uint32 group_info_idx_0, _shr_pbmp_t input_pbmp);

/**
 * implemented by: dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_or
 */
typedef int (*dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_or_cb)(
    int unit, uint32 group_info_idx_0, _shr_pbmp_t input_pbmp);

/**
 * implemented by: dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_clear
 */
typedef int (*dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_clear_cb)(
    int unit, uint32 group_info_idx_0);

/**
 * implemented by: dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_port_add
 */
typedef int (*dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_port_add_cb)(
    int unit, uint32 group_info_idx_0, uint32 _input_port);

/**
 * implemented by: dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_port_flip
 */
typedef int (*dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_port_flip_cb)(
    int unit, uint32 group_info_idx_0, uint32 _input_port);

/**
 * implemented by: dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_port_remove
 */
typedef int (*dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_port_remove_cb)(
    int unit, uint32 group_info_idx_0, uint32 _input_port);

/**
 * implemented by: dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_port_set
 */
typedef int (*dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_port_set_cb)(
    int unit, uint32 group_info_idx_0, uint32 _input_port);

/**
 * implemented by: dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_ports_range_add
 */
typedef int (*dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_ports_range_add_cb)(
    int unit, uint32 group_info_idx_0, uint32 _first_port, uint32 _range);

/**
 * implemented by: dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_fmt
 */
typedef int (*dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_fmt_cb)(
    int unit, uint32 group_info_idx_0, char* _buffer);

/**
 * implemented by: dnx_algo_flexe_general_db_group_info_demux_cal_slots_set
 */
typedef int (*dnx_algo_flexe_general_db_group_info_demux_cal_slots_set_cb)(
    int unit, uint32 group_info_idx_0, uint32 demux_cal_slots_idx_0, uint32 demux_cal_slots_idx_1, int demux_cal_slots);

/**
 * implemented by: dnx_algo_flexe_general_db_group_info_demux_cal_slots_get
 */
typedef int (*dnx_algo_flexe_general_db_group_info_demux_cal_slots_get_cb)(
    int unit, uint32 group_info_idx_0, uint32 demux_cal_slots_idx_0, uint32 demux_cal_slots_idx_1, int *demux_cal_slots);

/**
 * implemented by: dnx_algo_flexe_general_db_group_info_mux_cal_slots_set
 */
typedef int (*dnx_algo_flexe_general_db_group_info_mux_cal_slots_set_cb)(
    int unit, uint32 group_info_idx_0, uint32 mux_cal_slots_idx_0, uint32 mux_cal_slots_idx_1, int mux_cal_slots);

/**
 * implemented by: dnx_algo_flexe_general_db_group_info_mux_cal_slots_get
 */
typedef int (*dnx_algo_flexe_general_db_group_info_mux_cal_slots_get_cb)(
    int unit, uint32 group_info_idx_0, uint32 mux_cal_slots_idx_0, uint32 mux_cal_slots_idx_1, int *mux_cal_slots);

/**
 * implemented by: dnx_algo_flexe_general_db_group_info_is_bypass_set
 */
typedef int (*dnx_algo_flexe_general_db_group_info_is_bypass_set_cb)(
    int unit, uint32 group_info_idx_0, int is_bypass);

/**
 * implemented by: dnx_algo_flexe_general_db_group_info_is_bypass_get
 */
typedef int (*dnx_algo_flexe_general_db_group_info_is_bypass_get_cb)(
    int unit, uint32 group_info_idx_0, int *is_bypass);

/**
 * implemented by: dnx_algo_flexe_general_db_group_info_cal_slots_unaligned_set
 */
typedef int (*dnx_algo_flexe_general_db_group_info_cal_slots_unaligned_set_cb)(
    int unit, uint32 group_info_idx_0, uint8 cal_slots_unaligned);

/**
 * implemented by: dnx_algo_flexe_general_db_group_info_cal_slots_unaligned_get
 */
typedef int (*dnx_algo_flexe_general_db_group_info_cal_slots_unaligned_get_cb)(
    int unit, uint32 group_info_idx_0, uint8 *cal_slots_unaligned);

/**
 * implemented by: dnx_algo_flexe_general_db_fifo_link_list_set
 */
typedef int (*dnx_algo_flexe_general_db_fifo_link_list_set_cb)(
    int unit, uint32 fifo_link_list_idx_0, uint32 fifo_link_list_idx_1, int fifo_link_list);

/**
 * implemented by: dnx_algo_flexe_general_db_fifo_link_list_get
 */
typedef int (*dnx_algo_flexe_general_db_fifo_link_list_get_cb)(
    int unit, uint32 fifo_link_list_idx_0, uint32 fifo_link_list_idx_1, int *fifo_link_list);

/**
 * implemented by: dnx_algo_flexe_general_db_fifo_link_list_alloc
 */
typedef int (*dnx_algo_flexe_general_db_fifo_link_list_alloc_cb)(
    int unit, uint32 fifo_link_list_idx_0, uint32 nof_instances_to_alloc_1);

/**
 * implemented by: dnx_algo_flexe_general_db_flexe_core_is_active_set
 */
typedef int (*dnx_algo_flexe_general_db_flexe_core_is_active_set_cb)(
    int unit, uint8 flexe_core_is_active);

/**
 * implemented by: dnx_algo_flexe_general_db_flexe_core_is_active_get
 */
typedef int (*dnx_algo_flexe_general_db_flexe_core_is_active_get_cb)(
    int unit, uint8 *flexe_core_is_active);

/**
 * implemented by: dnx_algo_flexe_general_db_tiny_mac_access_mutex_create
 */
typedef int (*dnx_algo_flexe_general_db_tiny_mac_access_mutex_create_cb)(
    int unit);

/**
 * implemented by: dnx_algo_flexe_general_db_tiny_mac_access_mutex_is_created
 */
typedef int (*dnx_algo_flexe_general_db_tiny_mac_access_mutex_is_created_cb)(
    int unit, uint8 *is_created);

/**
 * implemented by: dnx_algo_flexe_general_db_tiny_mac_access_mutex_take
 */
typedef int (*dnx_algo_flexe_general_db_tiny_mac_access_mutex_take_cb)(
    int unit, int usec);

/**
 * implemented by: dnx_algo_flexe_general_db_tiny_mac_access_mutex_give
 */
typedef int (*dnx_algo_flexe_general_db_tiny_mac_access_mutex_give_cb)(
    int unit);

/*
 * STRUCTs
 */

/**
 * This structure holds the access functions for the variable client_channel
 */
typedef struct {
    dnx_algo_flexe_general_db_resource_alloc_client_channel_set_cb set;
    dnx_algo_flexe_general_db_resource_alloc_client_channel_get_cb get;
    dnx_algo_flexe_general_db_resource_alloc_client_channel_create_cb create;
    dnx_algo_flexe_general_db_resource_alloc_client_channel_allocate_single_cb allocate_single;
    dnx_algo_flexe_general_db_resource_alloc_client_channel_free_single_cb free_single;
    dnx_algo_flexe_general_db_resource_alloc_client_channel_is_allocated_cb is_allocated;
} dnx_algo_flexe_general_db_resource_alloc_client_channel_cbs;

/**
 * This structure holds the access functions for the variable mac_channel
 */
typedef struct {
    dnx_algo_flexe_general_db_resource_alloc_mac_channel_set_cb set;
    dnx_algo_flexe_general_db_resource_alloc_mac_channel_get_cb get;
    dnx_algo_flexe_general_db_resource_alloc_mac_channel_create_cb create;
    dnx_algo_flexe_general_db_resource_alloc_mac_channel_allocate_single_cb allocate_single;
    dnx_algo_flexe_general_db_resource_alloc_mac_channel_free_single_cb free_single;
    dnx_algo_flexe_general_db_resource_alloc_mac_channel_is_allocated_cb is_allocated;
} dnx_algo_flexe_general_db_resource_alloc_mac_channel_cbs;

/**
 * This structure holds the access functions for the variable sar_channel
 */
typedef struct {
    dnx_algo_flexe_general_db_resource_alloc_sar_channel_set_cb set;
    dnx_algo_flexe_general_db_resource_alloc_sar_channel_get_cb get;
    dnx_algo_flexe_general_db_resource_alloc_sar_channel_create_cb create;
    dnx_algo_flexe_general_db_resource_alloc_sar_channel_allocate_single_cb allocate_single;
    dnx_algo_flexe_general_db_resource_alloc_sar_channel_free_single_cb free_single;
    dnx_algo_flexe_general_db_resource_alloc_sar_channel_is_allocated_cb is_allocated;
} dnx_algo_flexe_general_db_resource_alloc_sar_channel_cbs;

/**
 * This structure holds the access functions for the variable flexe_core_port
 */
typedef struct {
    dnx_algo_flexe_general_db_resource_alloc_flexe_core_port_set_cb set;
    dnx_algo_flexe_general_db_resource_alloc_flexe_core_port_get_cb get;
    dnx_algo_flexe_general_db_resource_alloc_flexe_core_port_create_cb create;
    dnx_algo_flexe_general_db_resource_alloc_flexe_core_port_allocate_several_cb allocate_several;
    dnx_algo_flexe_general_db_resource_alloc_flexe_core_port_free_several_cb free_several;
    dnx_algo_flexe_general_db_resource_alloc_flexe_core_port_is_allocated_cb is_allocated;
} dnx_algo_flexe_general_db_resource_alloc_flexe_core_port_cbs;

/**
 * This structure holds the access functions for the variable rmc_id
 */
typedef struct {
    dnx_algo_flexe_general_db_resource_alloc_rmc_id_set_cb set;
    dnx_algo_flexe_general_db_resource_alloc_rmc_id_get_cb get;
    dnx_algo_flexe_general_db_resource_alloc_rmc_id_create_cb create;
    dnx_algo_flexe_general_db_resource_alloc_rmc_id_allocate_single_cb allocate_single;
    dnx_algo_flexe_general_db_resource_alloc_rmc_id_free_single_cb free_single;
    dnx_algo_flexe_general_db_resource_alloc_rmc_id_is_allocated_cb is_allocated;
} dnx_algo_flexe_general_db_resource_alloc_rmc_id_cbs;

/**
 * This structure holds the access functions for the variable dnx_algo_flexe_general_resource_alloc_t
 */
typedef struct {
    /**
     * Access struct for client_channel
     */
    dnx_algo_flexe_general_db_resource_alloc_client_channel_cbs client_channel;
    /**
     * Access struct for mac_channel
     */
    dnx_algo_flexe_general_db_resource_alloc_mac_channel_cbs mac_channel;
    /**
     * Access struct for sar_channel
     */
    dnx_algo_flexe_general_db_resource_alloc_sar_channel_cbs sar_channel;
    /**
     * Access struct for flexe_core_port
     */
    dnx_algo_flexe_general_db_resource_alloc_flexe_core_port_cbs flexe_core_port;
    /**
     * Access struct for rmc_id
     */
    dnx_algo_flexe_general_db_resource_alloc_rmc_id_cbs rmc_id;
} dnx_algo_flexe_general_db_resource_alloc_cbs;

/**
 * This structure holds the access functions for the variable valid
 */
typedef struct {
    dnx_algo_flexe_general_db_group_info_valid_set_cb set;
    dnx_algo_flexe_general_db_group_info_valid_get_cb get;
} dnx_algo_flexe_general_db_group_info_valid_cbs;

/**
 * This structure holds the access functions for the variable group_id
 */
typedef struct {
    dnx_algo_flexe_general_db_group_info_group_id_set_cb set;
    dnx_algo_flexe_general_db_group_info_group_id_get_cb get;
} dnx_algo_flexe_general_db_group_info_group_id_cbs;

/**
 * This structure holds the access functions for the variable phy_ports
 */
typedef struct {
    dnx_algo_flexe_general_db_group_info_phy_ports_set_cb set;
    dnx_algo_flexe_general_db_group_info_phy_ports_get_cb get;
    dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_neq_cb pbmp_neq;
    dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_eq_cb pbmp_eq;
    dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_member_cb pbmp_member;
    dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_not_null_cb pbmp_not_null;
    dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_is_null_cb pbmp_is_null;
    dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_count_cb pbmp_count;
    dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_xor_cb pbmp_xor;
    dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_remove_cb pbmp_remove;
    dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_assign_cb pbmp_assign;
    dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_get_cb pbmp_get;
    dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_and_cb pbmp_and;
    dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_negate_cb pbmp_negate;
    dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_or_cb pbmp_or;
    dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_clear_cb pbmp_clear;
    dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_port_add_cb pbmp_port_add;
    dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_port_flip_cb pbmp_port_flip;
    dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_port_remove_cb pbmp_port_remove;
    dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_port_set_cb pbmp_port_set;
    dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_ports_range_add_cb pbmp_ports_range_add;
    dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_fmt_cb pbmp_fmt;
} dnx_algo_flexe_general_db_group_info_phy_ports_cbs;

/**
 * This structure holds the access functions for the variable demux_cal_slots
 */
typedef struct {
    dnx_algo_flexe_general_db_group_info_demux_cal_slots_set_cb set;
    dnx_algo_flexe_general_db_group_info_demux_cal_slots_get_cb get;
} dnx_algo_flexe_general_db_group_info_demux_cal_slots_cbs;

/**
 * This structure holds the access functions for the variable mux_cal_slots
 */
typedef struct {
    dnx_algo_flexe_general_db_group_info_mux_cal_slots_set_cb set;
    dnx_algo_flexe_general_db_group_info_mux_cal_slots_get_cb get;
} dnx_algo_flexe_general_db_group_info_mux_cal_slots_cbs;

/**
 * This structure holds the access functions for the variable is_bypass
 */
typedef struct {
    dnx_algo_flexe_general_db_group_info_is_bypass_set_cb set;
    dnx_algo_flexe_general_db_group_info_is_bypass_get_cb get;
} dnx_algo_flexe_general_db_group_info_is_bypass_cbs;

/**
 * This structure holds the access functions for the variable cal_slots_unaligned
 */
typedef struct {
    dnx_algo_flexe_general_db_group_info_cal_slots_unaligned_set_cb set;
    dnx_algo_flexe_general_db_group_info_cal_slots_unaligned_get_cb get;
} dnx_algo_flexe_general_db_group_info_cal_slots_unaligned_cbs;

/**
 * This structure holds the access functions for the variable dnx_algo_flexe_general_group_info_t
 */
typedef struct {
    dnx_algo_flexe_general_db_group_info_set_cb set;
    dnx_algo_flexe_general_db_group_info_get_cb get;
    dnx_algo_flexe_general_db_group_info_alloc_cb alloc;
    /**
     * Access struct for valid
     */
    dnx_algo_flexe_general_db_group_info_valid_cbs valid;
    /**
     * Access struct for group_id
     */
    dnx_algo_flexe_general_db_group_info_group_id_cbs group_id;
    /**
     * Access struct for phy_ports
     */
    dnx_algo_flexe_general_db_group_info_phy_ports_cbs phy_ports;
    /**
     * Access struct for demux_cal_slots
     */
    dnx_algo_flexe_general_db_group_info_demux_cal_slots_cbs demux_cal_slots;
    /**
     * Access struct for mux_cal_slots
     */
    dnx_algo_flexe_general_db_group_info_mux_cal_slots_cbs mux_cal_slots;
    /**
     * Access struct for is_bypass
     */
    dnx_algo_flexe_general_db_group_info_is_bypass_cbs is_bypass;
    /**
     * Access struct for cal_slots_unaligned
     */
    dnx_algo_flexe_general_db_group_info_cal_slots_unaligned_cbs cal_slots_unaligned;
} dnx_algo_flexe_general_db_group_info_cbs;

/**
 * This structure holds the access functions for the variable fifo_link_list
 */
typedef struct {
    dnx_algo_flexe_general_db_fifo_link_list_set_cb set;
    dnx_algo_flexe_general_db_fifo_link_list_get_cb get;
    dnx_algo_flexe_general_db_fifo_link_list_alloc_cb alloc;
} dnx_algo_flexe_general_db_fifo_link_list_cbs;

/**
 * This structure holds the access functions for the variable flexe_core_is_active
 */
typedef struct {
    dnx_algo_flexe_general_db_flexe_core_is_active_set_cb set;
    dnx_algo_flexe_general_db_flexe_core_is_active_get_cb get;
} dnx_algo_flexe_general_db_flexe_core_is_active_cbs;

/**
 * This structure holds the access functions for the variable tiny_mac_access_mutex
 */
typedef struct {
    dnx_algo_flexe_general_db_tiny_mac_access_mutex_create_cb create;
    dnx_algo_flexe_general_db_tiny_mac_access_mutex_is_created_cb is_created;
    dnx_algo_flexe_general_db_tiny_mac_access_mutex_take_cb take;
    dnx_algo_flexe_general_db_tiny_mac_access_mutex_give_cb give;
} dnx_algo_flexe_general_db_tiny_mac_access_mutex_cbs;

/**
 * This structure holds the access functions for the variable dnx_algo_flexe_general_db_t
 */
typedef struct {
    dnx_algo_flexe_general_db_is_init_cb is_init;
    dnx_algo_flexe_general_db_init_cb init;
    /**
     * Access struct for resource_alloc
     */
    dnx_algo_flexe_general_db_resource_alloc_cbs resource_alloc;
    /**
     * Access struct for group_info
     */
    dnx_algo_flexe_general_db_group_info_cbs group_info;
    /**
     * Access struct for fifo_link_list
     */
    dnx_algo_flexe_general_db_fifo_link_list_cbs fifo_link_list;
    /**
     * Access struct for flexe_core_is_active
     */
    dnx_algo_flexe_general_db_flexe_core_is_active_cbs flexe_core_is_active;
    /**
     * Access struct for tiny_mac_access_mutex
     */
    dnx_algo_flexe_general_db_tiny_mac_access_mutex_cbs tiny_mac_access_mutex;
} dnx_algo_flexe_general_db_cbs;

/*
 * Global Variables
 */

/*
 * FUNCTIONs
 */

/*
 *
 * get_name function for enum type dnx_algo_flexe_link_list_fifo_type_e
 * AUTO-GENERATED - DO NOT MODIFY
 */
const char *
dnx_algo_flexe_link_list_fifo_type_e_get_name(dnx_algo_flexe_link_list_fifo_type_e value);


/*
 * Global Variables
 */

extern dnx_algo_flexe_general_db_cbs dnx_algo_flexe_general_db;
#endif /* BCM_DNX_SUPPORT*/ 

#endif /* __DNX_ALGO_FLEXE_GENERAL_ACCESS_H__ */
