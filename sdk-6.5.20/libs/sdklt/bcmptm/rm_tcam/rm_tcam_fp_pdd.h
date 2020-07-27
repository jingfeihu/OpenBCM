/*! \file rm_tcam_fp_pdd.h
 *
 *  PDD utility APIs.
 */
/*
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#ifndef RM_TCAM_FP_PDD_H
#define RM_TCAM_FP_PDD_H

/*!
 * \brief Get the number of PDD profiles across all pipes of a stage.
 *
 * \param [in] unit Logical device id
 * \param [in] ltid Logical Table enum that is accessing the table.
 * \param [in] ltid_info LRD information for the ltid.
 * \param [in] pipe XGS/XFC pipeline instance.
 * \param [out] pdd_count Number of PDD profiles across all pipes.
 *
 * \retval SHR_E_NONE Success
 * \retval SHR_E_PARAM Invalid parameters
 */
extern int
bcmptm_rm_tcam_fp_pdd_profiles_count_get(int unit,
                              bcmltd_sid_t ltid,
                              bcmptm_rm_tcam_lt_info_t *ltid_info,
                              uint8_t pipe,
                              uint16_t *pdd_count);
/*!
 * \brief Initialize reference count of all the PDD profiles
 *  spread across all pipes of a stage.
 *
 * \param [in] unit Logical device id
 * \param [in] stage_ptr HA memory pointer to a given stage.
 *
 * \retval SHR_E_NONE Success
 * \retval SHR_E_PARAM Invalid parameters
 */
extern int
bcmptm_rm_tcam_fp_pdd_profiles_ref_count_init(int unit,
                        bcmptm_rm_tcam_fp_stage_t *stage_ptr);
/*!
 * \brief Get the start pointer to PDD profiles reference count
 *  segment of a slice.
 *
 * \param [in] unit Logical device id
 * \param [in] ltid Logical Table enum that is accessing the table.
 * \param [in] ltid_info LRD information for the ltid.
 * \param [in] pipe_id XGS/XFS pipe instance.
 * \param [in] stage id One of the FP_ING/FP_EGR_FP_VLAN
 * \param [in] slice_id Physical slice ID.
 * \param [out] ref_count_ptr Pointer to start PDD profile
 *              reference count of the slice.
 *
 * \retval SHR_E_NONE Success
 * \retval SHR_E_PARAM Invalid parameters
 */
extern int
bcmptm_rm_tcam_fp_pdd_profiles_ref_count_get(int unit,
                  bcmltd_sid_t ltid,
                  bcmptm_rm_tcam_lt_info_t *ltid_info,
                  int pipe_id,
                  bcmptm_rm_tcam_fp_stage_t *stage_fc,
                  uint8_t slice_id,
                  uint32_t **ref_count_ptr);
/*!
 * \brief Reserve indexes for new profiles in PDD profile table.
 *
 * \param [in] unit Logical device id
 * \param [in] iomd Input and Output meta data.
 * \param [in] slice_id Physical slice ID.
 * \param [in] num_slices Number of slices from the slice_id.
 * \param [out] hw_indexes Reserved indexes in PDD profile table.
 *
 * \retval SHR_E_NONE Success
 * \retval SHR_E_PARAM Invalid parameters
 */
extern int
bcmptm_rm_tcam_fp_pdd_profiles_reserve(int unit,
                                       bcmptm_rm_tcam_entry_iomd_t *iomd,
                                       uint8_t slice_id,
                                       uint8_t num_slices,
                                       uint8_t *hw_indexes);
/*!
 * \brief Unreserve indexes of profiles in PDD profile table.
 *
 * \param [in] unit Logical device id
 * \param [in] iomd Input and Output meta data.
 *
 * \retval SHR_E_NONE Success
 * \retval SHR_E_PARAM Invalid parameters
 */
extern int
bcmptm_rm_tcam_fp_pdd_profiles_unreserve(int unit,
                                         bcmptm_rm_tcam_entry_iomd_t *iomd,
                                         bool per_group_pdd);
/*!
 * \brief Copy PDD profiles from primary slice of a group to a
 *  newly expanded slice.
 *
 * \param [in] unit Logical device id
 * \param [in] iomd Input and Output meta data.
 * \param [in] new_slice_id Newly expanded physical slice ID.
 *
 * \retval SHR_E_NONE Success
 * \retval SHR_E_PARAM Invalid parameters
 */
extern int
bcmptm_rm_tcam_fp_pdd_profiles_copy(int unit,
                                    bcmptm_rm_tcam_entry_iomd_t *iomd,
                                    uint8_t new_slice_id);
/*!
 * \brief Clear the PDD profiles from a slice when the slice is
 *  released(happens when group is compressed) from the group.
 *
 * \param [in] unit Logical device id
 * \param [in] iomd Input and Output meta data.
 * \param [in] slice_id Physical slice ID that is freed.
 *
 * \retval SHR_E_NONE Success
 * \retval SHR_E_PARAM Invalid parameters
 */
extern int
bcmptm_rm_tcam_fp_pdd_profiles_clear(int unit,
                                     bcmptm_rm_tcam_entry_iomd_t *iomd,
                                     uint8_t slice_id);
#endif /* RM_TCAM_FP_PDD_H */
