/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from Logical Table mapping files.
 *
 * Tool: $SDK/INTERNAL/fltg/bin/fltg
 *
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */
#ifndef BCM56880_A0_LRD_PC_CONSTANTS_H
#define BCM56880_A0_LRD_PC_CONSTANTS_H
#ifndef DOXYGEN_IGNORE_AUTOGEN
/*!
 * Maximum value of lane index within a device.
 * PC_LANE_MAX = PC_LANE_SIZE - 1.
 */
#define BCM56880_A0_PC_LANE_MAX 303

/*!
 * Number of lanes within a device.
 * PC_LANE_SIZE = PC_PM_SIZE * PC_PM_CORE_SIZE * PC_PM_CORE_LANE_SIZE.
 */
#define BCM56880_A0_PC_LANE_SIZE 304

/*! Maximum number of port ability types supported. */
#define BCM56880_A0_PC_MAX_ABILITY_TYPES 2

/*!
 * Maximum value of physical port number.
 * PC_PORT_MAX = PC_PHYS_PORT_SIZE - 1.
 */
#define BCM56880_A0_PC_PHYS_PORT_MAX 264

/*! Number of physical ports. */
#define BCM56880_A0_PC_PHYS_PORT_SIZE 265

/*!
 * Maximum value of lane index within a PM core.
 * PC_PM_CORE_LANE_MAX = PC_PM_CORE_LANE_SIZE - 1.
 */
#define BCM56880_A0_PC_PM_CORE_LANE_MAX 7

/*! Number of lanes within a PM core. */
#define BCM56880_A0_PC_PM_CORE_LANE_SIZE 8

/*!
 * Maximum value of core index within a PM.
 * PC_PM_CORE_MAX = PC_PM_CORE_SIZE - 1.
 */
#define BCM56880_A0_PC_PM_CORE_MAX 0

/*! Number of cores within a PM. */
#define BCM56880_A0_PC_PM_CORE_SIZE 1

/*!
 * Maximum value of PM ID.
 * PC_PM_MAX = PC_PM_SIZE - 1.
 */
#define BCM56880_A0_PC_PM_MAX 37

/*!
 * Maximum value of physical port number within a PM.
 * PC_PM_PHYS_PORT_MAX = PC_PM_PHYS_PORT_SIZE - 1.
 */
#define BCM56880_A0_PC_PM_PHYS_PORT_MAX 7

/*! Number of physical ports within a PM. */
#define BCM56880_A0_PC_PM_PHYS_PORT_SIZE 8

/*! Number of PMs which includes the hardware PMs, CPU and loopback blocks. */
#define BCM56880_A0_PC_PM_SIZE 38

/*!
 * Maximum port ability table entries.
 * PORT_ABILITY_TBL_SIZE = (MAX_ABILITY_TYPES * PC_PORT_SIZE)
 */
#define BCM56880_A0_PC_PORT_ABILITY_TBL_SIZE 320

/*!
 * Maximum value of logical port number.
 * PC_PORT_MAX = PC_PORT_SIZE - 1.
 */
#define BCM56880_A0_PC_PORT_MAX 159

/*! Number of logical ports. */
#define BCM56880_A0_PC_PORT_SIZE 160

#endif /* DOXYGEN_IGNORE_AUTOGEN */
#endif /* BCM56880_A0_LRD_PC_CONSTANTS_H */
