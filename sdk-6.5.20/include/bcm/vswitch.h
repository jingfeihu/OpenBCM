/*
 * 
 * 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 *
 */

#ifndef __BCM_VSWITCH_H__
#define __BCM_VSWITCH_H__

#include <bcm/types.h>
#include <bcm/policer.h>
#include <bcm/port.h>

#ifndef BCM_HIDE_DISPATCHABLE

/* Initialize vswitch module. */
extern int bcm_vswitch_init(
    int unit);

/* Detach vswitch module. */
extern int bcm_vswitch_detach(
    int unit);

/* Create a Virtual Switching Instance. */
extern int bcm_vswitch_create(
    int unit, 
    bcm_vlan_t *vsi);

/* Create a Virtual Switching Instance, with a specified ID. */
extern int bcm_vswitch_create_with_id(
    int unit, 
    bcm_vlan_t vsi);

/* Destroy a Virtual Switching Instance. */
extern int bcm_vswitch_destroy(
    int unit, 
    bcm_vlan_t vsi);

#endif /* BCM_HIDE_DISPATCHABLE */

/* Vswitch callback function prototype */
typedef int (*bcm_vswitch_port_traverse_cb)(
    int unit, 
    bcm_vlan_t vsi, 
    bcm_gport_t port, 
    void *user_data);

#ifndef BCM_HIDE_DISPATCHABLE

/* Traverse existing ports on vswitch */
extern int bcm_vswitch_port_traverse(
    int unit, 
    bcm_vlan_t vsi, 
    bcm_vswitch_port_traverse_cb cb, 
    void *user_data);

/* Add a logical port to the specified virtual switching instance. */
extern int bcm_vswitch_port_add(
    int unit, 
    bcm_vlan_t vsi, 
    bcm_gport_t port);

/* Remove a logical port from the specified virtual switching instance. */
extern int bcm_vswitch_port_delete(
    int unit, 
    bcm_vlan_t vsi, 
    bcm_gport_t port);

/* 
 * Remove all logical port members from the specified virtual switching
 * instance.
 */
extern int bcm_vswitch_port_delete_all(
    int unit, 
    bcm_vlan_t vsi);

/* 
 * Get the virtual switching instance of which the specified logical port
 * is a member.
 */
extern int bcm_vswitch_port_get(
    int unit, 
    bcm_gport_t port, 
    bcm_vlan_t *vsi);

#endif /* BCM_HIDE_DISPATCHABLE */

/* bcm_vswitch_cross_connect_* flags */
#define BCM_VSWITCH_CROSS_CONNECT_DIRECTIONAL 0x00000001 /* connect gport1 to
                                                          gport2 */

/* L3 tunneling initiator. */
typedef struct bcm_vswitch_cross_connect_s {
    bcm_gport_t port1;  /* First gport in cross connect. */
    bcm_gport_t port2;  /* Second gport in cross connect. */
    int encap1;         /* First gport encap id. */
    int encap2;         /* Second gport encap id. */
    uint32 flags;       /* BCM_VSWITCH_CROSS_CONNECT_XXX flags. */
} bcm_vswitch_cross_connect_t;

/* Initialize the bcm_vswitch_cross_connect_t struct. */
extern void bcm_vswitch_cross_connect_t_init(
    bcm_vswitch_cross_connect_t *cross_connect);

#ifndef BCM_HIDE_DISPATCHABLE

/* Attach two given logical ports in a point-to-point service. */
extern int bcm_vswitch_cross_connect_add(
    int unit, 
    bcm_vswitch_cross_connect_t *gports);

/* Remove attachment between the given logical ports. */
extern int bcm_vswitch_cross_connect_delete(
    int unit, 
    bcm_vswitch_cross_connect_t *gports);

/* Delete all point-to-point services. */
extern int bcm_vswitch_cross_connect_delete_all(
    int unit);

/* 
 * Return peer, if protected return primary port, invalid gport is
 * populated.
 */
extern int bcm_vswitch_cross_connect_get(
    int unit, 
    bcm_vswitch_cross_connect_t *gports);

#endif /* BCM_HIDE_DISPATCHABLE */

/* Vswitch callback function prototype */
typedef int (*bcm_vswitch_cross_connect_traverse_cb)(
    int unit, 
    bcm_vswitch_cross_connect_t *gports, 
    void *user_data);

#ifndef BCM_HIDE_DISPATCHABLE

/* Traverse all existing point-to-point services. */
extern int bcm_vswitch_cross_connect_traverse(
    int unit, 
    bcm_vswitch_cross_connect_traverse_cb cb, 
    void *user_data);

/* Destroy all Virtual Switching Instances. */
extern int bcm_vswitch_destroy_all(
    int unit);

#endif /* BCM_HIDE_DISPATCHABLE */

/* bcm_vswitch_flexible_connect_* flags */
#define BCM_VSWITCH_FLEXIBLE_CONNECT_UPDATE 0x00000001 /* Update existing
                                                          connection */

/* Vswitch flexible cross connect forwarding information. */
typedef struct bcm_vswitch_flexible_connect_fwd_s {
    bcm_gport_t forward_port;   /* gport to be used as forward destination. */
    int forward_encap;          /* forward encap id */
} bcm_vswitch_flexible_connect_fwd_t;

/* Initialize the vswitch_flexible_connect_fwd_t struct. */
extern void bcm_vswitch_flexible_connect_fwd_t_init(
    bcm_vswitch_flexible_connect_fwd_t *vswitch_flexible_connect_fwd);

/* Vswitch flexible cross connect match information. */
typedef struct bcm_vswitch_flexible_connect_match_s {
    bcm_port_match_t match;         /* Match criteria */
    bcm_gport_t match_port;         /* Match port */
    bcm_vlan_t match_vlan;          /* Match vlan */
    bcm_vlan_t match_inner_vlan;    /* Match inner vlan */
} bcm_vswitch_flexible_connect_match_t;

/* Initialize the vswitch_flexible_connect_match_t struct. */
extern void bcm_vswitch_flexible_connect_match_t_init(
    bcm_vswitch_flexible_connect_match_t *flexible_connect_match);

#ifndef BCM_HIDE_DISPATCHABLE

/* Attach given match port to forward destination. */
extern int bcm_vswitch_flexible_connect_add(
    int unit, 
    uint32 flags, 
    bcm_vswitch_flexible_connect_match_t *port_match, 
    bcm_vswitch_flexible_connect_fwd_t *port_fwd);

/* Remove flexible connection. */
extern int bcm_vswitch_flexible_connect_delete(
    int unit, 
    bcm_vswitch_flexible_connect_match_t *port_match);

/* Return forwarding information for given match peer */
extern int bcm_vswitch_flexible_connect_get(
    int unit, 
    uint32 flags, 
    bcm_vswitch_flexible_connect_match_t *port_match, 
    bcm_vswitch_flexible_connect_fwd_t *port_fwd);

#endif /* BCM_HIDE_DISPATCHABLE */

#endif /* __BCM_VSWITCH_H__ */
