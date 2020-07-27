/*****************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by xfc_map_parser
 * from the NPL output file(s) header.yml
 * for device bcm56880_a0 and variant dna_4_6_6.
 * Edits to this file will be lost when it is regenerated.
 *
 * 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 * All Rights Reserved.$
 *
 * Tool Path: $SDK/INTERNAL/fltg/xfc_map_parser
 */

#include <sal/sal_types.h>
#include <shr/shr_error.h>
#include <bsl/bsl.h>
#include <bcmpkt/flexhdr/bcmpkt_cpu_composites_1_t.h>
#include <bcmpkt/flexhdr/bcmpkt_cpu_composites_1_t_internal.h>

#define MASK(_bn) (((uint32_t)0x1<<(_bn))-1)
#define WORD_FIELD_GET(_d,_s,_l) (((_d) >> (_s)) & MASK(_l))
#define WORD_FIELD_SET(_d,_s,_l,_v) (_d)=(((_d) & ~(MASK(_l) << (_s))) | (((_v) & MASK(_l)) << (_s)))
#define WORD_FIELD_MASK(_d,_s,_l) (_d)=((_d) | (MASK(_l) << (_s)))

static uint32_t bcmpkt_cpu_composites_1_t_dma_cont7_get(uint32_t *data) {
    uint32_t val;

    val = SHR_E_PARAM;
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Get field BCMPKT_CPU_COMPOSITES_1_T_DMA_CONT7 with value %u on device BCM56880_A0_DNA_4_6_6\n"), val));

    return val;
}

static void bcmpkt_cpu_composites_1_t_dma_cont7_set(uint32_t *data, uint32_t val) {
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Set field BCMPKT_CPU_COMPOSITES_1_T_DMA_CONT7 with value %u on device BCM56880_A0_DNA_4_6_6\n"), val));

    LOG_ERROR(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Invalid param\n")));
}

static uint32_t bcmpkt_cpu_composites_1_t_dma_cont8_get(uint32_t *data) {
    uint32_t val;

    val = SHR_E_PARAM;
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Get field BCMPKT_CPU_COMPOSITES_1_T_DMA_CONT8 with value %u on device BCM56880_A0_DNA_4_6_6\n"), val));

    return val;
}

static void bcmpkt_cpu_composites_1_t_dma_cont8_set(uint32_t *data, uint32_t val) {
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Set field BCMPKT_CPU_COMPOSITES_1_T_DMA_CONT8 with value %u on device BCM56880_A0_DNA_4_6_6\n"), val));

    LOG_ERROR(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Invalid param\n")));
}

static uint32_t bcmpkt_cpu_composites_1_t_dma_cont9_get(uint32_t *data) {
    uint32_t val;

    val = SHR_E_PARAM;
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Get field BCMPKT_CPU_COMPOSITES_1_T_DMA_CONT9 with value %u on device BCM56880_A0_DNA_4_6_6\n"), val));

    return val;
}

static void bcmpkt_cpu_composites_1_t_dma_cont9_set(uint32_t *data, uint32_t val) {
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Set field BCMPKT_CPU_COMPOSITES_1_T_DMA_CONT9 with value %u on device BCM56880_A0_DNA_4_6_6\n"), val));

    LOG_ERROR(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Invalid param\n")));
}

static uint32_t bcmpkt_cpu_composites_1_t_dma_cont10_get(uint32_t *data) {
    uint32_t val;

    val = SHR_E_PARAM;
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Get field BCMPKT_CPU_COMPOSITES_1_T_DMA_CONT10 with value %u on device BCM56880_A0_DNA_4_6_6\n"), val));

    return val;
}

static void bcmpkt_cpu_composites_1_t_dma_cont10_set(uint32_t *data, uint32_t val) {
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Set field BCMPKT_CPU_COMPOSITES_1_T_DMA_CONT10 with value %u on device BCM56880_A0_DNA_4_6_6\n"), val));

    LOG_ERROR(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Invalid param\n")));
}

static uint32_t bcmpkt_cpu_composites_1_t_dma_cont11_get(uint32_t *data) {
    uint32_t val;

    val = SHR_E_PARAM;
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Get field BCMPKT_CPU_COMPOSITES_1_T_DMA_CONT11 with value %u on device BCM56880_A0_DNA_4_6_6\n"), val));

    return val;
}

static void bcmpkt_cpu_composites_1_t_dma_cont11_set(uint32_t *data, uint32_t val) {
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Set field BCMPKT_CPU_COMPOSITES_1_T_DMA_CONT11 with value %u on device BCM56880_A0_DNA_4_6_6\n"), val));

    LOG_ERROR(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Invalid param\n")));
}

static uint32_t bcmpkt_cpu_composites_1_t_dma_cont12_get(uint32_t *data) {
    uint32_t val;

    val = SHR_E_PARAM;
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Get field BCMPKT_CPU_COMPOSITES_1_T_DMA_CONT12 with value %u on device BCM56880_A0_DNA_4_6_6\n"), val));

    return val;
}

static void bcmpkt_cpu_composites_1_t_dma_cont12_set(uint32_t *data, uint32_t val) {
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Set field BCMPKT_CPU_COMPOSITES_1_T_DMA_CONT12 with value %u on device BCM56880_A0_DNA_4_6_6\n"), val));

    LOG_ERROR(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Invalid param\n")));
}

static uint32_t bcmpkt_cpu_composites_1_t_dma_cont13_get(uint32_t *data) {
    uint32_t val;

    val = SHR_E_PARAM;
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Get field BCMPKT_CPU_COMPOSITES_1_T_DMA_CONT13 with value %u on device BCM56880_A0_DNA_4_6_6\n"), val));

    return val;
}

static void bcmpkt_cpu_composites_1_t_dma_cont13_set(uint32_t *data, uint32_t val) {
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Set field BCMPKT_CPU_COMPOSITES_1_T_DMA_CONT13 with value %u on device BCM56880_A0_DNA_4_6_6\n"), val));

    LOG_ERROR(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Invalid param\n")));
}

static uint32_t bcmpkt_cpu_composites_1_t_dma_cont15_get(uint32_t *data) {
    uint32_t val;

    val = SHR_E_PARAM;
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Get field BCMPKT_CPU_COMPOSITES_1_T_DMA_CONT15 with value %u on device BCM56880_A0_DNA_4_6_6\n"), val));

    return val;
}

static void bcmpkt_cpu_composites_1_t_dma_cont15_set(uint32_t *data, uint32_t val) {
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Set field BCMPKT_CPU_COMPOSITES_1_T_DMA_CONT15 with value %u on device BCM56880_A0_DNA_4_6_6\n"), val));

    LOG_ERROR(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Invalid param\n")));
}

static uint32_t bcmpkt_cpu_composites_1_t_dma_cont16_get(uint32_t *data) {
    uint32_t val;

    val = SHR_E_PARAM;
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Get field BCMPKT_CPU_COMPOSITES_1_T_DMA_CONT16 with value %u on device BCM56880_A0_DNA_4_6_6\n"), val));

    return val;
}

static void bcmpkt_cpu_composites_1_t_dma_cont16_set(uint32_t *data, uint32_t val) {
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Set field BCMPKT_CPU_COMPOSITES_1_T_DMA_CONT16 with value %u on device BCM56880_A0_DNA_4_6_6\n"), val));

    LOG_ERROR(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Invalid param\n")));
}

static uint32_t bcmpkt_cpu_composites_1_t_dma_cont17_get(uint32_t *data) {
    uint32_t val;

    val = SHR_E_PARAM;
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Get field BCMPKT_CPU_COMPOSITES_1_T_DMA_CONT17 with value %u on device BCM56880_A0_DNA_4_6_6\n"), val));

    return val;
}

static void bcmpkt_cpu_composites_1_t_dma_cont17_set(uint32_t *data, uint32_t val) {
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Set field BCMPKT_CPU_COMPOSITES_1_T_DMA_CONT17 with value %u on device BCM56880_A0_DNA_4_6_6\n"), val));

    LOG_ERROR(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Invalid param\n")));
}

static uint32_t bcmpkt_cpu_composites_1_t_dma_cont14_get(uint32_t *data) {
    uint32_t val;

    val = SHR_E_PARAM;
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Get field BCMPKT_CPU_COMPOSITES_1_T_DMA_CONT14 with value %u on device BCM56880_A0_DNA_4_6_6\n"), val));

    return val;
}

static void bcmpkt_cpu_composites_1_t_dma_cont14_set(uint32_t *data, uint32_t val) {
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Set field BCMPKT_CPU_COMPOSITES_1_T_DMA_CONT14 with value %u on device BCM56880_A0_DNA_4_6_6\n"), val));

    LOG_ERROR(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Invalid param\n")));
}

static uint32_t bcmpkt_cpu_composites_1_t_i_support_get(uint32_t *data, uint32_t **addr) {
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Get field BCMPKT_CPU_COMPOSITES_1_T_I_SUPPORT on device BCM56880_A0_DNA_4_6_6\n")));
    return true;
}

const bcmpkt_cpu_composites_1_t_fget_t bcm56880_a0_dna_4_6_6_cpu_composites_1_t_fget = {
    {
        bcmpkt_cpu_composites_1_t_dma_cont7_get,
        bcmpkt_cpu_composites_1_t_dma_cont8_get,
        bcmpkt_cpu_composites_1_t_dma_cont9_get,
        bcmpkt_cpu_composites_1_t_dma_cont10_get,
        bcmpkt_cpu_composites_1_t_dma_cont11_get,
        bcmpkt_cpu_composites_1_t_dma_cont12_get,
        bcmpkt_cpu_composites_1_t_dma_cont13_get,
        bcmpkt_cpu_composites_1_t_dma_cont15_get,
        bcmpkt_cpu_composites_1_t_dma_cont16_get,
        bcmpkt_cpu_composites_1_t_dma_cont17_get,
        bcmpkt_cpu_composites_1_t_dma_cont14_get,
    }
};

const bcmpkt_cpu_composites_1_t_fset_t bcm56880_a0_dna_4_6_6_cpu_composites_1_t_fset = {
    {
        bcmpkt_cpu_composites_1_t_dma_cont7_set,
        bcmpkt_cpu_composites_1_t_dma_cont8_set,
        bcmpkt_cpu_composites_1_t_dma_cont9_set,
        bcmpkt_cpu_composites_1_t_dma_cont10_set,
        bcmpkt_cpu_composites_1_t_dma_cont11_set,
        bcmpkt_cpu_composites_1_t_dma_cont12_set,
        bcmpkt_cpu_composites_1_t_dma_cont13_set,
        bcmpkt_cpu_composites_1_t_dma_cont15_set,
        bcmpkt_cpu_composites_1_t_dma_cont16_set,
        bcmpkt_cpu_composites_1_t_dma_cont17_set,
        bcmpkt_cpu_composites_1_t_dma_cont14_set,
    }
};


const bcmpkt_cpu_composites_1_t_figet_t bcm56880_a0_dna_4_6_6_cpu_composites_1_t_figet = {
    {
        bcmpkt_cpu_composites_1_t_i_support_get
    }
};

static shr_enum_map_t bcm56880_a0_dna_4_6_6_cpu_composites_1_t_view_types[] = {
    {NULL, -1},
};

/* -2: unsupported, -1: global, others: view's value */
static int bcm56880_a0_dna_4_6_6_cpu_composites_1_t_view_infos[BCMPKT_CPU_COMPOSITES_1_T_FID_COUNT] = {
    -1,
    -1,
    -1,
    -1,
    -1,
    -1,
    -1,
    -1,
    -1,
    -1,
    -1,
};

void bcm56880_a0_dna_4_6_6_cpu_composites_1_t_view_info_get(bcmpkt_pmd_view_info_t *info)
{
    info->view_infos = bcm56880_a0_dna_4_6_6_cpu_composites_1_t_view_infos;
    info->view_types = bcm56880_a0_dna_4_6_6_cpu_composites_1_t_view_types;
    info->view_type_get = NULL;
}
