/*
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#include <bcm_int/ltsw/mbcm/trunk.h>
#include <bcm_int/ltsw/xfs/trunk.h>

#include <shr/shr_debug.h>

/******************************************************************************
 * Local definitions
 */

#define BSL_LOG_MODULE BSL_LS_BCM_TRUNK

/******************************************************************************
 * Private functions
 */

static int
bcm56780_a0_ltsw_trunk_type_id_to_l2_dest(
    int unit,
    bcmint_trunk_type_t t_type,
    bcmint_trunk_id_t t_id,
    bcmint_trunk_priv_info_t *t_priv,
    int *l2_dest)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_trunk_type_id_to_l2_dest(unit, t_type, t_id, t_priv, l2_dest));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56780_a0_ltsw_trunk_l2_dest_to_type_id(
    int unit,
    int l2_dest,
    bcmint_trunk_type_t *t_type,
    bcmint_trunk_id_t *t_id)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_trunk_l2_dest_to_type_id(unit, l2_dest, t_type, t_id));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56780_a0_ltsw_trunk_gport_is_channelized_access_port(
    int unit,
    bcm_gport_t gport,
    bool *is_channelized_access_port)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_trunk_gport_is_channelized_access_port(unit, gport, is_channelized_access_port));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56780_a0_ltsw_trunk_pub_info_get(
    int unit,
    bcmint_trunk_pub_info_t *t_pub)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_trunk_pub_info_get(unit, t_pub));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56780_a0_ltsw_trunk_psc_compare(
    int unit,
    bcmint_trunk_type_t t_type,
    int psc0,
    int psc1,
    int exact,
    bool *result)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_trunk_psc_compare(unit, t_type, psc0, psc1, exact, result));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56780_a0_ltsw_trunk_init(int unit)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_trunk_init(unit));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56780_a0_ltsw_trunk_detach(int unit)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_trunk_detach(unit));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56780_a0_ltsw_trunk_clear(int unit)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_trunk_clear(unit));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56780_a0_ltsw_trunk_create(
    int unit,
    bcmint_trunk_id_t t_id,
    bcmint_trunk_type_t t_type,
    bcmint_trunk_priv_info_t *t_priv)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_trunk_create(unit, t_id, t_type, t_priv));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56780_a0_ltsw_trunk_params_validate(
    int unit,
    bcmint_trunk_id_t t_id,
    bcmint_trunk_type_t t_type,
    bcm_trunk_info_t *trunk_info,
    int member_count,
    bcm_trunk_member_t *member_array,
    int op,
    bcm_trunk_member_t *member)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_trunk_params_validate(unit, t_id, t_type, trunk_info, member_count, member_array, op, member));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56780_a0_ltsw_trunk_get(
    int unit,
    bcmint_trunk_id_t t_id,
    bcmint_trunk_type_t t_type,
    bcmint_trunk_priv_info_t *t_priv,
    bcm_trunk_info_t *trunk_info,
    int member_max,
    bcm_trunk_member_t *member_array,
    int *member_count)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_trunk_get(unit, t_id, t_type, t_priv, trunk_info, member_max, member_array, member_count));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56780_a0_ltsw_trunk_update(
    int unit,
    bcmint_trunk_id_t t_id,
    bcmint_trunk_type_t t_type,
    bcm_trunk_info_t *trunk_info,
    int member_count,
    bcm_trunk_member_t *member_array,
    int op,
    bcm_trunk_member_t *member,
    bcmint_trunk_priv_info_t *t_priv,
    bcmint_trunk_update_info_t *t_update)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_trunk_update(unit, t_id, t_type, trunk_info, member_count, member_array, op, member, t_priv, t_update));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56780_a0_ltsw_trunk_destroy(
    int unit,
    bcmint_trunk_id_t t_id,
    bcmint_trunk_type_t t_type,
    bcmint_trunk_priv_info_t *t_priv)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_trunk_destroy(unit, t_id, t_type, t_priv));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56780_a0_ltsw_trunk_find(
    int unit,
    bcm_gport_t gport,
    bcmint_trunk_id_t *t_id,
    bcmint_trunk_type_t *t_type)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_trunk_find(unit, gport, t_id, t_type));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56780_a0_ltsw_trunk_find_virtual(
    int unit,
    bcm_gport_t gport,
    int *vp_lag_vp)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_trunk_find_virtual(unit, gport, vp_lag_vp));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56780_a0_ltsw_trunk_notify(
    int unit,
    bcmint_trunk_id_t t_id,
    bcmint_trunk_type_t t_type)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_trunk_notify(unit, t_id, t_type));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56780_a0_ltsw_trunk_failover_flags_extract(
    int unit,
    uint32_t flags,
    bcmint_trunk_type_t t_type,
    uint32_t *fail_flags)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_trunk_failover_flags_extract(unit, flags, t_type, fail_flags));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56780_a0_ltsw_trunk_failover_psc_validate(
    int unit,
    bcmint_trunk_type_t t_type,
    int psc)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_trunk_failover_psc_validate(unit, t_type, psc));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56780_a0_ltsw_trunk_failover_set(
    int unit,
    bcmint_trunk_id_t t_id,
    bcmint_trunk_type_t t_type,
    bcm_gport_t fail_port,
    int psc,
    int ftp_count,
    bcm_gport_t *ftp)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_trunk_failover_set(unit, t_id, t_type, fail_port, psc, ftp_count, ftp));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56780_a0_ltsw_trunk_failover_get(
    int unit,
    bcmint_trunk_id_t t_id,
    bcmint_trunk_type_t t_type,
    bcm_gport_t fail_port,
    int *psc,
    int ftp_max,
    bcm_gport_t *ftp,
    int *ftp_count)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_trunk_failover_get(unit, t_id, t_type, fail_port, psc, ftp_max, ftp, ftp_count));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56780_a0_ltsw_trunk_failover_update(
    int unit,
    bcmint_trunk_id_t t_id,
    bcmint_trunk_type_t t_type,
    int psc,
    uint32_t fail_flags,
    bcm_gport_t fail_port,
    int ftp_max,
    int member_count,
    bcm_trunk_member_t *member_array)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_trunk_failover_update(unit, t_id, t_type, psc, fail_flags, fail_port, ftp_max, member_count, member_array));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56780_a0_ltsw_trunk_override_set(
    int unit,
    bcmint_trunk_id_t t_id,
    bcmint_trunk_override_type_t o_type,
    int o_index,
    int enable)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_trunk_override_set(unit, t_id, o_type, o_index, enable));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56780_a0_ltsw_trunk_override_get(
    int unit,
    bcmint_trunk_id_t t_id,
    bcmint_trunk_override_type_t o_type,
    int o_index,
    int *enable)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_trunk_override_get(unit, t_id, o_type, o_index, enable));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56780_a0_ltsw_trunk_member_status_set(
    int unit,
    bcm_port_t port,
    int status)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_trunk_member_status_set(unit, port, status));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56780_a0_ltsw_trunk_member_status_get(
    int unit,
    bcm_port_t port,
    int *status)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_trunk_member_status_get(unit, port, status));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56780_a0_ltsw_trunk_find_dlb_id(
    int unit,
    bcmint_trunk_type_t t_type,
    bcmint_trunk_id_t t_id,
    bcmint_trunk_priv_info_t *t_priv,
    int *dlb_id)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_trunk_find_dlb_id(unit, t_type, t_id, t_priv, dlb_id));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56780_a0_ltsw_trunk_vp_lag_member_update(
    int unit,
    int vp_lag_vp,
    bcm_gport_t gport)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_trunk_vp_lag_member_update(unit, vp_lag_vp, gport));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56780_a0_ltsw_trunk_vp_lag_vp_learn_get(
    int unit,
    int vp_lag_vp,
    uint32_t *flags)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_trunk_vp_lag_vp_learn_get(unit, vp_lag_vp, flags));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56780_a0_ltsw_trunk_vp_lag_vp_learn_set(
    int unit,
    int vp_lag_vp,
    uint32_t flags)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_trunk_vp_lag_vp_learn_set(unit, vp_lag_vp, flags));

exit:
    SHR_FUNC_EXIT();
}

/*!
 * \brief Trunk driver function variable for bcm56780_a0 device.
 */
static mbcm_ltsw_trunk_drv_t bcm56780_a0_ltsw_trunk_drv = {
    .trunk_type_id_to_l2_dest = bcm56780_a0_ltsw_trunk_type_id_to_l2_dest,
    .trunk_l2_dest_to_type_id = bcm56780_a0_ltsw_trunk_l2_dest_to_type_id,
    .trunk_gport_is_channelized_access_port = bcm56780_a0_ltsw_trunk_gport_is_channelized_access_port,
    .trunk_pub_info_get = bcm56780_a0_ltsw_trunk_pub_info_get,
    .trunk_psc_compare = bcm56780_a0_ltsw_trunk_psc_compare,
    .trunk_init = bcm56780_a0_ltsw_trunk_init,
    .trunk_detach = bcm56780_a0_ltsw_trunk_detach,
    .trunk_clear = bcm56780_a0_ltsw_trunk_clear,
    .trunk_create = bcm56780_a0_ltsw_trunk_create,
    .trunk_params_validate = bcm56780_a0_ltsw_trunk_params_validate,
    .trunk_get = bcm56780_a0_ltsw_trunk_get,
    .trunk_update = bcm56780_a0_ltsw_trunk_update,
    .trunk_destroy = bcm56780_a0_ltsw_trunk_destroy,
    .trunk_find = bcm56780_a0_ltsw_trunk_find,
    .trunk_find_virtual = bcm56780_a0_ltsw_trunk_find_virtual,
    .trunk_notify = bcm56780_a0_ltsw_trunk_notify,
    .trunk_failover_flags_extract = bcm56780_a0_ltsw_trunk_failover_flags_extract,
    .trunk_failover_psc_validate = bcm56780_a0_ltsw_trunk_failover_psc_validate,
    .trunk_failover_set = bcm56780_a0_ltsw_trunk_failover_set,
    .trunk_failover_get = bcm56780_a0_ltsw_trunk_failover_get,
    .trunk_failover_update = bcm56780_a0_ltsw_trunk_failover_update,
    .trunk_override_set = bcm56780_a0_ltsw_trunk_override_set,
    .trunk_override_get = bcm56780_a0_ltsw_trunk_override_get,
    .trunk_member_status_set = bcm56780_a0_ltsw_trunk_member_status_set,
    .trunk_member_status_get = bcm56780_a0_ltsw_trunk_member_status_get,
    .trunk_find_dlb_id = bcm56780_a0_ltsw_trunk_find_dlb_id,
    .trunk_vp_lag_member_update = bcm56780_a0_ltsw_trunk_vp_lag_member_update,
    .trunk_vp_lag_vp_learn_get = bcm56780_a0_ltsw_trunk_vp_lag_vp_learn_get,
    .trunk_vp_lag_vp_learn_set = bcm56780_a0_ltsw_trunk_vp_lag_vp_learn_set,
};

/******************************************************************************
 * Public functions
 */

int
bcm56780_a0_ltsw_trunk_drv_attach(int unit)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_trunk_drv_set(unit, &bcm56780_a0_ltsw_trunk_drv));

exit:
    SHR_FUNC_EXIT();
}

