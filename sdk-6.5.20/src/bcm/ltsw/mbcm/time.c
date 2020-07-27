/*
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#include <bcm/types.h>
#include <bcm/time.h>

#include <bcm_int/ltsw/mbcm/time.h>
#include <bcm_int/ltsw/mbcm/mbcm.h>

#include <shr/shr_debug.h>

/******************************************************************************
 * Local definitions
 */

#define BSL_LOG_MODULE BSL_LS_BCM_TIME

/*!
 * \brief The Time mbcm drivers.
 */
static mbcm_ltsw_time_drv_t mbcm_ltsw_time_drv[BCM_MAX_NUM_UNITS];

/******************************************************************************
 * Private functions
 */

/******************************************************************************
 * Public functions
 */

int
mbcm_ltsw_time_drv_set(
    int unit,
    mbcm_ltsw_time_drv_t *drv)
{
    mbcm_ltsw_time_drv_t *local = &mbcm_ltsw_time_drv[unit];

    SHR_FUNC_ENTER(unit);


    mbcm_ltsw_drv_init((mbcm_ltsw_drv_t *)local,
                       (mbcm_ltsw_drv_t *)drv,
                       sizeof(*local)/MBCM_LTSW_FNPTR_SZ);

    SHR_EXIT();

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_time_init(int unit)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_time_drv[unit].time_init(unit));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_time_deinit(int unit)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_time_drv[unit].time_deinit(unit));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_time_synce_clock_set(
    int unit,
    bcm_time_synce_clock_src_type_t clk_src,
    bcm_time_synce_divisor_setting_t *divisor)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_time_drv[unit].time_synce_clock_set(unit, clk_src, divisor));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_time_synce_clock_get(
    int unit,
    bcm_time_synce_clock_src_type_t clk_src,
    bcm_time_synce_divisor_setting_t *divisor)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_time_drv[unit].time_synce_clock_get(unit, clk_src, divisor));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_time_synce_clock_source_control_set(
    int unit,
    bcm_time_synce_clock_source_config_t *clk_src_config,
    bcm_time_synce_clock_source_control_t control,
    int value)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_time_drv[unit].time_synce_clock_source_control_set(unit, clk_src_config, control, value));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_time_synce_clock_source_control_get(
    int unit,
    bcm_time_synce_clock_source_config_t *clk_src_config,
    bcm_time_synce_clock_source_control_t control,
    int *value)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_time_drv[unit].time_synce_clock_source_control_get(unit, clk_src_config, control, value));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_time_tod_set(
    int unit,
    uint32 stages,
    bcm_time_tod_t *tod)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_time_drv[unit].time_tod_set(unit, stages, tod));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_time_tod_get(
    int unit,
    uint32 stages,
    bcm_time_tod_t *tod)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_time_drv[unit].time_tod_get(unit, stages, tod));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_time_port_timesync_config_set(
    int unit,
    bcm_port_t port,
    int config_count,
    bcm_port_timesync_config_t *config_array)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_time_drv[unit].time_port_timesync_config_set(unit, port, config_count, config_array));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_time_port_timesync_config_get(
    int unit,
    bcm_port_t port,
    int config_count,
    bcm_port_timesync_config_t *config_array,
    int *array_count)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_time_drv[unit].time_port_timesync_config_get(unit, port, config_count, config_array, array_count));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_time_switch_control_set(
    int unit,
    bcm_switch_control_t type,
    int arg)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_time_drv[unit].time_switch_control_set(unit, type, arg));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_time_switch_control_get(
    int unit,
    bcm_switch_control_t type,
    int *arg)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_time_drv[unit].time_switch_control_get(unit, type, arg));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_time_switch_control_port_set(
    int unit,
    bcm_port_t port,
    bcm_switch_control_t type,
    int arg)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_time_drv[unit].time_switch_control_port_set(unit, port, type, arg));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_time_switch_control_port_get(
    int unit,
    bcm_port_t port,
    bcm_switch_control_t type,
    int *arg)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_time_drv[unit].time_switch_control_port_get(unit, port, type, arg));

exit:
    SHR_FUNC_EXIT();
}

