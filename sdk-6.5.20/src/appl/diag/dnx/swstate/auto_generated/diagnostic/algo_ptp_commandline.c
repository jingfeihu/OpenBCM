/** \file dnx/swstate/auto_generated/diagnostic/algo_ptp_commandline.c
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

#include <shared/error.h>
#include <shared/bsl.h>
#include <appl/diag/sand/diag_sand_framework.h>
#include <appl/diag/sand/diag_sand_utils.h>
#include <soc/dnxc/swstate/dnxc_sw_state_c_includes.h>
#include <bcm_int/dnx/algo/swstate/auto_generated/diagnostic/algo_ptp_diagnostic.h>
#include "algo_ptp_commandline.h"
#include <bcm_int/dnx/algo/swstate/auto_generated/access/algo_ptp_access.h>
#if defined(DNX_SW_STATE_DIAGNOSTIC)
sh_sand_cmd_t sh_dnx_swstate_algo_ptp_cmds[] = {
    {"ptp_port_profile", NULL, sh_dnx_swstate_algo_ptp_ptp_port_profile_cmds, NULL, &dnx_swstate_algo_ptp_ptp_port_profile_man},
    {"dump", sh_dnx_swstate_algo_ptp_dump_cmd, NULL, dnx_swstate_algo_ptp_dump_options, &dnx_swstate_algo_ptp_dump_man},
    {"size_get", sh_dnx_swstate_algo_ptp_size_get_cmd, NULL, dnx_swstate_algo_ptp_size_get_options, &dnx_swstate_algo_ptp_size_get_man},
    {"diagnostic_operation_counters", sh_dnx_swstate_algo_ptp_diagnostic_operation_counters_cmd, NULL, dnx_swstate_algo_ptp_diagnostic_operation_counters_options, &dnx_swstate_algo_ptp_diagnostic_operation_counters_man},
    {NULL}
};


shr_error_e sh_dnx_swstate_algo_ptp_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    uint8 is_init;
    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);

    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    algo_ptp_db.is_init(unit, &is_init);
    if (is_init) {
        SHR_IF_ERR_EXIT(algo_ptp_db_dump(unit, filters));
        if (!filters.nocontent)
        {
            dnx_sw_state_dump_detach_file(unit);
        }
    }
    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_algo_ptp_dump_options[] = {
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_ptp_dump_man = {
    "swstate algo_ptp dump",
    "print the module's content",
    "swstate algo_ptp dump",
    "swstate algo_ptp dump nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_algo_ptp_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    uint32 size = 0;
    SHR_FUNC_INIT_VARS(unit);

    size = dnx_sw_state_info_size_get(algo_ptp_db_info[unit], algo_ptp_db_layout_str, ALGO_PTP_DB_INFO_NOF_ENTRIES, "ALGO_PTP_DB~", 0);
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_algo_ptp_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_ptp_size_get_man = {
    "swstate algo_ptp size_get",
    "print the module's size",
    "swstate algo_ptp size_get",
    "swstate algo_ptp size_get",
};


shr_error_e sh_dnx_swstate_algo_ptp_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{


    SHR_FUNC_INIT_VARS(unit);

    dnx_sw_state_diagnostic_operation_counters_print(algo_ptp_db_info[unit], algo_ptp_db_layout_str, ALGO_PTP_DB_INFO_NOF_ENTRIES, "ALGO_PTP_DB~");
    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_algo_ptp_diagnostic_operation_counters_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_ptp_diagnostic_operation_counters_man = {
    "swstate algo_ptp diagnostic_operation_counters",
    "print the module's diagnostic operation counters",
    "swstate algo_ptp diagnostic_operation_counters",
    "swstate algo_ptp diagnostic_operation_counters",
};


sh_sand_man_t dnx_swstate_algo_ptp_man = {
    cmd_dnx_swstate_algo_ptp_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_algo_ptp_desc[] = "swstate algo_ptp commands";



sh_sand_cmd_t sh_dnx_swstate_algo_ptp_ptp_port_profile_cmds[] = {
    {"dump", sh_dnx_swstate_algo_ptp_ptp_port_profile_dump_cmd, NULL, dnx_swstate_algo_ptp_ptp_port_profile_dump_options, &dnx_swstate_algo_ptp_ptp_port_profile_dump_man},
    {"size_get", sh_dnx_swstate_algo_ptp_ptp_port_profile_size_get_cmd, NULL, dnx_swstate_algo_ptp_ptp_port_profile_size_get_options, &dnx_swstate_algo_ptp_ptp_port_profile_size_get_man},
    {"diagnostic_operation_counters", sh_dnx_swstate_algo_ptp_ptp_port_profile_diagnostic_operation_counters_cmd, NULL, dnx_swstate_algo_ptp_ptp_port_profile_diagnostic_operation_counters_options, &dnx_swstate_algo_ptp_ptp_port_profile_diagnostic_operation_counters_man},
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_ptp_ptp_port_profile_man = {
    cmd_dnx_swstate_algo_ptp_ptp_port_profile_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_algo_ptp_ptp_port_profile_desc[] = "algo_ptp_db ptp_port_profile commands";


shr_error_e sh_dnx_swstate_algo_ptp_ptp_port_profile_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);


    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    SHR_IF_ERR_EXIT(algo_ptp_db_ptp_port_profile_dump(unit, filters));

    if (!filters.nocontent)
    {
        dnx_sw_state_dump_detach_file(unit);

    }

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_algo_ptp_ptp_port_profile_dump_options[] = {
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_ptp_ptp_port_profile_dump_man = {
    "swstate dump",
    "print the variable value",
    "algo_ptp_db ptp_port_profile dump []\n",
    "algo_ptp_db ptp_port_profile dump nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_algo_ptp_ptp_port_profile_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    uint32 size = 0;

    SHR_FUNC_INIT_VARS(unit);


    size = dnx_sw_state_info_size_get(algo_ptp_db_info[unit], algo_ptp_db_layout_str, ALGO_PTP_DB_INFO_NOF_ENTRIES, "ALGO_PTP_DB~PTP_PORT_PROFILE~", 0);
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_algo_ptp_ptp_port_profile_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_ptp_ptp_port_profile_size_get_man = {
    "swstate size_get",
    "print the variable size",
    "algo_ptp_db ptp_port_profile size_get",
    "algo_ptp_db ptp_port_profile size_get",
};


shr_error_e sh_dnx_swstate_algo_ptp_ptp_port_profile_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    SHR_FUNC_INIT_VARS(unit);


    dnx_sw_state_diagnostic_operation_counters_print(algo_ptp_db_info[unit], algo_ptp_db_layout_str, ALGO_PTP_DB_INFO_NOF_ENTRIES, "ALGO_PTP_DB~PTP_PORT_PROFILE~");
    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_algo_ptp_ptp_port_profile_diagnostic_operation_counters_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_ptp_ptp_port_profile_diagnostic_operation_counters_man = {
    "swstate diagnostic_operation_counters",
    "print the diagnostic operation counters",
    "algo_ptp_db ptp_port_profile diagnostic_operation_counters",
    "algo_ptp_db ptp_port_profile diagnostic_operation_counters",
};


#endif /* DNX_SW_STATE_DIAGNOSTIC */
#undef BSL_LOG_MODULE
