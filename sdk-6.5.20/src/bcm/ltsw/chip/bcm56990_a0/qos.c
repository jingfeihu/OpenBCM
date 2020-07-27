/*
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#include <bcm/qos.h>

#include <bcm_int/ltsw/mbcm/qos.h>
#include <bcm_int/ltsw/xgs/qos.h>

#include <shr/shr_debug.h>

/******************************************************************************
 * Local definitions
 */

#define BSL_LOG_MODULE BSL_LS_BCM_QOS

/******************************************************************************
 * Private functions
 */

static int
bcm56990_a0_ltsw_qos_init(int unit)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xgs_ltsw_qos_init(unit));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56990_a0_ltsw_qos_detach(int unit)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xgs_ltsw_qos_detach(unit));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56990_a0_ltsw_qos_control_set(
    int unit,
    bcmi_ltsw_qos_control_t control,
    uint32_t value)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xgs_ltsw_qos_control_set(unit, control, value));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56990_a0_ltsw_qos_control_get(
    int unit,
    bcmi_ltsw_qos_control_t control,
    uint32_t *value)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xgs_ltsw_qos_control_get(unit, control, value));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56990_a0_ltsw_qos_map_create(
    int unit,
    uint32_t flags,
    int *map_id)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xgs_ltsw_qos_map_create(unit, flags, map_id));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56990_a0_ltsw_qos_map_destroy(
    int unit,
    int map_id)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xgs_ltsw_qos_map_destroy(unit, map_id));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56990_a0_ltsw_qos_map_add(
    int unit,
    uint32_t flags,
    bcm_qos_map_t *map,
    int map_id)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xgs_ltsw_qos_map_add(unit, flags, map, map_id));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56990_a0_ltsw_qos_map_delete(
    int unit,
    uint32_t flags,
    bcm_qos_map_t *map,
    int map_id)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xgs_ltsw_qos_map_delete(unit, flags, map, map_id));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56990_a0_ltsw_qos_port_map_set(
    int unit,
    bcm_gport_t port,
    int ing_map,
    int egr_map)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xgs_ltsw_qos_port_map_set(unit, port, ing_map, egr_map));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56990_a0_ltsw_qos_port_map_type_get(
    int unit,
    bcm_gport_t port,
    uint32_t flags,
    int *map_id)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xgs_ltsw_qos_port_map_type_get(unit, port, flags, map_id));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56990_a0_ltsw_qos_map_multi_get(
    int unit,
    uint32_t flags,
    int map_id,
    int array_size,
    bcm_qos_map_t *array,
    int *count)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xgs_ltsw_qos_map_multi_get(unit, flags, map_id, array_size, array, count));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56990_a0_ltsw_qos_multi_get(
    int unit,
    int array_size,
    int *map_id,
    int *flags,
    int *count)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xgs_ltsw_qos_multi_get(unit, array_size, map_id, flags, count));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56990_a0_ltsw_qos_port_vlan_map_set(
    int unit,
    bcm_port_t port,
    bcm_vlan_t vid,
    int ing_map,
    int egr_map)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xgs_ltsw_qos_port_vlan_map_set(unit, port, vid, ing_map, egr_map));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56990_a0_ltsw_qos_port_vlan_map_get(
    int unit,
    bcm_port_t port,
    bcm_vlan_t vid,
    int *ing_map,
    int *egr_map)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xgs_ltsw_qos_port_vlan_map_get(unit, port, vid, ing_map, egr_map));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56990_a0_ltsw_qos_map_id_resolve(
    int unit,
    int map_id,
    bcmi_ltsw_qos_map_type_t *type,
    int *ptr)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xgs_ltsw_qos_map_id_resolve(unit, map_id, type, ptr));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56990_a0_ltsw_qos_map_id_construct(
    int unit,
    int ptr,
    bcmi_ltsw_qos_map_type_t type,
    int *map_id)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xgs_ltsw_qos_map_id_construct(unit, ptr, type, map_id));

exit:
    SHR_FUNC_EXIT();
}

static void
bcm56990_a0_ltsw_qos_sw_dump(int unit)
{
    xgs_ltsw_qos_sw_dump(unit);
}

/*!
 * \brief Qos driver function variable for bcm56990_a0 device.
 */
static mbcm_ltsw_qos_drv_t bcm56990_a0_ltsw_qos_drv = {
    .qos_init = bcm56990_a0_ltsw_qos_init,
    .qos_detach = bcm56990_a0_ltsw_qos_detach,
    .qos_control_set = bcm56990_a0_ltsw_qos_control_set,
    .qos_control_get = bcm56990_a0_ltsw_qos_control_get,
    .qos_map_create = bcm56990_a0_ltsw_qos_map_create,
    .qos_map_destroy = bcm56990_a0_ltsw_qos_map_destroy,
    .qos_map_add = bcm56990_a0_ltsw_qos_map_add,
    .qos_map_delete = bcm56990_a0_ltsw_qos_map_delete,
    .qos_port_map_set = bcm56990_a0_ltsw_qos_port_map_set,
    .qos_port_map_type_get = bcm56990_a0_ltsw_qos_port_map_type_get,
    .qos_map_multi_get = bcm56990_a0_ltsw_qos_map_multi_get,
    .qos_multi_get = bcm56990_a0_ltsw_qos_multi_get,
    .qos_port_vlan_map_set = bcm56990_a0_ltsw_qos_port_vlan_map_set,
    .qos_port_vlan_map_get = bcm56990_a0_ltsw_qos_port_vlan_map_get,
    .qos_map_id_resolve = bcm56990_a0_ltsw_qos_map_id_resolve,
    .qos_map_id_construct = bcm56990_a0_ltsw_qos_map_id_construct,
    .qos_sw_dump = bcm56990_a0_ltsw_qos_sw_dump,
};

/******************************************************************************
 * Public functions
 */

int
bcm56990_a0_ltsw_qos_drv_attach(int unit)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_qos_drv_set(unit, &bcm56990_a0_ltsw_qos_drv));

exit:
    SHR_FUNC_EXIT();
}

/*!
 * \brief Attach functions for other members.
 */
#define BCM56990_A0_DRV_ATTACH_ENTRY(_dn,_vn,_pf,_pd,_r0) \
int _vn##_ltsw_qos_drv_attach(int unit) \
{ \
    SHR_FUNC_ENTER(unit); \
    SHR_IF_ERR_VERBOSE_EXIT \
        (mbcm_ltsw_qos_drv_set(unit, &bcm56990_a0_ltsw_qos_drv)); \
exit: \
    SHR_FUNC_EXIT(); \
}
#include "sub_devlist.h"
