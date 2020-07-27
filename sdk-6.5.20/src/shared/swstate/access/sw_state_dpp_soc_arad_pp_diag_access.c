/* 
 * 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 * 
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 */

#include <sal/core/libc.h>
#include <shared/swstate/sw_state.h>
#include <shared/error.h>
#include <shared/swstate/sw_state_defs.h>
#include <shared/bsl.h>
#include <shared/swstate/access/sw_state_access.h>
#include <shared/swstate/access/sw_state_dpp_soc_arad_pp_diag_access.h>

#ifdef _ERR_MSG_MODULE_NAME
    #error "_ERR_MSG_MODULE_NAME redefined"
#endif

#define _ERR_MSG_MODULE_NAME BSL_LS_SHARED_SWSTATE

extern shr_sw_state_t *sw_state[BCM_MAX_NUM_UNITS];

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_diag_set(int unit, CONST ARAD_PP_SW_DB_DIAG *diag){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_VERIFY( sw_state_access[unit].dpp.soc.arad.pp.diag.verify( unit));
    SHR_SW_STATE_MEMSET(
        unit,
        sw_state[unit]->dpp.soc.arad.pp->diag[0],
        diag,
        ARAD_PP_SW_DB_DIAG,
        SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
        "sw_state_dpp_soc_arad_pp_diag_set");
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_diag_get(int unit, ARAD_PP_SW_DB_DIAG *diag){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_VERIFY( sw_state_access[unit].dpp.soc.arad.pp.diag.verify( unit));
    *diag = sw_state[unit]->dpp.soc.arad.pp->diag[0];
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_diag_alloc(int unit){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_ALLOC(
        unit,
        sw_state[unit]->dpp.soc.arad.pp->diag,
        sizeof(ARAD_PP_SW_DB_DIAG),
        SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
        "sw_state_dpp_soc_arad_pp_diag_alloc");
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_diag_is_allocated(int unit, uint8 *is_allocated){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_IS_ALLOC(
        unit,
        sw_state[unit]->dpp.soc.arad.pp->diag,
        is_allocated,
        SW_STATE_NONE,
        "sw_state_dpp_soc_arad_pp_diag_alloc");
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_diag_free(int unit){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_FREE(
        unit,
        sw_state[unit]->dpp.soc.arad.pp->diag,
        SW_STATE_NONE,
        "sw_state_dpp_soc_arad_pp_diag_alloc");
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_diag_verify(int unit){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.verify( unit);
    _SOC_IF_ERR_EXIT(_rv);
    SW_STATE_NULL_ACCESS_CHECK(sw_state[unit]->dpp.soc.arad.pp->diag);
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_diag_trap_dest_set(int unit, int trap_dest_idx_0, uint32 trap_dest){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_VERIFY( sw_state_access[unit].dpp.soc.arad.pp.diag.trap_dest.verify( unit, trap_dest_idx_0));
    SHR_SW_STATE_SET(
        unit,
        sw_state[unit]->dpp.soc.arad.pp->diag->trap_dest[trap_dest_idx_0],
        trap_dest,
        uint32,
        SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
        "sw_state_dpp_soc_arad_pp_diag_trap_dest_set");
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_diag_trap_dest_get(int unit, int trap_dest_idx_0, uint32 *trap_dest){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_VERIFY( sw_state_access[unit].dpp.soc.arad.pp.diag.trap_dest.verify( unit, trap_dest_idx_0));
    *trap_dest = sw_state[unit]->dpp.soc.arad.pp->diag->trap_dest[trap_dest_idx_0];
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_diag_trap_dest_verify(int unit, int trap_dest_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.diag.verify( unit);
    _SOC_IF_ERR_EXIT(_rv);
    SW_STATE_OUT_OF_BOUND_CHECK( trap_dest_idx_0, SOC_PPC_NOF_TRAP_CODES*4, "trap_dest");
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_diag_already_saved_set(int unit, uint8 already_saved){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_VERIFY( sw_state_access[unit].dpp.soc.arad.pp.diag.already_saved.verify( unit));
    SHR_SW_STATE_SET(
        unit,
        sw_state[unit]->dpp.soc.arad.pp->diag->already_saved,
        already_saved,
        uint8,
        SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
        "sw_state_dpp_soc_arad_pp_diag_already_saved_set");
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_diag_already_saved_get(int unit, uint8 *already_saved){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_VERIFY( sw_state_access[unit].dpp.soc.arad.pp.diag.already_saved.verify( unit));
    *already_saved = sw_state[unit]->dpp.soc.arad.pp->diag->already_saved;
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_diag_already_saved_verify(int unit){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.diag.verify( unit);
    _SOC_IF_ERR_EXIT(_rv);
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_diag_mode_info_set(int unit, CONST SOC_PPC_DIAG_MODE_INFO *mode_info){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_VERIFY( sw_state_access[unit].dpp.soc.arad.pp.diag.mode_info.verify( unit));
    SHR_SW_STATE_MEMSET(
        unit,
        sw_state[unit]->dpp.soc.arad.pp->diag->mode_info,
        mode_info,
        SOC_PPC_DIAG_MODE_INFO,
        SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
        "sw_state_dpp_soc_arad_pp_diag_mode_info_set");
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_diag_mode_info_get(int unit, SOC_PPC_DIAG_MODE_INFO *mode_info){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_VERIFY( sw_state_access[unit].dpp.soc.arad.pp.diag.mode_info.verify( unit));
    *mode_info = sw_state[unit]->dpp.soc.arad.pp->diag->mode_info;
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_diag_mode_info_verify(int unit){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.diag.verify( unit);
    _SOC_IF_ERR_EXIT(_rv);
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_diag_mode_info_flavor_set(int unit, uint32 flavor){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_VERIFY( sw_state_access[unit].dpp.soc.arad.pp.diag.mode_info.flavor.verify( unit));
    SHR_SW_STATE_SET(
        unit,
        sw_state[unit]->dpp.soc.arad.pp->diag->mode_info.flavor,
        flavor,
        uint32,
        SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
        "sw_state_dpp_soc_arad_pp_diag_mode_info_flavor_set");
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_diag_mode_info_flavor_get(int unit, uint32 *flavor){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_VERIFY( sw_state_access[unit].dpp.soc.arad.pp.diag.mode_info.flavor.verify( unit));
    *flavor = sw_state[unit]->dpp.soc.arad.pp->diag->mode_info.flavor;
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_diag_mode_info_flavor_verify(int unit){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.diag.mode_info.verify( unit);
    _SOC_IF_ERR_EXIT(_rv);
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 


int
sw_state_dpp_soc_arad_pp_diag_access_cb_init(int unit){
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.diag.set = sw_state_dpp_soc_arad_pp_diag_set;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.diag.get = sw_state_dpp_soc_arad_pp_diag_get;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.diag.alloc = sw_state_dpp_soc_arad_pp_diag_alloc;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.diag.is_allocated = sw_state_dpp_soc_arad_pp_diag_is_allocated;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.diag.free = sw_state_dpp_soc_arad_pp_diag_free;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.diag.verify = sw_state_dpp_soc_arad_pp_diag_verify;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.diag.trap_dest.set = sw_state_dpp_soc_arad_pp_diag_trap_dest_set;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.diag.trap_dest.get = sw_state_dpp_soc_arad_pp_diag_trap_dest_get;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.diag.trap_dest.verify = sw_state_dpp_soc_arad_pp_diag_trap_dest_verify;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.diag.already_saved.set = sw_state_dpp_soc_arad_pp_diag_already_saved_set;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.diag.already_saved.get = sw_state_dpp_soc_arad_pp_diag_already_saved_get;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.diag.already_saved.verify = sw_state_dpp_soc_arad_pp_diag_already_saved_verify;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.diag.mode_info.set = sw_state_dpp_soc_arad_pp_diag_mode_info_set;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.diag.mode_info.get = sw_state_dpp_soc_arad_pp_diag_mode_info_get;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.diag.mode_info.verify = sw_state_dpp_soc_arad_pp_diag_mode_info_verify;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.diag.mode_info.flavor.set = sw_state_dpp_soc_arad_pp_diag_mode_info_flavor_set;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.diag.mode_info.flavor.get = sw_state_dpp_soc_arad_pp_diag_mode_info_flavor_get;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.diag.mode_info.flavor.verify = sw_state_dpp_soc_arad_pp_diag_mode_info_flavor_verify;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
    return _SHR_E_NONE;
}

#undef _ERR_MSG_MODULE_NAME
