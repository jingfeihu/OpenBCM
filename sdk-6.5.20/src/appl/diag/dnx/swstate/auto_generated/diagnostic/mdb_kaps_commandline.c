/** \file dnx/swstate/auto_generated/diagnostic/mdb_kaps_commandline.c
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
#include <soc/dnx/swstate/auto_generated/diagnostic/mdb_kaps_diagnostic.h>
#include "mdb_kaps_commandline.h"
#include <soc/dnx/swstate/auto_generated/access/mdb_kaps_access.h>
#if defined(DNX_SW_STATE_DIAGNOSTIC)
sh_sand_cmd_t sh_dnx_swstate_mdb_kaps_cmds[] = {
    {"db_info", NULL, sh_dnx_swstate_mdb_kaps_db_info_cmds, NULL, &dnx_swstate_mdb_kaps_db_info_man},
    {"search_instruction_info", NULL, sh_dnx_swstate_mdb_kaps_search_instruction_info_cmds, NULL, &dnx_swstate_mdb_kaps_search_instruction_info_man},
    {"big_kaps_large_bb_mode", NULL, sh_dnx_swstate_mdb_kaps_big_kaps_large_bb_mode_cmds, NULL, &dnx_swstate_mdb_kaps_big_kaps_large_bb_mode_man},
    {"dump", sh_dnx_swstate_mdb_kaps_dump_cmd, NULL, dnx_swstate_mdb_kaps_dump_options, &dnx_swstate_mdb_kaps_dump_man},
    {"size_get", sh_dnx_swstate_mdb_kaps_size_get_cmd, NULL, dnx_swstate_mdb_kaps_size_get_options, &dnx_swstate_mdb_kaps_size_get_man},
    {"diagnostic_operation_counters", sh_dnx_swstate_mdb_kaps_diagnostic_operation_counters_cmd, NULL, dnx_swstate_mdb_kaps_diagnostic_operation_counters_options, &dnx_swstate_mdb_kaps_diagnostic_operation_counters_man},
    {NULL}
};


shr_error_e sh_dnx_swstate_mdb_kaps_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    uint8 is_init;
    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);

    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    mdb_kaps_db.is_init(unit, &is_init);
    if (is_init) {
        SHR_IF_ERR_EXIT(mdb_kaps_db_dump(unit, filters));
        if (!filters.nocontent)
        {
            dnx_sw_state_dump_detach_file(unit);
        }
    }
    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_mdb_kaps_dump_options[] = {
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_mdb_kaps_dump_man = {
    "swstate mdb_kaps dump",
    "print the module's content",
    "swstate mdb_kaps dump",
    "swstate mdb_kaps dump nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_mdb_kaps_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    uint32 size = 0;
    SHR_FUNC_INIT_VARS(unit);

    size = dnx_sw_state_info_size_get(mdb_kaps_db_info[unit], mdb_kaps_db_layout_str, MDB_KAPS_DB_INFO_NOF_ENTRIES, "MDB_KAPS_DB~", 0);
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_mdb_kaps_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_mdb_kaps_size_get_man = {
    "swstate mdb_kaps size_get",
    "print the module's size",
    "swstate mdb_kaps size_get",
    "swstate mdb_kaps size_get",
};


shr_error_e sh_dnx_swstate_mdb_kaps_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{


    SHR_FUNC_INIT_VARS(unit);

    dnx_sw_state_diagnostic_operation_counters_print(mdb_kaps_db_info[unit], mdb_kaps_db_layout_str, MDB_KAPS_DB_INFO_NOF_ENTRIES, "MDB_KAPS_DB~");
    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_mdb_kaps_diagnostic_operation_counters_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_mdb_kaps_diagnostic_operation_counters_man = {
    "swstate mdb_kaps diagnostic_operation_counters",
    "print the module's diagnostic operation counters",
    "swstate mdb_kaps diagnostic_operation_counters",
    "swstate mdb_kaps diagnostic_operation_counters",
};


sh_sand_man_t dnx_swstate_mdb_kaps_man = {
    cmd_dnx_swstate_mdb_kaps_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_mdb_kaps_desc[] = "swstate mdb_kaps commands";



sh_sand_cmd_t sh_dnx_swstate_mdb_kaps_db_info_cmds[] = {
    {"db_p", NULL, sh_dnx_swstate_mdb_kaps_db_info_db_p_cmds, NULL, &dnx_swstate_mdb_kaps_db_info_db_p_man},
    {"ad_db_p", NULL, sh_dnx_swstate_mdb_kaps_db_info_ad_db_p_cmds, NULL, &dnx_swstate_mdb_kaps_db_info_ad_db_p_man},
    {"hb_db_p", NULL, sh_dnx_swstate_mdb_kaps_db_info_hb_db_p_cmds, NULL, &dnx_swstate_mdb_kaps_db_info_hb_db_p_man},
    {"is_valid", NULL, sh_dnx_swstate_mdb_kaps_db_info_is_valid_cmds, NULL, &dnx_swstate_mdb_kaps_db_info_is_valid_man},
    {"dump", sh_dnx_swstate_mdb_kaps_db_info_dump_cmd, NULL, dnx_swstate_mdb_kaps_db_info_dump_options, &dnx_swstate_mdb_kaps_db_info_dump_man},
    {"size_get", sh_dnx_swstate_mdb_kaps_db_info_size_get_cmd, NULL, dnx_swstate_mdb_kaps_db_info_size_get_options, &dnx_swstate_mdb_kaps_db_info_size_get_man},
    {"diagnostic_operation_counters", sh_dnx_swstate_mdb_kaps_db_info_diagnostic_operation_counters_cmd, NULL, dnx_swstate_mdb_kaps_db_info_diagnostic_operation_counters_options, &dnx_swstate_mdb_kaps_db_info_diagnostic_operation_counters_man},
    {NULL}
};


sh_sand_man_t dnx_swstate_mdb_kaps_db_info_man = {
    cmd_dnx_swstate_mdb_kaps_db_info_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_mdb_kaps_db_info_desc[] = "mdb_kaps_db db_info commands";


shr_error_e sh_dnx_swstate_mdb_kaps_db_info_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    int  db_info_idx_0 = 0;

    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);

    SH_SAND_GET_INT32("db_info_idx_0", db_info_idx_0);

    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    SHR_IF_ERR_EXIT(mdb_kaps_db_db_info_dump(unit, db_info_idx_0, filters));

    if (!filters.nocontent)
    {
        dnx_sw_state_dump_detach_file(unit);

    }

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_mdb_kaps_db_info_dump_options[] = {
    {"db_info_idx_0", SAL_FIELD_TYPE_INT32, "index", NULL},
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_mdb_kaps_db_info_dump_man = {
    "swstate dump",
    "print the variable value",
    "mdb_kaps_db db_info dump [,db_info_idx_0=<int>]\n",
    "mdb_kaps_db db_info dump db_info_idx_0=0 nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_mdb_kaps_db_info_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    uint32 size = 0;

    SHR_FUNC_INIT_VARS(unit);


    size = dnx_sw_state_info_size_get(mdb_kaps_db_info[unit], mdb_kaps_db_layout_str, MDB_KAPS_DB_INFO_NOF_ENTRIES, "MDB_KAPS_DB~DB_INFO~", sizeof(((mdb_kaps_sw_state_t*)sw_state_roots_array[unit][MDB_KAPS_MODULE_ID])->db_info));
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_mdb_kaps_db_info_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_mdb_kaps_db_info_size_get_man = {
    "swstate size_get",
    "print the variable size",
    "mdb_kaps_db db_info size_get",
    "mdb_kaps_db db_info size_get",
};


shr_error_e sh_dnx_swstate_mdb_kaps_db_info_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    SHR_FUNC_INIT_VARS(unit);


    dnx_sw_state_diagnostic_operation_counters_print(mdb_kaps_db_info[unit], mdb_kaps_db_layout_str, MDB_KAPS_DB_INFO_NOF_ENTRIES, "MDB_KAPS_DB~DB_INFO~");
    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_mdb_kaps_db_info_diagnostic_operation_counters_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_mdb_kaps_db_info_diagnostic_operation_counters_man = {
    "swstate diagnostic_operation_counters",
    "print the diagnostic operation counters",
    "mdb_kaps_db db_info diagnostic_operation_counters",
    "mdb_kaps_db db_info diagnostic_operation_counters",
};



sh_sand_cmd_t sh_dnx_swstate_mdb_kaps_db_info_db_p_cmds[] = {
    {"dump", sh_dnx_swstate_mdb_kaps_db_info_db_p_dump_cmd, NULL, dnx_swstate_mdb_kaps_db_info_db_p_dump_options, &dnx_swstate_mdb_kaps_db_info_db_p_dump_man},
    {"size_get", sh_dnx_swstate_mdb_kaps_db_info_db_p_size_get_cmd, NULL, dnx_swstate_mdb_kaps_db_info_db_p_size_get_options, &dnx_swstate_mdb_kaps_db_info_db_p_size_get_man},
    {"diagnostic_operation_counters", sh_dnx_swstate_mdb_kaps_db_info_db_p_diagnostic_operation_counters_cmd, NULL, dnx_swstate_mdb_kaps_db_info_db_p_diagnostic_operation_counters_options, &dnx_swstate_mdb_kaps_db_info_db_p_diagnostic_operation_counters_man},
    {NULL}
};


sh_sand_man_t dnx_swstate_mdb_kaps_db_info_db_p_man = {
    cmd_dnx_swstate_mdb_kaps_db_info_db_p_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_mdb_kaps_db_info_db_p_desc[] = "mdb_kaps_db db_info db_p commands";


shr_error_e sh_dnx_swstate_mdb_kaps_db_info_db_p_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    int  db_info_idx_0 = 0;

    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);

    SH_SAND_GET_INT32("db_info_idx_0", db_info_idx_0);

    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    SHR_IF_ERR_EXIT(mdb_kaps_db_db_info_db_p_dump(unit, db_info_idx_0, filters));

    if (!filters.nocontent)
    {
        dnx_sw_state_dump_detach_file(unit);

    }

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_mdb_kaps_db_info_db_p_dump_options[] = {
    {"db_info_idx_0", SAL_FIELD_TYPE_INT32, "index", NULL},
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_mdb_kaps_db_info_db_p_dump_man = {
    "swstate dump",
    "print the variable value",
    "mdb_kaps_db db_info db_p dump [,db_info_idx_0=<int>]\n",
    "mdb_kaps_db db_info db_p dump db_info_idx_0=0 nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_mdb_kaps_db_info_db_p_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    uint32 size = 0;

    SHR_FUNC_INIT_VARS(unit);


    size = dnx_sw_state_info_size_get(mdb_kaps_db_info[unit], mdb_kaps_db_layout_str, MDB_KAPS_DB_INFO_NOF_ENTRIES, "MDB_KAPS_DB~DB_INFO~DB_P~", sizeof(((mdb_kaps_sw_state_t*)sw_state_roots_array[unit][MDB_KAPS_MODULE_ID])->db_info[0].db_p));
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_mdb_kaps_db_info_db_p_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_mdb_kaps_db_info_db_p_size_get_man = {
    "swstate size_get",
    "print the variable size",
    "mdb_kaps_db db_info db_p size_get",
    "mdb_kaps_db db_info db_p size_get",
};


shr_error_e sh_dnx_swstate_mdb_kaps_db_info_db_p_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    SHR_FUNC_INIT_VARS(unit);


    dnx_sw_state_diagnostic_operation_counters_print(mdb_kaps_db_info[unit], mdb_kaps_db_layout_str, MDB_KAPS_DB_INFO_NOF_ENTRIES, "MDB_KAPS_DB~DB_INFO~DB_P~");
    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_mdb_kaps_db_info_db_p_diagnostic_operation_counters_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_mdb_kaps_db_info_db_p_diagnostic_operation_counters_man = {
    "swstate diagnostic_operation_counters",
    "print the diagnostic operation counters",
    "mdb_kaps_db db_info db_p diagnostic_operation_counters",
    "mdb_kaps_db db_info db_p diagnostic_operation_counters",
};



sh_sand_cmd_t sh_dnx_swstate_mdb_kaps_db_info_ad_db_p_cmds[] = {
    {"dump", sh_dnx_swstate_mdb_kaps_db_info_ad_db_p_dump_cmd, NULL, dnx_swstate_mdb_kaps_db_info_ad_db_p_dump_options, &dnx_swstate_mdb_kaps_db_info_ad_db_p_dump_man},
    {"size_get", sh_dnx_swstate_mdb_kaps_db_info_ad_db_p_size_get_cmd, NULL, dnx_swstate_mdb_kaps_db_info_ad_db_p_size_get_options, &dnx_swstate_mdb_kaps_db_info_ad_db_p_size_get_man},
    {"diagnostic_operation_counters", sh_dnx_swstate_mdb_kaps_db_info_ad_db_p_diagnostic_operation_counters_cmd, NULL, dnx_swstate_mdb_kaps_db_info_ad_db_p_diagnostic_operation_counters_options, &dnx_swstate_mdb_kaps_db_info_ad_db_p_diagnostic_operation_counters_man},
    {NULL}
};


sh_sand_man_t dnx_swstate_mdb_kaps_db_info_ad_db_p_man = {
    cmd_dnx_swstate_mdb_kaps_db_info_ad_db_p_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_mdb_kaps_db_info_ad_db_p_desc[] = "mdb_kaps_db db_info ad_db_p commands";


shr_error_e sh_dnx_swstate_mdb_kaps_db_info_ad_db_p_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    int  db_info_idx_0 = 0;

    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);

    SH_SAND_GET_INT32("db_info_idx_0", db_info_idx_0);

    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    SHR_IF_ERR_EXIT(mdb_kaps_db_db_info_ad_db_p_dump(unit, db_info_idx_0, filters));

    if (!filters.nocontent)
    {
        dnx_sw_state_dump_detach_file(unit);

    }

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_mdb_kaps_db_info_ad_db_p_dump_options[] = {
    {"db_info_idx_0", SAL_FIELD_TYPE_INT32, "index", NULL},
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_mdb_kaps_db_info_ad_db_p_dump_man = {
    "swstate dump",
    "print the variable value",
    "mdb_kaps_db db_info ad_db_p dump [,db_info_idx_0=<int>]\n",
    "mdb_kaps_db db_info ad_db_p dump db_info_idx_0=0 nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_mdb_kaps_db_info_ad_db_p_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    uint32 size = 0;

    SHR_FUNC_INIT_VARS(unit);


    size = dnx_sw_state_info_size_get(mdb_kaps_db_info[unit], mdb_kaps_db_layout_str, MDB_KAPS_DB_INFO_NOF_ENTRIES, "MDB_KAPS_DB~DB_INFO~AD_DB_P~", sizeof(((mdb_kaps_sw_state_t*)sw_state_roots_array[unit][MDB_KAPS_MODULE_ID])->db_info[0].ad_db_p));
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_mdb_kaps_db_info_ad_db_p_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_mdb_kaps_db_info_ad_db_p_size_get_man = {
    "swstate size_get",
    "print the variable size",
    "mdb_kaps_db db_info ad_db_p size_get",
    "mdb_kaps_db db_info ad_db_p size_get",
};


shr_error_e sh_dnx_swstate_mdb_kaps_db_info_ad_db_p_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    SHR_FUNC_INIT_VARS(unit);


    dnx_sw_state_diagnostic_operation_counters_print(mdb_kaps_db_info[unit], mdb_kaps_db_layout_str, MDB_KAPS_DB_INFO_NOF_ENTRIES, "MDB_KAPS_DB~DB_INFO~AD_DB_P~");
    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_mdb_kaps_db_info_ad_db_p_diagnostic_operation_counters_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_mdb_kaps_db_info_ad_db_p_diagnostic_operation_counters_man = {
    "swstate diagnostic_operation_counters",
    "print the diagnostic operation counters",
    "mdb_kaps_db db_info ad_db_p diagnostic_operation_counters",
    "mdb_kaps_db db_info ad_db_p diagnostic_operation_counters",
};



sh_sand_cmd_t sh_dnx_swstate_mdb_kaps_db_info_hb_db_p_cmds[] = {
    {"dump", sh_dnx_swstate_mdb_kaps_db_info_hb_db_p_dump_cmd, NULL, dnx_swstate_mdb_kaps_db_info_hb_db_p_dump_options, &dnx_swstate_mdb_kaps_db_info_hb_db_p_dump_man},
    {"size_get", sh_dnx_swstate_mdb_kaps_db_info_hb_db_p_size_get_cmd, NULL, dnx_swstate_mdb_kaps_db_info_hb_db_p_size_get_options, &dnx_swstate_mdb_kaps_db_info_hb_db_p_size_get_man},
    {"diagnostic_operation_counters", sh_dnx_swstate_mdb_kaps_db_info_hb_db_p_diagnostic_operation_counters_cmd, NULL, dnx_swstate_mdb_kaps_db_info_hb_db_p_diagnostic_operation_counters_options, &dnx_swstate_mdb_kaps_db_info_hb_db_p_diagnostic_operation_counters_man},
    {NULL}
};


sh_sand_man_t dnx_swstate_mdb_kaps_db_info_hb_db_p_man = {
    cmd_dnx_swstate_mdb_kaps_db_info_hb_db_p_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_mdb_kaps_db_info_hb_db_p_desc[] = "mdb_kaps_db db_info hb_db_p commands";


shr_error_e sh_dnx_swstate_mdb_kaps_db_info_hb_db_p_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    int  db_info_idx_0 = 0;

    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);

    SH_SAND_GET_INT32("db_info_idx_0", db_info_idx_0);

    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    SHR_IF_ERR_EXIT(mdb_kaps_db_db_info_hb_db_p_dump(unit, db_info_idx_0, filters));

    if (!filters.nocontent)
    {
        dnx_sw_state_dump_detach_file(unit);

    }

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_mdb_kaps_db_info_hb_db_p_dump_options[] = {
    {"db_info_idx_0", SAL_FIELD_TYPE_INT32, "index", NULL},
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_mdb_kaps_db_info_hb_db_p_dump_man = {
    "swstate dump",
    "print the variable value",
    "mdb_kaps_db db_info hb_db_p dump [,db_info_idx_0=<int>]\n",
    "mdb_kaps_db db_info hb_db_p dump db_info_idx_0=0 nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_mdb_kaps_db_info_hb_db_p_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    uint32 size = 0;

    SHR_FUNC_INIT_VARS(unit);


    size = dnx_sw_state_info_size_get(mdb_kaps_db_info[unit], mdb_kaps_db_layout_str, MDB_KAPS_DB_INFO_NOF_ENTRIES, "MDB_KAPS_DB~DB_INFO~HB_DB_P~", sizeof(((mdb_kaps_sw_state_t*)sw_state_roots_array[unit][MDB_KAPS_MODULE_ID])->db_info[0].hb_db_p));
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_mdb_kaps_db_info_hb_db_p_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_mdb_kaps_db_info_hb_db_p_size_get_man = {
    "swstate size_get",
    "print the variable size",
    "mdb_kaps_db db_info hb_db_p size_get",
    "mdb_kaps_db db_info hb_db_p size_get",
};


shr_error_e sh_dnx_swstate_mdb_kaps_db_info_hb_db_p_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    SHR_FUNC_INIT_VARS(unit);


    dnx_sw_state_diagnostic_operation_counters_print(mdb_kaps_db_info[unit], mdb_kaps_db_layout_str, MDB_KAPS_DB_INFO_NOF_ENTRIES, "MDB_KAPS_DB~DB_INFO~HB_DB_P~");
    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_mdb_kaps_db_info_hb_db_p_diagnostic_operation_counters_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_mdb_kaps_db_info_hb_db_p_diagnostic_operation_counters_man = {
    "swstate diagnostic_operation_counters",
    "print the diagnostic operation counters",
    "mdb_kaps_db db_info hb_db_p diagnostic_operation_counters",
    "mdb_kaps_db db_info hb_db_p diagnostic_operation_counters",
};



sh_sand_cmd_t sh_dnx_swstate_mdb_kaps_db_info_is_valid_cmds[] = {
    {"dump", sh_dnx_swstate_mdb_kaps_db_info_is_valid_dump_cmd, NULL, dnx_swstate_mdb_kaps_db_info_is_valid_dump_options, &dnx_swstate_mdb_kaps_db_info_is_valid_dump_man},
    {"size_get", sh_dnx_swstate_mdb_kaps_db_info_is_valid_size_get_cmd, NULL, dnx_swstate_mdb_kaps_db_info_is_valid_size_get_options, &dnx_swstate_mdb_kaps_db_info_is_valid_size_get_man},
    {"diagnostic_operation_counters", sh_dnx_swstate_mdb_kaps_db_info_is_valid_diagnostic_operation_counters_cmd, NULL, dnx_swstate_mdb_kaps_db_info_is_valid_diagnostic_operation_counters_options, &dnx_swstate_mdb_kaps_db_info_is_valid_diagnostic_operation_counters_man},
    {NULL}
};


sh_sand_man_t dnx_swstate_mdb_kaps_db_info_is_valid_man = {
    cmd_dnx_swstate_mdb_kaps_db_info_is_valid_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_mdb_kaps_db_info_is_valid_desc[] = "mdb_kaps_db db_info is_valid commands";


shr_error_e sh_dnx_swstate_mdb_kaps_db_info_is_valid_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    int  db_info_idx_0 = 0;

    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);

    SH_SAND_GET_INT32("db_info_idx_0", db_info_idx_0);

    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    SHR_IF_ERR_EXIT(mdb_kaps_db_db_info_is_valid_dump(unit, db_info_idx_0, filters));

    if (!filters.nocontent)
    {
        dnx_sw_state_dump_detach_file(unit);

    }

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_mdb_kaps_db_info_is_valid_dump_options[] = {
    {"db_info_idx_0", SAL_FIELD_TYPE_INT32, "index", NULL},
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_mdb_kaps_db_info_is_valid_dump_man = {
    "swstate dump",
    "print the variable value",
    "mdb_kaps_db db_info is_valid dump [,db_info_idx_0=<int>]\n",
    "mdb_kaps_db db_info is_valid dump db_info_idx_0=0 nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_mdb_kaps_db_info_is_valid_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    uint32 size = 0;

    SHR_FUNC_INIT_VARS(unit);


    size = dnx_sw_state_info_size_get(mdb_kaps_db_info[unit], mdb_kaps_db_layout_str, MDB_KAPS_DB_INFO_NOF_ENTRIES, "MDB_KAPS_DB~DB_INFO~IS_VALID~", sizeof(((mdb_kaps_sw_state_t*)sw_state_roots_array[unit][MDB_KAPS_MODULE_ID])->db_info[0].is_valid));
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_mdb_kaps_db_info_is_valid_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_mdb_kaps_db_info_is_valid_size_get_man = {
    "swstate size_get",
    "print the variable size",
    "mdb_kaps_db db_info is_valid size_get",
    "mdb_kaps_db db_info is_valid size_get",
};


shr_error_e sh_dnx_swstate_mdb_kaps_db_info_is_valid_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    SHR_FUNC_INIT_VARS(unit);


    dnx_sw_state_diagnostic_operation_counters_print(mdb_kaps_db_info[unit], mdb_kaps_db_layout_str, MDB_KAPS_DB_INFO_NOF_ENTRIES, "MDB_KAPS_DB~DB_INFO~IS_VALID~");
    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_mdb_kaps_db_info_is_valid_diagnostic_operation_counters_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_mdb_kaps_db_info_is_valid_diagnostic_operation_counters_man = {
    "swstate diagnostic_operation_counters",
    "print the diagnostic operation counters",
    "mdb_kaps_db db_info is_valid diagnostic_operation_counters",
    "mdb_kaps_db db_info is_valid diagnostic_operation_counters",
};



sh_sand_cmd_t sh_dnx_swstate_mdb_kaps_search_instruction_info_cmds[] = {
    {"inst_p", NULL, sh_dnx_swstate_mdb_kaps_search_instruction_info_inst_p_cmds, NULL, &dnx_swstate_mdb_kaps_search_instruction_info_inst_p_man},
    {"dump", sh_dnx_swstate_mdb_kaps_search_instruction_info_dump_cmd, NULL, dnx_swstate_mdb_kaps_search_instruction_info_dump_options, &dnx_swstate_mdb_kaps_search_instruction_info_dump_man},
    {"size_get", sh_dnx_swstate_mdb_kaps_search_instruction_info_size_get_cmd, NULL, dnx_swstate_mdb_kaps_search_instruction_info_size_get_options, &dnx_swstate_mdb_kaps_search_instruction_info_size_get_man},
    {"diagnostic_operation_counters", sh_dnx_swstate_mdb_kaps_search_instruction_info_diagnostic_operation_counters_cmd, NULL, dnx_swstate_mdb_kaps_search_instruction_info_diagnostic_operation_counters_options, &dnx_swstate_mdb_kaps_search_instruction_info_diagnostic_operation_counters_man},
    {NULL}
};


sh_sand_man_t dnx_swstate_mdb_kaps_search_instruction_info_man = {
    cmd_dnx_swstate_mdb_kaps_search_instruction_info_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_mdb_kaps_search_instruction_info_desc[] = "mdb_kaps_db search_instruction_info commands";


shr_error_e sh_dnx_swstate_mdb_kaps_search_instruction_info_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    int  search_instruction_info_idx_0 = 0;

    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);

    SH_SAND_GET_INT32("search_instruction_info_idx_0", search_instruction_info_idx_0);

    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    SHR_IF_ERR_EXIT(mdb_kaps_db_search_instruction_info_dump(unit, search_instruction_info_idx_0, filters));

    if (!filters.nocontent)
    {
        dnx_sw_state_dump_detach_file(unit);

    }

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_mdb_kaps_search_instruction_info_dump_options[] = {
    {"search_instruction_info_idx_0", SAL_FIELD_TYPE_INT32, "index", NULL},
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_mdb_kaps_search_instruction_info_dump_man = {
    "swstate dump",
    "print the variable value",
    "mdb_kaps_db search_instruction_info dump [,search_instruction_info_idx_0=<int>]\n",
    "mdb_kaps_db search_instruction_info dump search_instruction_info_idx_0=0 nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_mdb_kaps_search_instruction_info_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    uint32 size = 0;

    SHR_FUNC_INIT_VARS(unit);


    size = dnx_sw_state_info_size_get(mdb_kaps_db_info[unit], mdb_kaps_db_layout_str, MDB_KAPS_DB_INFO_NOF_ENTRIES, "MDB_KAPS_DB~SEARCH_INSTRUCTION_INFO~", sizeof(((mdb_kaps_sw_state_t*)sw_state_roots_array[unit][MDB_KAPS_MODULE_ID])->search_instruction_info));
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_mdb_kaps_search_instruction_info_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_mdb_kaps_search_instruction_info_size_get_man = {
    "swstate size_get",
    "print the variable size",
    "mdb_kaps_db search_instruction_info size_get",
    "mdb_kaps_db search_instruction_info size_get",
};


shr_error_e sh_dnx_swstate_mdb_kaps_search_instruction_info_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    SHR_FUNC_INIT_VARS(unit);


    dnx_sw_state_diagnostic_operation_counters_print(mdb_kaps_db_info[unit], mdb_kaps_db_layout_str, MDB_KAPS_DB_INFO_NOF_ENTRIES, "MDB_KAPS_DB~SEARCH_INSTRUCTION_INFO~");
    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_mdb_kaps_search_instruction_info_diagnostic_operation_counters_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_mdb_kaps_search_instruction_info_diagnostic_operation_counters_man = {
    "swstate diagnostic_operation_counters",
    "print the diagnostic operation counters",
    "mdb_kaps_db search_instruction_info diagnostic_operation_counters",
    "mdb_kaps_db search_instruction_info diagnostic_operation_counters",
};



sh_sand_cmd_t sh_dnx_swstate_mdb_kaps_search_instruction_info_inst_p_cmds[] = {
    {"dump", sh_dnx_swstate_mdb_kaps_search_instruction_info_inst_p_dump_cmd, NULL, dnx_swstate_mdb_kaps_search_instruction_info_inst_p_dump_options, &dnx_swstate_mdb_kaps_search_instruction_info_inst_p_dump_man},
    {"size_get", sh_dnx_swstate_mdb_kaps_search_instruction_info_inst_p_size_get_cmd, NULL, dnx_swstate_mdb_kaps_search_instruction_info_inst_p_size_get_options, &dnx_swstate_mdb_kaps_search_instruction_info_inst_p_size_get_man},
    {"diagnostic_operation_counters", sh_dnx_swstate_mdb_kaps_search_instruction_info_inst_p_diagnostic_operation_counters_cmd, NULL, dnx_swstate_mdb_kaps_search_instruction_info_inst_p_diagnostic_operation_counters_options, &dnx_swstate_mdb_kaps_search_instruction_info_inst_p_diagnostic_operation_counters_man},
    {NULL}
};


sh_sand_man_t dnx_swstate_mdb_kaps_search_instruction_info_inst_p_man = {
    cmd_dnx_swstate_mdb_kaps_search_instruction_info_inst_p_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_mdb_kaps_search_instruction_info_inst_p_desc[] = "mdb_kaps_db search_instruction_info inst_p commands";


shr_error_e sh_dnx_swstate_mdb_kaps_search_instruction_info_inst_p_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    int  search_instruction_info_idx_0 = 0;

    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);

    SH_SAND_GET_INT32("search_instruction_info_idx_0", search_instruction_info_idx_0);

    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    SHR_IF_ERR_EXIT(mdb_kaps_db_search_instruction_info_inst_p_dump(unit, search_instruction_info_idx_0, filters));

    if (!filters.nocontent)
    {
        dnx_sw_state_dump_detach_file(unit);

    }

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_mdb_kaps_search_instruction_info_inst_p_dump_options[] = {
    {"search_instruction_info_idx_0", SAL_FIELD_TYPE_INT32, "index", NULL},
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_mdb_kaps_search_instruction_info_inst_p_dump_man = {
    "swstate dump",
    "print the variable value",
    "mdb_kaps_db search_instruction_info inst_p dump [,search_instruction_info_idx_0=<int>]\n",
    "mdb_kaps_db search_instruction_info inst_p dump search_instruction_info_idx_0=0 nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_mdb_kaps_search_instruction_info_inst_p_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    uint32 size = 0;

    SHR_FUNC_INIT_VARS(unit);


    size = dnx_sw_state_info_size_get(mdb_kaps_db_info[unit], mdb_kaps_db_layout_str, MDB_KAPS_DB_INFO_NOF_ENTRIES, "MDB_KAPS_DB~SEARCH_INSTRUCTION_INFO~INST_P~", sizeof(((mdb_kaps_sw_state_t*)sw_state_roots_array[unit][MDB_KAPS_MODULE_ID])->search_instruction_info[0].inst_p));
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_mdb_kaps_search_instruction_info_inst_p_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_mdb_kaps_search_instruction_info_inst_p_size_get_man = {
    "swstate size_get",
    "print the variable size",
    "mdb_kaps_db search_instruction_info inst_p size_get",
    "mdb_kaps_db search_instruction_info inst_p size_get",
};


shr_error_e sh_dnx_swstate_mdb_kaps_search_instruction_info_inst_p_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    SHR_FUNC_INIT_VARS(unit);


    dnx_sw_state_diagnostic_operation_counters_print(mdb_kaps_db_info[unit], mdb_kaps_db_layout_str, MDB_KAPS_DB_INFO_NOF_ENTRIES, "MDB_KAPS_DB~SEARCH_INSTRUCTION_INFO~INST_P~");
    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_mdb_kaps_search_instruction_info_inst_p_diagnostic_operation_counters_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_mdb_kaps_search_instruction_info_inst_p_diagnostic_operation_counters_man = {
    "swstate diagnostic_operation_counters",
    "print the diagnostic operation counters",
    "mdb_kaps_db search_instruction_info inst_p diagnostic_operation_counters",
    "mdb_kaps_db search_instruction_info inst_p diagnostic_operation_counters",
};



sh_sand_cmd_t sh_dnx_swstate_mdb_kaps_big_kaps_large_bb_mode_cmds[] = {
    {"dump", sh_dnx_swstate_mdb_kaps_big_kaps_large_bb_mode_dump_cmd, NULL, dnx_swstate_mdb_kaps_big_kaps_large_bb_mode_dump_options, &dnx_swstate_mdb_kaps_big_kaps_large_bb_mode_dump_man},
    {"size_get", sh_dnx_swstate_mdb_kaps_big_kaps_large_bb_mode_size_get_cmd, NULL, dnx_swstate_mdb_kaps_big_kaps_large_bb_mode_size_get_options, &dnx_swstate_mdb_kaps_big_kaps_large_bb_mode_size_get_man},
    {"diagnostic_operation_counters", sh_dnx_swstate_mdb_kaps_big_kaps_large_bb_mode_diagnostic_operation_counters_cmd, NULL, dnx_swstate_mdb_kaps_big_kaps_large_bb_mode_diagnostic_operation_counters_options, &dnx_swstate_mdb_kaps_big_kaps_large_bb_mode_diagnostic_operation_counters_man},
    {NULL}
};


sh_sand_man_t dnx_swstate_mdb_kaps_big_kaps_large_bb_mode_man = {
    cmd_dnx_swstate_mdb_kaps_big_kaps_large_bb_mode_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_mdb_kaps_big_kaps_large_bb_mode_desc[] = "mdb_kaps_db big_kaps_large_bb_mode commands";


shr_error_e sh_dnx_swstate_mdb_kaps_big_kaps_large_bb_mode_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    int  big_kaps_large_bb_mode_idx_0 = 0;

    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);

    SH_SAND_GET_INT32("big_kaps_large_bb_mode_idx_0", big_kaps_large_bb_mode_idx_0);

    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    SHR_IF_ERR_EXIT(mdb_kaps_db_big_kaps_large_bb_mode_dump(unit, big_kaps_large_bb_mode_idx_0, filters));

    if (!filters.nocontent)
    {
        dnx_sw_state_dump_detach_file(unit);

    }

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_mdb_kaps_big_kaps_large_bb_mode_dump_options[] = {
    {"big_kaps_large_bb_mode_idx_0", SAL_FIELD_TYPE_INT32, "index", NULL},
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_mdb_kaps_big_kaps_large_bb_mode_dump_man = {
    "swstate dump",
    "print the variable value",
    "mdb_kaps_db big_kaps_large_bb_mode dump [,big_kaps_large_bb_mode_idx_0=<int>]\n",
    "mdb_kaps_db big_kaps_large_bb_mode dump big_kaps_large_bb_mode_idx_0=0 nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_mdb_kaps_big_kaps_large_bb_mode_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    uint32 size = 0;

    SHR_FUNC_INIT_VARS(unit);


    size = dnx_sw_state_info_size_get(mdb_kaps_db_info[unit], mdb_kaps_db_layout_str, MDB_KAPS_DB_INFO_NOF_ENTRIES, "MDB_KAPS_DB~BIG_KAPS_LARGE_BB_MODE~", sizeof(((mdb_kaps_sw_state_t*)sw_state_roots_array[unit][MDB_KAPS_MODULE_ID])->big_kaps_large_bb_mode));
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_mdb_kaps_big_kaps_large_bb_mode_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_mdb_kaps_big_kaps_large_bb_mode_size_get_man = {
    "swstate size_get",
    "print the variable size",
    "mdb_kaps_db big_kaps_large_bb_mode size_get",
    "mdb_kaps_db big_kaps_large_bb_mode size_get",
};


shr_error_e sh_dnx_swstate_mdb_kaps_big_kaps_large_bb_mode_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    SHR_FUNC_INIT_VARS(unit);


    dnx_sw_state_diagnostic_operation_counters_print(mdb_kaps_db_info[unit], mdb_kaps_db_layout_str, MDB_KAPS_DB_INFO_NOF_ENTRIES, "MDB_KAPS_DB~BIG_KAPS_LARGE_BB_MODE~");
    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_mdb_kaps_big_kaps_large_bb_mode_diagnostic_operation_counters_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_mdb_kaps_big_kaps_large_bb_mode_diagnostic_operation_counters_man = {
    "swstate diagnostic_operation_counters",
    "print the diagnostic operation counters",
    "mdb_kaps_db big_kaps_large_bb_mode diagnostic_operation_counters",
    "mdb_kaps_db big_kaps_large_bb_mode diagnostic_operation_counters",
};


#endif /* DNX_SW_STATE_DIAGNOSTIC */
#undef BSL_LOG_MODULE
