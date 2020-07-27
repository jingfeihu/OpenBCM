/**********************************************************************************
 **********************************************************************************
 *                                                                                *
 *  Revision      :  
 *                                                                                *
 *  Description   :  Defines and Enumerations required by Serdes ucode            *
 *                                                                                *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.                                                          *
 *  No portions of this material may be reproduced in any form without            *
 *  the written permission of:                                                    *
 *      Broadcom Corporation                                                      *
 *      5300 California Avenue                                                    *
 *      Irvine, CA  92617                                                         *
 *                                                                                *
 *  All information contained in this document is Broadcom Corporation            *
 *  company private proprietary, and trade secret.                                *
 */

/** @file srds_api_uc_common.h
 * Defines and Enumerations shared by Serdes API and Microcode
 */

#ifndef SRDS_API_UC_COMMON_PUBLIC_H
#define SRDS_API_UC_COMMON_PUBLIC_H

/* Max, min, and abs functions for SERDES code. */
/* Warning:  These can evaluate a_ or b_ twice. */
#define SRDS_MAX(a_, b_) (((a_)>(b_)) ? (a_) : (b_))
#define SRDS_MIN(a_, b_) (((a_)<(b_)) ? (a_) : (b_))
#define SRDS_ABS(a_)     (((a_)>=0)   ? (a_) : (-(a_)))

/*-----------------------------*/
/*  Generic Serdes items first */
/*-----------------------------*/

/** DSC_STATES Enum */
/** These state values must match the dsc_state bitfield in the register map. **/
/** If these values change, then consider changing the test functions below.  **/


/** DSC_STATES Enum **/
enum serdes_dsc_state_enum {
  SRDS_DSC_STATE_UNKNOWN        = 255,
  SRDS_DSC_STATE_INIT           = 0,
  SRDS_DSC_STATE_PAUSE          = 1,
  SRDS_DSC_STATE_SLICER_OFFSET  = 2,
  SRDS_DSC_STATE_ACQ_CDR        = 3,
  SRDS_DSC_STATE_CDR_SETTLE     = 4,
  SRDS_DSC_STATE_HW_TUNE        = 5,
  SRDS_DSC_STATE_UC_TUNE        = 6,
  SRDS_DSC_STATE_MEASURE        = 7,
  SRDS_DSC_STATE_DONE           = 8,
  SRDS_DSC_STATE_FREEZE         = 9,
  SRDS_DSC_STATE_FACQ_WAIT      = 10,
  SRDS_DSC_STATE_L0sL1_ACQ_CDR  = 11,
  SRDS_DSC_STATE_L0sL1_CDR_STTL = 12,
  SRDS_DSC_STATE_L0sL1_HW_TUNE  = 13,
  SRDS_DSC_STATE_FACQ_DONE      = 14,
  SRDS_DSC_STATE_DC_OFFSET      = 15,
  SRDS_DSC_STATE_ADJ_PI         = 16
};

/** PCIE_TUNING_STATES Enum **/
enum pcie_tuning_stage_enum {
  SRDS_TUNING_STAGE_LINKUP      = 0,
  SRDS_TUNING_STAGE_EVAL        = 1,
  SRDS_TUNING_STAGE_PHASE2      = 2,
  SRDS_TUNING_EQ_EVAL_DONE      = 3,
  SRDS_TUNING_EQ_REQ_DONE       = 4
};




/* Merlin specific DSC states */
#define DSC_STATE_SLICER_CAL 17

/** Is the state between DSC_STATE_RESET and DSC_STATE_WAIT_FOR_SIG? **\
\** For Merlin, DSC_STATE_SLICER_CAL is in that sequence.            **/
#define is_dsc_state_at_or_before_wait_for_sig(state) ((state <= DSC_STATE_WAIT_FOR_SIG) \
                                                       || (state == DSC_STATE_SLICER_CAL))

/** SERDES_PMD_UC_COMMANDS Enum */
enum srds_pmd_uc_cmd_enum {
  SRDS_CMD_NULL                =  0,
  SRDS_CMD_UC_CTRL             =  1,
  SRDS_CMD_HEYE_OFFSET         =  2,
  SRDS_CMD_VEYE_OFFSET         =  3,
  SRDS_CMD_UC_DBG              =  4,
  SRDS_CMD_DIAG_EN             =  5,
  SRDS_CMD_READ_UC_LANE_BYTE   =  6,
  SRDS_CMD_WRITE_UC_LANE_BYTE  =  7,
  SRDS_CMD_READ_UC_CORE_BYTE   =  8,
  SRDS_CMD_WRITE_UC_CORE_BYTE  =  9,
  SRDS_CMD_READ_UC_LANE_WORD   = 10,
  SRDS_CMD_WRITE_UC_LANE_WORD  = 11,
  SRDS_CMD_READ_UC_CORE_WORD   = 12,
  SRDS_CMD_WRITE_UC_CORE_WORD  = 13,
  SRDS_CMD_EVENT_LOG_CTRL      = 14,
  SRDS_CMD_EVENT_LOG_READ      = 15,
  SRDS_CMD_CAPTURE_BER_START   = 16,
  SRDS_CMD_READ_DIAG_DATA_BYTE = 17,
  SRDS_CMD_READ_DIAG_DATA_WORD = 18,
  SRDS_CMD_CAPTURE_BER_END     = 19,
  SRDS_CMD_CALC_CRC            = 20,
  SRDS_CMD_FREEZE_STEADY_STATE = 21,
  SRDS_CMD_TDT_EN              = 22,
  SRDS_CMD_UC_EMULATION        = 23,
  SRDS_CMD_CHAR_ISI            = 24
};

/** SERDES_UC_CTRL_COMMANDS Enum */
enum srds_pmd_uc_ctrl_cmd_enum {
  SRDS_CMD_UC_CTRL_STOP_GRACEFULLY   = 0,
  SRDS_CMD_UC_CTRL_STOP_IMMEDIATE    = 1,
  SRDS_CMD_UC_CTRL_RESUME            = 2
};

/** SERDES_UC_DIAG_COMMANDS Enum */
enum srds_pmd_uc_diag_cmd_enum {
  SRDS_CMD_UC_DIAG_DISABLE         = 3,
  SRDS_CMD_UC_DIAG_PASSIVE         = 1,
  SRDS_CMD_UC_DIAG_DENSITY         = 2,
  SRDS_CMD_UC_DIAG_START_VSCAN_EYE = 4,
  SRDS_CMD_UC_DIAG_START_HSCAN_EYE = 5,
  SRDS_CMD_UC_DIAG_GET_EYE_SAMPLE  = 6,
  SRDS_CMD_UC_DIAG_START_EYE_SLICE = 7
};

/** SERDES_EVENT_LOG_READ Enum */
enum srds_pmd_event_rd_cmd_enum {
  SRDS_CMD_EVENT_LOG_READ_START      = 0,
  SRDS_CMD_EVENT_LOG_READ_NEXT       = 1,
  SRDS_CMD_EVENT_LOG_READ_DONE       = 2
};

/** SERDES_UC_DBG_COMMANDS Enum */
enum srds_pmd_uc_dbg_cmd_enum {
  SRDS_CMD_UC_DBG_DIE_TEMP        = 0,
  SRDS_CMD_UC_DBG_TIMESTAMP       = 1,
  SRDS_CMD_UC_DBG_LANE_IDX        = 2,
  SRDS_CMD_UC_DBG_LANE_TIMER      = 3
};

/** SERDES_UC_EMULATION_COMMANDS Enum */
enum srds_pmd_uc_emulation_cmd_enum {
  SRDS_CMD_UC_EMULATION_START      = 0,
  SRDS_CMD_UC_EMULATION_STOP       = 1
};

/** Erroneous command completion codes to be placed in supp_info.           **
 ** Values 0-15 are allowed.  (See MAKE_UC_ERROR_SUPP_INFO below.)          **
 ** Please update serdes_INTERNAL_print_uc_dsc_error() in                   **
 ** serdes_api_internal.c when adding to or removing from this list.        **/
enum srds_pmd_uc_error_enum {
  SRDS_UC_CMD_ERROR_INVALID_COMMAND              = 0x1,
  SRDS_UC_CMD_ERROR_BUSY                         = 0x5,
  SRDS_UC_CMD_ERROR_GET_EYE_SAMPLE_ERROR         = 0x6,
  SRDS_UC_CMD_ERROR_PRBS_NOT_LOCKED              = 0x8,
  SRDS_UC_CMD_ERROR_COMMAND_IN_PROGRESS          = 0xC,
  SRDS_UC_CMD_ERROR_INVALID_MODE                 = 0xD
};

/** Macros for translating srds_pmd_uc_error_enum error codes    **\
\** into the supp_info field that is read by software, and back. **/
#define MAKE_UC_ERROR_SUPP_INFO(error_code, other_info) ((((error_code) & 0xF) << 4) | ((other_info) & 0xF))
#define SUPP_INFO_TO_ERROR_CODE(supp_info) (((supp_info) >> 4) & 0xF)
#define SUPP_INFO_TO_OTHER_INFO(supp_info) ((supp_info) & 0xF)

/** supp_info values used with successful command completion **/
enum srds_pmd_uc_success_enum {
  SRDS_UC_CMD_SUCCESS               = 0x00,
  SRDS_UC_CMD_SUCCESS_READ_COMPLETE = 0x01
};

/** Media type Enum */
enum srds_media_type_enum {
  SRDS_MEDIA_TYPE_PCB_TRACE_BACKPLANE = 0,
  SRDS_MEDIA_TYPE_COPPER_CABLE        = 1,
  SRDS_MEDIA_TYPE_OPTICS              = 2,
  SRDS_MEDIA_TYPE_OPTICS_ZR           = 3
};

/** DIAG_BER mode settings **/
enum srds_diag_ber_mode_enum {
    SRDS_DIAG_BER_POS  = 0,
    SRDS_DIAG_BER_NEG  = 1,
    SRDS_DIAG_BER_VERT = 0,
    SRDS_DIAG_BER_HORZ = 1<<1,
    SRDS_DIAG_BER_PASS = 0,
    SRDS_DIAG_BER_INTR = 1<<2,
    SRDS_DIAG_BER_P1_NARROW = 1<<3,
    SRDS_DIAG_BER_P1_WIDE = 0,
    SRDS_DIAG_BER_FAST = 1<<6

};


typedef uint8_t float8_t;

/*------------------------------*/
/** Serdes Event Code Structure */
/*------------------------------*/

/** Core User Control Event Log Level **/
#define USR_CTRL_CORE_EVENT_LOG_UPTO_FULL (0xFF)

typedef uint8_t event_source_t;
typedef uint8_t event_code_t;
typedef uint8_t log_level_t;

/** Generate an event source value */
#define EVENT_SOURCE_CORE              (15)
#define EVENT_SOURCE_LANE(lane_num_)   (lane_num_)
#define EVENT_SOURCE_MICRO(micro_num_) (micro_num_ + 8)

/** Test the type of event source value */
#define IS_EVENT_SOURCE_CORE(source_)  ((source_) == 15)
#define IS_EVENT_SOURCE_LANE(source_)  ((source_) < 8)
#define IS_EVENT_SOURCE_MICRO(source_) (((source_) >=8) && ((source_) < 15))

#define GET_EVENT_SOURCE_LANE(source_)  (source_)
#define GET_EVENT_SOURCE_MICRO(source_) ((source_) - 8)

/** Event Log Code Enum */
enum srds_event_code_enum {
    SRDS_EVENT_CODE_UNKNOWN = 0,
    SRDS_EVENT_CODE_ENTRY_TO_DSC_RESET,
    SRDS_EVENT_CODE_RELEASE_USER_RESET,
    SRDS_EVENT_CODE_EXIT_FROM_DSC_RESET,
    SRDS_EVENT_CODE_ENTRY_TO_CORE_RESET,
    SRDS_EVENT_CODE_RELEASE_USER_CORE_RESET,
    SRDS_EVENT_CODE_ACTIVE_RESTART_CONDITION,
    SRDS_EVENT_CODE_EXIT_FROM_RESTART,
    SRDS_EVENT_CODE_WRITE_TR_COARSE_LOCK,
    SRDS_EVENT_CODE_CL72_READY_FOR_COMMAND,
    SRDS_EVENT_CODE_EACH_WRITE_TO_CL72_TX_CHANGE_REQUEST,
    SRDS_EVENT_CODE_FRAME_LOCK,
    SRDS_EVENT_CODE_LOCAL_RX_TRAINED,
    SRDS_EVENT_CODE_DSC_LOCK,
    SRDS_EVENT_CODE_FIRST_RX_PMD_LOCK,
    SRDS_EVENT_CODE_PMD_RESTART_FROM_CL72_CMD_INTF_TIMEOUT,
    SRDS_EVENT_CODE_LP_RX_READY,
    SRDS_EVENT_CODE_STOP_EVENT_LOG,
    SRDS_EVENT_CODE_GENERAL_EVENT_0,
    SRDS_EVENT_CODE_GENERAL_EVENT_1,
    SRDS_EVENT_CODE_GENERAL_EVENT_2,
    SRDS_EVENT_CODE_ERROR_EVENT,
    SRDS_EVENT_CODE_NUM_TIMESTAMP_WRAPAROUND_MAXOUT,
    SRDS_EVENT_CODE_RESTART_PMD_ON_CDR_LOCK_LOST,
    SRDS_EVENT_CODE_SM_STATUS_RESTART,
    SRDS_EVENT_CODE_CORE_PROGRAMMING,
    SRDS_EVENT_CODE_LANE_PROGRAMMING,
    SRDS_EVENT_CODE_RESTART_PMD_ON_CLOSE_EYE,
    SRDS_EVENT_CODE_RESTART_PMD_ON_DFE_TAP_CONFIG,
    SRDS_EVENT_CODE_CL72_AUTO_POLARITY_CHANGE,
    SRDS_EVENT_CODE_RESTART_FROM_CL72_MAX_TIMEOUT,
    SRDS_EVENT_CODE_CL72_LOCAL_TX_CHANGED,
    SRDS_EVENT_CODE_FIRST_WRITE_TO_CL72_TX_CHANGE_REQUEST,
    SRDS_EVENT_CODE_FRAME_UNLOCK,
    SRDS_EVENT_CODE_SIGNAL_DETECTED,
    SRDS_EVENT_CODE_ENTRY_TO_CORE_PLL1_RESET,
    SRDS_EVENT_CODE_RELEASE_USER_CORE_PLL1_RESET,
    SRDS_EVENT_CODE_ACTIVE_WAIT_FOR_SIG,
    SRDS_EVENT_CODE_EXIT_FROM_WAIT_FOR_SIG,
    SRDS_EVENT_CODE_FLR_ACTIVATED,
    SRDS_EVENT_CODE_FLR_SIGDET_DEASSERT,
    SRDS_EVENT_CODE_FLR_SIGDET_ASSERT,
    SRDS_EVENT_CODE_FLR_DEACTIVATED_DUE_TO_TIMEOUT,
    SRDS_EVENT_CODE_START_VGA_TUNING,
    SRDS_EVENT_CODE_START_DFE_TUNING,
    SRDS_EVENT_CODE_START_PF_TUNING,
    SRDS_EVENT_CODE_START_EYE_MEAS_TUNING,
    SRDS_EVENT_CODE_EXIT_FROM_DSC_INIT,
    SRDS_EVENT_CODE_ENTRY_TO_DSC_INIT,
    SRDS_EVENT_CODE_DSC_PAUSE,
    SRDS_EVENT_CODE_DSC_UC_TUNE,
    SRDS_EVENT_CODE_DSC_DONE,
    SRDS_EVENT_CODE_CL136_READY_FOR_COMMAND,

    /* !!! add new event code above this line !!! */
    SRDS_EVENT_CODE_MAX,
    SRDS_EVENT_CODE_TIMESTAMP_WRAP_AROUND = 255
};

/** uC Event Error Enum */
enum srds_event_err_code_enum {
    SRDS_GENERIC_UC_ERROR = 0,
    SRDS_INVALID_REENTRY_ID,
    SRDS_DSC_CONFIG_INVALID_REENTRY_ID,
    SRDS_INVALID_OTP_CONFIG,
    SRDS_INVALID_CORE_TEMP_IDX,
    SRDS_INVALID_CL72_CMD
};


/*****************************************************************************\
 * Information table found in code RAM                                       *
 *                                                                           *
 * It starts at this location:                                               *
\*                                                                           */
#define INFO_TABLE_RAM_BASE  (0x100)
/*                                                                           *\
 * The table is signified by this signature, "Inf5", whose last character    *
 * is the version number.                                                    *
\*                                                                           */
#define INFO_TABLE_SIGNATURE (0x35666E49)
/*                                                                           *\
 * The table starts with the signature and various version fields at these   *
 * offsets:                                                                  *
\*                                                                           */
#define INFO_TABLE_OFFS_SIGNATURE            (0x00)
#define INFO_TABLE_OFFS_UC_VERSION           (0x04)
/*                                                                           *\
 * The table includes the trace and lane memory size:                        *
 *     (upper 16 bits is lane size; lower 16 bits is trace size)             *
\*                                                                           */
#define INFO_TABLE_OFFS_TRACE_LANE_MEM_SIZE  (0x08)
/*                                                                           *\
 * The table includes other sizes:                                           *
 *     Byte 0:  lane count                                                   *
 *     Byte 1:  core size, in bytes                                          *
 *     Byte 2:  icore size, in bytes                                         *
 *     Byte 3:  options:                                                     *
 *              Bit 0:  0 if trace memory is written with ascending          *
 *                           addresses.                                      *
 *                      1 if trace memory is written with descending         *
 *                           addresses.                                      *
\*                                                                           */
#define INFO_TABLE_OFFS_OTHER_SIZE           (0x0C)
/*                                                                           *\
 * The table includes RAM locations of various tables:                       *
\*                                                                           */
#define INFO_TABLE_OFFS_TRACE_MEM_PTR        (0x10)
#define INFO_TABLE_OFFS_CORE_MEM_PTR         (0x14)
#define INFO_TABLE_OFFS_ICORE_MEM_PTR        (0x18)
#define INFO_TABLE_OFFS_LANE_MEM_PTR         (0x1C)
#define INFO_TABLE_OFFS_MICRO_MEM_PTR        (0x64)
/*                                                                           *\
 * The table includes other sizes:                                           *
 *     Byte 0:  microcontroller count                                        *
\*                                                                           */
#define INFO_TABLE_OFFS_OTHER_SIZE_2         (0x60)


/* The offset just past the end of the table */
#define INFO_TABLE_END                       (0x70)

/*****************************************************************************/

#endif/*SRDS_API_UC_COMMON_PUBLIC_H*/
