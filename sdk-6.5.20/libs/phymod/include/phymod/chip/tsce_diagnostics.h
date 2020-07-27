/*
 *         
 * 
 * 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 *         
 *     
 * DO NOT EDIT THIS FILE!
 */

#ifndef _TSCE_DIAGNOSTICS_H__H_
#define _TSCE_DIAGNOSTICS_H__H_

#include <phymod/phymod_definitions.h>
/*Set\get slicer position*/
int tsce_phy_rx_slicer_position_set(const phymod_phy_access_t* phy, uint32_t flags, const phymod_slicer_position_t* position);
int tsce_phy_rx_slicer_position_get(const phymod_phy_access_t* phy, uint32_t flags, phymod_slicer_position_t* position);

/*Get slicer range limitation*/
int tsce_phy_rx_slicer_position_max_get(const phymod_phy_access_t* phy, uint32_t flags, const phymod_slicer_position_t* position_min, const phymod_slicer_position_t* position_max);

/*set\get PRBS configuration*/
int tsce_phy_prbs_config_set(const phymod_phy_access_t* phy, uint32_t flags , const phymod_prbs_t* prbs);
int tsce_phy_prbs_config_get(const phymod_phy_access_t* phy, uint32_t flags , phymod_prbs_t* prbs);

/*Set\get PRBS enable state*/
int tsce_phy_prbs_enable_set(const phymod_phy_access_t* phy, uint32_t flags , uint32_t enable);
int tsce_phy_prbs_enable_get(const phymod_phy_access_t* phy, uint32_t flags , uint32_t* enable);

/*Get PRBS Status*/
int tsce_phy_prbs_status_get(const phymod_phy_access_t* phy, uint32_t flags, phymod_prbs_status_t* prbs_status);

/*Set\get pattern state*/
int tsce_phy_pattern_config_set(const phymod_phy_access_t* phy, const phymod_pattern_t* pattern);
int tsce_phy_pattern_config_get(const phymod_phy_access_t* phy, phymod_pattern_t* pattern);

/*Set\get pattern state*/
int tsce_phy_pattern_enable_set(const phymod_phy_access_t* phy, uint32_t enable, const phymod_pattern_t* pattern);
int tsce_phy_pattern_enable_get(const phymod_phy_access_t* phy, uint32_t* enable);

/*Get core diagnostics information*/
int tsce_core_diagnostics_get(const phymod_core_access_t* core, phymod_core_diagnostics_t* diag);

/*Get phy diagnostics information*/
int tsce_phy_pmd_info_dump(const phymod_phy_access_t* phy, const char* type);

/*Get phy diagnostics information*/
int tsce_phy_pcs_info_dump(const phymod_phy_access_t* phy, const char* type);

/*Get CL74 FEC Corrected Codeword Counter*/
int tsce_phy_fec_correctable_counter_get(const phymod_phy_access_t* phy, uint32_t* count);

/*Get CL74 FEC Uncorrected Codeword Counter*/
int tsce_phy_fec_uncorrectable_counter_get(const phymod_phy_access_t* phy, uint32_t* count);

/*Get PHY Stat Counter*/
int tsce_phy_stat_get(const phymod_phy_access_t* phy, phymod_phy_stat_t* stat);

/*Control one time fec error injection.*/
int tsce_phy_fec_error_inject_set(const phymod_phy_access_t* phy, uint16_t error_control_map, phymod_fec_error_mask_t bit_error_mask);
int tsce_phy_fec_error_inject_get(const phymod_phy_access_t* phy, uint16_t* error_control_map, phymod_fec_error_mask_t* bit_error_mask);

#endif /*_TSCE_DIAGNOSTICS_H_*/
