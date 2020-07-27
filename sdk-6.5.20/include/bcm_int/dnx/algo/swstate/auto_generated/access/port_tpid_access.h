/** \file algo/swstate/auto_generated/access/port_tpid_access.h
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

#ifndef __PORT_TPID_ACCESS_H__
#define __PORT_TPID_ACCESS_H__

#include <soc/dnxc/swstate/dnxc_sw_state_h_includes.h>
#include <bcm_int/dnx/algo/swstate/auto_generated/types/port_tpid_types.h>
#include <bcm_int/dnx/algo/res_mngr/res_mngr.h>
#include <bcm_int/dnx/algo/res_mngr/res_mngr_internal.h>
#include <include/bcm/types.h>
#include <include/soc/dnx/dbal/auto_generated/dbal_defines_fields.h>
#include <include/soc/dnx/dnx_data/auto_generated/dnx_data_vlan.h>
#include <soc/dnxc/swstate/types/sw_state_bitmap.h>
/*
 * TYPEDEFs
 */

/**
 * implemented by: port_tpid_db_is_init
 */
typedef int (*port_tpid_db_is_init_cb)(
    int unit, uint8 *is_init);

/**
 * implemented by: port_tpid_db_init
 */
typedef int (*port_tpid_db_init_cb)(
    int unit);

/**
 * implemented by: port_tpid_db_native_ac_llvp_templates_ingress_set
 */
typedef int (*port_tpid_db_native_ac_llvp_templates_ingress_set_cb)(
    int unit, CONST llvp_template_t *ingress);

/**
 * implemented by: port_tpid_db_native_ac_llvp_templates_ingress_get
 */
typedef int (*port_tpid_db_native_ac_llvp_templates_ingress_get_cb)(
    int unit, llvp_template_t *ingress);

/**
 * implemented by: port_tpid_db_native_ac_llvp_templates_egress_set
 */
typedef int (*port_tpid_db_native_ac_llvp_templates_egress_set_cb)(
    int unit, CONST llvp_template_t *egress);

/**
 * implemented by: port_tpid_db_native_ac_llvp_templates_egress_get
 */
typedef int (*port_tpid_db_native_ac_llvp_templates_egress_get_cb)(
    int unit, llvp_template_t *egress);

/**
 * implemented by: port_tpid_db_egress_ip_tunnel_llvp_template_set
 */
typedef int (*port_tpid_db_egress_ip_tunnel_llvp_template_set_cb)(
    int unit, CONST llvp_template_t *egress_ip_tunnel_llvp_template);

/**
 * implemented by: port_tpid_db_egress_ip_tunnel_llvp_template_get
 */
typedef int (*port_tpid_db_egress_ip_tunnel_llvp_template_get_cb)(
    int unit, llvp_template_t *egress_ip_tunnel_llvp_template);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_ingress_set
 */
typedef int (*port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_ingress_set_cb)(
    int unit, dnx_algo_res_t bcm_tag_format_class_id_ingress);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_ingress_get
 */
typedef int (*port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_ingress_get_cb)(
    int unit, dnx_algo_res_t *bcm_tag_format_class_id_ingress);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_ingress_create
 */
typedef int (*port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_ingress_create_cb)(
    int unit, dnx_algo_res_create_data_t * data, void *extra_arguments);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_ingress_allocate_single
 */
typedef int (*port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_ingress_allocate_single_cb)(
    int unit, uint32 flags, void *extra_arguments, int *element);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_ingress_allocate_several
 */
typedef int (*port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_ingress_allocate_several_cb)(
    int unit, uint32 flags, uint32 nof_elements, void *extra_arguments, int *element);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_ingress_free_single
 */
typedef int (*port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_ingress_free_single_cb)(
    int unit, int element);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_ingress_free_several
 */
typedef int (*port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_ingress_free_several_cb)(
    int unit, uint32 nof_elements, int element);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_ingress_is_allocated
 */
typedef int (*port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_ingress_is_allocated_cb)(
    int unit, int element, uint8 *is_allocated);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_ingress_clear
 */
typedef int (*port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_ingress_clear_cb)(
    int unit);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_ingress_nof_free_elements_get
 */
typedef int (*port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_ingress_nof_free_elements_get_cb)(
    int unit, int *nof_free_elements);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_ingress_get_next
 */
typedef int (*port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_ingress_get_next_cb)(
    int unit, int *element);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_ingress_dump_info_get
 */
typedef int (*port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_ingress_dump_info_get_cb)(
    int unit, dnx_algo_res_dump_data_t * info);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_ingress_nof_allocated_elements_in_range_get
 */
typedef int (*port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_ingress_nof_allocated_elements_in_range_get_cb)(
    int unit, int range_start, int nof_elements_in_range, int *nof_allocated_elements);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_ingress_advanced_algorithm_info_set
 */
typedef int (*port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_ingress_advanced_algorithm_info_set_cb)(
    int unit, void *algorithm_info);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_ingress_advanced_algorithm_info_get
 */
typedef int (*port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_ingress_advanced_algorithm_info_get_cb)(
    int unit, void *algorithm_info);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_egress_set
 */
typedef int (*port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_egress_set_cb)(
    int unit, dnx_algo_res_t bcm_tag_format_class_id_egress);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_egress_get
 */
typedef int (*port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_egress_get_cb)(
    int unit, dnx_algo_res_t *bcm_tag_format_class_id_egress);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_egress_create
 */
typedef int (*port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_egress_create_cb)(
    int unit, dnx_algo_res_create_data_t * data, void *extra_arguments);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_egress_allocate_single
 */
typedef int (*port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_egress_allocate_single_cb)(
    int unit, uint32 flags, void *extra_arguments, int *element);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_egress_allocate_several
 */
typedef int (*port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_egress_allocate_several_cb)(
    int unit, uint32 flags, uint32 nof_elements, void *extra_arguments, int *element);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_egress_free_single
 */
typedef int (*port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_egress_free_single_cb)(
    int unit, int element);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_egress_free_several
 */
typedef int (*port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_egress_free_several_cb)(
    int unit, uint32 nof_elements, int element);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_egress_is_allocated
 */
typedef int (*port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_egress_is_allocated_cb)(
    int unit, int element, uint8 *is_allocated);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_egress_clear
 */
typedef int (*port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_egress_clear_cb)(
    int unit);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_egress_nof_free_elements_get
 */
typedef int (*port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_egress_nof_free_elements_get_cb)(
    int unit, int *nof_free_elements);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_egress_get_next
 */
typedef int (*port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_egress_get_next_cb)(
    int unit, int *element);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_egress_dump_info_get
 */
typedef int (*port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_egress_dump_info_get_cb)(
    int unit, dnx_algo_res_dump_data_t * info);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_egress_nof_allocated_elements_in_range_get
 */
typedef int (*port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_egress_nof_allocated_elements_in_range_get_cb)(
    int unit, int range_start, int nof_elements_in_range, int *nof_allocated_elements);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_egress_advanced_algorithm_info_set
 */
typedef int (*port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_egress_advanced_algorithm_info_set_cb)(
    int unit, void *algorithm_info);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_egress_advanced_algorithm_info_get
 */
typedef int (*port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_egress_advanced_algorithm_info_get_cb)(
    int unit, void *algorithm_info);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_symmetric_set
 */
typedef int (*port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_symmetric_set_cb)(
    int unit, dnx_algo_res_t bcm_tag_format_class_id_symmetric);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_symmetric_get
 */
typedef int (*port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_symmetric_get_cb)(
    int unit, dnx_algo_res_t *bcm_tag_format_class_id_symmetric);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_symmetric_create
 */
typedef int (*port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_symmetric_create_cb)(
    int unit, dnx_algo_res_create_data_t * data, void *extra_arguments);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_symmetric_allocate_single
 */
typedef int (*port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_symmetric_allocate_single_cb)(
    int unit, uint32 flags, void *extra_arguments, int *element);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_symmetric_allocate_several
 */
typedef int (*port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_symmetric_allocate_several_cb)(
    int unit, uint32 flags, uint32 nof_elements, void *extra_arguments, int *element);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_symmetric_free_single
 */
typedef int (*port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_symmetric_free_single_cb)(
    int unit, int element);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_symmetric_free_several
 */
typedef int (*port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_symmetric_free_several_cb)(
    int unit, uint32 nof_elements, int element);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_symmetric_is_allocated
 */
typedef int (*port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_symmetric_is_allocated_cb)(
    int unit, int element, uint8 *is_allocated);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_symmetric_clear
 */
typedef int (*port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_symmetric_clear_cb)(
    int unit);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_symmetric_nof_free_elements_get
 */
typedef int (*port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_symmetric_nof_free_elements_get_cb)(
    int unit, int *nof_free_elements);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_symmetric_get_next
 */
typedef int (*port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_symmetric_get_next_cb)(
    int unit, int *element);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_symmetric_dump_info_get
 */
typedef int (*port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_symmetric_dump_info_get_cb)(
    int unit, dnx_algo_res_dump_data_t * info);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_symmetric_nof_allocated_elements_in_range_get
 */
typedef int (*port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_symmetric_nof_allocated_elements_in_range_get_cb)(
    int unit, int range_start, int nof_elements_in_range, int *nof_allocated_elements);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_symmetric_advanced_algorithm_info_set
 */
typedef int (*port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_symmetric_advanced_algorithm_info_set_cb)(
    int unit, void *algorithm_info);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_symmetric_advanced_algorithm_info_get
 */
typedef int (*port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_symmetric_advanced_algorithm_info_get_cb)(
    int unit, void *algorithm_info);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_symmetric_indication_alloc_bitmap
 */
typedef int (*port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_symmetric_indication_alloc_bitmap_cb)(
    int unit);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_symmetric_indication_bit_set
 */
typedef int (*port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_symmetric_indication_bit_set_cb)(
    int unit, uint32 _bit_num);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_symmetric_indication_bit_clear
 */
typedef int (*port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_symmetric_indication_bit_clear_cb)(
    int unit, uint32 _bit_num);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_symmetric_indication_bit_get
 */
typedef int (*port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_symmetric_indication_bit_get_cb)(
    int unit, uint32 _bit_num, uint8* result);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_symmetric_indication_bit_range_count
 */
typedef int (*port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_symmetric_indication_bit_range_count_cb)(
    int unit, uint32 _first, uint32 _range, int *result);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_incoming_tag_structure_ingress_set
 */
typedef int (*port_tpid_db_tag_struct_allocation_incoming_tag_structure_ingress_set_cb)(
    int unit, dnx_algo_res_t incoming_tag_structure_ingress);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_incoming_tag_structure_ingress_get
 */
typedef int (*port_tpid_db_tag_struct_allocation_incoming_tag_structure_ingress_get_cb)(
    int unit, dnx_algo_res_t *incoming_tag_structure_ingress);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_incoming_tag_structure_ingress_create
 */
typedef int (*port_tpid_db_tag_struct_allocation_incoming_tag_structure_ingress_create_cb)(
    int unit, dnx_algo_res_create_data_t * data, void *extra_arguments);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_incoming_tag_structure_ingress_allocate_single
 */
typedef int (*port_tpid_db_tag_struct_allocation_incoming_tag_structure_ingress_allocate_single_cb)(
    int unit, uint32 flags, void *extra_arguments, int *element);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_incoming_tag_structure_ingress_allocate_several
 */
typedef int (*port_tpid_db_tag_struct_allocation_incoming_tag_structure_ingress_allocate_several_cb)(
    int unit, uint32 flags, uint32 nof_elements, void *extra_arguments, int *element);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_incoming_tag_structure_ingress_free_single
 */
typedef int (*port_tpid_db_tag_struct_allocation_incoming_tag_structure_ingress_free_single_cb)(
    int unit, int element);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_incoming_tag_structure_ingress_free_several
 */
typedef int (*port_tpid_db_tag_struct_allocation_incoming_tag_structure_ingress_free_several_cb)(
    int unit, uint32 nof_elements, int element);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_incoming_tag_structure_ingress_is_allocated
 */
typedef int (*port_tpid_db_tag_struct_allocation_incoming_tag_structure_ingress_is_allocated_cb)(
    int unit, int element, uint8 *is_allocated);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_incoming_tag_structure_ingress_clear
 */
typedef int (*port_tpid_db_tag_struct_allocation_incoming_tag_structure_ingress_clear_cb)(
    int unit);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_incoming_tag_structure_ingress_nof_free_elements_get
 */
typedef int (*port_tpid_db_tag_struct_allocation_incoming_tag_structure_ingress_nof_free_elements_get_cb)(
    int unit, int *nof_free_elements);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_incoming_tag_structure_ingress_get_next
 */
typedef int (*port_tpid_db_tag_struct_allocation_incoming_tag_structure_ingress_get_next_cb)(
    int unit, int *element);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_incoming_tag_structure_ingress_dump_info_get
 */
typedef int (*port_tpid_db_tag_struct_allocation_incoming_tag_structure_ingress_dump_info_get_cb)(
    int unit, dnx_algo_res_dump_data_t * info);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_incoming_tag_structure_ingress_nof_allocated_elements_in_range_get
 */
typedef int (*port_tpid_db_tag_struct_allocation_incoming_tag_structure_ingress_nof_allocated_elements_in_range_get_cb)(
    int unit, int range_start, int nof_elements_in_range, int *nof_allocated_elements);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_incoming_tag_structure_ingress_advanced_algorithm_info_set
 */
typedef int (*port_tpid_db_tag_struct_allocation_incoming_tag_structure_ingress_advanced_algorithm_info_set_cb)(
    int unit, void *algorithm_info);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_incoming_tag_structure_ingress_advanced_algorithm_info_get
 */
typedef int (*port_tpid_db_tag_struct_allocation_incoming_tag_structure_ingress_advanced_algorithm_info_get_cb)(
    int unit, void *algorithm_info);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_incoming_tag_structure_egress_set
 */
typedef int (*port_tpid_db_tag_struct_allocation_incoming_tag_structure_egress_set_cb)(
    int unit, dnx_algo_res_t incoming_tag_structure_egress);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_incoming_tag_structure_egress_get
 */
typedef int (*port_tpid_db_tag_struct_allocation_incoming_tag_structure_egress_get_cb)(
    int unit, dnx_algo_res_t *incoming_tag_structure_egress);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_incoming_tag_structure_egress_create
 */
typedef int (*port_tpid_db_tag_struct_allocation_incoming_tag_structure_egress_create_cb)(
    int unit, dnx_algo_res_create_data_t * data, void *extra_arguments);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_incoming_tag_structure_egress_allocate_single
 */
typedef int (*port_tpid_db_tag_struct_allocation_incoming_tag_structure_egress_allocate_single_cb)(
    int unit, uint32 flags, void *extra_arguments, int *element);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_incoming_tag_structure_egress_allocate_several
 */
typedef int (*port_tpid_db_tag_struct_allocation_incoming_tag_structure_egress_allocate_several_cb)(
    int unit, uint32 flags, uint32 nof_elements, void *extra_arguments, int *element);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_incoming_tag_structure_egress_free_single
 */
typedef int (*port_tpid_db_tag_struct_allocation_incoming_tag_structure_egress_free_single_cb)(
    int unit, int element);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_incoming_tag_structure_egress_free_several
 */
typedef int (*port_tpid_db_tag_struct_allocation_incoming_tag_structure_egress_free_several_cb)(
    int unit, uint32 nof_elements, int element);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_incoming_tag_structure_egress_is_allocated
 */
typedef int (*port_tpid_db_tag_struct_allocation_incoming_tag_structure_egress_is_allocated_cb)(
    int unit, int element, uint8 *is_allocated);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_incoming_tag_structure_egress_clear
 */
typedef int (*port_tpid_db_tag_struct_allocation_incoming_tag_structure_egress_clear_cb)(
    int unit);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_incoming_tag_structure_egress_nof_free_elements_get
 */
typedef int (*port_tpid_db_tag_struct_allocation_incoming_tag_structure_egress_nof_free_elements_get_cb)(
    int unit, int *nof_free_elements);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_incoming_tag_structure_egress_get_next
 */
typedef int (*port_tpid_db_tag_struct_allocation_incoming_tag_structure_egress_get_next_cb)(
    int unit, int *element);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_incoming_tag_structure_egress_dump_info_get
 */
typedef int (*port_tpid_db_tag_struct_allocation_incoming_tag_structure_egress_dump_info_get_cb)(
    int unit, dnx_algo_res_dump_data_t * info);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_incoming_tag_structure_egress_nof_allocated_elements_in_range_get
 */
typedef int (*port_tpid_db_tag_struct_allocation_incoming_tag_structure_egress_nof_allocated_elements_in_range_get_cb)(
    int unit, int range_start, int nof_elements_in_range, int *nof_allocated_elements);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_incoming_tag_structure_egress_advanced_algorithm_info_set
 */
typedef int (*port_tpid_db_tag_struct_allocation_incoming_tag_structure_egress_advanced_algorithm_info_set_cb)(
    int unit, void *algorithm_info);

/**
 * implemented by: port_tpid_db_tag_struct_allocation_incoming_tag_structure_egress_advanced_algorithm_info_get
 */
typedef int (*port_tpid_db_tag_struct_allocation_incoming_tag_structure_egress_advanced_algorithm_info_get_cb)(
    int unit, void *algorithm_info);

/*
 * STRUCTs
 */

/**
 * This structure holds the access functions for the variable llvp_template_t
 */
typedef struct {
    port_tpid_db_native_ac_llvp_templates_ingress_set_cb set;
    port_tpid_db_native_ac_llvp_templates_ingress_get_cb get;
} port_tpid_db_native_ac_llvp_templates_ingress_cbs;

/**
 * This structure holds the access functions for the variable llvp_template_t
 */
typedef struct {
    port_tpid_db_native_ac_llvp_templates_egress_set_cb set;
    port_tpid_db_native_ac_llvp_templates_egress_get_cb get;
} port_tpid_db_native_ac_llvp_templates_egress_cbs;

/**
 * This structure holds the access functions for the variable native_ac_llvp_template_t
 */
typedef struct {
    /**
     * Access struct for ingress
     */
    port_tpid_db_native_ac_llvp_templates_ingress_cbs ingress;
    /**
     * Access struct for egress
     */
    port_tpid_db_native_ac_llvp_templates_egress_cbs egress;
} port_tpid_db_native_ac_llvp_templates_cbs;

/**
 * This structure holds the access functions for the variable llvp_template_t
 */
typedef struct {
    port_tpid_db_egress_ip_tunnel_llvp_template_set_cb set;
    port_tpid_db_egress_ip_tunnel_llvp_template_get_cb get;
} port_tpid_db_egress_ip_tunnel_llvp_template_cbs;

/**
 * This structure holds the access functions for the variable bcm_tag_format_class_id_ingress
 */
typedef struct {
    port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_ingress_set_cb set;
    port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_ingress_get_cb get;
    port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_ingress_create_cb create;
    port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_ingress_allocate_single_cb allocate_single;
    port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_ingress_allocate_several_cb allocate_several;
    port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_ingress_free_single_cb free_single;
    port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_ingress_free_several_cb free_several;
    port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_ingress_is_allocated_cb is_allocated;
    port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_ingress_clear_cb clear;
    port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_ingress_nof_free_elements_get_cb nof_free_elements_get;
    port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_ingress_get_next_cb get_next;
    port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_ingress_dump_info_get_cb dump_info_get;
    port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_ingress_nof_allocated_elements_in_range_get_cb nof_allocated_elements_in_range_get;
    port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_ingress_advanced_algorithm_info_set_cb advanced_algorithm_info_set;
    port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_ingress_advanced_algorithm_info_get_cb advanced_algorithm_info_get;
} port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_ingress_cbs;

/**
 * This structure holds the access functions for the variable bcm_tag_format_class_id_egress
 */
typedef struct {
    port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_egress_set_cb set;
    port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_egress_get_cb get;
    port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_egress_create_cb create;
    port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_egress_allocate_single_cb allocate_single;
    port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_egress_allocate_several_cb allocate_several;
    port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_egress_free_single_cb free_single;
    port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_egress_free_several_cb free_several;
    port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_egress_is_allocated_cb is_allocated;
    port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_egress_clear_cb clear;
    port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_egress_nof_free_elements_get_cb nof_free_elements_get;
    port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_egress_get_next_cb get_next;
    port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_egress_dump_info_get_cb dump_info_get;
    port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_egress_nof_allocated_elements_in_range_get_cb nof_allocated_elements_in_range_get;
    port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_egress_advanced_algorithm_info_set_cb advanced_algorithm_info_set;
    port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_egress_advanced_algorithm_info_get_cb advanced_algorithm_info_get;
} port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_egress_cbs;

/**
 * This structure holds the access functions for the variable bcm_tag_format_class_id_symmetric
 */
typedef struct {
    port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_symmetric_set_cb set;
    port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_symmetric_get_cb get;
    port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_symmetric_create_cb create;
    port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_symmetric_allocate_single_cb allocate_single;
    port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_symmetric_allocate_several_cb allocate_several;
    port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_symmetric_free_single_cb free_single;
    port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_symmetric_free_several_cb free_several;
    port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_symmetric_is_allocated_cb is_allocated;
    port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_symmetric_clear_cb clear;
    port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_symmetric_nof_free_elements_get_cb nof_free_elements_get;
    port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_symmetric_get_next_cb get_next;
    port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_symmetric_dump_info_get_cb dump_info_get;
    port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_symmetric_nof_allocated_elements_in_range_get_cb nof_allocated_elements_in_range_get;
    port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_symmetric_advanced_algorithm_info_set_cb advanced_algorithm_info_set;
    port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_symmetric_advanced_algorithm_info_get_cb advanced_algorithm_info_get;
} port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_symmetric_cbs;

/**
 * This structure holds the access functions for the variable bcm_tag_format_class_id_symmetric_indication
 */
typedef struct {
    port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_symmetric_indication_alloc_bitmap_cb alloc_bitmap;
    port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_symmetric_indication_bit_set_cb bit_set;
    port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_symmetric_indication_bit_clear_cb bit_clear;
    port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_symmetric_indication_bit_get_cb bit_get;
    port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_symmetric_indication_bit_range_count_cb bit_range_count;
} port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_symmetric_indication_cbs;

/**
 * This structure holds the access functions for the variable incoming_tag_structure_ingress
 */
typedef struct {
    port_tpid_db_tag_struct_allocation_incoming_tag_structure_ingress_set_cb set;
    port_tpid_db_tag_struct_allocation_incoming_tag_structure_ingress_get_cb get;
    port_tpid_db_tag_struct_allocation_incoming_tag_structure_ingress_create_cb create;
    port_tpid_db_tag_struct_allocation_incoming_tag_structure_ingress_allocate_single_cb allocate_single;
    port_tpid_db_tag_struct_allocation_incoming_tag_structure_ingress_allocate_several_cb allocate_several;
    port_tpid_db_tag_struct_allocation_incoming_tag_structure_ingress_free_single_cb free_single;
    port_tpid_db_tag_struct_allocation_incoming_tag_structure_ingress_free_several_cb free_several;
    port_tpid_db_tag_struct_allocation_incoming_tag_structure_ingress_is_allocated_cb is_allocated;
    port_tpid_db_tag_struct_allocation_incoming_tag_structure_ingress_clear_cb clear;
    port_tpid_db_tag_struct_allocation_incoming_tag_structure_ingress_nof_free_elements_get_cb nof_free_elements_get;
    port_tpid_db_tag_struct_allocation_incoming_tag_structure_ingress_get_next_cb get_next;
    port_tpid_db_tag_struct_allocation_incoming_tag_structure_ingress_dump_info_get_cb dump_info_get;
    port_tpid_db_tag_struct_allocation_incoming_tag_structure_ingress_nof_allocated_elements_in_range_get_cb nof_allocated_elements_in_range_get;
    port_tpid_db_tag_struct_allocation_incoming_tag_structure_ingress_advanced_algorithm_info_set_cb advanced_algorithm_info_set;
    port_tpid_db_tag_struct_allocation_incoming_tag_structure_ingress_advanced_algorithm_info_get_cb advanced_algorithm_info_get;
} port_tpid_db_tag_struct_allocation_incoming_tag_structure_ingress_cbs;

/**
 * This structure holds the access functions for the variable incoming_tag_structure_egress
 */
typedef struct {
    port_tpid_db_tag_struct_allocation_incoming_tag_structure_egress_set_cb set;
    port_tpid_db_tag_struct_allocation_incoming_tag_structure_egress_get_cb get;
    port_tpid_db_tag_struct_allocation_incoming_tag_structure_egress_create_cb create;
    port_tpid_db_tag_struct_allocation_incoming_tag_structure_egress_allocate_single_cb allocate_single;
    port_tpid_db_tag_struct_allocation_incoming_tag_structure_egress_allocate_several_cb allocate_several;
    port_tpid_db_tag_struct_allocation_incoming_tag_structure_egress_free_single_cb free_single;
    port_tpid_db_tag_struct_allocation_incoming_tag_structure_egress_free_several_cb free_several;
    port_tpid_db_tag_struct_allocation_incoming_tag_structure_egress_is_allocated_cb is_allocated;
    port_tpid_db_tag_struct_allocation_incoming_tag_structure_egress_clear_cb clear;
    port_tpid_db_tag_struct_allocation_incoming_tag_structure_egress_nof_free_elements_get_cb nof_free_elements_get;
    port_tpid_db_tag_struct_allocation_incoming_tag_structure_egress_get_next_cb get_next;
    port_tpid_db_tag_struct_allocation_incoming_tag_structure_egress_dump_info_get_cb dump_info_get;
    port_tpid_db_tag_struct_allocation_incoming_tag_structure_egress_nof_allocated_elements_in_range_get_cb nof_allocated_elements_in_range_get;
    port_tpid_db_tag_struct_allocation_incoming_tag_structure_egress_advanced_algorithm_info_set_cb advanced_algorithm_info_set;
    port_tpid_db_tag_struct_allocation_incoming_tag_structure_egress_advanced_algorithm_info_get_cb advanced_algorithm_info_get;
} port_tpid_db_tag_struct_allocation_incoming_tag_structure_egress_cbs;

/**
 * This structure holds the access functions for the variable port_tpid_tag_struct_t
 */
typedef struct {
    /**
     * Access struct for bcm_tag_format_class_id_ingress
     */
    port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_ingress_cbs bcm_tag_format_class_id_ingress;
    /**
     * Access struct for bcm_tag_format_class_id_egress
     */
    port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_egress_cbs bcm_tag_format_class_id_egress;
    /**
     * Access struct for bcm_tag_format_class_id_symmetric
     */
    port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_symmetric_cbs bcm_tag_format_class_id_symmetric;
    /**
     * Access struct for bcm_tag_format_class_id_symmetric_indication
     */
    port_tpid_db_tag_struct_allocation_bcm_tag_format_class_id_symmetric_indication_cbs bcm_tag_format_class_id_symmetric_indication;
    /**
     * Access struct for incoming_tag_structure_ingress
     */
    port_tpid_db_tag_struct_allocation_incoming_tag_structure_ingress_cbs incoming_tag_structure_ingress;
    /**
     * Access struct for incoming_tag_structure_egress
     */
    port_tpid_db_tag_struct_allocation_incoming_tag_structure_egress_cbs incoming_tag_structure_egress;
} port_tpid_db_tag_struct_allocation_cbs;

/**
 * This structure holds the access functions for the variable port_tpid_db_t
 */
typedef struct {
    port_tpid_db_is_init_cb is_init;
    port_tpid_db_init_cb init;
    /**
     * Access struct for native_ac_llvp_templates
     */
    port_tpid_db_native_ac_llvp_templates_cbs native_ac_llvp_templates;
    /**
     * Access struct for egress_ip_tunnel_llvp_template
     */
    port_tpid_db_egress_ip_tunnel_llvp_template_cbs egress_ip_tunnel_llvp_template;
    /**
     * Access struct for tag_struct_allocation
     */
    port_tpid_db_tag_struct_allocation_cbs tag_struct_allocation;
} port_tpid_db_cbs;

/*
 * Global Variables
 */

/*
 * Global Variables
 */

extern port_tpid_db_cbs port_tpid_db;

#endif /* __PORT_TPID_ACCESS_H__ */
