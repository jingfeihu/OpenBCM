/*************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by HA parser from YAML formated file.
 * Edits to this file will be lost when it is regenerated.
 * Tool: bcmha/scripts/issu_db_gen.py
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#include <bcmissu/issu_types.h>
#include "bcmcfg_ha_config.h"

static const issu_field_t bcmissu_fields_bcmcfg_ha_header_t[] = {
    {
        .fid = 0xac201fd2,
        .width = sizeof(uint32_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .enum_type_name = NULL,
    },
    {
        .fid = 0xf7bd60b7,
        .width = sizeof(uint32_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .enum_type_name = NULL,
    },
};

static uint32_t bcmcfg_ha_header_t_field_offset_get (bcmissu_field_id_t field_id)
{
    bcmcfg_ha_header_t var;

    switch (field_id) {
        case 0xac201fd2:
            return ((uint8_t *)&var.signature) - (uint8_t *)&var;
        case 0xf7bd60b7:
            return ((uint8_t *)&var.size) - (uint8_t *)&var;
        default:
            return ISSU_INVALID_FLD_OFFSET;
    }
}

const issu_struct_t bcmissu_struct_bcmcfg_ha_config_bcmcfg_ha_header_t_v1_3 = {
    .offset_get_func = bcmcfg_ha_header_t_field_offset_get,
    .generic_size = sizeof(bcmcfg_ha_header_t),
    .field_count = 2,
    .fields = bcmissu_fields_bcmcfg_ha_header_t,
};

static const issu_field_t bcmissu_fields_bcmcfg_basic_tuple_t[] = {
    {
        .fid = 0xb8c1a306,
        .width = sizeof(uint32_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_LTID,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .enum_type_name = NULL,
    },
    {
        .fid = 0x6f860561,
        .width = sizeof(uint32_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_FID,
        .ltid_var_for_fid = 0xb8c1a306,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .enum_type_name = NULL,
    },
    {
        .fid = 0x3a6d0284,
        .width = sizeof(uint64_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .enum_type_name = NULL,
    },
    {
        .fid = 0xf3f8a95b,
        .width = sizeof(uint32_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .enum_type_name = NULL,
    },
    {
        .fid = 0xa799822e,
        .width = sizeof(uint32_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .enum_type_name = NULL,
    },
};

static uint32_t bcmcfg_basic_tuple_t_field_offset_get (bcmissu_field_id_t field_id)
{
    bcmcfg_basic_tuple_t var;

    switch (field_id) {
        case 0xb8c1a306:
            return ((uint8_t *)&var.sid) - (uint8_t *)&var;
        case 0x6f860561:
            return ((uint8_t *)&var.fid) - (uint8_t *)&var;
        case 0x3a6d0284:
            return ((uint8_t *)&var.val) - (uint8_t *)&var;
        case 0xf3f8a95b:
            return ((uint8_t *)&var.src_type) - (uint8_t *)&var;
        case 0xa799822e:
            return ((uint8_t *)&var.rsvd) - (uint8_t *)&var;
        default:
            return ISSU_INVALID_FLD_OFFSET;
    }
}

const issu_struct_t bcmissu_struct_bcmcfg_ha_config_bcmcfg_basic_tuple_t_v1_3 = {
    .offset_get_func = bcmcfg_basic_tuple_t_field_offset_get,
    .generic_size = sizeof(bcmcfg_basic_tuple_t),
    .field_count = 5,
    .fields = bcmissu_fields_bcmcfg_basic_tuple_t,
};
