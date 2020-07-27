/*
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#include <bcm/flexctr.h>

#include <bcm_int/ltsw/flexctr_int.h>
#include <bcm_int/ltsw/mbcm/flexctr.h>
#include <bcm_int/ltsw/flexctr.h>

#include <shr/shr_debug.h>
#include <bcmltd/chip/bcmltd_str.h>

/******************************************************************************
 * Local definitions
 */

#define BSL_LOG_MODULE BSL_LS_BCM_FLEXCTR

/*!
 * \brief Flex counter source database.
 */
static bcmint_flexctr_source_info_t bcm56780_a0_dna_2_4_13_ltsw_flexctr_source_db[] = {
    {
        bcmFlexctrSourceIngPort,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        ING_SYSTEM_PORT_TABLEs,
        BCMINT_FLEXCTR_ING_SYSTEM_PORT_TBL_BIT,
    },
    {
        bcmFlexctrSourceIngVlan,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        ING_VFI_TABLEs,
        BCMINT_FLEXCTR_ING_VFI_TBL_BIT,
    },
    {
        bcmFlexctrSourceEgrVlan,
        BCMI_LTSW_FLEXCTR_STAGE_EGR_CTR,
        EGR_VFIs,
        BCMINT_FLEXCTR_EGR_VFI_TBL_BIT,
    },
    {
        bcmFlexctrSourceIngVpn,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        ING_VFI_TABLEs,
        BCMINT_FLEXCTR_ING_VFI_TBL_BIT,
    },
    {
        bcmFlexctrSourceEgrVpn,
        BCMI_LTSW_FLEXCTR_STAGE_EGR_CTR,
        EGR_VFIs,
        BCMINT_FLEXCTR_EGR_VFI_TBL_BIT,
    },
    {
        bcmFlexctrSourceSvp,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        ING_SVP_TABLEs,
        BCMINT_FLEXCTR_ING_SVP_TBL_BIT,
    },
    {
        bcmFlexctrSourceDvp,
        BCMI_LTSW_FLEXCTR_STAGE_EGR_CTR,
        EGR_DVPs,
        BCMINT_FLEXCTR_EGR_DVP_TBL_BIT,
    },
    {
        bcmFlexctrSourceIngL3Intf,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        ING_L3_IIF_TABLEs,
        BCMINT_FLEXCTR_ING_L3_IIF_TBL_BIT,
    },
    {
        bcmFlexctrSourceIngVrf,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        ING_VRF_TABLEs,
        BCMINT_FLEXCTR_ING_VRF_TBL_BIT,
    },
    {
        bcmFlexctrSourceIfp,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        DT_IFP_ENTRYs,
        BCMINT_FLEXCTR_ING_IFP_TBL_BIT,
    },
    {
        bcmFlexctrSourceVfp,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        DT_VFP_ENTRYs,
        BCMINT_FLEXCTR_ING_VFP_TBL_BIT,
    },
    {
        bcmFlexctrSourceEfp,
        BCMI_LTSW_FLEXCTR_STAGE_EGR_CTR,
        DT_EFP_ENTRYs,
        BCMINT_FLEXCTR_EGR_EFP_TBL_BIT,
    },
    {
        bcmFlexctrSourceL3EgressOverlay,
        BCMI_LTSW_FLEXCTR_STAGE_EGR_CTR,
        EGR_L3_NEXT_HOP_1s,
        BCMINT_FLEXCTR_EGR_L3_NEXT_HOP_1_TBL_BIT,
    },
    {
        bcmFlexctrSourceL3EgressUnderlay,
        BCMI_LTSW_FLEXCTR_STAGE_EGR_CTR,
        EGR_L3_NEXT_HOP_2s,
        BCMINT_FLEXCTR_EGR_L3_NEXT_HOP_2_TBL_BIT,
    },
    {
        bcmFlexctrSourceExactMatch,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        DT_EM_FP_ENTRYs,
        BCMINT_FLEXCTR_ING_EXACTMATCH_TBL_BIT,
    },
    {
        bcmFlexctrSourceIpmc,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        L3_IPV4_MULTICAST_1_TABLEs,
        BCMINT_FLEXCTR_IPMC_TBL_BIT,
    },
    {
        bcmFlexctrSourceFieldDestination,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        DESTINATION_FP_TABLEs,
        BCMINT_FLEXCTR_DESTINATION_FP_TBL_BIT,
    },
    {
        bcmFlexctrSourceIngSamplePool,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        MIRROR_SFLOW_CONTROLs,
        BCMINT_FLEXCTR_ING_SAMPLE_POOL_TBL_BIT,
    },
    {
        bcmFlexctrSourceIngSampleCount,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        MIRROR_SFLOW_CONTROLs,
        BCMINT_FLEXCTR_ING_SAMPLE_COUNT_TBL_BIT,
    },
    {
        bcmFlexctrSourceFlexSamplePool,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        MIRROR_SFLOW_CONTROLs,
        BCMINT_FLEXCTR_FLEX_SAMPLE_POOL_TBL_BIT,
    },
    {
        bcmFlexctrSourceFlexSampleCount,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        MIRROR_SFLOW_CONTROLs,
        BCMINT_FLEXCTR_FLEX_SAMPLE_COUNT_TBL_BIT,
    },
    {
        bcmiFlexctrSourceL2Dst,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        L2_HOST_TABLEs,
        BCMINT_FLEXCTR_L2DST_TBL_BIT,
    },
    {
        bcmiFlexctrSourceL2Src,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        L2_HOST_TABLEs,
        BCMINT_FLEXCTR_L2SRC_TBL_BIT,
    },
    {
        bcmiFlexctrSourceEM_FT,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        DT_EM_FT_ENTRYs,
        BCMINT_FLEXCTR_EM_FT_TBL_BIT,
    },
    /* Always last one. */
    {
        bcmFlexctrSourceCount,
    },
};

/*!
 * \brief Flex counter object database.
 */
static bcmint_flexctr_object_info_t bcm56780_a0_dna_2_4_13_ltsw_flexctr_object_db[] = {
    /* CTR_EFLEX_OBJ_SRC_T */
    {
        bcmFlexctrObjectConstZero,
        BCMI_LTSW_FLEXCTR_STAGE_COUNT,
        FlexctrObjectTypeConst,
        USE_0s,
    },
    {
        bcmFlexctrObjectConstOne,
        BCMI_LTSW_FLEXCTR_STAGE_COUNT,
        FlexctrObjectTypeConst,
        USE_1s,
    },
    {
        bcmFlexctrObjectTriggerInterval,
        BCMI_LTSW_FLEXCTR_STAGE_COUNT,
        FlexctrObjectTypeTrigger,
        USE_TRIG_INTERVALs,
    },
    {
        bcmFlexctrObjectQuant,
        BCMI_LTSW_FLEXCTR_STAGE_COUNT,
        FlexctrObjectTypeQuant,
        USE_RANGE_CHK_1s,
    },
    /* bcm56780_a0_dna_2_4_13_CTR_ING_EFLEX_OBJ_BUS_T */
    {
        bcmFlexctrObjectIngSystemSource,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        SYSTEM_SOURCEs,
    },
    {
        bcmFlexctrObjectIngIfpOpaqueObj0,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        EM_FT_OPAQUE_OBJ_OR_IFP_OPAQUE_OBJs,
    },
    {
        bcmFlexctrObjectIngSvp,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        SVPs,
    },
    {
        bcmFlexctrObjectIngIngressPpPort,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        INGRESS_PP_PORTs,
    },
    {
        bcmFlexctrObjectIngL2Iif,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        L2_IIFs,
    },
    {
        bcmFlexctrObjectIngL3Iif,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        L3_IIFs,
    },
    {
        bcmFlexctrObjectIngEmFtHitIndex0,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        EM_FT_HIT_INDEX_LO_OR_IFP_OPAQUE_OBJ_0s,
    },
    {
        bcmFlexctrObjectIngEmFtHitIndex1,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        EM_FT_HIT_INDEX_LO_OR_IFP_OPAQUE_OBJ_1s,
    },
    {
        bcmFlexctrObjectIngNhopIndex1,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        NHOP_INDEX_1s,
    },
    {
        bcmFlexctrObjectIngL2DstLookupHitIndex0,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        L2_DST_LOOKUP_COMPACT_HIT_INDEX_0s,
    },
    {
        bcmFlexctrObjectIngL2DstLookupHitIndex1,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        L2_DST_LOOKUP_COMPACT_HIT_INDEX_1s,
    },
    {
        bcmFlexctrObjectIngL2SrcLookupHitIndex0,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        L2_SRC_LOOKUP_COMPACT_HIT_INDEX_0s,
    },
    {
        bcmFlexctrObjectIngL2SrcLookupHitIndex1,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        L2_SRC_LOOKUP_COMPACT_HIT_INDEX_1s,
    },
    {
        bcmFlexctrObjectIngNhop2OrEcmpGroupIndex1,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        NHOP_INDEX_2s,
    },
    {
        bcmFlexctrObjectIngVfi,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        VFIs,
    },
    {
        bcmFlexctrObjectIngVfpOpaqueObj0,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        VFP_VLAN_XLATE_OR_IFP_OPAQUE_OBJ_1s,
    },
    {
        bcmFlexctrObjectIngVfpOpaqueObj1,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        VFP_VLAN_XLATE_OR_IFP_OPAQUE_OBJ_0s,
    },
    {
        bcmFlexctrObjectIngDstFpFlexCtrIndex,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        DST_FP_FLEX_CTR_INDEXs,
    },
    {
        bcmFlexctrObjectIngL3DstClassId,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        L3_DST_CLASS_ID_OR_IFP_OPAQUE_OBJs,
    },
    {
        bcmFlexctrObjectIngIntPri,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        INT_PRIs,
    },
    {
        bcmFlexctrObjectIngIfpOpaqueObj2,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        IFP_OPAQUE_OBJ2s,
    },
    {
        bcmFlexctrObjectIngIngressQoSRemapValue,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        INGRESS_QOS_REMAP_VALUE_OR_IFP_OPAQUE_OBJs,
    },
    {
        bcmFlexctrObjectIngFlexDigestA0,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        FLEX_DIGEST_A0s,
    },
    {
        bcmFlexctrObjectIngFlexDigestA1,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        FLEX_DIGEST_A1s,
    },
    {
        bcmFlexctrObjectIngFlexDigestB0,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        FLEX_DIGEST_B0s,
    },
    {
        bcmFlexctrObjectIngFlexDigestB1,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        FLEX_DIGEST_B1s,
    },
    {
        bcmFlexctrObjectIngFlexDigestC0,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        FLEX_DIGEST_C0s,
    },
    {
        bcmFlexctrObjectIngFlexDigestC1,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        FLEX_DIGEST_C1s,
    },
    {
        bcmFlexctrObjectIngIpHdrTotalLength,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        IP_HDR_TOTAL_LENGTHs,
    },
    {
        bcmFlexctrObjectIngI2eClassId,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        I2E_CLASS_IDs,
    },
    {
        bcmFlexctrObjectIngVlanXlate,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        VFP_VLAN_XLATE_OR_IFP_OPAQUE_OBJ_1s,
    },
    {
        bcmFlexctrObjectIngIfpLagDgmActionSet,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        IFP_LAG_DGM_ACTION_SET_OR_IFP_OPAQUE_OBJs,
    },
    {
        bcmFlexctrObjectIngIfpSamplerIndex,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        IFP_SAMPLER_INDEX_OR_IFP_OPAQUE_OBJs,
    },
    {
        bcmFlexctrObjectIngEmFtOpaqueObj,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        EM_FT_OPAQUE_OBJ_OR_IFP_OPAQUE_OBJs,
    },
    {
        bcmFlexctrObjectIngIfpOpaqueObj1,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        IFP_OPAQUE_OBJ1s,
    },
    {
        bcmFlexctrObjectIngIfpOpaqueObj3,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        INGRESS_QOS_REMAP_VALUE_OR_IFP_OPAQUE_OBJs,
    },
    {
        bcmFlexctrObjectIngIfpOpaqueObj4,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        EM_FT_HIT_INDEX_LO_OR_IFP_OPAQUE_OBJ_0s,
    },
    {
        bcmFlexctrObjectIngIfpOpaqueObj5,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        EM_FT_HIT_INDEX_LO_OR_IFP_OPAQUE_OBJ_1s,
    },
    {
        bcmFlexctrObjectIngIfpOpaqueObj6,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        L3_DST_CLASS_ID_OR_IFP_OPAQUE_OBJs,
    },
    {
        bcmFlexctrObjectIngIfpOpaqueObj7,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        VFP_VLAN_XLATE_OR_IFP_OPAQUE_OBJ_1s,
    },
    {
        bcmFlexctrObjectIngIfpOpaqueObj8,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        IFP_LAG_DGM_ACTION_SET_OR_IFP_OPAQUE_OBJs,
    },
    {
        bcmFlexctrObjectIngIfpOpaqueObj9,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        IFP_SAMPLER_INDEX_OR_IFP_OPAQUE_OBJs,
    },
    {
        bcmFlexctrObjectIngEpNihHdrDropCode,
        BCMI_LTSW_FLEXCTR_STAGE_ING_CTR,
        FlexctrObjectTypeMenu,
        EP_NIH_HDR_DROP_CODEs,
    },
    /* EM_FT_COMPACT_HIT_INDEX_0s: (CHECKME) */
    /* EM_FT_COMPACT_HIT_INDEX_1s: (CHECKME) */

    /* bcm56780_a0_dna_2_4_13_CTR_EGR_EFLEX_OBJ_BUS_T */
    {
        bcmFlexctrObjectEgrL3NextHop2FlexCtrIndex,
        BCMI_LTSW_FLEXCTR_STAGE_EGR_CTR,
        FlexctrObjectTypeMenu,
        L3_NEXT_HOP_2_FLEX_CTR_INDEXs,
    },
    {
        bcmFlexctrObjectEgrL3NextHop1FlexCtrIndex,
        BCMI_LTSW_FLEXCTR_STAGE_EGR_CTR,
        FlexctrObjectTypeMenu,
        L3_NEXT_HOP_1_FLEX_CTR_INDEXs,
    },
    {
        bcmFlexctrObjectEgrVfi,
        BCMI_LTSW_FLEXCTR_STAGE_EGR_CTR,
        FlexctrObjectTypeMenu,
        VFIs,
    },
    {
        bcmFlexctrObjectEgrResidenceTimeShifted0,
        BCMI_LTSW_FLEXCTR_STAGE_EGR_CTR,
        FlexctrObjectTypeMenu,
        RESIDENCE_TIME_RAW_0s,
    },
    {
        bcmFlexctrObjectEgrResidenceTimeShifted1,
        BCMI_LTSW_FLEXCTR_STAGE_EGR_CTR,
        FlexctrObjectTypeMenu,
        RESIDENCE_TIME_RAW_1s,
    },
    {
        bcmFlexctrObjectEgrEcnMapInputVector,
        BCMI_LTSW_FLEXCTR_STAGE_EGR_CTR,
        FlexctrObjectTypeMenu,
        ECN_MAP_INPUT_VECTORs,
    },
    {
        bcmFlexctrObjectEgrPipePortQueueNum,
        BCMI_LTSW_FLEXCTR_STAGE_EGR_CTR,
        FlexctrObjectTypeMenu,
        PIPE_PORT_QUEUE_NUMs,
    },
    {
        bcmFlexctrObjectEgrEfpOpaqueObj1,
        BCMI_LTSW_FLEXCTR_STAGE_EGR_CTR,
        FlexctrObjectTypeMenu,
        EFP_OPAQUE_OBJ1s,
    },
    {
        bcmFlexctrObjectEgrEfpOpaqueObj2,
        BCMI_LTSW_FLEXCTR_STAGE_EGR_CTR,
        FlexctrObjectTypeMenu,
        EVXLT_FLEX_CTR_INDEXs,
    },
    {
        bcmFlexctrObjectEgrL3Oif1,
        BCMI_LTSW_FLEXCTR_STAGE_EGR_CTR,
        FlexctrObjectTypeMenu,
        L3_OIF_1s,
    },
    {
        bcmFlexctrObjectEgrL2Oif,
        BCMI_LTSW_FLEXCTR_STAGE_EGR_CTR,
        FlexctrObjectTypeMenu,
        L2_OIFs,
    },
    {
        bcmFlexctrObjectEgrDvp,
        BCMI_LTSW_FLEXCTR_STAGE_EGR_CTR,
        FlexctrObjectTypeMenu,
        DVPs,
    },
    {
        bcmFlexctrObjectEgrTxPpPort,
        BCMI_LTSW_FLEXCTR_STAGE_EGR_CTR,
        FlexctrObjectTypeMenu,
        TX_PP_PORTs,
    },
    {
        bcmFlexctrObjectEgrL3Oif216VfiClassid,
        BCMI_LTSW_FLEXCTR_STAGE_EGR_CTR,
        FlexctrObjectTypeMenu,
        L3_OIF_2_16_VFI_CLASSIDs,
    },
    {
        bcmFlexctrObjectEgrEvxltFlexCtrIndex,
        BCMI_LTSW_FLEXCTR_STAGE_EGR_CTR,
        FlexctrObjectTypeMenu,
        EVXLT_FLEX_CTR_INDEXs,
    },
    {
        bcmFlexctrObjectEgrEpRecircProfile,
        BCMI_LTSW_FLEXCTR_STAGE_EGR_CTR,
        FlexctrObjectTypeMenu,
        EP_RECIRC_CODEs,
    },
    /* Always last one. */
    {
        bcmFlexctrObjectCount,
    },
};

/******************************************************************************
 * Private functions
 */

static int
bcm56780_a0_dna_2_4_13_ltsw_flexctr_source_info_get(
    int unit,
    int source,
    bcmint_flexctr_source_info_t **source_info)
{
    bcmint_flexctr_source_info_t *source_db, *si;
    size_t i, count;

    count = COUNTOF(bcm56780_a0_dna_2_4_13_ltsw_flexctr_source_db);
    source_db = bcm56780_a0_dna_2_4_13_ltsw_flexctr_source_db;

    if ((source < 0 || source >= bcmFlexctrSourceCount) &&
        (source < bcmiFlexctrSourceStart || source >= bcmiFlexctrSourceEnd)) {
        LOG_ERROR(BSL_LOG_MODULE,
                  (BSL_META_U(unit, "Invalid flex counter source %d\n"),
                   source));

        *source_info = NULL;
        return SHR_E_PARAM;
    }

    for (i = 0; i < count; i++) {
        si = &(source_db[i]);
        if (source == si->source) {
            *source_info = si;
            break;
        }
    }

    /* Not found. */
    if (i >= count) {
        LOG_INFO(BSL_LOG_MODULE,
                 (BSL_META_U(unit, "Flex counter source %d not found\n"),
                  source));

        *source_info = NULL;
        return SHR_E_UNAVAIL;
    }

    return SHR_E_NONE;
}

static int
bcm56780_a0_dna_2_4_13_ltsw_flexctr_object_info_get(
    int unit,
    int object,
    bcmint_flexctr_object_info_t **object_info)
{
    bcmint_flexctr_object_info_t *object_db, *oi;
    size_t i, count;

    count = COUNTOF(bcm56780_a0_dna_2_4_13_ltsw_flexctr_object_db);
    object_db = bcm56780_a0_dna_2_4_13_ltsw_flexctr_object_db;

    if ((object < 0) || (object >= bcmFlexctrObjectCount)) {
        LOG_ERROR(BSL_LOG_MODULE,
                  (BSL_META_U(unit, "Invalid flex counter object %d\n"),
                   object));

        *object_info = NULL;
        return SHR_E_PARAM;
    }

    for (i = 0; i < count; i++) {
        oi = &(object_db[i]);
        if (object == oi->object) {
            *object_info = oi;
            break;
        }
    }

    /* Not found. */
    if (i >= count) {
        LOG_INFO(BSL_LOG_MODULE,
                 (BSL_META_U(unit, "Flex counter object %d not found\n"),
                  object));

        *object_info = NULL;
        return SHR_E_UNAVAIL;
    }

    return SHR_E_NONE;
}

/*!
 * \brief Flexctr driver function variable for bcm56780_a0_dna_2_4_13 device.
 */
static mbcm_ltsw_flexctr_drv_t bcm56780_a0_dna_2_4_13_ltsw_flexctr_drv = {
    .flexctr_source_info_get = bcm56780_a0_dna_2_4_13_ltsw_flexctr_source_info_get,
    .flexctr_object_info_get = bcm56780_a0_dna_2_4_13_ltsw_flexctr_object_info_get
};

/******************************************************************************
 * Public functions
 */

int
bcm56780_a0_dna_2_4_13_ltsw_flexctr_drv_attach(int unit)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_flexctr_drv_set(unit, &bcm56780_a0_dna_2_4_13_ltsw_flexctr_drv));

exit:
    SHR_FUNC_EXIT();
}

