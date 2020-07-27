/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/npl/bcm56880_a0/dna_4_6_6/bcm56880_a0_dna_4_6_6_ING_VLAN_XLATE_3_TABLE.map.ltl for
 *      bcm56880_a0 variant dna_4_6_6
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
#include <bcmlrd/chip/bcm56880_a0/dna_4_6_6/bcm56880_a0_dna_4_6_6_lrd_field_data.h>
#include <bcmlrd/chip/bcm56880_a0/bcm56880_a0_lrd_ltm_intf.h>
#include <bcmlrd/chip/bcm56880_a0/dna_4_6_6/bcm56880_a0_dna_4_6_6_lrd_ltm_intf.h>
#include <bcmlrd/chip/bcm56880_a0/dna_4_6_6/bcm56880_a0_dna_4_6_6_lrd_xfrm_field_desc.h>
#include <bcmdrd/chip/bcm56880_a0_enum.h>
#include "bcmltd/chip/bcmltd_common_enumpool.h"
#include "../bcm56880_a0_lrd_enumpool.h"
#include "bcm56880_a0_dna_4_6_6_lrd_enumpool.h"
#include <bcmltd/bcmltd_handler.h>
/* ING_VLAN_XLATE_3_TABLE field init */
static const bcmlrd_field_data_t bcm56880_a0_dna_4_6_6_lrd_ing_vlan_xlate_3_table_map_field_data_mmd[] = {
    { /* 0 OVID */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0xfff,
      .depth = 0,
      .width = 12,
      .edata = NULL,
    },
    { /* 1 IVID */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0xfff,
      .depth = 0,
      .width = 12,
      .edata = NULL,
    },
    { /* 2 L2_IIF_PORT_GROUP_ID */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 3 PIPE */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x7,
      .depth = 0,
      .width = 3,
      .edata = NULL,
    },
    { /* 4 STRENGTH_PROFILE_INDEX */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 5 FLEX_CTR_ACTION */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x3f,
      .depth = 0,
      .width = 6,
      .edata = NULL,
    },
    { /* 6 L3_IIF_STRENGTH */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x7,
      .depth = 0,
      .width = 3,
      .edata = NULL,
    },
    { /* 7 VFI_STRENGTH */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x7,
      .depth = 0,
      .width = 3,
      .edata = NULL,
    },
    { /* 8 L2_IIF */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0x7ff,
      .depth = 0,
      .width = 11,
      .edata = NULL,
    },
    { /* 9 L3_IIF */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0x3fff,
      .depth = 0,
      .width = 14,
      .edata = NULL,
    },
    { /* 10 SVP */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 11 VFI */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 12 OPAQUE_OBJ0 */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 13 VLAN_TAG_PRESERVE_CTRL */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x3,
      .depth = 0,
      .width = 2,
      .edata = NULL,
    },
    { /* 14 OPAQUE_CTRL_ID */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 15 OPAQUE_CTRL_ID_1 */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56880_a0_dna_4_6_6_lrd_ing_vlan_xlate_3_table_map_field_data = {
    .fields = 16,
    .field = bcm56880_a0_dna_4_6_6_lrd_ing_vlan_xlate_3_table_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56880_a0_dna_4_6_6_lrd_ing_vlan_xlate_3_tablet_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INSTANCE_SIZE,
        .value = 8,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
    { /* 2 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_SIZE,
        .value = 16384,
    },
};

static const bcmlrd_map_attr_t bcm56880_a0_dna_4_6_6_lrd_ing_vlan_xlate_3_tablet_attr_group = {
    .attributes = 3,
    .attr = bcm56880_a0_dna_4_6_6_lrd_ing_vlan_xlate_3_tablet_attr_entry,
};


const bcmltd_field_desc_t
bcm56880_a0_dna_4_6_6_lrd_field_demux_ing_vlan_xlate_3_tablet_l2_iiff_0_src_field_desc_s0[2] = {
    {
        .field_id  = BCM56880_A0_DNA_4_6_6_ING_VLAN_XLATE_3_TABLEt_L2_IIFf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 3,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = BCM56880_A0_DNA_4_6_6_ING_VLAN_XLATE_3_TABLEt_L2_IIFf,
        .field_idx = 0,
        .minbit    = 4,
        .maxbit    = 10,
        .entry_idx = 0,
        .reserved  = 0
    },
};

static const bcmltd_field_desc_t
bcm56880_a0_dna_4_6_6_lrd_field_demux_ing_vlan_xlate_3_tablet_l2_iiff_0_dst_field_desc[2] = {
    {
        .field_id  = TABLE_FIELDS_0f,
        .field_idx = 0,
        .minbit    = 116,
        .maxbit    = 119,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = TABLE_FIELDS_1f,
        .field_idx = 0,
        .minbit    = 123,
        .maxbit    = 129,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmlrd_field_xfrm_desc_t
bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_ing_vlan_xlate_3_tablet_l2_iiff_0_xfrm_handler_fwd_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56880_A0_DNA_4_6_6_LTA_BCMLTX_FIELD_DEMUX_ING_VLAN_XLATE_3_TABLET_L2_IIFF_0_XFRM_HANDLER_FWD_S0_D0_ID,
    .src_fields = 2,
    .src = bcm56880_a0_dna_4_6_6_lrd_field_demux_ing_vlan_xlate_3_tablet_l2_iiff_0_src_field_desc_s0,
    .dst_fields = 2,
    .dst = bcm56880_a0_dna_4_6_6_lrd_field_demux_ing_vlan_xlate_3_tablet_l2_iiff_0_dst_field_desc,
};

const bcmlrd_field_xfrm_desc_t
bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_ing_vlan_xlate_3_tablet_l2_iiff_0_xfrm_handler_rev_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56880_A0_DNA_4_6_6_LTA_BCMLTX_FIELD_DEMUX_ING_VLAN_XLATE_3_TABLET_L2_IIFF_0_XFRM_HANDLER_REV_S0_D0_ID,
    .src_fields = 2,
    .src = bcm56880_a0_dna_4_6_6_lrd_field_demux_ing_vlan_xlate_3_tablet_l2_iiff_0_dst_field_desc,
    .dst_fields = 2,
    .dst = bcm56880_a0_dna_4_6_6_lrd_field_demux_ing_vlan_xlate_3_tablet_l2_iiff_0_src_field_desc_s0,
};


static const bcmlrd_map_entry_t bcm56880_a0_dna_4_6_6_lrd_ing_vlan_xlate_3_tablet_ifta40_e2t_00_b0_double_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = TABLE_FIELDS_1f,
            .field_idx = 0,
            .minbit    = 231,
            .maxbit    = 234,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_6_6_ING_VLAN_XLATE_3_TABLEt_STRENGTH_PROFILE_INDEXf,
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
            .field_id  = TABLE_FIELDS_0f,
            .field_idx = 0,
            .minbit    = 84,
            .maxbit    = 99,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_6_6_ING_VLAN_XLATE_3_TABLEt_SVPf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 15,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 2 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = TABLE_FIELDS_1f,
            .field_idx = 0,
            .minbit    = 225,
            .maxbit    = 230,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_6_6_ING_VLAN_XLATE_3_TABLEt_FLEX_CTR_ACTIONf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 5,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 3 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = TABLE_FIELDS_1f,
            .field_idx = 0,
            .minbit    = 183,
            .maxbit    = 198,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_6_6_ING_VLAN_XLATE_3_TABLEt_VFIf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 15,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 4 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = TABLE_FIELDS_1f,
            .field_idx = 0,
            .minbit    = 215,
            .maxbit    = 217,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_6_6_ING_VLAN_XLATE_3_TABLEt_L3_IIF_STRENGTHf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 2,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 5 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = TABLE_FIELDS_0f,
            .field_idx = 0,
            .minbit    = 100,
            .maxbit    = 113,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_6_6_ING_VLAN_XLATE_3_TABLEt_L3_IIFf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 13,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 6 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = TABLE_FIELDS_1f,
            .field_idx = 0,
            .minbit    = 219,
            .maxbit    = 220,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_6_6_ING_VLAN_XLATE_3_TABLEt_VLAN_TAG_PRESERVE_CTRLf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 1,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 7 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = TABLE_FIELDS_1f,
            .field_idx = 0,
            .minbit    = 135,
            .maxbit    = 137,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_6_6_ING_VLAN_XLATE_3_TABLEt_VFI_STRENGTHf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 2,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 8 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = TABLE_FIELDS_1f,
            .field_idx = 0,
            .minbit    = 199,
            .maxbit    = 214,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_6_6_ING_VLAN_XLATE_3_TABLEt_OPAQUE_OBJ0f,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 15,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 9 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = TABLE_FIELDS_1f,
            .field_idx = 0,
            .minbit    = 151,
            .maxbit    = 154,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_6_6_ING_VLAN_XLATE_3_TABLEt_OPAQUE_CTRL_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 10 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = TABLE_FIELDS_1f,
            .field_idx = 0,
            .minbit    = 167,
            .maxbit    = 170,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_6_6_ING_VLAN_XLATE_3_TABLEt_OPAQUE_CTRL_ID_1f,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 11 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = TABLE_FIELDS_0f,
            .field_idx = 0,
            .minbit    = 35,
            .maxbit    = 46,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_6_6_ING_VLAN_XLATE_3_TABLEt_IVIDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 11,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 12 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = TABLE_FIELDS_0f,
            .field_idx = 0,
            .minbit    = 47,
            .maxbit    = 58,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_6_6_ING_VLAN_XLATE_3_TABLEt_OVIDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 11,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 13 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = TABLE_FIELDS_0f,
            .field_idx = 0,
            .minbit    = 59,
            .maxbit    = 74,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_6_6_ING_VLAN_XLATE_3_TABLEt_L2_IIF_PORT_GROUP_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 15,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 14 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = BASE_VALID_0f,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 2,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 3,
            }
        },
    },
    { /* 15 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = BASE_VALID_1f,
            .field_idx = 0,
            .minbit    = 120,
            .maxbit    = 122,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 7,
            }
        },
    },
    { /* 16 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = KEY_TYPEf,
            .field_idx = 0,
            .minbit    = 3,
            .maxbit    = 6,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 1,
            }
        },
    },
    { /* 17 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = BCMLRD_FIELD_INSTANCE,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 2,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_6_6_ING_VLAN_XLATE_3_TABLEt_PIPEf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 2,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 18 */
        .entry_type = BCMLRD_MAP_ENTRY_FWD_VALUE_FIELD_XFRM_HANDLER,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .xfrm = {
                /* handler: bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_ing_vlan_xlate_3_tablet_l2_iiff_0_xfrm_handler_fwd_s0_d0 */
                .desc = &bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_ing_vlan_xlate_3_tablet_l2_iiff_0_xfrm_handler_fwd_s0_d0_desc,
            },
        },
    },
    { /* 19 */
        .entry_type = BCMLRD_MAP_ENTRY_REV_VALUE_FIELD_XFRM_HANDLER,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .xfrm = {
                /* handler: bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_ing_vlan_xlate_3_tablet_l2_iiff_0_xfrm_handler_rev_s0_d0 */
                .desc = &bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_ing_vlan_xlate_3_tablet_l2_iiff_0_xfrm_handler_rev_s0_d0_desc,
            },
        },
    },
};
/* Map conditions */
static const uint32_t
bcm56880_a0_dna_4_6_6_lrd_ing_vlan_xlate_3_table_map_cond_edit[] = {
    1, /* Number of groups. */
    0, /* Group ID. */
    1, /* Number of entries. */
    17, /* Entry ID. */
    0, /* Number of multi-entry transforms. */
};

static const bcmlrd_condition_t
bcm56880_a0_dna_4_6_6_lrd_ing_vlan_xlate_3_table_map_condition[] = {
    {
        .op    = BCMLRD_CONDITION_AND,
        .table = BCM56880_A0_DNA_4_6_6_ING_VLAN_XLATE_3_TABLE_PIPE_CONFIGt,
        .field = BCM56880_A0_DNA_4_6_6_ING_VLAN_XLATE_3_TABLE_PIPE_CONFIGt_PIPEUNIQUEf,
        .value = 1
    },
};

static const bcmlrd_cond_expr_t
bcm56880_a0_dna_4_6_6_lrd_ing_vlan_xlate_3_table_map_cond_expr[] = {
    {
        .num_cond = 1,
        .cond     = bcm56880_a0_dna_4_6_6_lrd_ing_vlan_xlate_3_table_map_condition + 0,
    },
};

static const bcmlrd_cond_field_t bcm56880_a0_dna_4_6_6_lrd_ing_vlan_xlate_3_table_map_cond_field[] = {
    {
        .field = BCM56880_A0_DNA_4_6_6_ING_VLAN_XLATE_3_TABLEt_PIPEf,
        .expr  = bcm56880_a0_dna_4_6_6_lrd_ing_vlan_xlate_3_table_map_cond_expr + 0,
        .edit  = bcm56880_a0_dna_4_6_6_lrd_ing_vlan_xlate_3_table_map_cond_edit + 0,
    },
};
static const bcmlrd_cond_data_t
bcm56880_a0_dna_4_6_6_lrd_ing_vlan_xlate_3_table_map_cond = {
    .num_field_cond = 1,
    .field_cond = bcm56880_a0_dna_4_6_6_lrd_ing_vlan_xlate_3_table_map_cond_field
};
static const bcmlrd_map_group_t bcm56880_a0_dna_4_6_6_lrd_ing_vlan_xlate_3_table_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = IFTA40_E2T_00_B0_DOUBLEm,
        },
        .entries = 20,
        .entry = bcm56880_a0_dna_4_6_6_lrd_ing_vlan_xlate_3_tablet_ifta40_e2t_00_b0_double_map_entry
    },
};
const bcmlrd_map_t bcm56880_a0_dna_4_6_6_lrd_ing_vlan_xlate_3_table_map = {
    .src_id = BCM56880_A0_DNA_4_6_6_ING_VLAN_XLATE_3_TABLEt,
    .field_data = &bcm56880_a0_dna_4_6_6_lrd_ing_vlan_xlate_3_table_map_field_data,
    .groups = 1,
    .group  = bcm56880_a0_dna_4_6_6_lrd_ing_vlan_xlate_3_table_map_group,
    .table_attr = &bcm56880_a0_dna_4_6_6_lrd_ing_vlan_xlate_3_tablet_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE,
    .cond = &bcm56880_a0_dna_4_6_6_lrd_ing_vlan_xlate_3_table_map_cond,
};
