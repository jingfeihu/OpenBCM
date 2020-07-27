

/*
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */
#ifndef _DNX_DATA_MAX_EGR_QUEUING_H_

#define _DNX_DATA_MAX_EGR_QUEUING_H_




#ifndef BCM_DNX_SUPPORT
#error "This file is for use by DNX (JR2) family only!"
#endif



#define DNX_DATA_MAX_EGR_QUEUING_PARAMS_NOF_BITS_IN_TCG_WEIGHT (8)


#define DNX_DATA_MAX_EGR_QUEUING_PARAMS_NOF_BITS_IN_NOF_Q_PAIRS_IN_PS (3)


#define DNX_DATA_MAX_EGR_QUEUING_PARAMS_NOF_Q_PAIRS_IN_PS (8)


#define DNX_DATA_MAX_EGR_QUEUING_PARAMS_NOF_BITS_IN_Q_PAIR (10)


#define DNX_DATA_MAX_EGR_QUEUING_PARAMS_NOF_Q_PAIRS (1024)


#define DNX_DATA_MAX_EGR_QUEUING_PARAMS_NOF_BITS_IN_NOF_PORT_SCHEDULERS (7)


#define DNX_DATA_MAX_EGR_QUEUING_PARAMS_NOF_PORT_SCHEDULERS (128)


#define DNX_DATA_MAX_EGR_QUEUING_PARAMS_NOF_BITS_IN_CHAN_ARB_CALENDAR_SIZE (10)


#define DNX_DATA_MAX_EGR_QUEUING_PARAMS_CHAN_ARB_CALENDAR_SIZE (1024)


#define DNX_DATA_MAX_EGR_QUEUING_PARAMS_NOF_BITS_IN_PORT_PRIO_CALENDAR_SIZE (10)


#define DNX_DATA_MAX_EGR_QUEUING_PARAMS_PORT_PRIO_CALENDAR_SIZE (1024)


#define DNX_DATA_MAX_EGR_QUEUING_PARAMS_NOF_BITS_IN_TCG_CALENDAR_SIZE (10)


#define DNX_DATA_MAX_EGR_QUEUING_PARAMS_TCG_CALENDAR_SIZE (1024)


#define DNX_DATA_MAX_EGR_QUEUING_PARAMS_NOF_BITS_IN_NOF_CALENDARS (6)


#define DNX_DATA_MAX_EGR_QUEUING_PARAMS_NOF_CALENDARS (64)


#define DNX_DATA_MAX_EGR_QUEUING_PARAMS_NOF_BITS_IN_EGR_INTERFACE (8)


#define DNX_DATA_MAX_EGR_QUEUING_PARAMS_NOF_BITS_MIRROR_PRIO (2)


#define DNX_DATA_MAX_EGR_QUEUING_PARAMS_NOF_BITS_IN_EGR_CH_INTERFACE (6)


#define DNX_DATA_MAX_EGR_QUEUING_PARAMS_NOF_EGR_INTERFACES (136)


#define DNX_DATA_MAX_EGR_QUEUING_PARAMS_NOF_EGR_CH_INTERFACES (56)


#define DNX_DATA_MAX_EGR_QUEUING_PARAMS_RESERVED_IF (255)


#define DNX_DATA_MAX_EGR_QUEUING_PARAMS_EGR_IF_CPU (0)


#define DNX_DATA_MAX_EGR_QUEUING_PARAMS_EGR_IF_SAT (1)


#define DNX_DATA_MAX_EGR_QUEUING_PARAMS_EGR_IF_OAM (2)


#define DNX_DATA_MAX_EGR_QUEUING_PARAMS_EGR_IF_OLP (3)


#define DNX_DATA_MAX_EGR_QUEUING_PARAMS_EGR_IF_RCY (4)


#define DNX_DATA_MAX_EGR_QUEUING_PARAMS_EGR_IF_TXI_RCY (6)


#define DNX_DATA_MAX_EGR_QUEUING_PARAMS_EGR_IF_EVENTOR (5)


#define DNX_DATA_MAX_EGR_QUEUING_PARAMS_EGR_IF_NIF_BASE (8)


#define DNX_DATA_MAX_EGR_QUEUING_PARAMS_CAL_RES (32)


#define DNX_DATA_MAX_EGR_QUEUING_PARAMS_CAL_RES_PACKET_MODE (256)


#define DNX_DATA_MAX_EGR_QUEUING_PARAMS_CAL_BURST_RES (256)


#define DNX_DATA_MAX_EGR_QUEUING_PARAMS_NOF_BITS_IN_CAL_CAL_LEN (8)


#define DNX_DATA_MAX_EGR_QUEUING_PARAMS_CAL_CAL_LEN (256)


#define DNX_DATA_MAX_EGR_QUEUING_PARAMS_NOF_BITS_IN_NIF_CAL_LEN_PQP (8)


#define DNX_DATA_MAX_EGR_QUEUING_PARAMS_NIF_CAL_LEN_PQP (256)


#define DNX_DATA_MAX_EGR_QUEUING_PARAMS_NOF_BITS_IN_NIF_CAL_LEN_FQP (8)


#define DNX_DATA_MAX_EGR_QUEUING_PARAMS_NIF_CAL_LEN_FQP (256)


#define DNX_DATA_MAX_EGR_QUEUING_PARAMS_NOF_BITS_IN_NOF_TCG (3)


#define DNX_DATA_MAX_EGR_QUEUING_PARAMS_NOF_TCG (8)


#define DNX_DATA_MAX_EGR_QUEUING_PARAMS_NOF_BITS_IN_NOF_EGR_Q_PRIO (3)


#define DNX_DATA_MAX_EGR_QUEUING_PARAMS_NOF_EGR_Q_PRIO (8)


#define DNX_DATA_MAX_EGR_QUEUING_PARAMS_TCG_MIN_PRIORITIES (4)


#define DNX_DATA_MAX_EGR_QUEUING_PARAMS_MAX_CREDIT_NUMBER (8388607)


#define DNX_DATA_MAX_EGR_QUEUING_PARAMS_MAX_GBPS_RATE_EGQ (2500)


#define DNX_DATA_MAX_EGR_QUEUING_PARAMS_TXQ_IREADY_TH (26)


#define DNX_DATA_MAX_EGR_QUEUING_PARAMS_TXQ_TDM_IREADY_TH (28)


#define DNX_DATA_MAX_EGR_QUEUING_PARAMS_INITIAL_PACKET_MODE (0)


#define DNX_DATA_MAX_EGR_QUEUING_PARAMS_SUB_CALENDAR_IFC (192)


#define DNX_DATA_MAX_EGR_QUEUING_PARAMS_TXQ_MAX_CREDITS (4294967295)


#define DNX_DATA_MAX_EGR_QUEUING_PARAMS_PQP_IFC_ALMOST_EMPTY_TH (22)


#define DNX_DATA_MAX_EGR_QUEUING_PARAMS_PQP_PORT_ALMOST_EMPTY_TH (22)


#define DNX_DATA_MAX_EGR_QUEUING_PARAMS_PQP_QUEUE_ALMOST_EMPTY_TH (14)


#define DNX_DATA_MAX_EGR_QUEUING_PARAMS_IF_MIN_GAP_PRIORITY_SIZE (9)


#define DNX_DATA_MAX_EGR_QUEUING_COMMON_MAX_VAL_NOF_BITS_IN_CALENDAR_SIZE (10)


#define DNX_DATA_MAX_EGR_QUEUING_COMMON_MAX_VAL_CALENDAR_SIZE (1024)


#define DNX_DATA_MAX_EGR_QUEUING_COMMON_MAX_VAL_SLOW_PORT_SPEED (12500)


#define DNX_DATA_MAX_EGR_QUEUING_COMMON_MAX_VAL_MUX_CALENDAR_RESOLUTION (12500)


#define DNX_DATA_MAX_EGR_QUEUING_RATE_MEASUREMENT_MAX_INTERVAL (131071)


#define DNX_DATA_MAX_EGR_QUEUING_RATE_MEASUREMENT_PROMILE_FACTOR (8000)


#define DNX_DATA_MAX_EGR_QUEUING_RATE_MEASUREMENT_MAX_GRANULARITY (7)


#define DNX_DATA_MAX_EGR_QUEUING_RATE_MEASUREMENT_MIN_BYTES_FOR_GRANULARITY (700)


#define DNX_DATA_MAX_EGR_QUEUING_PHANTOM_QUEUES_NOF_THRESHOLD_PROFILES (4)


#define DNX_DATA_MAX_EGR_QUEUING_PHANTOM_QUEUES_MAX_THRESHOLD (1000)




#endif 

