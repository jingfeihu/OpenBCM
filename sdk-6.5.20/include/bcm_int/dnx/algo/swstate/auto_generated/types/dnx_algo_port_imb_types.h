/** \file algo/swstate/auto_generated/types/dnx_algo_port_imb_types.h
 *
 * sw state types (structs/enums/typedefs)
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 */
/*
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#ifndef __DNX_ALGO_PORT_IMB_TYPES_H__
#define __DNX_ALGO_PORT_IMB_TYPES_H__

#include <soc/dnxc/swstate/dnxc_sw_state_h_includes.h>
#include <bcm_int/dnx/algo/res_mngr/res_mngr.h>
#include <bcm_int/dnx/algo/res_mngr/res_mngr_internal.h>
#include <soc/dnx/dnx_data/auto_generated/dnx_data_nif.h>
/*
 * STRUCTs
 */

/**
 * DB for use by algo port imb
 */
typedef struct {
    /**
     * RMC ID resource manager
     */
    dnx_algo_res_t** rmc_id_res;
} dnx_algo_port_imb_db_t;


#endif /* __DNX_ALGO_PORT_IMB_TYPES_H__ */
