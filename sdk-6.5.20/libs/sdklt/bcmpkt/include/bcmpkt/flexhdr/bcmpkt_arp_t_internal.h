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

/*! \file bcmpkt_arp_t_internal.h
 *
 * arp_t access interface(Internal use only).
 */

#ifndef BCMPKT_ARP_T_INTERNAL_H
#define BCMPKT_ARP_T_INTERNAL_H

#include <shr/shr_types.h>
#include <bcmpkt/bcmpkt_internal.h>
#include <bcmpkt/flexhdr/bcmpkt_arp_t_defs.h>

/*!
 * Array of arp_t field get functions for a particular device
 * type.
 */
typedef struct bcmpkt_arp_t_fget_s {
    /*! Array of field get functions. */
    bcmpkt_field_get_f fget[BCMPKT_ARP_T_FID_COUNT];
} bcmpkt_arp_t_fget_t;

/*!
 * Array of arp_t field set functions for a particular device
 * type. These functions are used for internally configuring packet
 * filter.
 */
typedef struct bcmpkt_arp_t_fset_s {
    /*! Array of field set functions. */
    bcmpkt_field_set_f fset[BCMPKT_ARP_T_FID_COUNT];
} bcmpkt_arp_t_fset_t;

/*!
 * Array of arp_t field address and length getter functions for a multiple
 * words field of a particular device type.
 */
typedef struct bcmpkt_arp_t_figet_s {
    /*! Array of field get functions */
    bcmpkt_ifield_get_f fget[BCMPKT_ARP_T_I_FID_COUNT];
} bcmpkt_arp_t_figet_t;

/*! \cond  Externs for the required functions. */
#define BCMLRD_VARIANT_ENTRY(_bd,_bu,_va,_ve,_vu,_vv,_vo,_vd,_r0,_r1) \
    extern void _bd##_vu##_va##_arp_t_view_info_get(bcmpkt_pmd_view_info_t *info);
#define BCMLTD_VARIANT_OVERRIDE
#include <bcmlrd/chip/bcmlrd_variant.h>
/*! \endcond */

#endif /* BCMPKT_ARP_T_INTERNAL_H */
