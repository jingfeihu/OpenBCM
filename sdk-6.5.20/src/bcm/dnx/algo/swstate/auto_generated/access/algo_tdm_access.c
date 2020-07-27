/** \file algo/swstate/auto_generated/access/algo_tdm_access.c
 *
 * sw state functions definitions
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

#ifdef BSL_LOG_MODULE
#error "BSL_LOG_MODULE redefined"
#endif
#define BSL_LOG_MODULE BSL_LS_SWSTATEDNX_GENERAL

#include <soc/dnxc/swstate/dnxc_sw_state_c_includes.h>
#include <bcm_int/dnx/algo/swstate/auto_generated/access/algo_tdm_access.h>
#include <bcm_int/dnx/algo/swstate/auto_generated/diagnostic/algo_tdm_diagnostic.h>
/*
 * Global Variables
 */

/* dummy variable for gdb to know this type */
algo_tdm_sw_state_t* algo_tdm_db_dummy = NULL;
/*
 * FUNCTIONs
 */

/*
 *
 * is_init function for the variable algo_tdm_db
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_tdm_db_is_init(int unit, uint8 *is_init)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    VERIFY_FUNCTION_CALL_ALLOWED(
        unit,
        ALGO_TDM_MODULE_ID,
        SW_STATE_FUNC_IS_INIT,
        DNXC_SW_STATE_NO_FLAGS);

    *is_init = (NULL != ((algo_tdm_sw_state_t*)sw_state_roots_array[unit][ALGO_TDM_MODULE_ID]));
    DNX_SW_STATE_LOG(
        unit,
        DNX_SW_STATE_IS_INIT_LOGGING,
        BSL_LS_SWSTATEDNX_ISINIT,
        ALGO_TDM_MODULE_ID,
        ((algo_tdm_sw_state_t*)sw_state_roots_array[unit][ALGO_TDM_MODULE_ID]),
        "algo_tdm_db[%d]",
        unit);

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * init function for the variable algo_tdm_db
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_tdm_db_init(int unit)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    VERIFY_FUNCTION_CALL_ALLOWED(
        unit,
        ALGO_TDM_MODULE_ID,
        SW_STATE_FUNC_INIT,
        DNXC_SW_STATE_NO_FLAGS);

    DNX_SW_STATE_MODULE_INIT(
        unit,
        ALGO_TDM_MODULE_ID,
        DNXC_SW_STATE_IMPLEMENTATION_WB,
        algo_tdm_sw_state_t,
        DNXC_SW_STATE_AUTO_GENERATED_ALLOCATION,
        "algo_tdm_db_init");

    DNX_SW_STATE_LOG(
        unit,
        DNX_SW_STATE_INIT_LOGGING,
        BSL_LS_SWSTATEDNX_INIT,
        ALGO_TDM_MODULE_ID,
        ((algo_tdm_sw_state_t*)sw_state_roots_array[unit][ALGO_TDM_MODULE_ID]),
        "algo_tdm_db[%d]",
        unit);

    DNX_SW_STATE_DIAG_INFO_UPDATE(
        unit,
        ALGO_TDM_MODULE_ID,
        algo_tdm_db_info,
        ALGO_TDM_DB_INFO,
        DNX_SW_STATE_DIAG_ALLOC,
        sizeof(algo_tdm_sw_state_t),
        NULL);

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * set function for the variable ingress_context
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_tdm_db_ingress_context_set(int unit, dnx_algo_res_t ingress_context)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    VERIFY_FUNCTION_CALL_ALLOWED(
        unit,
        ALGO_TDM_MODULE_ID,
        SW_STATE_FUNC_SET,
        DNXC_SW_STATE_NO_FLAGS);

    VERIFY_MODULE_IS_INITIALIZED(
        unit,
        ALGO_TDM_MODULE_ID,
        sw_state_roots_array[unit][ALGO_TDM_MODULE_ID]);

    DNX_SW_STATE_DIAG_INFO_PRE(
        unit,
        ALGO_TDM_MODULE_ID);

    DNX_SW_STATE_SET(
        unit,
        ALGO_TDM_MODULE_ID,
        ((algo_tdm_sw_state_t*)sw_state_roots_array[unit][ALGO_TDM_MODULE_ID])->ingress_context,
        ingress_context,
        dnx_algo_res_t,
        0,
        "algo_tdm_db_ingress_context_set");

    DNX_SW_STATE_LOG(
        unit,
        DNX_SW_STATE_SET_LOGGING,
        BSL_LS_SWSTATEDNX_SET,
        ALGO_TDM_MODULE_ID,
        &ingress_context,
        "algo_tdm_db[%d]->ingress_context",
        unit);

    DNX_SW_STATE_DIAG_INFO_POST(
        unit,
        ALGO_TDM_MODULE_ID,
        algo_tdm_db_info,
        ALGO_TDM_DB_INGRESS_CONTEXT_INFO,
        DNX_SW_STATE_DIAG_MODIFY,
        NULL);

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * get function for the variable ingress_context
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_tdm_db_ingress_context_get(int unit, dnx_algo_res_t *ingress_context)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    VERIFY_FUNCTION_CALL_ALLOWED(
        unit,
        ALGO_TDM_MODULE_ID,
        SW_STATE_FUNC_GET,
        DNXC_SW_STATE_NO_FLAGS);

    VERIFY_MODULE_IS_INITIALIZED(
        unit,
        ALGO_TDM_MODULE_ID,
        sw_state_roots_array[unit][ALGO_TDM_MODULE_ID]);

    DNX_SW_STATE_PTR_NULL_CHECK(
        unit,
        ALGO_TDM_MODULE_ID,
        ingress_context);

    DNX_SW_STATE_DIAG_INFO_PRE(
        unit,
        ALGO_TDM_MODULE_ID);

    *ingress_context = ((algo_tdm_sw_state_t*)sw_state_roots_array[unit][ALGO_TDM_MODULE_ID])->ingress_context;
    DNX_SW_STATE_LOG(
        unit,
        DNX_SW_STATE_GET_LOGGING,
        BSL_LS_SWSTATEDNX_GET,
        ALGO_TDM_MODULE_ID,
        &((algo_tdm_sw_state_t*)sw_state_roots_array[unit][ALGO_TDM_MODULE_ID])->ingress_context,
        "algo_tdm_db[%d]->ingress_context",
        unit);

    DNX_SW_STATE_DIAG_INFO_POST(
        unit,
        ALGO_TDM_MODULE_ID,
        algo_tdm_db_info,
        ALGO_TDM_DB_INGRESS_CONTEXT_INFO,
        DNX_SW_STATE_DIAG_READ,
        NULL);

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * create function for the variable ingress_context
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_tdm_db_ingress_context_create(int unit, dnx_algo_res_create_data_t * data, void *extra_arguments)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    VERIFY_FUNCTION_CALL_ALLOWED(
        unit,
        ALGO_TDM_MODULE_ID,
        SW_STATE_FUNC_CREATE,
        DNXC_SW_STATE_NO_FLAGS);

    VERIFY_MODULE_IS_INITIALIZED(
        unit,
        ALGO_TDM_MODULE_ID,
        sw_state_roots_array[unit][ALGO_TDM_MODULE_ID]);

    DNX_SW_STATE_DIAG_INFO_PRE(
        unit,
        ALGO_TDM_MODULE_ID);

    DNX_ALGO_RES_MNGR_CREATE(
        ALGO_TDM_MODULE_ID,
        ((algo_tdm_sw_state_t*)sw_state_roots_array[unit][ALGO_TDM_MODULE_ID])->ingress_context,
        data,
        extra_arguments,
        0,
        DNXC_SW_STATE_AUTO_GENERATED_ALLOCATION);

    DNX_SW_STATE_LOG(
        unit,
        DNX_SW_STATE_RES_MNGR_CREATE_LOGGING,
        BSL_LS_SWSTATEDNX_RES_MNGRCREATE,
        ALGO_TDM_MODULE_ID,
        &((algo_tdm_sw_state_t*)sw_state_roots_array[unit][ALGO_TDM_MODULE_ID])->ingress_context,
        "algo_tdm_db[%d]->ingress_context",
        unit);

    DNX_SW_STATE_DIAG_INFO_POST_WITH_FLAGS(
        unit,
        ALGO_TDM_MODULE_ID,
        algo_tdm_db_info,
        ALGO_TDM_DB_INGRESS_CONTEXT_INFO,
        DNX_SW_STATE_DIAG_RES_MNGR,
        NULL,
        DNXC_SW_STATE_AUTO_GENERATED_ALLOCATION);

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * allocate_single function for the variable ingress_context
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_tdm_db_ingress_context_allocate_single(int unit, uint32 flags, void *extra_arguments, int *element)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    VERIFY_FUNCTION_CALL_ALLOWED(
        unit,
        ALGO_TDM_MODULE_ID,
        SW_STATE_FUNC_ALLOCATE_SINGLE,
        DNXC_SW_STATE_NO_FLAGS);

    VERIFY_MODULE_IS_INITIALIZED(
        unit,
        ALGO_TDM_MODULE_ID,
        sw_state_roots_array[unit][ALGO_TDM_MODULE_ID]);

    DNX_SW_STATE_DIAG_INFO_PRE(
        unit,
        ALGO_TDM_MODULE_ID);

    DNX_ALGO_RES_MNGR_ALLOCATE_SINGLE(
        ALGO_TDM_MODULE_ID,
        ((algo_tdm_sw_state_t*)sw_state_roots_array[unit][ALGO_TDM_MODULE_ID])->ingress_context,
        flags,
        extra_arguments,
        element);

    DNX_SW_STATE_LOG(
        unit,
        DNX_SW_STATE_RES_MNGR_ALLOCATE_SINGLE_LOGGING,
        BSL_LS_SWSTATEDNX_RES_MNGRALLOCATE_SINGLE,
        ALGO_TDM_MODULE_ID,
        &((algo_tdm_sw_state_t*)sw_state_roots_array[unit][ALGO_TDM_MODULE_ID])->ingress_context,
        "algo_tdm_db[%d]->ingress_context",
        unit);

    DNX_SW_STATE_DIAG_INFO_POST_WITH_FLAGS(
        unit,
        ALGO_TDM_MODULE_ID,
        algo_tdm_db_info,
        ALGO_TDM_DB_INGRESS_CONTEXT_INFO,
        DNX_SW_STATE_DIAG_RES_MNGR,
        NULL,
        DNXC_SW_STATE_NO_FLAGS);

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * free_single function for the variable ingress_context
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_tdm_db_ingress_context_free_single(int unit, int element)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    VERIFY_FUNCTION_CALL_ALLOWED(
        unit,
        ALGO_TDM_MODULE_ID,
        SW_STATE_FUNC_FREE_SINGLE,
        DNXC_SW_STATE_NO_FLAGS);

    VERIFY_MODULE_IS_INITIALIZED(
        unit,
        ALGO_TDM_MODULE_ID,
        sw_state_roots_array[unit][ALGO_TDM_MODULE_ID]);

    DNX_SW_STATE_DIAG_INFO_PRE(
        unit,
        ALGO_TDM_MODULE_ID);

    DNX_ALGO_RES_MNGR_FREE_SINGLE(
        ALGO_TDM_MODULE_ID,
        ((algo_tdm_sw_state_t*)sw_state_roots_array[unit][ALGO_TDM_MODULE_ID])->ingress_context,
        element);

    DNX_SW_STATE_LOG(
        unit,
        DNX_SW_STATE_RES_MNGR_FREE_SINGLE_LOGGING,
        BSL_LS_SWSTATEDNX_RES_MNGRFREE_SINGLE,
        ALGO_TDM_MODULE_ID,
        &((algo_tdm_sw_state_t*)sw_state_roots_array[unit][ALGO_TDM_MODULE_ID])->ingress_context,
        "algo_tdm_db[%d]->ingress_context",
        unit);

    DNX_SW_STATE_DIAG_INFO_POST_WITH_FLAGS(
        unit,
        ALGO_TDM_MODULE_ID,
        algo_tdm_db_info,
        ALGO_TDM_DB_INGRESS_CONTEXT_INFO,
        DNX_SW_STATE_DIAG_RES_MNGR,
        NULL,
        DNXC_SW_STATE_NO_FLAGS);

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * is_allocated function for the variable ingress_context
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_tdm_db_ingress_context_is_allocated(int unit, int element, uint8 *is_allocated)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    VERIFY_FUNCTION_CALL_ALLOWED(
        unit,
        ALGO_TDM_MODULE_ID,
        SW_STATE_FUNC_IS_ALLOCATED,
        DNXC_SW_STATE_NO_FLAGS);

    VERIFY_MODULE_IS_INITIALIZED(
        unit,
        ALGO_TDM_MODULE_ID,
        sw_state_roots_array[unit][ALGO_TDM_MODULE_ID]);

    DNX_SW_STATE_DIAG_INFO_PRE(
        unit,
        ALGO_TDM_MODULE_ID);

    DNX_ALGO_RES_MNGR_IS_ALLOCATED(
        ALGO_TDM_MODULE_ID,
        ((algo_tdm_sw_state_t*)sw_state_roots_array[unit][ALGO_TDM_MODULE_ID])->ingress_context,
        element,
        is_allocated);

    DNX_SW_STATE_LOG(
        unit,
        DNX_SW_STATE_RES_MNGR_IS_ALLOCATED_LOGGING,
        BSL_LS_SWSTATEDNX_RES_MNGRIS_ALLOCATED,
        ALGO_TDM_MODULE_ID,
        &((algo_tdm_sw_state_t*)sw_state_roots_array[unit][ALGO_TDM_MODULE_ID])->ingress_context,
        "algo_tdm_db[%d]->ingress_context",
        unit);

    DNX_SW_STATE_DIAG_INFO_POST_WITH_FLAGS(
        unit,
        ALGO_TDM_MODULE_ID,
        algo_tdm_db_info,
        ALGO_TDM_DB_INGRESS_CONTEXT_INFO,
        DNX_SW_STATE_DIAG_RES_MNGR,
        NULL,
        DNXC_SW_STATE_NO_FLAGS);

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * nof_free_elements_get function for the variable ingress_context
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_tdm_db_ingress_context_nof_free_elements_get(int unit, int *nof_free_elements)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    VERIFY_FUNCTION_CALL_ALLOWED(
        unit,
        ALGO_TDM_MODULE_ID,
        SW_STATE_FUNC_NOF_FREE_ELEMENTS_GET,
        DNXC_SW_STATE_NO_FLAGS);

    VERIFY_MODULE_IS_INITIALIZED(
        unit,
        ALGO_TDM_MODULE_ID,
        sw_state_roots_array[unit][ALGO_TDM_MODULE_ID]);

    DNX_SW_STATE_DIAG_INFO_PRE(
        unit,
        ALGO_TDM_MODULE_ID);

    DNX_ALGO_RES_MNGR_NOF_FREE_ELEMENTS_GET(
        ALGO_TDM_MODULE_ID,
        ((algo_tdm_sw_state_t*)sw_state_roots_array[unit][ALGO_TDM_MODULE_ID])->ingress_context,
        nof_free_elements);

    DNX_SW_STATE_LOG(
        unit,
        DNX_SW_STATE_RES_MNGR_NOF_FREE_ELEMENTS_GET_LOGGING,
        BSL_LS_SWSTATEDNX_RES_MNGRNOF_FREE_ELEMENTS_GET,
        ALGO_TDM_MODULE_ID,
        &((algo_tdm_sw_state_t*)sw_state_roots_array[unit][ALGO_TDM_MODULE_ID])->ingress_context,
        "algo_tdm_db[%d]->ingress_context",
        unit);

    DNX_SW_STATE_DIAG_INFO_POST_WITH_FLAGS(
        unit,
        ALGO_TDM_MODULE_ID,
        algo_tdm_db_info,
        ALGO_TDM_DB_INGRESS_CONTEXT_INFO,
        DNX_SW_STATE_DIAG_RES_MNGR,
        NULL,
        DNXC_SW_STATE_NO_FLAGS);

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * get_next function for the variable ingress_context
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_tdm_db_ingress_context_get_next(int unit, int *element)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    VERIFY_FUNCTION_CALL_ALLOWED(
        unit,
        ALGO_TDM_MODULE_ID,
        SW_STATE_FUNC_GET_NEXT,
        DNXC_SW_STATE_NO_FLAGS);

    VERIFY_MODULE_IS_INITIALIZED(
        unit,
        ALGO_TDM_MODULE_ID,
        sw_state_roots_array[unit][ALGO_TDM_MODULE_ID]);

    DNX_SW_STATE_DIAG_INFO_PRE(
        unit,
        ALGO_TDM_MODULE_ID);

    DNX_ALGO_RES_MNGR_GET_NEXT(
        ALGO_TDM_MODULE_ID,
        ((algo_tdm_sw_state_t*)sw_state_roots_array[unit][ALGO_TDM_MODULE_ID])->ingress_context,
        element);

    DNX_SW_STATE_LOG(
        unit,
        DNX_SW_STATE_RES_MNGR_GET_NEXT_LOGGING,
        BSL_LS_SWSTATEDNX_RES_MNGRGET_NEXT,
        ALGO_TDM_MODULE_ID,
        &((algo_tdm_sw_state_t*)sw_state_roots_array[unit][ALGO_TDM_MODULE_ID])->ingress_context,
        "algo_tdm_db[%d]->ingress_context",
        unit);

    DNX_SW_STATE_DIAG_INFO_POST_WITH_FLAGS(
        unit,
        ALGO_TDM_MODULE_ID,
        algo_tdm_db_info,
        ALGO_TDM_DB_INGRESS_CONTEXT_INFO,
        DNX_SW_STATE_DIAG_RES_MNGR,
        NULL,
        DNXC_SW_STATE_NO_FLAGS);

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * set function for the variable link_mask
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_tdm_db_link_mask_set(int unit, dnx_algo_template_t link_mask)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    VERIFY_FUNCTION_CALL_ALLOWED(
        unit,
        ALGO_TDM_MODULE_ID,
        SW_STATE_FUNC_SET,
        DNXC_SW_STATE_NO_FLAGS);

    VERIFY_MODULE_IS_INITIALIZED(
        unit,
        ALGO_TDM_MODULE_ID,
        sw_state_roots_array[unit][ALGO_TDM_MODULE_ID]);

    DNX_SW_STATE_DIAG_INFO_PRE(
        unit,
        ALGO_TDM_MODULE_ID);

    DNX_SW_STATE_SET(
        unit,
        ALGO_TDM_MODULE_ID,
        ((algo_tdm_sw_state_t*)sw_state_roots_array[unit][ALGO_TDM_MODULE_ID])->link_mask,
        link_mask,
        dnx_algo_template_t,
        0,
        "algo_tdm_db_link_mask_set");

    DNX_SW_STATE_LOG(
        unit,
        DNX_SW_STATE_SET_LOGGING,
        BSL_LS_SWSTATEDNX_SET,
        ALGO_TDM_MODULE_ID,
        &link_mask,
        "algo_tdm_db[%d]->link_mask",
        unit);

    DNX_SW_STATE_DIAG_INFO_POST(
        unit,
        ALGO_TDM_MODULE_ID,
        algo_tdm_db_info,
        ALGO_TDM_DB_LINK_MASK_INFO,
        DNX_SW_STATE_DIAG_MODIFY,
        NULL);

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * get function for the variable link_mask
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_tdm_db_link_mask_get(int unit, dnx_algo_template_t *link_mask)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    VERIFY_FUNCTION_CALL_ALLOWED(
        unit,
        ALGO_TDM_MODULE_ID,
        SW_STATE_FUNC_GET,
        DNXC_SW_STATE_NO_FLAGS);

    VERIFY_MODULE_IS_INITIALIZED(
        unit,
        ALGO_TDM_MODULE_ID,
        sw_state_roots_array[unit][ALGO_TDM_MODULE_ID]);

    DNX_SW_STATE_PTR_NULL_CHECK(
        unit,
        ALGO_TDM_MODULE_ID,
        link_mask);

    DNX_SW_STATE_DIAG_INFO_PRE(
        unit,
        ALGO_TDM_MODULE_ID);

    *link_mask = ((algo_tdm_sw_state_t*)sw_state_roots_array[unit][ALGO_TDM_MODULE_ID])->link_mask;
    DNX_SW_STATE_LOG(
        unit,
        DNX_SW_STATE_GET_LOGGING,
        BSL_LS_SWSTATEDNX_GET,
        ALGO_TDM_MODULE_ID,
        &((algo_tdm_sw_state_t*)sw_state_roots_array[unit][ALGO_TDM_MODULE_ID])->link_mask,
        "algo_tdm_db[%d]->link_mask",
        unit);

    DNX_SW_STATE_DIAG_INFO_POST(
        unit,
        ALGO_TDM_MODULE_ID,
        algo_tdm_db_info,
        ALGO_TDM_DB_LINK_MASK_INFO,
        DNX_SW_STATE_DIAG_READ,
        NULL);

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * create function for the variable link_mask
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_tdm_db_link_mask_create(int unit, dnx_algo_template_create_data_t * data, void *extra_arguments)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    VERIFY_FUNCTION_CALL_ALLOWED(
        unit,
        ALGO_TDM_MODULE_ID,
        SW_STATE_FUNC_CREATE,
        DNXC_SW_STATE_NO_FLAGS);

    VERIFY_MODULE_IS_INITIALIZED(
        unit,
        ALGO_TDM_MODULE_ID,
        sw_state_roots_array[unit][ALGO_TDM_MODULE_ID]);

    DNX_SW_STATE_DIAG_INFO_PRE(
        unit,
        ALGO_TDM_MODULE_ID);

    DNX_ALGO_TEMP_MNGR_CREATE(
        ALGO_TDM_MODULE_ID,
        ((algo_tdm_sw_state_t*)sw_state_roots_array[unit][ALGO_TDM_MODULE_ID])->link_mask,
        data,
        extra_arguments,
        DNXC_SW_STATE_AUTO_GENERATED_ALLOCATION);

    DNX_SW_STATE_LOG(
        unit,
        DNX_SW_STATE_TEMP_MNGR_CREATE_LOGGING,
        BSL_LS_SWSTATEDNX_TEMP_MNGRCREATE,
        ALGO_TDM_MODULE_ID,
        &((algo_tdm_sw_state_t*)sw_state_roots_array[unit][ALGO_TDM_MODULE_ID])->link_mask,
        "algo_tdm_db[%d]->link_mask",
        unit);

    DNX_SW_STATE_DIAG_INFO_POST_WITH_FLAGS(
        unit,
        ALGO_TDM_MODULE_ID,
        algo_tdm_db_info,
        ALGO_TDM_DB_LINK_MASK_INFO,
        DNX_SW_STATE_DIAG_TEMP_MNGR,
        NULL,
        DNXC_SW_STATE_AUTO_GENERATED_ALLOCATION);

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * allocate_single function for the variable link_mask
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_tdm_db_link_mask_allocate_single(int unit, uint32 flags, dnx_tdm_link_mask_t *profile_data, void *extra_arguments, int *profile, uint8 *first_reference)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    VERIFY_FUNCTION_CALL_ALLOWED(
        unit,
        ALGO_TDM_MODULE_ID,
        SW_STATE_FUNC_ALLOCATE_SINGLE,
        DNXC_SW_STATE_NO_FLAGS);

    VERIFY_MODULE_IS_INITIALIZED(
        unit,
        ALGO_TDM_MODULE_ID,
        sw_state_roots_array[unit][ALGO_TDM_MODULE_ID]);

    DNX_SW_STATE_DIAG_INFO_PRE(
        unit,
        ALGO_TDM_MODULE_ID);

    DNX_ALGO_TEMP_MNGR_ALLOCATE_SINGLE(
        ALGO_TDM_MODULE_ID,
        ((algo_tdm_sw_state_t*)sw_state_roots_array[unit][ALGO_TDM_MODULE_ID])->link_mask,
        flags,
        profile_data,
        extra_arguments,
        profile,
        first_reference);

    DNX_SW_STATE_LOG(
        unit,
        DNX_SW_STATE_TEMP_MNGR_ALLOCATE_SINGLE_LOGGING,
        BSL_LS_SWSTATEDNX_TEMP_MNGRALLOCATE_SINGLE,
        ALGO_TDM_MODULE_ID,
        &((algo_tdm_sw_state_t*)sw_state_roots_array[unit][ALGO_TDM_MODULE_ID])->link_mask,
        "algo_tdm_db[%d]->link_mask",
        unit);

    DNX_SW_STATE_DIAG_INFO_POST_WITH_FLAGS(
        unit,
        ALGO_TDM_MODULE_ID,
        algo_tdm_db_info,
        ALGO_TDM_DB_LINK_MASK_INFO,
        DNX_SW_STATE_DIAG_TEMP_MNGR,
        NULL,
        DNXC_SW_STATE_NO_FLAGS);

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * free_single function for the variable link_mask
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_tdm_db_link_mask_free_single(int unit, int profile, uint8 *last_reference)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    VERIFY_FUNCTION_CALL_ALLOWED(
        unit,
        ALGO_TDM_MODULE_ID,
        SW_STATE_FUNC_FREE_SINGLE,
        DNXC_SW_STATE_NO_FLAGS);

    VERIFY_MODULE_IS_INITIALIZED(
        unit,
        ALGO_TDM_MODULE_ID,
        sw_state_roots_array[unit][ALGO_TDM_MODULE_ID]);

    DNX_SW_STATE_DIAG_INFO_PRE(
        unit,
        ALGO_TDM_MODULE_ID);

    DNX_ALGO_TEMP_MNGR_FREE_SINGLE(
        ALGO_TDM_MODULE_ID,
        ((algo_tdm_sw_state_t*)sw_state_roots_array[unit][ALGO_TDM_MODULE_ID])->link_mask,
        profile,
        last_reference);

    DNX_SW_STATE_LOG(
        unit,
        DNX_SW_STATE_TEMP_MNGR_FREE_SINGLE_LOGGING,
        BSL_LS_SWSTATEDNX_TEMP_MNGRFREE_SINGLE,
        ALGO_TDM_MODULE_ID,
        &((algo_tdm_sw_state_t*)sw_state_roots_array[unit][ALGO_TDM_MODULE_ID])->link_mask,
        "algo_tdm_db[%d]->link_mask",
        unit);

    DNX_SW_STATE_DIAG_INFO_POST_WITH_FLAGS(
        unit,
        ALGO_TDM_MODULE_ID,
        algo_tdm_db_info,
        ALGO_TDM_DB_LINK_MASK_INFO,
        DNX_SW_STATE_DIAG_TEMP_MNGR,
        NULL,
        DNXC_SW_STATE_NO_FLAGS);

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * exchange function for the variable link_mask
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_tdm_db_link_mask_exchange(int unit, uint32 flags, const dnx_tdm_link_mask_t *profile_data, int old_profile, const void *extra_arguments, int *new_profile, uint8 *first_reference, uint8 *last_reference)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    VERIFY_FUNCTION_CALL_ALLOWED(
        unit,
        ALGO_TDM_MODULE_ID,
        SW_STATE_FUNC_EXCHANGE,
        DNXC_SW_STATE_NO_FLAGS);

    VERIFY_MODULE_IS_INITIALIZED(
        unit,
        ALGO_TDM_MODULE_ID,
        sw_state_roots_array[unit][ALGO_TDM_MODULE_ID]);

    DNX_SW_STATE_DIAG_INFO_PRE(
        unit,
        ALGO_TDM_MODULE_ID);

    DNX_ALGO_TEMP_MNGR_EXCHANGE(
        ALGO_TDM_MODULE_ID,
        ((algo_tdm_sw_state_t*)sw_state_roots_array[unit][ALGO_TDM_MODULE_ID])->link_mask,
        flags,
        profile_data,
        old_profile,
        extra_arguments,
        new_profile,
        first_reference,
        last_reference);

    DNX_SW_STATE_LOG(
        unit,
        DNX_SW_STATE_TEMP_MNGR_EXCHANGE_LOGGING,
        BSL_LS_SWSTATEDNX_TEMP_MNGREXCHANGE,
        ALGO_TDM_MODULE_ID,
        &((algo_tdm_sw_state_t*)sw_state_roots_array[unit][ALGO_TDM_MODULE_ID])->link_mask,
        "algo_tdm_db[%d]->link_mask",
        unit);

    DNX_SW_STATE_DIAG_INFO_POST_WITH_FLAGS(
        unit,
        ALGO_TDM_MODULE_ID,
        algo_tdm_db_info,
        ALGO_TDM_DB_LINK_MASK_INFO,
        DNX_SW_STATE_DIAG_TEMP_MNGR,
        NULL,
        DNXC_SW_STATE_NO_FLAGS);

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * replace_data function for the variable link_mask
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_tdm_db_link_mask_replace_data(int unit, int profile, const dnx_tdm_link_mask_t *new_profile_data)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    VERIFY_FUNCTION_CALL_ALLOWED(
        unit,
        ALGO_TDM_MODULE_ID,
        SW_STATE_FUNC_REPLACE_DATA,
        DNXC_SW_STATE_NO_FLAGS);

    VERIFY_MODULE_IS_INITIALIZED(
        unit,
        ALGO_TDM_MODULE_ID,
        sw_state_roots_array[unit][ALGO_TDM_MODULE_ID]);

    DNX_SW_STATE_DIAG_INFO_PRE(
        unit,
        ALGO_TDM_MODULE_ID);

    DNX_ALGO_TEMP_MNGR_REPLACE_DATA(
        ALGO_TDM_MODULE_ID,
        ((algo_tdm_sw_state_t*)sw_state_roots_array[unit][ALGO_TDM_MODULE_ID])->link_mask,
        profile,
        new_profile_data);

    DNX_SW_STATE_LOG(
        unit,
        DNX_SW_STATE_TEMP_MNGR_REPLACE_DATA_LOGGING,
        BSL_LS_SWSTATEDNX_TEMP_MNGRREPLACE_DATA,
        ALGO_TDM_MODULE_ID,
        &((algo_tdm_sw_state_t*)sw_state_roots_array[unit][ALGO_TDM_MODULE_ID])->link_mask,
        "algo_tdm_db[%d]->link_mask",
        unit);

    DNX_SW_STATE_DIAG_INFO_POST_WITH_FLAGS(
        unit,
        ALGO_TDM_MODULE_ID,
        algo_tdm_db_info,
        ALGO_TDM_DB_LINK_MASK_INFO,
        DNX_SW_STATE_DIAG_TEMP_MNGR,
        NULL,
        DNXC_SW_STATE_NO_FLAGS);

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * profile_data_get function for the variable link_mask
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_tdm_db_link_mask_profile_data_get(int unit, int profile, int *ref_count, dnx_tdm_link_mask_t *profile_data)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    VERIFY_FUNCTION_CALL_ALLOWED(
        unit,
        ALGO_TDM_MODULE_ID,
        SW_STATE_FUNC_PROFILE_DATA_GET,
        DNXC_SW_STATE_NO_FLAGS);

    VERIFY_MODULE_IS_INITIALIZED(
        unit,
        ALGO_TDM_MODULE_ID,
        sw_state_roots_array[unit][ALGO_TDM_MODULE_ID]);

    DNX_SW_STATE_DIAG_INFO_PRE(
        unit,
        ALGO_TDM_MODULE_ID);

    DNX_ALGO_TEMP_MNGR_PROFILE_DATA_GET(
        ALGO_TDM_MODULE_ID,
        ((algo_tdm_sw_state_t*)sw_state_roots_array[unit][ALGO_TDM_MODULE_ID])->link_mask,
        profile,
        ref_count,
        profile_data);

    DNX_SW_STATE_LOG(
        unit,
        DNX_SW_STATE_TEMP_MNGR_PROFILE_DATA_GET_LOGGING,
        BSL_LS_SWSTATEDNX_TEMP_MNGRPROFILE_DATA_GET,
        ALGO_TDM_MODULE_ID,
        &((algo_tdm_sw_state_t*)sw_state_roots_array[unit][ALGO_TDM_MODULE_ID])->link_mask,
        "algo_tdm_db[%d]->link_mask",
        unit);

    DNX_SW_STATE_DIAG_INFO_POST_WITH_FLAGS(
        unit,
        ALGO_TDM_MODULE_ID,
        algo_tdm_db_info,
        ALGO_TDM_DB_LINK_MASK_INFO,
        DNX_SW_STATE_DIAG_TEMP_MNGR,
        NULL,
        DNXC_SW_STATE_NO_FLAGS);

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * clear function for the variable link_mask
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_tdm_db_link_mask_clear(int unit)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    VERIFY_FUNCTION_CALL_ALLOWED(
        unit,
        ALGO_TDM_MODULE_ID,
        SW_STATE_FUNC_CLEAR,
        DNXC_SW_STATE_NO_FLAGS);

    VERIFY_MODULE_IS_INITIALIZED(
        unit,
        ALGO_TDM_MODULE_ID,
        sw_state_roots_array[unit][ALGO_TDM_MODULE_ID]);

    DNX_SW_STATE_DIAG_INFO_PRE(
        unit,
        ALGO_TDM_MODULE_ID);

    DNX_ALGO_TEMP_MNGR_CLEAR(
        ALGO_TDM_MODULE_ID,
        ((algo_tdm_sw_state_t*)sw_state_roots_array[unit][ALGO_TDM_MODULE_ID])->link_mask);

    DNX_SW_STATE_LOG(
        unit,
        DNX_SW_STATE_TEMP_MNGR_CLEAR_LOGGING,
        BSL_LS_SWSTATEDNX_TEMP_MNGRCLEAR,
        ALGO_TDM_MODULE_ID,
        &((algo_tdm_sw_state_t*)sw_state_roots_array[unit][ALGO_TDM_MODULE_ID])->link_mask,
        "algo_tdm_db[%d]->link_mask",
        unit);

    DNX_SW_STATE_DIAG_INFO_POST_WITH_FLAGS(
        unit,
        ALGO_TDM_MODULE_ID,
        algo_tdm_db_info,
        ALGO_TDM_DB_LINK_MASK_INFO,
        DNX_SW_STATE_DIAG_TEMP_MNGR,
        NULL,
        DNXC_SW_STATE_NO_FLAGS);

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * get_next function for the variable link_mask
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_tdm_db_link_mask_get_next(int unit, int *current_profile)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    VERIFY_FUNCTION_CALL_ALLOWED(
        unit,
        ALGO_TDM_MODULE_ID,
        SW_STATE_FUNC_GET_NEXT,
        DNXC_SW_STATE_NO_FLAGS);

    VERIFY_MODULE_IS_INITIALIZED(
        unit,
        ALGO_TDM_MODULE_ID,
        sw_state_roots_array[unit][ALGO_TDM_MODULE_ID]);

    DNX_SW_STATE_DIAG_INFO_PRE(
        unit,
        ALGO_TDM_MODULE_ID);

    DNX_ALGO_TEMP_MNGR_GET_NEXT(
        ALGO_TDM_MODULE_ID,
        ((algo_tdm_sw_state_t*)sw_state_roots_array[unit][ALGO_TDM_MODULE_ID])->link_mask,
        current_profile);

    DNX_SW_STATE_LOG(
        unit,
        DNX_SW_STATE_TEMP_MNGR_GET_NEXT_LOGGING,
        BSL_LS_SWSTATEDNX_TEMP_MNGRGET_NEXT,
        ALGO_TDM_MODULE_ID,
        &((algo_tdm_sw_state_t*)sw_state_roots_array[unit][ALGO_TDM_MODULE_ID])->link_mask,
        "algo_tdm_db[%d]->link_mask",
        unit);

    DNX_SW_STATE_DIAG_INFO_POST_WITH_FLAGS(
        unit,
        ALGO_TDM_MODULE_ID,
        algo_tdm_db_info,
        ALGO_TDM_DB_LINK_MASK_INFO,
        DNX_SW_STATE_DIAG_TEMP_MNGR,
        NULL,
        DNXC_SW_STATE_NO_FLAGS);

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * advanced_algorithm_info_get function for the variable link_mask
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_tdm_db_link_mask_advanced_algorithm_info_get(int unit, void *algorithm_info)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    VERIFY_FUNCTION_CALL_ALLOWED(
        unit,
        ALGO_TDM_MODULE_ID,
        SW_STATE_FUNC_ADVANCED_ALGORITHM_INFO_GET,
        DNXC_SW_STATE_NO_FLAGS);

    VERIFY_MODULE_IS_INITIALIZED(
        unit,
        ALGO_TDM_MODULE_ID,
        sw_state_roots_array[unit][ALGO_TDM_MODULE_ID]);

    DNX_SW_STATE_DIAG_INFO_PRE(
        unit,
        ALGO_TDM_MODULE_ID);

    DNX_ALGO_TEMP_MNGR_ADVANCED_ALGORITHM_INFO_GET(
        ALGO_TDM_MODULE_ID,
        ((algo_tdm_sw_state_t*)sw_state_roots_array[unit][ALGO_TDM_MODULE_ID])->link_mask,
        algorithm_info);

    DNX_SW_STATE_LOG(
        unit,
        DNX_SW_STATE_TEMP_MNGR_ADVANCED_ALGORITHM_INFO_GET_LOGGING,
        BSL_LS_SWSTATEDNX_TEMP_MNGRADVANCED_ALGORITHM_INFO_GET,
        ALGO_TDM_MODULE_ID,
        &((algo_tdm_sw_state_t*)sw_state_roots_array[unit][ALGO_TDM_MODULE_ID])->link_mask,
        "algo_tdm_db[%d]->link_mask",
        unit);

    DNX_SW_STATE_DIAG_INFO_POST_WITH_FLAGS(
        unit,
        ALGO_TDM_MODULE_ID,
        algo_tdm_db_info,
        ALGO_TDM_DB_LINK_MASK_INFO,
        DNX_SW_STATE_DIAG_TEMP_MNGR,
        NULL,
        DNXC_SW_STATE_NO_FLAGS);

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 * Global Variables
 */

algo_tdm_db_cbs algo_tdm_db = 	{
	
	algo_tdm_db_is_init,
	algo_tdm_db_init,
		{
		
		algo_tdm_db_ingress_context_set,
		algo_tdm_db_ingress_context_get,
		algo_tdm_db_ingress_context_create,
		algo_tdm_db_ingress_context_allocate_single,
		algo_tdm_db_ingress_context_free_single,
		algo_tdm_db_ingress_context_is_allocated,
		algo_tdm_db_ingress_context_nof_free_elements_get,
		algo_tdm_db_ingress_context_get_next}
	,
		{
		
		algo_tdm_db_link_mask_set,
		algo_tdm_db_link_mask_get,
		algo_tdm_db_link_mask_create,
		algo_tdm_db_link_mask_allocate_single,
		algo_tdm_db_link_mask_free_single,
		algo_tdm_db_link_mask_exchange,
		algo_tdm_db_link_mask_replace_data,
		algo_tdm_db_link_mask_profile_data_get,
		algo_tdm_db_link_mask_clear,
		algo_tdm_db_link_mask_get_next,
		algo_tdm_db_link_mask_advanced_algorithm_info_get}
	}
;
#undef BSL_LOG_MODULE
