/*
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#ifndef BCMINT_LTSW_MBCM_LDH_H
#define BCMINT_LTSW_MBCM_LDH_H

#include <sal/sal_types.h>

/*!
 * \brief Initialize LDH module.
 *
 * \param [in] unit Unit Number.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*ldh_init_f)(int unit);

/*!
 * \brief Detach LDH module.
 *
 * \param [in] unit Unit Number.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*ldh_detach_f)(int unit);

/*!
 * \brief Enable/disable monitor.
 *
 * \param [in] unit Unit Number.
 * \param [in] monitor_id Monitor ID.
 * \param [in] enable Enable/disable monitor.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*ldh_monitor_enable_f)(
    int unit,
    uint8_t monitor_id,
    uint8_t enable);

/*!
 * \brief Set configuration for a given latency monitor.
 *
 * \param [in] unit Unit Number.
 * \param [in] monitor_id Monitor ID.
 * \param [in] config Monitor configuration.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*ldh_monitor_config_set_f)(
    int unit,
    uint8_t monitor_id,
    bcm_latency_monitor_config_t *config);

/*!
 * \brief Get configuration for a given latency monitor.
 *
 * \param [in] unit Unit Number.
 * \param [in] monitor_id Monitor ID.
 * \param [out] config Monitor configuration.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*ldh_monitor_config_get_f)(
    int unit,
    uint8_t monitor_id,
    bcm_latency_monitor_config_t *config);

/*!
 * \brief Attach counters entries to the given monitor ID.
 *
 * \param [in] unit Unit Number.
 * \param [in] monitor_id Monitor ID.
 * \param [in] stat_counter_id Counter ID.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*ldh_monitor_stat_attach_f)(
    int unit,
    uint8_t monitor_id,
    uint32_t stat_counter_id);

/*!
 * \brief Get state counter ID which is associated with a given latency monitor ID.
 *
 * \param [in] unit Unit Number.
 * \param [in] monitor_id Monitor ID.
 * \param [in] stat_counter_id Counter ID.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*ldh_monitor_stat_id_get_f)(
    int unit,
    uint8_t monitor_id,
    uint32_t *stat_counter_id);

/*!
 * \brief Detach counters entries to the given monitor.
 *
 * \param [in] unit Unit Number.
 * \param [in] monitor_id Monitor ID.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*ldh_monitor_stat_detach_f)(
    int unit,
    uint8_t monitor_id);

/*!
 * \brief Parameter check on monitor ID.
 *
 * \param [in] unit Unit Number.
 * \param [in] monitor_id Monitor ID.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*ldh_monitor_id_check_f)(
    int unit,
    uint8_t monitor_id);

/*!
 * \brief Parameter check on monitor config structure.
 *
 * \param [in] unit Unit Number.
 * \param [in] monitor_id Monitor ID.
 * \param [in] config Monitor configuration.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*ldh_monitor_config_check_f)(
    int unit,
    uint8_t monitor_id,
    bcm_latency_monitor_config_t *config);

/*!
 * \brief Ldh driver structure.
 */
typedef struct mbcm_ltsw_ldh_drv_s {

    /*! Initialize LDH module. */
    ldh_init_f ldh_init;

    /*! Detach LDH module. */
    ldh_detach_f ldh_detach;

    /*! Enable/disable monitor. */
    ldh_monitor_enable_f ldh_monitor_enable;

    /*! Set configuration for a given latency monitor. */
    ldh_monitor_config_set_f ldh_monitor_config_set;

    /*! Get configuration for a given latency monitor. */
    ldh_monitor_config_get_f ldh_monitor_config_get;

    /*! Attach counters entries to the given monitor ID. */
    ldh_monitor_stat_attach_f ldh_monitor_stat_attach;

    /*! Get state counter ID which is associated with a given latency monitor ID. */
    ldh_monitor_stat_id_get_f ldh_monitor_stat_id_get;

    /*! Detach counters entries to the given monitor. */
    ldh_monitor_stat_detach_f ldh_monitor_stat_detach;

    /*! Parameter check on monitor ID. */
    ldh_monitor_id_check_f ldh_monitor_id_check;

    /*! Parameter check on monitor config structure. */
    ldh_monitor_config_check_f ldh_monitor_config_check;

} mbcm_ltsw_ldh_drv_t;

/*!
 * \brief Set the LDH driver of the device.
 *
 * \param [in] unit Unit Number.
 * \param [in] drv Ldh driver to set.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_ldh_drv_set(
    int unit,
    mbcm_ltsw_ldh_drv_t *drv);

/*!
 * \brief Initialize LDH module.
 *
 * \param [in] unit Unit Number.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_ldh_init(int unit);

/*!
 * \brief Detach LDH module.
 *
 * \param [in] unit Unit Number.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_ldh_detach(int unit);

/*!
 * \brief Enable/disable monitor.
 *
 * \param [in] unit Unit Number.
 * \param [in] monitor_id Monitor ID.
 * \param [in] enable Enable/disable monitor.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_ldh_monitor_enable(
    int unit,
    uint8_t monitor_id,
    uint8_t enable);

/*!
 * \brief Set configuration for a given latency monitor.
 *
 * \param [in] unit Unit Number.
 * \param [in] monitor_id Monitor ID.
 * \param [in] config Monitor configuration.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_ldh_monitor_config_set(
    int unit,
    uint8_t monitor_id,
    bcm_latency_monitor_config_t *config);

/*!
 * \brief Get configuration for a given latency monitor.
 *
 * \param [in] unit Unit Number.
 * \param [in] monitor_id Monitor ID.
 * \param [out] config Monitor configuration.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_ldh_monitor_config_get(
    int unit,
    uint8_t monitor_id,
    bcm_latency_monitor_config_t *config);

/*!
 * \brief Attach counters entries to the given monitor ID.
 *
 * \param [in] unit Unit Number.
 * \param [in] monitor_id Monitor ID.
 * \param [in] stat_counter_id Counter ID.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_ldh_monitor_stat_attach(
    int unit,
    uint8_t monitor_id,
    uint32_t stat_counter_id);

/*!
 * \brief Get state counter ID which is associated with a given latency monitor ID.
 *
 * \param [in] unit Unit Number.
 * \param [in] monitor_id Monitor ID.
 * \param [in] stat_counter_id Counter ID.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_ldh_monitor_stat_id_get(
    int unit,
    uint8_t monitor_id,
    uint32_t *stat_counter_id);

/*!
 * \brief Detach counters entries to the given monitor.
 *
 * \param [in] unit Unit Number.
 * \param [in] monitor_id Monitor ID.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_ldh_monitor_stat_detach(
    int unit,
    uint8_t monitor_id);

/*!
 * \brief Parameter check on monitor ID.
 *
 * \param [in] unit Unit Number.
 * \param [in] monitor_id Monitor ID.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_ldh_monitor_id_check(
    int unit,
    uint8_t monitor_id);

/*!
 * \brief Parameter check on monitor config structure.
 *
 * \param [in] unit Unit Number.
 * \param [in] monitor_id Monitor ID.
 * \param [in] config Monitor configuration.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_ldh_monitor_config_check(
    int unit,
    uint8_t monitor_id,
    bcm_latency_monitor_config_t *config);

#endif /* BCMINT_LTSW_MBCM_LDH_H */
