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

/*! \file bcmpkt_ipv4_t.h
 *
 *  IPV4_T access interface.
 */

#ifndef BCMPKT_IPV4_T_H
#define BCMPKT_IPV4_T_H

#include <shr/shr_pb.h>
#include <shr/shr_bitop.h>
#include <sal/sal_types.h>
#include <bcmlrd/bcmlrd_conf.h>
#include <bcmpkt/flexhdr/bcmpkt_ipv4_t_defs.h>
#include <bcmdrd/bcmdrd_types.h>

/*!
 * \name IPV4_T Dumping flags.
 * \anchor BCMPKT_IPV4_T_DUMP_F_XXX
 */
/*! \{ */
/*!
 * Dump all fields contents.
 */
#define BCMPKT_IPV4_T_DUMP_F_ALL         0
/*!
 * Dump none zero field content only.
 */
#define BCMPKT_IPV4_T_DUMP_F_NONE_ZERO   1
/*! \} */

/*! \brief IPV4_T field ID supported bit array.
 * Array of bits indicating whether a IPV4_T field ID is supported by a given
 * device type.
 */
typedef struct bcmpkt_ipv4_t_fid_support_s {
    /*! Field ID bitmap container */
    SHR_BITDCLNAME(fbits, BCMPKT_IPV4_T_FID_COUNT);
} bcmpkt_ipv4_t_fid_support_t;

/*!
 * \name Utility macros for \ref bcmpkt_ipv4_t_fid_support_t.
 * \anchor BCMPKT_IPV4_T_SUPPORT_OPS
 */
/*! \{ */
/*!
 * Macro to get a field ID's supported status.
 *
 * \retval zero Not supported
 * \retval non-zero Supported
 */
#define BCMPKT_IPV4_T_FID_SUPPORT_GET(_support, _fid) \
        SHR_BITGET(((_support).fbits), (_fid))

/*!
 * Iterate over all supported IPV4_T field IDs in the \c _support.
 */
#define BCMPKT_IPV4_T_FID_SUPPORT_ITER(_support, _fid) \
    for(_fid = 0; _fid < BCMPKT_IPV4_T_FID_COUNT; _fid++) \
        if(BCMPKT_IPV4_T_FID_SUPPORT_GET(_support, _fid))
/*! \} */

/*!
 * \brief Get value from a IPV4_T field.
 *
 * \param [in] variant Variant type.
 * \param [in] ipv4_t IPV4_T handle.
 * \param [in] fid IPV4_T field ID, refer to \ref BCMPKT_IPV4_T_XXX.
 * \param [out] val Field value.
 *
 * \retval SHR_E_NONE success.
 * \retval SHR_E_PARAM Check parameters failed.
 * \retval SHR_E_UNAVAIL Not support the field.
 */
extern int
bcmpkt_ipv4_t_field_get(bcmlrd_variant_t variant, uint32_t *ipv4_t,
                                     int fid, uint32_t *val);

/*!
 * \brief Set value into a IPV4_T field.
 *
 * \param [in] variant Variant type.
 * \param [in,out] ipv4_t IPV4_T handle.
 * \param [in] fid IPV4_T field ID, refer to \ref BCMPKT_IPV4_T_XXX.
 * \param [in] val Set value.
 *
 * \retval SHR_E_NONE success.
 * \retval SHR_E_PARAM Check parameters failed.
 * \retval SHR_E_UNAVAIL Not support the field.
 */
extern int
bcmpkt_ipv4_t_field_set(bcmlrd_variant_t variant, uint32_t *ipv4_t,
                                     int fid, uint32_t val);
/*!
 * \brief Check if IPV4_T is supported.
 *
 * \param [in] variant Variant type.
 * \param [in, out] is_supported Supported for IPV4_T.
 *
 * \retval SHR_E_NONE success.
 * \retval SHR_E_PARAM Check parameters failed.
 * \retval SHR_E_UNAVAIL Not supported.
 */
extern int
bcmpkt_ipv4_t_is_supported(bcmlrd_variant_t variant, bool *is_supported);

/*!
 * \brief Get field name for a given IPV4_T field ID.
 *
 * \param [in] fid IPV4_T field ID, refer to \ref BCMPKT_IPV4_T_XXX.
 * \param [out] name IPV4_T field name string.
 *
 * \retval SHR_E_NONE success.
 * \retval SHR_E_PARAM Check parameters failed.
 */
extern int
bcmpkt_ipv4_t_field_name_get(int fid, char **name);

/*!
 * \brief Get field ID for a given IPV4_T field name.
 *
 * \param [in] name IPV4_T field name string.
 * \param [out] fid IPV4_T Field ID.
 *
 * \retval SHR_E_NONE success.
 * \retval SHR_E_PARAM Check parameters failed.
 * \retval SHR_E_NOT_FOUND Not found the name.
 */
extern int
bcmpkt_ipv4_t_field_id_get(char* name, int *fid);

/*!
 * \brief Get supported IPV4_T field IDs for a given device type.
 *
 * This function returns a structure with information about the IPV4_T field IDs
 * a given device type supports.
 *
 * Use \ref BCMPKT_IPV4_T_FID_SUPPORT_GET on the returned structure to get the
 * supported status of a specific field ID.
 *
 * \param [in] variant Variant type.
 * \param [out] support Field ID supported status bitmap.
 *
 * \retval SHR_E_NONE success.
 * \retval SHR_E_PARAM Check parameters failed.
 * \retval SHR_E_INTERNAL API internal error.
 */
extern int
bcmpkt_ipv4_t_fid_support_get(bcmlrd_variant_t variant,
                           bcmpkt_ipv4_t_fid_support_t *support);

/*!
 * \brief Dump all supported IPV4_T fields into \c pb.
 *
 * If view_name is given, dump common fields and the fields belonging to the
 * view. If view_name is NULL, dump common fields and the fields of all view's.
 * If view_name is unknown, only dump common fields.
 *
 * \param [in] variant variant type.
 * \param [in] view_name IPV4_T view name.
 * \param [out] pb Print buffer handle.
 *
 * \retval SHR_E_NONE success
 * \retval SHR_E_PARAM Check parameter failed
 * \retval SHR_E_INTERNAL API internal error.
 */
extern int
bcmpkt_ipv4_t_field_list_dump(bcmlrd_variant_t variant,
                           char *view_name, shr_pb_t *pb);

/*!
 * \brief Dump IPV4_T content into \c pb.
 *
 * This function is used for dumping the content of a IPV4_T. If the
 * BCMPKT_IPV4_T_DUMP_F_NONE_ZERO is set, only dump none zero fields.
 *
 * \param [in] variant Variant type.
 * \param [in] ipv4_t IPV4_T handle.
 * \param [in] flags Defined as \ref BCMPKT_IPV4_T_DUMP_F_XXX.
 * \param [out] pb Print buffer handle.
 *
 * \retval SHR_E_NONE success.
 * \retval SHR_E_PARAM Check parameters failed.
 */
extern int
bcmpkt_ipv4_t_dump(bcmlrd_variant_t variant, uint32_t *ipv4_t,
                uint32_t flags, shr_pb_t *pb);

#endif /* BCMPKT_IPV4_T_H */
