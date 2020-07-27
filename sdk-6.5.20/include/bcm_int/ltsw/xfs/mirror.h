/*
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#ifndef BCMINT_LTSW_XFS_MIRROR_H
#define BCMINT_LTSW_XFS_MIRROR_H

#include <bcm/mirror.h>
#include <bcm/switch.h>

#include <bcm_int/ltsw/mirror_int.h>
#include <bcm_int/ltsw/mirror.h>

#include <sal/sal_types.h>

/*!
 * \brief Set mirror database.
 *
 * \param [in] unit Unit Number.
 * \param [in] db Mirror database.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xfs_ltsw_mirror_db_set(
    int unit,
    const bcmint_mirror_db_t *db);

/*!
 * \brief Chip specific mirror init.
 *
 * \param [in] unit Unit Number.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xfs_ltsw_mirror_init(int unit);

/*!
 * \brief Chip specific mirror de-init.
 *
 * \param [in] unit Unit Number.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xfs_ltsw_mirror_deinit(int unit);

/*!
 * \brief Add Mirror encap entry and return the encap index.
 *
 * \param [in] unit Unit Number.
 * \param [in] egr Egress Mirror encap.
 * \param [in] mirror_dest Mirror destination pointer.
 * \param [out] index Mirror encap index.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xfs_ltsw_mirror_encap_add(
    int unit,
    bool egr,
    bcm_mirror_destination_t *mirror_dest,
    int *index);

/*!
 * \brief Delete Mirror encap entry.
 *
 * \param [in] unit Unit Number.
 * \param [in] mirror_dest Mirror destination pointer.
 * \param [in] index Mirror encap index.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xfs_ltsw_mirror_encap_delete(
    int unit,
    bcm_mirror_destination_t *mirror_dest,
    int index);

/*!
 * \brief Get Mirror destination for given encap index.
 *
 * \param [in] unit Unit Number.
 * \param [in] index Mirror encap index.
 * \param [out] mirror_dest Mirror destination pointer.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xfs_ltsw_mirror_encap_get(
    int unit,
    int index,
    bcm_mirror_destination_t *mirror_dest);

/*!
 * \brief Add Mirror session entry.
 *
 * \param [in] unit Unit Number.
 * \param [in] session_id Mirror session id.
 * \param [in] session Mirror session entry.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xfs_ltsw_mirror_session_add(
    int unit,
    int session_id,
    bcmint_mirror_session_entry_t *session);

/*!
 * \brief Delete Mirror session entry with given session id.
 *
 * \param [in] unit Unit Number.
 * \param [in] session_id Mirror session id.
 * \param [in] egr For egress or ingress Mirroring.
 * \param [in] cosq_mod For cosq_mod Mirroring.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xfs_ltsw_mirror_session_delete(
    int unit,
    int session_id,
    bool egr,
    bool cosq_mod);

/*!
 * \brief Get Mirror session entry for given id.
 *
 * \param [in] unit Unit Number.
 * \param [in] session_id Mirror session id.
 * \param [out] session Mirror session entry.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xfs_ltsw_mirror_session_get(
    int unit,
    int session_id,
    bcmint_mirror_session_entry_t *session);

/*!
 * \brief Get statistics for a Mirror session.
 *
 * \param [in] unit Unit Number.
 * \param [in] session_id Mirror session id.
 * \param [in] sync Sync mode.
 * \param [out] value Statistics.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xfs_ltsw_mirror_session_stat_get(
    int unit,
    int session_id,
    bool sync,
    uint64_t *value);

/*!
 * \brief Set statistics for a Mirror session.
 *
 * \param [in] unit Unit Number.
 * \param [in] session_id Mirror session id.
 * \param [in] value Statistics.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xfs_ltsw_mirror_session_stat_set(
    int unit,
    int session_id,
    uint64_t value);

/*!
 * \brief Get Mirror enable status on a Mirror source.
 *
 * \param [in] unit Unit Number.
 * \param [in] source Mirror source.
 * \param [out] enable Enable status.
 * \param [out] instance_id Mirror instance id.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xfs_ltsw_mirror_enable_get(
    int unit,
    bcmint_mirror_source_t *source,
    int *enable,
    int *instance_id);

/*!
 * \brief Set Mirror enable status on a Mirror source.
 *
 * \param [in] unit Unit Number.
 * \param [in] source Mirror source.
 * \param [in] mc_bmp Bitmap of Mirror containers cared.
 * \param [in] enable Enable status for Mirror container.
 * \param [in] instance_id Mirror instance id.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xfs_ltsw_mirror_enable_set(
    int unit,
    bcmint_mirror_source_t *source,
    int mc_bmp,
    int enable,
    int *instance_id);

/*!
 * \brief Mirror misc init.
 *
 * \param [in] unit Unit Number.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xfs_ltsw_mirror_misc_init(int unit);

/*!
 * \brief Mirror misc deinit.
 *
 * \param [in] unit Unit Number.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xfs_ltsw_mirror_misc_deinit(int unit);

/*!
 * \brief Init sample profile.
 *
 * \param [in] unit Unit Number.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xfs_ltsw_mirror_sample_profile_init(int unit);

/*!
 * \brief Deinit sample profile.
 *
 * \param [in] unit Unit Number.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xfs_ltsw_mirror_sample_profile_deinit(int unit);

/*!
 * \brief Get max rate range of egress sampler.
 *
 * \param [in] unit Unit Number.
 * \param [out] range_max Max rate range.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xfs_ltsw_mirror_egress_sampler_rate_range_max(
    int unit,
    int *range_max);

/*!
 * \brief Set sampler random seed value.
 *
 * \param [in] unit Unit Number.
 * \param [in] type Sampler seed type.
 * \param [in] value Sampler seed value.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xfs_ltsw_mirror_sampler_seed_set(
    int unit,
    bcmi_ltsw_mirror_sampler_seed_type_t type,
    int value);

/*!
 * \brief Get sampler random seed value.
 *
 * \param [in] unit Unit Number.
 * \param [in] type Sampler seed type.
 * \param [out] value Sampler seed value.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xfs_ltsw_mirror_sampler_seed_get(
    int unit,
    bcmi_ltsw_mirror_sampler_seed_type_t type,
    int *value);

/*!
 * \brief Set mc_cos for mirror copies.
 *
 * \param [in] unit Unit Number.
 * \param [in] mc_cos MC cos value.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xfs_ltsw_mirror_mc_cos_set(
    int unit,
    int mc_cos);

/*!
 * \brief Get mc_cos for mirror copies.
 *
 * \param [in] unit Unit Number.
 * \param [out] mc_cos MC cos value.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xfs_ltsw_mirror_mc_cos_get(
    int unit,
    int *mc_cos);

/*!
 * \brief Set cpu_cos for mirror-to-cpu copies. This cos will override cpu_cos from CCBI bus.
 *
 * \param [in] unit Unit Number.
 * \param [in] cpu_cos Cpu_cos value.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xfs_ltsw_mirror_cpu_cos_set(
    int unit,
    int cpu_cos);

/*!
 * \brief Get cpu_cos for mirror-to-cpu copies.
 *
 * \param [in] unit Unit Number.
 * \param [out] cpu_cos Cpu_cos value.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xfs_ltsw_mirror_cpu_cos_get(
    int unit,
    int *cpu_cos);

/*!
 * \brief Set sample profile entry.
 *
 * \param [in] unit Unit Number.
 * \param [in] type Sample type.
 * \param [in] profile_id Sample profile id.
 * \param [in] profile Sample profile entry.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xfs_ltsw_mirror_sample_profile_set(
    int unit,
    bcmint_mirror_sample_type_t type,
    int profile_id,
    bcm_mirror_sample_profile_t *profile);

/*!
 * \brief Get sample profile entry.
 *
 * \param [in] unit Unit Number.
 * \param [in] type Sample type.
 * \param [in] profile_id Sample profile id.
 * \param [out] profile Sample profile entry.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xfs_ltsw_mirror_sample_profile_get(
    int unit,
    bcmint_mirror_sample_type_t type,
    int profile_id,
    bcm_mirror_sample_profile_t *profile);

/*!
 * \brief Attach counter entries to a sample type.
 *
 * \param [in] unit Unit Number.
 * \param [in] type Sample type.
 * \param [in] stat_counter_id Counter id.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xfs_ltsw_mirror_sample_stat_attach(
    int unit,
    bcmint_mirror_sample_type_t type,
    uint32_t stat_counter_id);

/*!
 * \brief Detach counter entries from a sample type.
 *
 * \param [in] unit Unit Number.
 * \param [in] type Sample type.
 * \param [in] stat_counter_id Counter id.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xfs_ltsw_mirror_sample_stat_detach(
    int unit,
    bcmint_mirror_sample_type_t type,
    uint32_t stat_counter_id);

/*!
 * \brief Set global mirror truncate.
 *
 * \param [in] unit Unit Number.
 * \param [in] global_truncate Mirror global truncate pointer.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xfs_ltsw_mirror_global_truncate_set(
    int unit,
    bcm_mirror_global_truncate_t *global_truncate);

/*!
 * \brief Get global mirror truncate.
 *
 * \param [in] unit Unit Number.
 * \param [out] global_truncate Mirror global truncate pointer.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xfs_ltsw_mirror_global_truncate_get(
    int unit,
    bcm_mirror_global_truncate_t *global_truncate);

/*!
 * \brief Create a truncate length profile.
 *
 * \param [in] unit Unit Number.
 * \param [in] options Options flags.
 * \param [inout] profile_id Profile id.
 * \param [in] profile Profile entry.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xfs_ltsw_mirror_truncate_length_profile_create(
    int unit,
    uint32_t options,
    int *profile_id,
    bcm_mirror_truncate_length_profile_t *profile);

/*!
 * \brief Destroy a truncate length profile.
 *
 * \param [in] unit Unit Number.
 * \param [in] profile_id Profile id.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xfs_ltsw_mirror_truncate_length_profile_destroy(
    int unit,
    int profile_id);

/*!
 * \brief Get a truncate length profile with given profile id.
 *
 * \param [in] unit Unit Number.
 * \param [in] profile_id Profile id.
 * \param [out] profile Profile entry.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xfs_ltsw_mirror_truncate_length_profile_get(
    int unit,
    int profile_id,
    bcm_mirror_truncate_length_profile_t *profile);

/*!
 * \brief Specify general mirror switch behaviors.
 *
 * \param [in] unit Unit Number.
 * \param [in] type The desired switch control type.
 * \param [in] arg Value to set.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xfs_ltsw_mirror_switch_control_set(
    int unit,
    bcm_switch_control_t type,
    int arg);

/*!
 * \brief Retrieve general mirror switch behaviors.
 *
 * \param [in] unit Unit Number.
 * \param [in] type The desired switch control type.
 * \param [out] arg Value to get.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xfs_ltsw_mirror_switch_control_get(
    int unit,
    bcm_switch_control_t type,
    int *arg);

#endif /* BCMINT_LTSW_XFS_MIRROR_H */
