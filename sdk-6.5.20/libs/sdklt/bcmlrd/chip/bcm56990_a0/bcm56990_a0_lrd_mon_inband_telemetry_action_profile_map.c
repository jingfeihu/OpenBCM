/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/mon/bcm56990_a0/bcm56990_a0_MON_INBAND_TELEMETRY_ACTION_PROFILE.map.ltl for
 *      bcm56990_a0
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
#include <bcmlrd/chip/bcm56990_a0/bcm56990_a0_lrd_field_data.h>
#include <bcmlrd/chip/bcm56990_a0/bcm56990_a0_lrd_ltm_intf.h>
#include <bcmlrd/chip/bcm56990_a0/bcm56990_a0_lrd_xfrm_field_desc.h>
#include <bcmdrd/chip/bcm56990_a0_enum.h>
#include "bcmltd/chip/bcmltd_common_enumpool.h"
#include "bcm56990_a0_lrd_enumpool.h"
/* MON_INBAND_TELEMETRY_ACTION_PROFILE field init */
static const bcmlrd_field_data_t bcm56990_a0_lrd_mon_inband_telemetry_action_profile_map_field_data_mmd[] = {
    { /* 0 MON_INBAND_TELEMETRY_ACTION_PROFILE_ID */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56990_a0_lrd_ifd_u8_0x0,
      .def = &bcm56990_a0_lrd_ifd_u8_0x0,
      .max = &bcm56990_a0_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 1 UPDATE_UDP_LENGTH */
      .flags = 0,
      .min = &bcm56990_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56990_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56990_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 2 O_BIT_UPDATE_MODE */
      .flags = BCMLTD_FIELD_F_ENUM,
      .min = &bcm56990_a0_lrd_ifd_u32_0x0,
      .def = &bcm56990_a0_lrd_ifd_u32_0x0,
      .max = &bcm56990_a0_lrd_ifd_u32_0x2,
      .depth = 0,
      .width = 2,
      .edata = BCM56990_A0_LRD_INBAND_TELEMETRY_O_BIT_UPDATE_MODE_T_DATA,
    },
    { /* 3 UPDATE_IP_LENGTH */
      .flags = 0,
      .min = &bcm56990_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56990_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56990_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 4 TIMESTAMP_MODE */
      .flags = BCMLTD_FIELD_F_ENUM,
      .min = &bcm56990_a0_lrd_ifd_u32_0x0,
      .def = &bcm56990_a0_lrd_ifd_u32_0x0,
      .max = &bcm56990_a0_lrd_ifd_u32_0x1,
      .depth = 0,
      .width = 1,
      .edata = BCM56990_A0_LRD_INBAND_TELEMETRY_TIMESTAMP_MODE_T_DATA,
    },
    { /* 5 RESIDENCE_TIME_FORMAT */
      .flags = BCMLTD_FIELD_F_ENUM,
      .min = &bcm56990_a0_lrd_ifd_u32_0x0,
      .def = &bcm56990_a0_lrd_ifd_u32_0x0,
      .max = &bcm56990_a0_lrd_ifd_u32_0x1,
      .depth = 0,
      .width = 1,
      .edata = BCM56990_A0_LRD_INBAND_TELEMETRY_RESIDENCE_TIME_FORMAT_T_DATA,
    },
    { /* 6 METADATA_INSERT_MODE */
      .flags = BCMLTD_FIELD_F_ENUM,
      .min = &bcm56990_a0_lrd_ifd_u32_0x0,
      .def = &bcm56990_a0_lrd_ifd_u32_0x0,
      .max = &bcm56990_a0_lrd_ifd_u32_0x3,
      .depth = 0,
      .width = 2,
      .edata = BCM56990_A0_LRD_INBAND_TELEMETRY_METADATA_INSERT_MODE_T_DATA,
    },
    { /* 7 USE_METADATA_PROFILE */
      .flags = 0,
      .min = &bcm56990_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56990_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56990_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 8 MON_INBAND_TELEMETRY_METADATA_PROFILE_ID */
      .flags = 0,
      .min = &bcm56990_a0_lrd_ifd_u8_0x0,
      .def = &bcm56990_a0_lrd_ifd_u8_0x0,
      .max = &bcm56990_a0_lrd_ifd_u8_0x7,
      .depth = 0,
      .width = 3,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56990_a0_lrd_mon_inband_telemetry_action_profile_map_field_data = {
    .fields = 9,
    .field = bcm56990_a0_lrd_mon_inband_telemetry_action_profile_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56990_a0_lrd_mon_inband_telemetry_action_profilet_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MAX_INDEX,
        .value = 15,
    },
    { /* 2 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MIN_INDEX,
        .value = 0,
    },
};

static const bcmlrd_map_attr_t bcm56990_a0_lrd_mon_inband_telemetry_action_profilet_attr_group = {
    .attributes = 3,
    .attr = bcm56990_a0_lrd_mon_inband_telemetry_action_profilet_attr_entry,
};

static const bcmlrd_map_entry_t bcm56990_a0_lrd_mon_inband_telemetry_action_profilet_egr_int_action_profile_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = BCMLRD_FIELD_INDEX,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 3,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MON_INBAND_TELEMETRY_ACTION_PROFILEt_MON_INBAND_TELEMETRY_ACTION_PROFILE_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 1 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = UPDATE_UDP_LENGTHf,
            .field_idx = 0,
            .minbit    = 64,
            .maxbit    = 64,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MON_INBAND_TELEMETRY_ACTION_PROFILEt_UPDATE_UDP_LENGTHf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 2 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = UPDATE_O_FLAGf,
            .field_idx = 0,
            .minbit    = 62,
            .maxbit    = 63,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MON_INBAND_TELEMETRY_ACTION_PROFILEt_O_BIT_UPDATE_MODEf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 1,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 3 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = UPDATE_IP_LENGTHf,
            .field_idx = 0,
            .minbit    = 61,
            .maxbit    = 61,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MON_INBAND_TELEMETRY_ACTION_PROFILEt_UPDATE_IP_LENGTHf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 4 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = TS_MODEf,
            .field_idx = 0,
            .minbit    = 60,
            .maxbit    = 60,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MON_INBAND_TELEMETRY_ACTION_PROFILEt_TIMESTAMP_MODEf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 5 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = TRANSIT_DELAY_MODEf,
            .field_idx = 0,
            .minbit    = 59,
            .maxbit    = 59,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MON_INBAND_TELEMETRY_ACTION_PROFILEt_RESIDENCE_TIME_FORMATf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 6 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = OPERATIONf,
            .field_idx = 0,
            .minbit    = 55,
            .maxbit    = 57,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MON_INBAND_TELEMETRY_ACTION_PROFILEt_METADATA_INSERT_MODEf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 2,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 7 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = MD_HDR_TYPE_VALIDf,
            .field_idx = 0,
            .minbit    = 54,
            .maxbit    = 54,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MON_INBAND_TELEMETRY_ACTION_PROFILEt_USE_METADATA_PROFILEf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 8 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = MD_HDR_TYPEf,
            .field_idx = 0,
            .minbit    = 51,
            .maxbit    = 53,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MON_INBAND_TELEMETRY_ACTION_PROFILEt_MON_INBAND_TELEMETRY_METADATA_PROFILE_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 2,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
};
static const bcmlrd_map_group_t bcm56990_a0_lrd_mon_inband_telemetry_action_profile_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = EGR_INT_ACTION_PROFILEm,
        },
        .entries = 9,
        .entry = bcm56990_a0_lrd_mon_inband_telemetry_action_profilet_egr_int_action_profile_map_entry
    },
};
const bcmlrd_map_t bcm56990_a0_lrd_mon_inband_telemetry_action_profile_map = {
    .src_id = MON_INBAND_TELEMETRY_ACTION_PROFILEt,
    .field_data = &bcm56990_a0_lrd_mon_inband_telemetry_action_profile_map_field_data,
    .groups = 1,
    .group  = bcm56990_a0_lrd_mon_inband_telemetry_action_profile_map_group,
    .table_attr = &bcm56990_a0_lrd_mon_inband_telemetry_action_profilet_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};
