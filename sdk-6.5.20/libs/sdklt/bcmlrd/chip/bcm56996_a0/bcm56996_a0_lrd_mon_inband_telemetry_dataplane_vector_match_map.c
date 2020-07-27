/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/mon/bcm56996_a0/bcm56996_a0_MON_INBAND_TELEMETRY_DATAPLANE_VECTOR_MATCH.map.ltl for
 *      bcm56996_a0
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
#include <bcmlrd/chip/bcm56996_a0/bcm56996_a0_lrd_field_data.h>
#include <bcmlrd/chip/bcm56996_a0/bcm56996_a0_lrd_ltm_intf.h>
#include <bcmlrd/chip/bcm56996_a0/bcm56996_a0_lrd_xfrm_field_desc.h>
#include <bcmdrd/chip/bcm56996_a0_enum.h>
#include "bcmltd/chip/bcmltd_common_enumpool.h"
#include "bcm56996_a0_lrd_enumpool.h"
/* MON_INBAND_TELEMETRY_DATAPLANE_VECTOR_MATCH field init */
static const bcmlrd_field_data_t bcm56996_a0_lrd_mon_inband_telemetry_dataplane_vector_match_map_field_data_mmd[] = {
    { /* 0 MON_INBAND_TELEMETRY_DATAPLANE_VECTOR_MATCH_ID */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56996_a0_lrd_ifd_u8_0x0,
      .def = &bcm56996_a0_lrd_ifd_u8_0x0,
      .max = &bcm56996_a0_lrd_ifd_u8_0x7,
      .depth = 0,
      .width = 3,
      .edata = NULL,
    },
    { /* 1 REQUEST_VECTOR */
      .flags = 0,
      .min = &bcm56996_a0_lrd_ifd_u32_0x0,
      .def = &bcm56996_a0_lrd_ifd_u32_0x0,
      .max = &bcm56996_a0_lrd_ifd_u32_0xffffffff,
      .depth = 0,
      .width = 32,
      .edata = NULL,
    },
    { /* 2 REQUEST_VECTOR_MASK */
      .flags = 0,
      .min = &bcm56996_a0_lrd_ifd_u32_0x0,
      .def = &bcm56996_a0_lrd_ifd_u32_0x0,
      .max = &bcm56996_a0_lrd_ifd_u32_0xffffffff,
      .depth = 0,
      .width = 32,
      .edata = NULL,
    },
    { /* 3 MON_INBAND_TELEMETRY_METADATA_PROFILE_ID */
      .flags = 0,
      .min = &bcm56996_a0_lrd_ifd_u8_0x0,
      .def = &bcm56996_a0_lrd_ifd_u8_0x0,
      .max = &bcm56996_a0_lrd_ifd_u8_0x7,
      .depth = 0,
      .width = 3,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56996_a0_lrd_mon_inband_telemetry_dataplane_vector_match_map_field_data = {
    .fields = 4,
    .field = bcm56996_a0_lrd_mon_inband_telemetry_dataplane_vector_match_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56996_a0_lrd_mon_inband_telemetry_dataplane_vector_matcht_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_SHARED_INDEX,
        .value = MON_INBAND_TELEMETRY_IFA_VECTOR_MATCHt,
    },
    { /* 2 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MAX_INDEX,
        .value = 7,
    },
    { /* 3 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MIN_INDEX,
        .value = 0,
    },
};

static const bcmlrd_map_attr_t bcm56996_a0_lrd_mon_inband_telemetry_dataplane_vector_matcht_attr_group = {
    .attributes = 4,
    .attr = bcm56996_a0_lrd_mon_inband_telemetry_dataplane_vector_matcht_attr_entry,
};

static const bcmlrd_map_entry_t bcm56996_a0_lrd_mon_inband_telemetry_dataplane_vector_matcht_req_vector_config_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = BCMLRD_FIELD_INDEX,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 2,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MON_INBAND_TELEMETRY_DATAPLANE_VECTOR_MATCHt_MON_INBAND_TELEMETRY_DATAPLANE_VECTOR_MATCH_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 2,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 1 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = REQUEST_VECTOR_VALUEf,
            .field_idx = 0,
            .minbit    = 78,
            .maxbit    = 109,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MON_INBAND_TELEMETRY_DATAPLANE_VECTOR_MATCHt_REQUEST_VECTORf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 31,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 2 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = REQUEST_VECTOR_MASKf,
            .field_idx = 0,
            .minbit    = 46,
            .maxbit    = 77,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MON_INBAND_TELEMETRY_DATAPLANE_VECTOR_MATCHt_REQUEST_VECTOR_MASKf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 31,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 3 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = MD_HDR_TYPEf,
            .field_idx = 0,
            .minbit    = 43,
            .maxbit    = 45,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MON_INBAND_TELEMETRY_DATAPLANE_VECTOR_MATCHt_MON_INBAND_TELEMETRY_METADATA_PROFILE_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 2,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 4 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_VALUE,
        .desc = {
            .field_id  = VALIDf,
            .field_idx = 0,
            .minbit    = 110,
            .maxbit    = 110,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 1,
            }
        },
    },
    { /* 5 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_VALUE,
        .desc = {
            .field_id  = ALLOWED_BASE_HDRf,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 2,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 1,
            }
        },
    },
};
static const bcmlrd_map_group_t bcm56996_a0_lrd_mon_inband_telemetry_dataplane_vector_match_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = REQ_VECTOR_CONFIGm,
        },
        .entries = 6,
        .entry = bcm56996_a0_lrd_mon_inband_telemetry_dataplane_vector_matcht_req_vector_config_map_entry
    },
};
const bcmlrd_map_t bcm56996_a0_lrd_mon_inband_telemetry_dataplane_vector_match_map = {
    .src_id = MON_INBAND_TELEMETRY_DATAPLANE_VECTOR_MATCHt,
    .field_data = &bcm56996_a0_lrd_mon_inband_telemetry_dataplane_vector_match_map_field_data,
    .groups = 1,
    .group  = bcm56996_a0_lrd_mon_inband_telemetry_dataplane_vector_match_map_group,
    .table_attr = &bcm56996_a0_lrd_mon_inband_telemetry_dataplane_vector_matcht_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};
