/** \file algo/swstate/auto_generated/access/algo_failover_access.h
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

#ifndef __ALGO_FAILOVER_ACCESS_H__
#define __ALGO_FAILOVER_ACCESS_H__

#include <soc/dnxc/swstate/dnxc_sw_state_h_includes.h>
#include <bcm_int/dnx/algo/swstate/auto_generated/types/algo_failover_types.h>
#include <bcm_int/dnx/algo/res_mngr/res_mngr.h>
#include <bcm_int/dnx/algo/res_mngr/res_mngr_internal.h>
/*
 * TYPEDEFs
 */

/**
 * implemented by: algo_failover_db_is_init
 */
typedef int (*algo_failover_db_is_init_cb)(
    int unit, uint8 *is_init);

/**
 * implemented by: algo_failover_db_init
 */
typedef int (*algo_failover_db_init_cb)(
    int unit);

/**
 * implemented by: algo_failover_db_fec_path_select_set
 */
typedef int (*algo_failover_db_fec_path_select_set_cb)(
    int unit, dnx_algo_res_t fec_path_select);

/**
 * implemented by: algo_failover_db_fec_path_select_get
 */
typedef int (*algo_failover_db_fec_path_select_get_cb)(
    int unit, dnx_algo_res_t *fec_path_select);

/**
 * implemented by: algo_failover_db_fec_path_select_create
 */
typedef int (*algo_failover_db_fec_path_select_create_cb)(
    int unit, dnx_algo_res_create_data_t * data, void *extra_arguments);

/**
 * implemented by: algo_failover_db_fec_path_select_allocate_single
 */
typedef int (*algo_failover_db_fec_path_select_allocate_single_cb)(
    int unit, uint32 flags, void *extra_arguments, int *element);

/**
 * implemented by: algo_failover_db_fec_path_select_allocate_several
 */
typedef int (*algo_failover_db_fec_path_select_allocate_several_cb)(
    int unit, uint32 flags, uint32 nof_elements, void *extra_arguments, int *element);

/**
 * implemented by: algo_failover_db_fec_path_select_free_single
 */
typedef int (*algo_failover_db_fec_path_select_free_single_cb)(
    int unit, int element);

/**
 * implemented by: algo_failover_db_fec_path_select_free_several
 */
typedef int (*algo_failover_db_fec_path_select_free_several_cb)(
    int unit, uint32 nof_elements, int element);

/**
 * implemented by: algo_failover_db_fec_path_select_is_allocated
 */
typedef int (*algo_failover_db_fec_path_select_is_allocated_cb)(
    int unit, int element, uint8 *is_allocated);

/**
 * implemented by: algo_failover_db_fec_path_select_nof_allocated_elements_in_range_get
 */
typedef int (*algo_failover_db_fec_path_select_nof_allocated_elements_in_range_get_cb)(
    int unit, int range_start, int nof_elements_in_range, int *nof_allocated_elements);

/**
 * implemented by: algo_failover_db_ing_path_select_set
 */
typedef int (*algo_failover_db_ing_path_select_set_cb)(
    int unit, dnx_algo_res_t ing_path_select);

/**
 * implemented by: algo_failover_db_ing_path_select_get
 */
typedef int (*algo_failover_db_ing_path_select_get_cb)(
    int unit, dnx_algo_res_t *ing_path_select);

/**
 * implemented by: algo_failover_db_ing_path_select_create
 */
typedef int (*algo_failover_db_ing_path_select_create_cb)(
    int unit, dnx_algo_res_create_data_t * data, void *extra_arguments);

/**
 * implemented by: algo_failover_db_ing_path_select_allocate_single
 */
typedef int (*algo_failover_db_ing_path_select_allocate_single_cb)(
    int unit, uint32 flags, void *extra_arguments, int *element);

/**
 * implemented by: algo_failover_db_ing_path_select_free_single
 */
typedef int (*algo_failover_db_ing_path_select_free_single_cb)(
    int unit, int element);

/**
 * implemented by: algo_failover_db_ing_path_select_is_allocated
 */
typedef int (*algo_failover_db_ing_path_select_is_allocated_cb)(
    int unit, int element, uint8 *is_allocated);

/**
 * implemented by: algo_failover_db_egr_path_select_set
 */
typedef int (*algo_failover_db_egr_path_select_set_cb)(
    int unit, dnx_algo_res_t egr_path_select);

/**
 * implemented by: algo_failover_db_egr_path_select_get
 */
typedef int (*algo_failover_db_egr_path_select_get_cb)(
    int unit, dnx_algo_res_t *egr_path_select);

/**
 * implemented by: algo_failover_db_egr_path_select_create
 */
typedef int (*algo_failover_db_egr_path_select_create_cb)(
    int unit, dnx_algo_res_create_data_t * data, void *extra_arguments);

/**
 * implemented by: algo_failover_db_egr_path_select_allocate_single
 */
typedef int (*algo_failover_db_egr_path_select_allocate_single_cb)(
    int unit, uint32 flags, void *extra_arguments, int *element);

/**
 * implemented by: algo_failover_db_egr_path_select_free_single
 */
typedef int (*algo_failover_db_egr_path_select_free_single_cb)(
    int unit, int element);

/**
 * implemented by: algo_failover_db_egr_path_select_is_allocated
 */
typedef int (*algo_failover_db_egr_path_select_is_allocated_cb)(
    int unit, int element, uint8 *is_allocated);

/*
 * STRUCTs
 */

/**
 * This structure holds the access functions for the variable fec_path_select
 */
typedef struct {
    algo_failover_db_fec_path_select_set_cb set;
    algo_failover_db_fec_path_select_get_cb get;
    algo_failover_db_fec_path_select_create_cb create;
    algo_failover_db_fec_path_select_allocate_single_cb allocate_single;
    algo_failover_db_fec_path_select_allocate_several_cb allocate_several;
    algo_failover_db_fec_path_select_free_single_cb free_single;
    algo_failover_db_fec_path_select_free_several_cb free_several;
    algo_failover_db_fec_path_select_is_allocated_cb is_allocated;
    algo_failover_db_fec_path_select_nof_allocated_elements_in_range_get_cb nof_allocated_elements_in_range_get;
} algo_failover_db_fec_path_select_cbs;

/**
 * This structure holds the access functions for the variable ing_path_select
 */
typedef struct {
    algo_failover_db_ing_path_select_set_cb set;
    algo_failover_db_ing_path_select_get_cb get;
    algo_failover_db_ing_path_select_create_cb create;
    algo_failover_db_ing_path_select_allocate_single_cb allocate_single;
    algo_failover_db_ing_path_select_free_single_cb free_single;
    algo_failover_db_ing_path_select_is_allocated_cb is_allocated;
} algo_failover_db_ing_path_select_cbs;

/**
 * This structure holds the access functions for the variable egr_path_select
 */
typedef struct {
    algo_failover_db_egr_path_select_set_cb set;
    algo_failover_db_egr_path_select_get_cb get;
    algo_failover_db_egr_path_select_create_cb create;
    algo_failover_db_egr_path_select_allocate_single_cb allocate_single;
    algo_failover_db_egr_path_select_free_single_cb free_single;
    algo_failover_db_egr_path_select_is_allocated_cb is_allocated;
} algo_failover_db_egr_path_select_cbs;

/**
 * This structure holds the access functions for the variable algo_failover_sw_state_t
 */
typedef struct {
    algo_failover_db_is_init_cb is_init;
    algo_failover_db_init_cb init;
    /**
     * Access struct for fec_path_select
     */
    algo_failover_db_fec_path_select_cbs fec_path_select;
    /**
     * Access struct for ing_path_select
     */
    algo_failover_db_ing_path_select_cbs ing_path_select;
    /**
     * Access struct for egr_path_select
     */
    algo_failover_db_egr_path_select_cbs egr_path_select;
} algo_failover_db_cbs;

/*
 * Global Variables
 */

/*
 * Global Variables
 */

extern algo_failover_db_cbs algo_failover_db;

#endif /* __ALGO_FAILOVER_ACCESS_H__ */
