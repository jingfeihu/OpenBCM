#ifndef BCMPKT_PSAMP_MIRROR_ON_DROP_2_T_DEFS_H
#define BCMPKT_PSAMP_MIRROR_ON_DROP_2_T_DEFS_H
/*****************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by xfc_map_parser
 * from the NPL output file(s) header.yml.
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

/*!
 * \name PSAMP_MIRROR_ON_DROP_2_T field IDs.
 * \anchor BCMPKT_PSAMP_MIRROR_ON_DROP_2_T_XXX
 */
#define BCMPKT_PSAMP_MIRROR_ON_DROP_2_T_USER_META_DATA        0
#define BCMPKT_PSAMP_MIRROR_ON_DROP_2_T_SAMPLED_LENGTH        1
#define BCMPKT_PSAMP_MIRROR_ON_DROP_2_T_VAR_LEN_INDICATOR     2
#define BCMPKT_PSAMP_MIRROR_ON_DROP_2_T_EGR_DROP_REASON       3
#define BCMPKT_PSAMP_MIRROR_ON_DROP_2_T_RESERVED_0            4
#define BCMPKT_PSAMP_MIRROR_ON_DROP_2_T_EP_COPY_SESSION_INDEX 5

#define BCMPKT_PSAMP_MIRROR_ON_DROP_2_T_FID_INVALID        -1
#define BCMPKT_PSAMP_MIRROR_ON_DROP_2_T_FID_COUNT          6
#define BCMPKT_PSAMP_MIRROR_ON_DROP_2_T_FID_START          0
#define BCMPKT_PSAMP_MIRROR_ON_DROP_2_T_FID_END            (BCMPKT_PSAMP_MIRROR_ON_DROP_2_T_FID_COUNT - 1)

#define BCMPKT_PSAMP_MIRROR_ON_DROP_2_T_I_SUPPORT          0
#define BCMPKT_PSAMP_MIRROR_ON_DROP_2_T_I_FID_COUNT        1

#define BCMPKT_PSAMP_MIRROR_ON_DROP_2_T_FIELD_NAME_MAP_INIT \
    {"USER_META_DATA", BCMPKT_PSAMP_MIRROR_ON_DROP_2_T_USER_META_DATA},\
    {"SAMPLED_LENGTH", BCMPKT_PSAMP_MIRROR_ON_DROP_2_T_SAMPLED_LENGTH},\
    {"VAR_LEN_INDICATOR", BCMPKT_PSAMP_MIRROR_ON_DROP_2_T_VAR_LEN_INDICATOR},\
    {"EGR_DROP_REASON", BCMPKT_PSAMP_MIRROR_ON_DROP_2_T_EGR_DROP_REASON},\
    {"RESERVED_0", BCMPKT_PSAMP_MIRROR_ON_DROP_2_T_RESERVED_0},\
    {"EP_COPY_SESSION_INDEX", BCMPKT_PSAMP_MIRROR_ON_DROP_2_T_EP_COPY_SESSION_INDEX},\
    {"psamp_mirror_on_drop_2_t fid count", BCMPKT_PSAMP_MIRROR_ON_DROP_2_T_FID_COUNT}

#endif /* BCMPKT_PSAMP_MIRROR_ON_DROP_2_T_DEFS_H */
