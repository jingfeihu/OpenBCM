
/*
 *         
 * 
 * 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 *         
 *     
 * DO NOT EDIT THIS FILE!
 */

#ifndef BCM_DNX_SUPPORT
#error "This file is for use by DNX family only!"
#endif /* BCM_DNX_SUPPORT */

#ifndef _IMB_FEU_PHY_H__H_
#define _IMB_FEU_PHY_H__H_

#include <soc/portmod/portmod.h>
#include <bcm/port.h>
#include <bcm/cosq.h>
#include <bcm_int/dnx/port/imb/imb_diag.h>
#include <bcm_int/dnx/cosq/ingress/cosq_ingress_port.h>
#include <soc/dnxc/dnxc_port.h>
/*initialize an IMB.*/
int imb_feu_phy_init(
    int unit,
    const imb_create_info_t * imb_info,
    imb_specific_create_info_t * imb_specific_info);

/*De-initialize an existing IMB.*/
int imb_feu_phy_deinit(
    int unit,
    const imb_create_info_t * imb_info,
    imb_specific_create_info_t * imb_specific_info);

/*Add new IMB (Interface Management Block) port*/
int imb_feu_phy_port_attach(
    int unit,
    bcm_port_t port,
    uint32 flags);

/*Remove an existing IMB (Interface Management Block) port*/
int imb_feu_phy_port_detach(
    int unit,
    bcm_port_t port);

/*Enable / disable a port*/
int imb_feu_phy_port_enable_set(
    int unit,
    bcm_port_t port,
    uint32 flags,
    int enable);
int imb_feu_phy_port_enable_get(
    int unit,
    bcm_port_t port,
    int *enable);

/*Get port's default resource configurations*/
int imb_feu_phy_port_resource_default_get(
    int unit,
    bcm_port_t port,
    uint32 flags,
    bcm_port_resource_t * resource);

/*Configure calendar for FlexE related ports*/
int imb_feu_phy_calendar_set(
    int unit,
    bcm_port_t port,
    uint32 flags);

/*IMB post init after speed configuration is ready*/
int imb_feu_phy_post_init(
    int unit,
    int imb_id);

/*Configure alternative ports for FlexE PHY ports.*/
int imb_feu_phy_alternative_port_set(
    int unit,
    bcm_port_t port,
    const bcm_pbmp_t * alter_ports);

/*FlexE core port related configuration.*/
int imb_feu_phy_flexe_core_port_config_set(
    int unit,
    bcm_port_t port,
    int flexe_core_port,
    int speed);

#endif /*_IMB_FEU_PHY_H_*/
