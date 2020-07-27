/***********************************************************************************
 *                                                                                 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

/***********************************************************************************
 ***********************************************************************************
 *                                                                                 *
 *  Revision      :   *
 *                                                                                 *
 *  Description   :  This file contains print messages for decoded bit fields      *
 *                   of structs.                                                   *
 */

/* THIS FILE IS GENERATED USING AN AUTOMATED SCRIPT... PLEASE DO NOT EDIT THIS FILE DIRECTLY !!! */


#include "blackhawk7_l8p2_decode_print.h"
#include "blackhawk7_l8p2_usr_includes.h"
#include "blackhawk7_l8p2_functions.h"

/************************************/
/* Bitfield print/decode functions  */
/************************************/

err_code_t blackhawk7_l8p2_decode_uc_sts_ext(srds_access_t *sa__, uint16_t bits) {
    if(bits & (0x01 << 0)) {
        EFUN_PRINTF(("uc_sts_ext BIT 0: dac4ck_cal_fail = 0x1\n"));
    }
    if(bits & (0x01 << 2)) {
        EFUN_PRINTF(("uc_sts_ext BIT 2: dac4ck_monotonicity_check = 0x1\n"));
    }
    if(bits & (0x0f << 3)) {
        EFUN_PRINTF(("uc_sts_ext BITS 3-6: clk_hoffset_check = 0x%02x\n", (bits & (0x0f << 3)) >> 3));
    }
    if(bits & (0x01 << 7)) {
        EFUN_PRINTF(("uc_sts_ext BIT 7: dac4ck_hi_residual_err = 0x1\n"));
    }
    if(bits & (0x03 << 8)) {
        EFUN_PRINTF(("uc_sts_ext BITS 8-9: pam4_eye_quality_check = 0x%02x\n", (bits & (0x03 << 8)) >> 8));
    }
    if(bits & (0x01 << 10)) {
        EFUN_PRINTF(("uc_sts_ext BIT 10: vcal_finish_at_minmax = 0x1\n"));
    }
    if(bits & (0x01 << 11)) {
        EFUN_PRINTF(("uc_sts_ext BIT 11: vcal_finish_above_threshold = 0x1\n"));
    }
    return (ERR_CODE_NONE);
}
err_code_t blackhawk7_l8p2_decode_uc_sts(srds_access_t *sa__, uint8_t bits) {
    if(bits & (0x01 << 0)) {
        EFUN_PRINTF(("uc_sts BIT 0: extended_sts = 0x1\n"));
    }
    if(bits & (0x01 << 1)) {
        EFUN_PRINTF(("uc_sts BIT 1: dc_offset_limit_fail = 0x1\n"));
    }
    if(bits & (0x01 << 2)) {
        EFUN_PRINTF(("uc_sts BIT 2: ate_test_done = 0x1\n"));
    }
    if(bits & (0x01 << 3)) {
        EFUN_PRINTF(("uc_sts BIT 3: nrz_only_config_fail = 0x1\n"));
    }
    if(bits & (0x01 << 4)) {
        EFUN_PRINTF(("uc_sts BIT 4: fixed_dfe_limit_fail = 0x1\n"));
    }
    if(bits & (0x01 << 5)) {
        EFUN_PRINTF(("uc_sts BIT 5: float_dfe_limit_fail = 0x1\n"));
    }
    if(bits & (0x01 << 6)) {
        EFUN_PRINTF(("uc_sts BIT 6: heye_margin_limit_fail = 0x1\n"));
    }
    if(bits & (0x01 << 7)) {
        EFUN_PRINTF(("uc_sts BIT 7: veye_margin_limit_fail = 0x1\n"));
    }
    return (ERR_CODE_NONE);
}
