/*
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#ifndef BCMINT_LTSW_XFS_FAILOVER_H
#define BCMINT_LTSW_XFS_FAILOVER_H

/*!
 * \brief Clear failover related LT tables.
 *
 * \param [in] unit Unit Number.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xfs_ltsw_failover_clear(int unit);

/*!
 * \brief Initialize the failover software module.
 *
 * \param [in] unit Unit Number.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xfs_ltsw_failover_init(int unit);

/*!
 * \brief Set/Clear the active state of usage of primary/protected NH.
 *
 * \param [in] unit Unit Number.
 * \param [in] nh_idx Nexthop index.
 * \param [in] enable True for use of protected NH, False for use of Primary NH
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xfs_ltsw_failover_egress_status_set(
    int unit,
    int nh_idx,
    int enable);

/*!
 * \brief Get the active state of usage of primary/protected NH.
 *
 * \param [in] unit Unit Number.
 * \param [in] nh_idx Nexthop index.
 * \param [out] enable True for use of protected NH, False for use of Primary NH
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xfs_ltsw_failover_egress_status_get(
    int unit,
    int nh_idx,
    int *enable);

#endif /* BCMINT_LTSW_XFS_FAILOVER_H */
