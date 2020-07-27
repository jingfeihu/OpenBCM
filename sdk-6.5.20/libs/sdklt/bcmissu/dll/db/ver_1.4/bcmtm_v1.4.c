/*************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by HA parser from YAML formated file.
 * Edits to this file will be lost when it is regenerated.
 * Tool: bcmha/scripts/issu_db_gen.py
 *
 * $Copyright:.$
 *
 *************************************************************************/

#include <bcmissu/issu_types.h>
#include "bcmtm_ha.h"

static const issu_field_t bcmissu_fields_bcmtm_thd_info_t[] = {
    {
        .fid = 0x0dbcf286,
        .width = sizeof(uint32_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = true,
        .size = NUM_ITMS,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
};

static uint32_t bcmtm_thd_info_t_field_offset_get (bcmissu_field_id_t field_id)
{
    bcmtm_thd_info_t var;

    switch (field_id) {
        case 0x0dbcf286:
            return ((uint8_t *)&var.itm_buf_size) - (uint8_t *)&var;
        default:
            return ISSU_INVALID_FLD_OFFSET;
    }
}

const issu_struct_t bcmissu_struct_bcmtm_ha_bcmtm_thd_info_t_v1_4 = {
    .offset_get_func = bcmtm_thd_info_t_field_offset_get,
    .generic_size = sizeof(bcmtm_thd_info_t),
    .field_count = 1,
    .fields = bcmissu_fields_bcmtm_thd_info_t,
};

static const issu_field_t bcmissu_fields_bcmtm_obm_thd_info_t[] = {
    {
        .fid = 0x24c43b82,
        .width = sizeof(uint32_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = true,
        .size = NUM_PORTS,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
    {
        .fid = 0xe6be6673,
        .width = sizeof(uint32_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = true,
        .size = NUM_PORTS,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
    {
        .fid = 0x8cd00eb9,
        .width = sizeof(uint32_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = true,
        .size = NUM_PORTS,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
};

static uint32_t bcmtm_obm_thd_info_t_field_offset_get (bcmissu_field_id_t field_id)
{
    bcmtm_obm_thd_info_t var;

    switch (field_id) {
        case 0x24c43b82:
            return ((uint8_t *)&var.obm_port_max_bytes) - (uint8_t *)&var;
        case 0xe6be6673:
            return ((uint8_t *)&var.obm_lossy_max_bytes) - (uint8_t *)&var;
        case 0x8cd00eb9:
            return ((uint8_t *)&var.obm_lossy_low_max_bytes) - (uint8_t *)&var;
        default:
            return ISSU_INVALID_FLD_OFFSET;
    }
}

const issu_struct_t bcmissu_struct_bcmtm_ha_bcmtm_obm_thd_info_t_v1_4 = {
    .offset_get_func = bcmtm_obm_thd_info_t_field_offset_get,
    .generic_size = sizeof(bcmtm_obm_thd_info_t),
    .field_count = 3,
    .fields = bcmissu_fields_bcmtm_obm_thd_info_t,
};

static const issu_field_t bcmissu_fields_bcmtm_lport_map_t[] = {
    {
        .fid = 0xe6bef242,
        .width = sizeof(int),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
    {
        .fid = 0x012e152c,
        .width = sizeof(int),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
    {
        .fid = 0xa3074f17,
        .width = sizeof(int),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
    {
        .fid = 0x20826a3c,
        .width = sizeof(int),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
    {
        .fid = 0x22f36ce1,
        .width = sizeof(int),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
    {
        .fid = 0x4e5868d6,
        .width = sizeof(int),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
    {
        .fid = 0x31ccd375,
        .width = sizeof(int),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
    {
        .fid = 0xe0aa55af,
        .width = sizeof(int),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
    {
        .fid = 0x26bc1c60,
        .width = sizeof(int),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
    {
        .fid = 0xa433dfb9,
        .width = sizeof(int),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
    {
        .fid = 0x6679fd4f,
        .width = sizeof(int),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
    {
        .fid = 0x320159b8,
        .width = sizeof(int),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
    {
        .fid = 0xdc433f70,
        .width = sizeof(int),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
};

static uint32_t bcmtm_lport_map_t_field_offset_get (bcmissu_field_id_t field_id)
{
    bcmtm_lport_map_t var;

    switch (field_id) {
        case 0xe6bef242:
            return ((uint8_t *)&var.pport) - (uint8_t *)&var;
        case 0x012e152c:
            return ((uint8_t *)&var.mport) - (uint8_t *)&var;
        case 0xa3074f17:
            return ((uint8_t *)&var.mlocal_port) - (uint8_t *)&var;
        case 0x20826a3c:
            return ((uint8_t *)&var.pipe) - (uint8_t *)&var;
        case 0x22f36ce1:
            return ((uint8_t *)&var.mchip_port) - (uint8_t *)&var;
        case 0x4e5868d6:
            return ((uint8_t *)&var.flags) - (uint8_t *)&var;
        case 0x31ccd375:
            return ((uint8_t *)&var.num_mcq) - (uint8_t *)&var;
        case 0xe0aa55af:
            return ((uint8_t *)&var.num_ucq) - (uint8_t *)&var;
        case 0x26bc1c60:
            return ((uint8_t *)&var.base_mcq) - (uint8_t *)&var;
        case 0xa433dfb9:
            return ((uint8_t *)&var.base_ucq) - (uint8_t *)&var;
        case 0x6679fd4f:
            return ((uint8_t *)&var.num_lanes) - (uint8_t *)&var;
        case 0x320159b8:
            return ((uint8_t *)&var.max_speed) - (uint8_t *)&var;
        case 0xdc433f70:
            return ((uint8_t *)&var.cur_speed) - (uint8_t *)&var;
        default:
            return ISSU_INVALID_FLD_OFFSET;
    }
}

const issu_struct_t bcmissu_struct_bcmtm_ha_bcmtm_lport_map_t_v1_4 = {
    .offset_get_func = bcmtm_lport_map_t_field_offset_get,
    .generic_size = sizeof(bcmtm_lport_map_t),
    .field_count = 13,
    .fields = bcmissu_fields_bcmtm_lport_map_t,
};

static const issu_field_t bcmissu_fields_bcmtm_pport_map_t[] = {
    {
        .fid = 0x9aa39145,
        .width = sizeof(int),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
    {
        .fid = 0x012e152c,
        .width = sizeof(int),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
    {
        .fid = 0xa3074f17,
        .width = sizeof(int),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
};

static uint32_t bcmtm_pport_map_t_field_offset_get (bcmissu_field_id_t field_id)
{
    bcmtm_pport_map_t var;

    switch (field_id) {
        case 0x9aa39145:
            return ((uint8_t *)&var.lport) - (uint8_t *)&var;
        case 0x012e152c:
            return ((uint8_t *)&var.mport) - (uint8_t *)&var;
        case 0xa3074f17:
            return ((uint8_t *)&var.mlocal_port) - (uint8_t *)&var;
        default:
            return ISSU_INVALID_FLD_OFFSET;
    }
}

const issu_struct_t bcmissu_struct_bcmtm_ha_bcmtm_pport_map_t_v1_4 = {
    .offset_get_func = bcmtm_pport_map_t_field_offset_get,
    .generic_size = sizeof(bcmtm_pport_map_t),
    .field_count = 3,
    .fields = bcmissu_fields_bcmtm_pport_map_t,
};

static const issu_field_t bcmissu_fields_bcmtm_mport_map_t[] = {
    {
        .fid = 0x9aa39145,
        .width = sizeof(int),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
};

static uint32_t bcmtm_mport_map_t_field_offset_get (bcmissu_field_id_t field_id)
{
    bcmtm_mport_map_t var;

    switch (field_id) {
        case 0x9aa39145:
            return ((uint8_t *)&var.lport) - (uint8_t *)&var;
        default:
            return ISSU_INVALID_FLD_OFFSET;
    }
}

const issu_struct_t bcmissu_struct_bcmtm_ha_bcmtm_mport_map_t_v1_4 = {
    .offset_get_func = bcmtm_mport_map_t_field_offset_get,
    .generic_size = sizeof(bcmtm_mport_map_t),
    .field_count = 1,
    .fields = bcmissu_fields_bcmtm_mport_map_t,
};

static const issu_field_t bcmissu_fields_bcmtm_drv_info_t[] = {
    {
        .fid = 0xfad6c43b,
        .width = sizeof(int),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
    {
        .fid = 0x2695c941,
        .width = sizeof(int),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
    {
        .fid = 0x50e3f357,
        .width = sizeof(int),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
    {
        .fid = 0xa1765657,
        .width = sizeof(uint8_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
    {
        .fid = 0xe8183e0b,
        .width = sizeof(uint8_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
    {
        .fid = 0x90ac1172,
        .width = sizeof(uint8_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
    {
        .fid = 0x4d914c3c,
        .width = sizeof(uint8_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = true,
        .size = NUM_PMS,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
};

static uint32_t bcmtm_drv_info_t_field_offset_get (bcmissu_field_id_t field_id)
{
    bcmtm_drv_info_t var;

    switch (field_id) {
        case 0xfad6c43b:
            return ((uint8_t *)&var.frequency) - (uint8_t *)&var;
        case 0x2695c941:
            return ((uint8_t *)&var.fabric_port_enable) - (uint8_t *)&var;
        case 0x50e3f357:
            return ((uint8_t *)&var.dpr_clock_frequency) - (uint8_t *)&var;
        case 0xa1765657:
            return ((uint8_t *)&var.oobfc_clock_ns) - (uint8_t *)&var;
        case 0xe8183e0b:
            return ((uint8_t *)&var.flexport) - (uint8_t *)&var;
        case 0x90ac1172:
            return ((uint8_t *)&var.lossless) - (uint8_t *)&var;
        case 0x4d914c3c:
            return ((uint8_t *)&var.flex_eligible) - (uint8_t *)&var;
        default:
            return ISSU_INVALID_FLD_OFFSET;
    }
}

const issu_struct_t bcmissu_struct_bcmtm_ha_bcmtm_drv_info_t_v1_4 = {
    .offset_get_func = bcmtm_drv_info_t_field_offset_get,
    .generic_size = sizeof(bcmtm_drv_info_t),
    .field_count = 7,
    .fields = bcmissu_fields_bcmtm_drv_info_t,
};

static const issu_field_t bcmissu_fields_bcmtm_pfc_ddr_info_t[] = {
    {
        .fid = 0xd95f45bb,
        .width = sizeof(uint8_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = true,
        .size = NUM_PFC_PRI,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
    {
        .fid = 0x65918c77,
        .width = sizeof(uint8_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
    {
        .fid = 0xdf04e92c,
        .width = sizeof(uint8_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
    {
        .fid = 0x172f745c,
        .width = sizeof(uint32_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = true,
        .size = NUM_PFC_PRI,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
};

static uint32_t bcmtm_pfc_ddr_info_t_field_offset_get (bcmissu_field_id_t field_id)
{
    bcmtm_pfc_ddr_info_t var;

    switch (field_id) {
        case 0xd95f45bb:
            return ((uint8_t *)&var.recovery_count_cfg) - (uint8_t *)&var;
        case 0x65918c77:
            return ((uint8_t *)&var.ddr_enable) - (uint8_t *)&var;
        case 0xdf04e92c:
            return ((uint8_t *)&var.in_recovery) - (uint8_t *)&var;
        case 0x172f745c:
            return ((uint8_t *)&var.recovery_count_acc) - (uint8_t *)&var;
        default:
            return ISSU_INVALID_FLD_OFFSET;
    }
}

const issu_struct_t bcmissu_struct_bcmtm_ha_bcmtm_pfc_ddr_info_t_v1_4 = {
    .offset_get_func = bcmtm_pfc_ddr_info_t_field_offset_get,
    .generic_size = sizeof(bcmtm_pfc_ddr_info_t),
    .field_count = 4,
    .fields = bcmissu_fields_bcmtm_pfc_ddr_info_t,
};

static const issu_field_t bcmissu_fields_bcmtm_obm_usage_info_t[] = {
    {
        .fid = 0xeeaac19d,
        .width = sizeof(uint32_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = true,
        .size = NUM_PORT_BMP_WIDTH,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
};

static uint32_t bcmtm_obm_usage_info_t_field_offset_get (bcmissu_field_id_t field_id)
{
    bcmtm_obm_usage_info_t var;

    switch (field_id) {
        case 0xeeaac19d:
            return ((uint8_t *)&var.obm_usage) - (uint8_t *)&var;
        default:
            return ISSU_INVALID_FLD_OFFSET;
    }
}

const issu_struct_t bcmissu_struct_bcmtm_ha_bcmtm_obm_usage_info_t_v1_4 = {
    .offset_get_func = bcmtm_obm_usage_info_t_field_offset_get,
    .generic_size = sizeof(bcmtm_obm_usage_info_t),
    .field_count = 1,
    .fields = bcmissu_fields_bcmtm_obm_usage_info_t,
};
