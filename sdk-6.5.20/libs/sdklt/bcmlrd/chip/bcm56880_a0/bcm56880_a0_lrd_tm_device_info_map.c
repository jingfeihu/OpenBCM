/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/tm/bcm56880_a0/bcm56880_a0_TM_DEVICE_INFO.map.ltl for
 *      bcm56880_a0
 *
 * Tool: $SDK/INTERNAL/fltg/bin/fltg
 *
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */
#include <bcmlrd/bcmlrd_internal.h>
#include <bcmlrd/chip/bcmlrd_id.h>
#include <bcmlrd/chip/bcm56880_a0/bcm56880_a0_lrd_field_data.h>
#include <bcmlrd/chip/bcm56880_a0/bcm56880_a0_lrd_ltm_intf.h>
#include <bcmlrd/chip/bcm56880_a0/bcm56880_a0_lrd_xfrm_field_desc.h>
#include <bcmdrd/chip/bcm56880_a0_enum.h>
#include "bcmltd/chip/bcmltd_common_enumpool.h"
#include "bcm56880_a0_lrd_enumpool.h"
#include <bcmltd/bcmltd_handler.h>
/* TM_DEVICE_INFO field init */
static const bcmlrd_field_data_t bcm56880_a0_lrd_tm_device_info_map_field_data_mmd[] = {
    { /* 0 MAX_PKT_SIZE */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56880_a0_lrd_ifd_u16_0x0,
      .def = &bcm56880_a0_lrd_ifd_u16_0x24c8,
      .max = &bcm56880_a0_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 1 PKT_HDR_SIZE */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56880_a0_lrd_ifd_u16_0x0,
      .def = &bcm56880_a0_lrd_ifd_u16_0x40,
      .max = &bcm56880_a0_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 2 JUMBO_PKT_SIZE */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56880_a0_lrd_ifd_u16_0x0,
      .def = &bcm56880_a0_lrd_ifd_u16_0x2400,
      .max = &bcm56880_a0_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 3 DEFAULT_MTU */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56880_a0_lrd_ifd_u16_0x0,
      .def = &bcm56880_a0_lrd_ifd_u16_0x600,
      .max = &bcm56880_a0_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 4 CELL_SIZE */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56880_a0_lrd_ifd_u32_0x0,
      .def = &bcm56880_a0_lrd_ifd_u32_0xfe,
      .max = &bcm56880_a0_lrd_ifd_u32_0xffffffff,
      .depth = 0,
      .width = 32,
      .edata = NULL,
    },
    { /* 5 NUM_CELLS */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56880_a0_lrd_ifd_u32_0x0,
      .def = &bcm56880_a0_lrd_ifd_u32_0x40d04,
      .max = &bcm56880_a0_lrd_ifd_u32_0xffffffff,
      .depth = 0,
      .width = 32,
      .edata = NULL,
    },
    { /* 6 NUM_PORT_PRI_GRP */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56880_a0_lrd_ifd_u16_0x0,
      .def = &bcm56880_a0_lrd_ifd_u16_0x8,
      .max = &bcm56880_a0_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 7 NUM_SERVICE_POOL */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56880_a0_lrd_ifd_u16_0x0,
      .def = &bcm56880_a0_lrd_ifd_u16_0x4,
      .max = &bcm56880_a0_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 8 NUM_Q */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56880_a0_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_lrd_ifd_u8_0xc,
      .max = &bcm56880_a0_lrd_ifd_u8_0xff,
      .depth = 0,
      .width = 8,
      .edata = NULL,
    },
    { /* 9 NUM_CPU_Q */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56880_a0_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_lrd_ifd_u8_0x30,
      .max = &bcm56880_a0_lrd_ifd_u8_0xff,
      .depth = 0,
      .width = 8,
      .edata = NULL,
    },
    { /* 10 NUM_PIPE */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56880_a0_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_lrd_ifd_u8_0x8,
      .max = &bcm56880_a0_lrd_ifd_u8_0xff,
      .depth = 0,
      .width = 8,
      .edata = NULL,
    },
    { /* 11 NUM_MC_REPL_RESOURCE_FREE */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56880_a0_lrd_ifd_u32_0x0,
      .def = &bcm56880_a0_lrd_ifd_u32_0x24000,
      .max = &bcm56880_a0_lrd_ifd_u32_0x24000,
      .depth = 0,
      .width = 18,
      .edata = NULL,
    },
    { /* 12 NUM_NHOP_SPARSE_MODE */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56880_a0_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_lrd_ifd_u8_0x6,
      .max = &bcm56880_a0_lrd_ifd_u8_0xff,
      .depth = 0,
      .width = 8,
      .edata = NULL,
    },
    { /* 13 NUM_NHOP_DENSE_MODE */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56880_a0_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_lrd_ifd_u8_0x40,
      .max = &bcm56880_a0_lrd_ifd_u8_0xff,
      .depth = 0,
      .width = 8,
      .edata = NULL,
    },
    { /* 14 MAX_NUM_MC_REPL */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56880_a0_lrd_ifd_u16_0x0,
      .def = &bcm56880_a0_lrd_ifd_u16_0x400,
      .max = &bcm56880_a0_lrd_ifd_u16_0x400,
      .depth = 0,
      .width = 11,
      .edata = NULL,
    },
    { /* 15 NUM_BUFFER_POOL */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56880_a0_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_lrd_ifd_u8_0x2,
      .max = &bcm56880_a0_lrd_ifd_u8_0x2,
      .depth = 0,
      .width = 2,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56880_a0_lrd_tm_device_info_map_field_data = {
    .fields = 16,
    .field = bcm56880_a0_lrd_tm_device_info_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56880_a0_lrd_tm_device_infot_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MAX_INDEX,
        .value = 0,
    },
    { /* 2 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MIN_INDEX,
        .value = 0,
    },
};

static const bcmlrd_map_attr_t bcm56880_a0_lrd_tm_device_infot_attr_group = {
    .attributes = 3,
    .attr = bcm56880_a0_lrd_tm_device_infot_attr_entry,
};

static const bcmlrd_map_entry_t bcm56880_a0_lrd_bcmtm_tm_device_info_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_TABLE_HANDLER,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            /* handler: bcm56880_a0_lta_bcmtm_tm_device_info_cth_handler */
            .handler_id = BCMLTD_TABLE_BCM56880_A0_LTA_BCMTM_TM_DEVICE_INFO_CTH_HANDLER_ID
        }
    },
};
static const bcmlrd_map_group_t bcm56880_a0_lrd_tm_device_info_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_CUSTOM,
            .id = 0,
        },
        .entries = 1,
        .entry = bcm56880_a0_lrd_bcmtm_tm_device_info_entry
    },
};
const bcmlrd_map_t bcm56880_a0_lrd_tm_device_info_map = {
    .src_id = TM_DEVICE_INFOt,
    .field_data = &bcm56880_a0_lrd_tm_device_info_map_field_data,
    .groups = 1,
    .group  = bcm56880_a0_lrd_tm_device_info_map_group,
    .table_attr = &bcm56880_a0_lrd_tm_device_infot_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE
};
