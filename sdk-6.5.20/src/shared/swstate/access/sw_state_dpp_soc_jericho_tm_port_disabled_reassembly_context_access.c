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
#include <shared/swstate/access/sw_state_dpp_soc_jericho_tm_port_disabled_reassembly_context_access.h>

#ifdef _ERR_MSG_MODULE_NAME
    #error "_ERR_MSG_MODULE_NAME redefined"
#endif

#define _ERR_MSG_MODULE_NAME BSL_LS_SHARED_SWSTATE

extern shr_sw_state_t *sw_state[BCM_MAX_NUM_UNITS];

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_jericho_tm_port_disabled_reassembly_context_set(int unit, int port_disabled_reassembly_context_idx_0, uint32 port_disabled_reassembly_context){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_VERIFY( sw_state_access[unit].dpp.soc.jericho.tm.port_disabled_reassembly_context.verify( unit, port_disabled_reassembly_context_idx_0));
    SHR_SW_STATE_SET(
        unit,
        sw_state[unit]->dpp.soc.jericho.tm.port_disabled_reassembly_context[port_disabled_reassembly_context_idx_0],
        port_disabled_reassembly_context,
        uint32,
        SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
        "sw_state_dpp_soc_jericho_tm_port_disabled_reassembly_context_set");
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_jericho_tm_port_disabled_reassembly_context_get(int unit, int port_disabled_reassembly_context_idx_0, uint32 *port_disabled_reassembly_context){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_VERIFY( sw_state_access[unit].dpp.soc.jericho.tm.port_disabled_reassembly_context.verify( unit, port_disabled_reassembly_context_idx_0));
    *port_disabled_reassembly_context = sw_state[unit]->dpp.soc.jericho.tm.port_disabled_reassembly_context[port_disabled_reassembly_context_idx_0];
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_jericho_tm_port_disabled_reassembly_context_verify(int unit, int port_disabled_reassembly_context_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.jericho.tm.verify( unit);
    _SOC_IF_ERR_EXIT(_rv);
    SW_STATE_OUT_OF_BOUND_CHECK( port_disabled_reassembly_context_idx_0, SOC_DPP_DEFS_MAX(NOF_LOGICAL_PORTS), "port_disabled_reassembly_context");
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 


int
sw_state_dpp_soc_jericho_tm_port_disabled_reassembly_context_access_cb_init(int unit){
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.jericho.tm.port_disabled_reassembly_context.set = sw_state_dpp_soc_jericho_tm_port_disabled_reassembly_context_set;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.jericho.tm.port_disabled_reassembly_context.get = sw_state_dpp_soc_jericho_tm_port_disabled_reassembly_context_get;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.jericho.tm.port_disabled_reassembly_context.verify = sw_state_dpp_soc_jericho_tm_port_disabled_reassembly_context_verify;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
    return _SHR_E_NONE;
}

#undef _ERR_MSG_MODULE_NAME
