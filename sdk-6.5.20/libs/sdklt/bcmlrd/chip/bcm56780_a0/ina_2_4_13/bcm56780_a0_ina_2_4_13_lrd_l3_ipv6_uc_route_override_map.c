/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/npl/bcm56780_a0/ina_2_4_13/bcm56780_a0_ina_2_4_13_L3_IPV6_UC_ROUTE_OVERRIDE.map.ltl for
 *      bcm56780_a0 variant ina_2_4_13
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
#include <bcmlrd/chip/bcm56780_a0/ina_2_4_13/bcm56780_a0_ina_2_4_13_lrd_field_data.h>
#include <bcmlrd/chip/bcm56780_a0/bcm56780_a0_lrd_ltm_intf.h>
#include <bcmlrd/chip/bcm56780_a0/ina_2_4_13/bcm56780_a0_ina_2_4_13_lrd_ltm_intf.h>
#include <bcmlrd/chip/bcm56780_a0/ina_2_4_13/bcm56780_a0_ina_2_4_13_lrd_xfrm_field_desc.h>
#include <bcmdrd/chip/bcm56780_a0_enum.h>
#include "bcmltd/chip/bcmltd_common_enumpool.h"
#include "../bcm56780_a0_lrd_enumpool.h"
#include "bcm56780_a0_ina_2_4_13_lrd_enumpool.h"
#include <bcmltd/bcmltd_handler.h>
/* L3_IPV6_UC_ROUTE_OVERRIDE field init */
static const bcmlrd_field_data_t bcm56780_a0_ina_2_4_13_lrd_l3_ipv6_uc_route_override_map_field_data_mmd[] = {
    { /* 0 IPV6_LOWER */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_ina_2_4_13_lrd_ifd_u64_0x0,
      .def = &bcm56780_a0_ina_2_4_13_lrd_ifd_u64_0x0,
      .max = &bcm56780_a0_ina_2_4_13_lrd_ifd_u64_0xffffffffffffffff,
      .depth = 0,
      .width = 64,
      .edata = NULL,
    },
    { /* 1 IPV6_LOWER_MASK */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_ina_2_4_13_lrd_ifd_u64_0x0,
      .def = &bcm56780_a0_ina_2_4_13_lrd_ifd_u64_0x0,
      .max = &bcm56780_a0_ina_2_4_13_lrd_ifd_u64_0xffffffffffffffff,
      .depth = 0,
      .width = 64,
      .edata = NULL,
    },
    { /* 2 IPV6_UPPER */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_ina_2_4_13_lrd_ifd_u64_0x0,
      .def = &bcm56780_a0_ina_2_4_13_lrd_ifd_u64_0x0,
      .max = &bcm56780_a0_ina_2_4_13_lrd_ifd_u64_0xffffffffffffffff,
      .depth = 0,
      .width = 64,
      .edata = NULL,
    },
    { /* 3 IPV6_UPPER_MASK */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_ina_2_4_13_lrd_ifd_u64_0x0,
      .def = &bcm56780_a0_ina_2_4_13_lrd_ifd_u64_0x0,
      .max = &bcm56780_a0_ina_2_4_13_lrd_ifd_u64_0xffffffffffffffff,
      .depth = 0,
      .width = 64,
      .edata = NULL,
    },
    { /* 4 DESTINATION */
      .flags = 0,
      .min = &bcm56780_a0_ina_2_4_13_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_ina_2_4_13_lrd_ifd_u16_0x0,
      .max = &bcm56780_a0_ina_2_4_13_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 5 DESTINATION_TYPE */
      .flags = BCMLTD_FIELD_F_ENUM,
      .min = &bcm56780_a0_ina_2_4_13_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_ina_2_4_13_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_ina_2_4_13_lrd_ifd_u32_0xa,
      .depth = 0,
      .width = 4,
      .edata = BCM56780_A0_INA_2_4_13_LRD_DESTINATION_TYPE_DATA,
    },
    { /* 6 MISC_CTRL_0 */
      .flags = 0,
      .min = &bcm56780_a0_ina_2_4_13_lrd_ifd_u8_0x0,
      .def = &bcm56780_a0_ina_2_4_13_lrd_ifd_u8_0x0,
      .max = &bcm56780_a0_ina_2_4_13_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 7 MISC_CTRL_1 */
      .flags = 0,
      .min = &bcm56780_a0_ina_2_4_13_lrd_ifd_u8_0x0,
      .def = &bcm56780_a0_ina_2_4_13_lrd_ifd_u8_0x0,
      .max = &bcm56780_a0_ina_2_4_13_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 8 DATA_TYPE */
      .flags = BCMLTD_FIELD_F_ENUM,
      .min = &bcm56780_a0_ina_2_4_13_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_ina_2_4_13_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_ina_2_4_13_lrd_ifd_u32_0x1,
      .depth = 0,
      .width = 1,
      .edata = BCM56780_A0_INA_2_4_13_LRD_L3_IPV6_ALPM_VIEW_TYPE_DATA,
    },
};
const bcmlrd_map_field_data_t bcm56780_a0_ina_2_4_13_lrd_l3_ipv6_uc_route_override_map_field_data = {
    .fields = 9,
    .field = bcm56780_a0_ina_2_4_13_lrd_l3_ipv6_uc_route_override_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56780_a0_ina_2_4_13_lrd_l3_ipv6_uc_route_overridet_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_SIZE,
        .value = 8192,
    },
    { /* 2 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TCAM_ORDERING,
        .value = LPM,
    },
};

static const bcmlrd_map_attr_t bcm56780_a0_ina_2_4_13_lrd_l3_ipv6_uc_route_overridet_attr_group = {
    .attributes = 3,
    .attr = bcm56780_a0_ina_2_4_13_lrd_l3_ipv6_uc_route_overridet_attr_entry,
};


const bcmltd_field_desc_t
bcm56780_a0_ina_2_4_13_lrd_field_demux_l3_ipv6_uc_route_overridet_ipv6u_lower_maskf_0_src_field_desc_s0[6] = {
    {
        .field_id  = BCM56780_A0_INA_2_4_13_L3_IPV6_UC_ROUTE_OVERRIDEt_IPV6u_LOWER_MASKf,
        .field_idx = 0,
        .minbit    = 32,
        .maxbit    = 55,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = BCM56780_A0_INA_2_4_13_L3_IPV6_UC_ROUTE_OVERRIDEt_IPV6u_LOWER_MASKf,
        .field_idx = 0,
        .minbit    = 56,
        .maxbit    = 59,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = BCM56780_A0_INA_2_4_13_L3_IPV6_UC_ROUTE_OVERRIDEt_IPV6u_LOWER_MASKf,
        .field_idx = 0,
        .minbit    = 60,
        .maxbit    = 63,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = BCM56780_A0_INA_2_4_13_L3_IPV6_UC_ROUTE_OVERRIDEt_IPV6u_LOWER_MASKf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 13,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = BCM56780_A0_INA_2_4_13_L3_IPV6_UC_ROUTE_OVERRIDEt_IPV6u_LOWER_MASKf,
        .field_idx = 0,
        .minbit    = 14,
        .maxbit    = 15,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = BCM56780_A0_INA_2_4_13_L3_IPV6_UC_ROUTE_OVERRIDEt_IPV6u_LOWER_MASKf,
        .field_idx = 0,
        .minbit    = 16,
        .maxbit    = 31,
        .entry_idx = 0,
        .reserved  = 0
    },
};

static const bcmltd_field_desc_t
bcm56780_a0_ina_2_4_13_lrd_field_demux_l3_ipv6_uc_route_overridet_ipv6u_lower_maskf_0_dst_field_desc[6] = {
    {
        .field_id  = MASK0f,
        .field_idx = 0,
        .minbit    = 174,
        .maxbit    = 197,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = MASK0f,
        .field_idx = 0,
        .minbit    = 198,
        .maxbit    = 201,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = MASK1f,
        .field_idx = 0,
        .minbit    = 316,
        .maxbit    = 319,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = MASK0f,
        .field_idx = 0,
        .minbit    = 138,
        .maxbit    = 151,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = MASK0f,
        .field_idx = 0,
        .minbit    = 156,
        .maxbit    = 157,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = MASK0f,
        .field_idx = 0,
        .minbit    = 158,
        .maxbit    = 173,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmltd_field_desc_t
bcm56780_a0_ina_2_4_13_lrd_field_demux_l3_ipv6_uc_route_overridet_ipv6u_lowerf_0_src_field_desc_s0[6] = {
    {
        .field_id  = BCM56780_A0_INA_2_4_13_L3_IPV6_UC_ROUTE_OVERRIDEt_IPV6u_LOWERf,
        .field_idx = 0,
        .minbit    = 32,
        .maxbit    = 55,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = BCM56780_A0_INA_2_4_13_L3_IPV6_UC_ROUTE_OVERRIDEt_IPV6u_LOWERf,
        .field_idx = 0,
        .minbit    = 56,
        .maxbit    = 59,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = BCM56780_A0_INA_2_4_13_L3_IPV6_UC_ROUTE_OVERRIDEt_IPV6u_LOWERf,
        .field_idx = 0,
        .minbit    = 60,
        .maxbit    = 63,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = BCM56780_A0_INA_2_4_13_L3_IPV6_UC_ROUTE_OVERRIDEt_IPV6u_LOWERf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 13,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = BCM56780_A0_INA_2_4_13_L3_IPV6_UC_ROUTE_OVERRIDEt_IPV6u_LOWERf,
        .field_idx = 0,
        .minbit    = 14,
        .maxbit    = 15,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = BCM56780_A0_INA_2_4_13_L3_IPV6_UC_ROUTE_OVERRIDEt_IPV6u_LOWERf,
        .field_idx = 0,
        .minbit    = 16,
        .maxbit    = 31,
        .entry_idx = 0,
        .reserved  = 0
    },
};

static const bcmltd_field_desc_t
bcm56780_a0_ina_2_4_13_lrd_field_demux_l3_ipv6_uc_route_overridet_ipv6u_lowerf_0_dst_field_desc[6] = {
    {
        .field_id  = KEY0f,
        .field_idx = 0,
        .minbit    = 74,
        .maxbit    = 97,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = KEY0f,
        .field_idx = 0,
        .minbit    = 98,
        .maxbit    = 101,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = KEY1f,
        .field_idx = 0,
        .minbit    = 216,
        .maxbit    = 219,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = KEY0f,
        .field_idx = 0,
        .minbit    = 38,
        .maxbit    = 51,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = KEY0f,
        .field_idx = 0,
        .minbit    = 56,
        .maxbit    = 57,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = KEY0f,
        .field_idx = 0,
        .minbit    = 58,
        .maxbit    = 73,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmltd_field_desc_t
bcm56780_a0_ina_2_4_13_lrd_field_demux_l3_ipv6_uc_route_overridet_ipv6u_upper_maskf_0_src_field_desc_s0[6] = {
    {
        .field_id  = BCM56780_A0_INA_2_4_13_L3_IPV6_UC_ROUTE_OVERRIDEt_IPV6u_UPPER_MASKf,
        .field_idx = 0,
        .minbit    = 32,
        .maxbit    = 35,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = BCM56780_A0_INA_2_4_13_L3_IPV6_UC_ROUTE_OVERRIDEt_IPV6u_UPPER_MASKf,
        .field_idx = 0,
        .minbit    = 36,
        .maxbit    = 41,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = BCM56780_A0_INA_2_4_13_L3_IPV6_UC_ROUTE_OVERRIDEt_IPV6u_UPPER_MASKf,
        .field_idx = 0,
        .minbit    = 16,
        .maxbit    = 39,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = BCM56780_A0_INA_2_4_13_L3_IPV6_UC_ROUTE_OVERRIDEt_IPV6u_UPPER_MASKf,
        .field_idx = 0,
        .minbit    = 40,
        .maxbit    = 41,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = BCM56780_A0_INA_2_4_13_L3_IPV6_UC_ROUTE_OVERRIDEt_IPV6u_UPPER_MASKf,
        .field_idx = 0,
        .minbit    = 42,
        .maxbit    = 63,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = BCM56780_A0_INA_2_4_13_L3_IPV6_UC_ROUTE_OVERRIDEt_IPV6u_UPPER_MASKf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 15,
        .entry_idx = 0,
        .reserved  = 0
    },
};

static const bcmltd_field_desc_t
bcm56780_a0_ina_2_4_13_lrd_field_demux_l3_ipv6_uc_route_overridet_ipv6u_upper_maskf_0_dst_field_desc[6] = {
    {
        .field_id  = MASK1f,
        .field_idx = 0,
        .minbit    = 402,
        .maxbit    = 405,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = MASK1f,
        .field_idx = 0,
        .minbit    = 406,
        .maxbit    = 411,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = MASK1f,
        .field_idx = 0,
        .minbit    = 336,
        .maxbit    = 359,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = MASK1f,
        .field_idx = 0,
        .minbit    = 360,
        .maxbit    = 361,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = MASK1f,
        .field_idx = 0,
        .minbit    = 366,
        .maxbit    = 387,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = MASK1f,
        .field_idx = 0,
        .minbit    = 320,
        .maxbit    = 335,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmltd_field_desc_t
bcm56780_a0_ina_2_4_13_lrd_field_demux_l3_ipv6_uc_route_overridet_ipv6u_upperf_0_src_field_desc_s0[6] = {
    {
        .field_id  = BCM56780_A0_INA_2_4_13_L3_IPV6_UC_ROUTE_OVERRIDEt_IPV6u_UPPERf,
        .field_idx = 0,
        .minbit    = 32,
        .maxbit    = 35,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = BCM56780_A0_INA_2_4_13_L3_IPV6_UC_ROUTE_OVERRIDEt_IPV6u_UPPERf,
        .field_idx = 0,
        .minbit    = 36,
        .maxbit    = 41,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = BCM56780_A0_INA_2_4_13_L3_IPV6_UC_ROUTE_OVERRIDEt_IPV6u_UPPERf,
        .field_idx = 0,
        .minbit    = 16,
        .maxbit    = 39,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = BCM56780_A0_INA_2_4_13_L3_IPV6_UC_ROUTE_OVERRIDEt_IPV6u_UPPERf,
        .field_idx = 0,
        .minbit    = 40,
        .maxbit    = 41,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = BCM56780_A0_INA_2_4_13_L3_IPV6_UC_ROUTE_OVERRIDEt_IPV6u_UPPERf,
        .field_idx = 0,
        .minbit    = 42,
        .maxbit    = 63,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = BCM56780_A0_INA_2_4_13_L3_IPV6_UC_ROUTE_OVERRIDEt_IPV6u_UPPERf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 15,
        .entry_idx = 0,
        .reserved  = 0
    },
};

static const bcmltd_field_desc_t
bcm56780_a0_ina_2_4_13_lrd_field_demux_l3_ipv6_uc_route_overridet_ipv6u_upperf_0_dst_field_desc[6] = {
    {
        .field_id  = KEY1f,
        .field_idx = 0,
        .minbit    = 302,
        .maxbit    = 305,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = KEY1f,
        .field_idx = 0,
        .minbit    = 306,
        .maxbit    = 311,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = KEY1f,
        .field_idx = 0,
        .minbit    = 236,
        .maxbit    = 259,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = KEY1f,
        .field_idx = 0,
        .minbit    = 260,
        .maxbit    = 261,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = KEY1f,
        .field_idx = 0,
        .minbit    = 266,
        .maxbit    = 287,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = KEY1f,
        .field_idx = 0,
        .minbit    = 220,
        .maxbit    = 235,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_route_overridet_ipv6u_lower_maskf_0_xfrm_handler_fwd_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_INA_2_4_13_LTA_BCMLTX_FIELD_DEMUX_L3_IPV6_UC_ROUTE_OVERRIDET_IPV6U_LOWER_MASKF_0_XFRM_HANDLER_FWD_S0_D0_ID,
    .src_fields = 6,
    .src = bcm56780_a0_ina_2_4_13_lrd_field_demux_l3_ipv6_uc_route_overridet_ipv6u_lower_maskf_0_src_field_desc_s0,
    .dst_fields = 6,
    .dst = bcm56780_a0_ina_2_4_13_lrd_field_demux_l3_ipv6_uc_route_overridet_ipv6u_lower_maskf_0_dst_field_desc,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_route_overridet_ipv6u_lower_maskf_0_xfrm_handler_rev_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_INA_2_4_13_LTA_BCMLTX_FIELD_DEMUX_L3_IPV6_UC_ROUTE_OVERRIDET_IPV6U_LOWER_MASKF_0_XFRM_HANDLER_REV_S0_D0_ID,
    .src_fields = 6,
    .src = bcm56780_a0_ina_2_4_13_lrd_field_demux_l3_ipv6_uc_route_overridet_ipv6u_lower_maskf_0_dst_field_desc,
    .dst_fields = 6,
    .dst = bcm56780_a0_ina_2_4_13_lrd_field_demux_l3_ipv6_uc_route_overridet_ipv6u_lower_maskf_0_src_field_desc_s0,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_route_overridet_ipv6u_lowerf_0_xfrm_handler_fwd_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_INA_2_4_13_LTA_BCMLTX_FIELD_DEMUX_L3_IPV6_UC_ROUTE_OVERRIDET_IPV6U_LOWERF_0_XFRM_HANDLER_FWD_S0_D0_ID,
    .src_fields = 6,
    .src = bcm56780_a0_ina_2_4_13_lrd_field_demux_l3_ipv6_uc_route_overridet_ipv6u_lowerf_0_src_field_desc_s0,
    .dst_fields = 6,
    .dst = bcm56780_a0_ina_2_4_13_lrd_field_demux_l3_ipv6_uc_route_overridet_ipv6u_lowerf_0_dst_field_desc,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_route_overridet_ipv6u_lowerf_0_xfrm_handler_rev_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_INA_2_4_13_LTA_BCMLTX_FIELD_DEMUX_L3_IPV6_UC_ROUTE_OVERRIDET_IPV6U_LOWERF_0_XFRM_HANDLER_REV_S0_D0_ID,
    .src_fields = 6,
    .src = bcm56780_a0_ina_2_4_13_lrd_field_demux_l3_ipv6_uc_route_overridet_ipv6u_lowerf_0_dst_field_desc,
    .dst_fields = 6,
    .dst = bcm56780_a0_ina_2_4_13_lrd_field_demux_l3_ipv6_uc_route_overridet_ipv6u_lowerf_0_src_field_desc_s0,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_route_overridet_ipv6u_upper_maskf_0_xfrm_handler_fwd_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_INA_2_4_13_LTA_BCMLTX_FIELD_DEMUX_L3_IPV6_UC_ROUTE_OVERRIDET_IPV6U_UPPER_MASKF_0_XFRM_HANDLER_FWD_S0_D0_ID,
    .src_fields = 6,
    .src = bcm56780_a0_ina_2_4_13_lrd_field_demux_l3_ipv6_uc_route_overridet_ipv6u_upper_maskf_0_src_field_desc_s0,
    .dst_fields = 6,
    .dst = bcm56780_a0_ina_2_4_13_lrd_field_demux_l3_ipv6_uc_route_overridet_ipv6u_upper_maskf_0_dst_field_desc,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_route_overridet_ipv6u_upper_maskf_0_xfrm_handler_rev_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_INA_2_4_13_LTA_BCMLTX_FIELD_DEMUX_L3_IPV6_UC_ROUTE_OVERRIDET_IPV6U_UPPER_MASKF_0_XFRM_HANDLER_REV_S0_D0_ID,
    .src_fields = 6,
    .src = bcm56780_a0_ina_2_4_13_lrd_field_demux_l3_ipv6_uc_route_overridet_ipv6u_upper_maskf_0_dst_field_desc,
    .dst_fields = 6,
    .dst = bcm56780_a0_ina_2_4_13_lrd_field_demux_l3_ipv6_uc_route_overridet_ipv6u_upper_maskf_0_src_field_desc_s0,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_route_overridet_ipv6u_upperf_0_xfrm_handler_fwd_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_INA_2_4_13_LTA_BCMLTX_FIELD_DEMUX_L3_IPV6_UC_ROUTE_OVERRIDET_IPV6U_UPPERF_0_XFRM_HANDLER_FWD_S0_D0_ID,
    .src_fields = 6,
    .src = bcm56780_a0_ina_2_4_13_lrd_field_demux_l3_ipv6_uc_route_overridet_ipv6u_upperf_0_src_field_desc_s0,
    .dst_fields = 6,
    .dst = bcm56780_a0_ina_2_4_13_lrd_field_demux_l3_ipv6_uc_route_overridet_ipv6u_upperf_0_dst_field_desc,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_route_overridet_ipv6u_upperf_0_xfrm_handler_rev_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_INA_2_4_13_LTA_BCMLTX_FIELD_DEMUX_L3_IPV6_UC_ROUTE_OVERRIDET_IPV6U_UPPERF_0_XFRM_HANDLER_REV_S0_D0_ID,
    .src_fields = 6,
    .src = bcm56780_a0_ina_2_4_13_lrd_field_demux_l3_ipv6_uc_route_overridet_ipv6u_upperf_0_dst_field_desc,
    .dst_fields = 6,
    .dst = bcm56780_a0_ina_2_4_13_lrd_field_demux_l3_ipv6_uc_route_overridet_ipv6u_upperf_0_src_field_desc_s0,
};


static const bcmlrd_map_entry_t bcm56780_a0_ina_2_4_13_lrd_l3_ipv6_uc_route_overridet_memdb_tcam_ifta80_mem0_0_mem0_1_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATA_ONLYf,
            .field_idx = 0,
            .minbit    = 575,
            .maxbit    = 579,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56780_A0_INA_2_4_13_L3_IPV6_UC_ROUTE_OVERRIDEt_DATA_TYPEf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 4,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 1 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATA_ONLYf,
            .field_idx = 0,
            .minbit    = 445,
            .maxbit    = 448,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56780_A0_INA_2_4_13_L3_IPV6_UC_ROUTE_OVERRIDEt_DESTINATION_TYPEf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 2 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATA_ONLYf,
            .field_idx = 0,
            .minbit    = 449,
            .maxbit    = 452,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56780_A0_INA_2_4_13_L3_IPV6_UC_ROUTE_OVERRIDEt_MISC_CTRL_1f,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 3 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATA_ONLYf,
            .field_idx = 0,
            .minbit    = 441,
            .maxbit    = 444,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56780_A0_INA_2_4_13_L3_IPV6_UC_ROUTE_OVERRIDEt_MISC_CTRL_0f,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 4 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATA_ONLYf,
            .field_idx = 0,
            .minbit    = 453,
            .maxbit    = 468,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56780_A0_INA_2_4_13_L3_IPV6_UC_ROUTE_OVERRIDEt_DESTINATIONf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 15,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 5 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = VALID0f,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 1,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 3,
            }
        },
    },
    { /* 6 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = VALID1f,
            .field_idx = 0,
            .minbit    = 210,
            .maxbit    = 211,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 3,
            }
        },
    },
    { /* 7 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = KEY0f,
            .field_idx = 0,
            .minbit    = 4,
            .maxbit    = 5,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 3,
            }
        },
    },
    { /* 8 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = MASK0f,
            .field_idx = 0,
            .minbit    = 104,
            .maxbit    = 105,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 3,
            }
        },
    },
    { /* 9 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = KEY0f,
            .field_idx = 0,
            .minbit    = 54,
            .maxbit    = 55,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 3,
            }
        },
    },
    { /* 10 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = MASK0f,
            .field_idx = 0,
            .minbit    = 154,
            .maxbit    = 155,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 3,
            }
        },
    },
    { /* 11 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = KEY1f,
            .field_idx = 0,
            .minbit    = 214,
            .maxbit    = 215,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 3,
            }
        },
    },
    { /* 12 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = MASK1f,
            .field_idx = 0,
            .minbit    = 314,
            .maxbit    = 315,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 3,
            }
        },
    },
    { /* 13 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = KEY1f,
            .field_idx = 0,
            .minbit    = 264,
            .maxbit    = 265,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 3,
            }
        },
    },
    { /* 14 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = MASK1f,
            .field_idx = 0,
            .minbit    = 364,
            .maxbit    = 365,
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
            .field_id  = KEY0f,
            .field_idx = 0,
            .minbit    = 2,
            .maxbit    = 3,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 1,
            }
        },
    },
    { /* 16 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = MASK0f,
            .field_idx = 0,
            .minbit    = 102,
            .maxbit    = 103,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 3,
            }
        },
    },
    { /* 17 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = KEY0f,
            .field_idx = 0,
            .minbit    = 52,
            .maxbit    = 53,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 1,
            }
        },
    },
    { /* 18 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = MASK0f,
            .field_idx = 0,
            .minbit    = 152,
            .maxbit    = 153,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 3,
            }
        },
    },
    { /* 19 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = KEY1f,
            .field_idx = 0,
            .minbit    = 212,
            .maxbit    = 213,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 1,
            }
        },
    },
    { /* 20 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = MASK1f,
            .field_idx = 0,
            .minbit    = 312,
            .maxbit    = 313,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 3,
            }
        },
    },
    { /* 21 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = KEY1f,
            .field_idx = 0,
            .minbit    = 262,
            .maxbit    = 263,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 1,
            }
        },
    },
    { /* 22 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = MASK1f,
            .field_idx = 0,
            .minbit    = 362,
            .maxbit    = 363,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 3,
            }
        },
    },
    { /* 23 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = DATA_ONLYf,
            .field_idx = 0,
            .minbit    = 569,
            .maxbit    = 570,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 0,
            }
        },
    },
    { /* 24 */
        .entry_type = BCMLRD_MAP_ENTRY_FWD_KEY_FIELD_XFRM_HANDLER,
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
                /* handler: bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_route_overridet_ipv6u_lower_maskf_0_xfrm_handler_fwd_s0_d0 */
                .desc = &bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_route_overridet_ipv6u_lower_maskf_0_xfrm_handler_fwd_s0_d0_desc,
            },
        },
    },
    { /* 25 */
        .entry_type = BCMLRD_MAP_ENTRY_REV_KEY_FIELD_XFRM_HANDLER,
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
                /* handler: bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_route_overridet_ipv6u_lower_maskf_0_xfrm_handler_rev_s0_d0 */
                .desc = &bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_route_overridet_ipv6u_lower_maskf_0_xfrm_handler_rev_s0_d0_desc,
            },
        },
    },
    { /* 26 */
        .entry_type = BCMLRD_MAP_ENTRY_FWD_KEY_FIELD_XFRM_HANDLER,
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
                /* handler: bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_route_overridet_ipv6u_lowerf_0_xfrm_handler_fwd_s0_d0 */
                .desc = &bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_route_overridet_ipv6u_lowerf_0_xfrm_handler_fwd_s0_d0_desc,
            },
        },
    },
    { /* 27 */
        .entry_type = BCMLRD_MAP_ENTRY_REV_KEY_FIELD_XFRM_HANDLER,
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
                /* handler: bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_route_overridet_ipv6u_lowerf_0_xfrm_handler_rev_s0_d0 */
                .desc = &bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_route_overridet_ipv6u_lowerf_0_xfrm_handler_rev_s0_d0_desc,
            },
        },
    },
    { /* 28 */
        .entry_type = BCMLRD_MAP_ENTRY_FWD_KEY_FIELD_XFRM_HANDLER,
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
                /* handler: bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_route_overridet_ipv6u_upper_maskf_0_xfrm_handler_fwd_s0_d0 */
                .desc = &bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_route_overridet_ipv6u_upper_maskf_0_xfrm_handler_fwd_s0_d0_desc,
            },
        },
    },
    { /* 29 */
        .entry_type = BCMLRD_MAP_ENTRY_REV_KEY_FIELD_XFRM_HANDLER,
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
                /* handler: bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_route_overridet_ipv6u_upper_maskf_0_xfrm_handler_rev_s0_d0 */
                .desc = &bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_route_overridet_ipv6u_upper_maskf_0_xfrm_handler_rev_s0_d0_desc,
            },
        },
    },
    { /* 30 */
        .entry_type = BCMLRD_MAP_ENTRY_FWD_KEY_FIELD_XFRM_HANDLER,
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
                /* handler: bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_route_overridet_ipv6u_upperf_0_xfrm_handler_fwd_s0_d0 */
                .desc = &bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_route_overridet_ipv6u_upperf_0_xfrm_handler_fwd_s0_d0_desc,
            },
        },
    },
    { /* 31 */
        .entry_type = BCMLRD_MAP_ENTRY_REV_KEY_FIELD_XFRM_HANDLER,
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
                /* handler: bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_route_overridet_ipv6u_upperf_0_xfrm_handler_rev_s0_d0 */
                .desc = &bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_route_overridet_ipv6u_upperf_0_xfrm_handler_rev_s0_d0_desc,
            },
        },
    },
};
static const bcmlrd_map_group_t bcm56780_a0_ina_2_4_13_lrd_l3_ipv6_uc_route_override_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = MEMDB_TCAM_IFTA80_MEM0_0_MEM0_1m,
        },
        .entries = 32,
        .entry = bcm56780_a0_ina_2_4_13_lrd_l3_ipv6_uc_route_overridet_memdb_tcam_ifta80_mem0_0_mem0_1_map_entry
    },
};
const bcmlrd_map_t bcm56780_a0_ina_2_4_13_lrd_l3_ipv6_uc_route_override_map = {
    .src_id = BCM56780_A0_INA_2_4_13_L3_IPV6_UC_ROUTE_OVERRIDEt,
    .field_data = &bcm56780_a0_ina_2_4_13_lrd_l3_ipv6_uc_route_override_map_field_data,
    .groups = 1,
    .group  = bcm56780_a0_ina_2_4_13_lrd_l3_ipv6_uc_route_override_map_group,
    .table_attr = &bcm56780_a0_ina_2_4_13_lrd_l3_ipv6_uc_route_overridet_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};
