/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/sec/bcm56780_a0/bcm56780_a0_SEC_DECRYPT_IPSEC_SC.map.ltl for
 *      bcm56780_a0
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
#include <bcmlrd/chip/bcm56780_a0/bcm56780_a0_lrd_field_data.h>
#include <bcmlrd/chip/bcm56780_a0/bcm56780_a0_lrd_ltm_intf.h>
#include <bcmlrd/chip/bcm56780_a0/bcm56780_a0_lrd_xfrm_field_desc.h>
#include <bcmdrd/chip/bcm56780_a0_enum.h>
#include "bcmltd/chip/bcmltd_common_enumpool.h"
#include "bcm56780_a0_lrd_enumpool.h"
/* SEC_DECRYPT_IPSEC_SC field init */
static const bcmlrd_field_data_t bcm56780_a0_lrd_sec_decrypt_ipsec_sc_map_field_data_mmd[] = {
    { /* 0 SEC_BLOCK_ID */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_lrd_ifd_u8_0x0,
      .def = &bcm56780_a0_lrd_ifd_u8_0x0,
      .max = &bcm56780_a0_lrd_ifd_u8_0x5,
      .depth = 0,
      .width = 7,
      .edata = NULL,
    },
    { /* 1 SEC_BLOCK_ID_MASK */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56780_a0_lrd_ifd_u8_0x0,
      .def = &bcm56780_a0_lrd_ifd_u8_0x0,
      .max = &bcm56780_a0_lrd_ifd_u8_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 2 SEC_DECRYPT_SUBPORT_POLICY_ID */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_lrd_ifd_u32_0x3ff,
      .depth = 0,
      .width = 10,
      .edata = NULL,
    },
    { /* 3 SEC_DECRYPT_SUBPORT_POLICY_ID_MASK */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_lrd_ifd_u32_0x3ff,
      .depth = 0,
      .width = 10,
      .edata = NULL,
    },
    { /* 4 SP_IDENTIFIER */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_lrd_ifd_u64_0x0,
      .def = &bcm56780_a0_lrd_ifd_u64_0x0,
      .max = &bcm56780_a0_lrd_ifd_u64_0xffffffff,
      .depth = 0,
      .width = 32,
      .edata = NULL,
    },
    { /* 5 SP_IDENTIFIER_MASK */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_lrd_ifd_u64_0x0,
      .def = &bcm56780_a0_lrd_ifd_u64_0x0,
      .max = &bcm56780_a0_lrd_ifd_u64_0xffffffff,
      .depth = 0,
      .width = 32,
      .edata = NULL,
    },
    { /* 6 ENTRY_PRIORITY */
      .flags = 0,
      .min = &bcm56780_a0_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_lrd_ifd_u32_0x7fffffff,
      .depth = 0,
      .width = 31,
      .edata = NULL,
    },
    { /* 7 SEC_DECRYPT_IPSEC_SC_POLICY_ID */
      .flags = 0,
      .min = &bcm56780_a0_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_lrd_ifd_u32_0x3ff,
      .depth = 0,
      .width = 10,
      .edata = NULL,
    },
    { /* 8 IPSEC_AN */
      .flags = 0,
      .min = &bcm56780_a0_lrd_ifd_u8_0x0,
      .def = &bcm56780_a0_lrd_ifd_u8_0x0,
      .max = &bcm56780_a0_lrd_ifd_u8_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56780_a0_lrd_sec_decrypt_ipsec_sc_map_field_data = {
    .fields = 9,
    .field = bcm56780_a0_lrd_sec_decrypt_ipsec_sc_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56780_a0_lrd_sec_decrypt_ipsec_sct_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_ENTRY_LIMIT,
        .value = 7680,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
    { /* 2 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_PORT_SIZE,
        .value = 80,
    },
    { /* 3 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_SIZE,
        .value = 1280,
    },
};

static const bcmlrd_map_attr_t bcm56780_a0_lrd_sec_decrypt_ipsec_sct_attr_group = {
    .attributes = 4,
    .attr = bcm56780_a0_lrd_sec_decrypt_ipsec_sct_attr_entry,
};

static const bcmlrd_map_entry_t bcm56780_a0_lrd_sec_decrypt_ipsec_sct_isec_sc_tcam_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = MS_SUBPORT_NUMf,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 9,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = SEC_DECRYPT_IPSEC_SCt_SEC_DECRYPT_SUBPORT_POLICY_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 9,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 1 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = MS_SUBPORT_NUM_MASKf,
            .field_idx = 0,
            .minbit    = 80,
            .maxbit    = 89,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = SEC_DECRYPT_IPSEC_SCt_SEC_DECRYPT_SUBPORT_POLICY_ID_MASKf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 9,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 2 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = SPIf,
            .field_idx = 0,
            .minbit    = 10,
            .maxbit    = 41,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = SEC_DECRYPT_IPSEC_SCt_SP_IDENTIFIERf,
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
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = SPI_MASKf,
            .field_idx = 0,
            .minbit    = 90,
            .maxbit    = 121,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = SEC_DECRYPT_IPSEC_SCt_SP_IDENTIFIER_MASKf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 31,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 4 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = VALIDf,
            .field_idx = 0,
            .minbit    = 160,
            .maxbit    = 160,
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
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = IPSEC_VALIDf,
            .field_idx = 0,
            .minbit    = 79,
            .maxbit    = 79,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 1,
            }
        },
    },
    { /* 6 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = BCMLRD_FIELD_ENTRY_PRIORITY,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 30,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = SEC_DECRYPT_IPSEC_SCt_ENTRY_PRIORITYf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 30,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 7 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = BCMLRD_FIELD_PORT,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 6,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = SEC_DECRYPT_IPSEC_SCt_SEC_BLOCK_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 6,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
};
static const bcmlrd_map_entry_t bcm56780_a0_lrd_sec_decrypt_ipsec_sct_sc_map_table_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = BCMLRD_FIELD_PORT,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 6,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = SEC_DECRYPT_IPSEC_SCt_SEC_BLOCK_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 6,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 1 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = SC_NUMf,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 9,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = SEC_DECRYPT_IPSEC_SCt_SEC_DECRYPT_IPSEC_SC_POLICY_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 9,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 2 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = IPSEC_ANf,
            .field_idx = 0,
            .minbit    = 10,
            .maxbit    = 10,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = SEC_DECRYPT_IPSEC_SCt_IPSEC_ANf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
};
static const bcmlrd_map_group_t bcm56780_a0_lrd_sec_decrypt_ipsec_sc_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = ISEC_SC_TCAMm,
        },
        .entries = 8,
        .entry = bcm56780_a0_lrd_sec_decrypt_ipsec_sct_isec_sc_tcam_map_entry
    },
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = SC_MAP_TABLEm,
        },
        .entries = 3,
        .entry = bcm56780_a0_lrd_sec_decrypt_ipsec_sct_sc_map_table_map_entry
    },
};
const bcmlrd_map_t bcm56780_a0_lrd_sec_decrypt_ipsec_sc_map = {
    .src_id = SEC_DECRYPT_IPSEC_SCt,
    .field_data = &bcm56780_a0_lrd_sec_decrypt_ipsec_sc_map_field_data,
    .groups = 2,
    .group  = bcm56780_a0_lrd_sec_decrypt_ipsec_sc_map_group,
    .table_attr = &bcm56780_a0_lrd_sec_decrypt_ipsec_sct_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};