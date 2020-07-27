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

#include <phymod/phymod.h>
#include <phymod/phymod_system.h>
#include <phymod/phymod.h>
#include <phymod/phymod_dispatch.h>

#ifdef PHYMOD_TSCBH_SUPPORT

#include <phymod/chip/tscbh.h>

#include <phymod/chip/blackhawk.h>

__phymod__dispatch__t__ phymod_tscbh_driver = {

    tscbh_core_identify,
    tscbh_core_info_get,
    tscbh_core_lane_map_set,
    tscbh_core_lane_map_get,
    tscbh_core_reset_set,
    tscbh_core_reset_get,
    NULL, /* phymod_core_firmware_info_get */
    blackhawk_phy_firmware_core_config_set,
    blackhawk_phy_firmware_core_config_get,
    tscbh_phy_firmware_lane_config_set,
    tscbh_phy_firmware_lane_config_get,
    NULL, /* phymod_core_pll_sequencer_restart */
    NULL, /* phymod_core_wait_event */
    tscbh_phy_rx_restart,
    tscbh_phy_polarity_set,
    tscbh_phy_polarity_get,
    tscbh_phy_tx_set,
    tscbh_phy_tx_get,
    NULL, /* phymod_phy_training_tx_fir_post_set */
    NULL, /* phymod_phy_training_tx_fir_post_get */
    tscbh_phy_media_type_tx_get,
    blackhawk_phy_tx_override_set,
    blackhawk_phy_tx_override_get,
    NULL, /* phymod_phy_txpi_config_set */
    NULL, /* phymod_phy_txpi_config_get */
    blackhawk_phy_rx_set,
    blackhawk_phy_rx_get,
    blackhawk_phy_rx_adaptation_resume,
    tscbh_phy_reset_set,
    tscbh_phy_reset_get,
    tscbh_phy_power_set,
    tscbh_phy_power_get,
    NULL, /* phymod_phy_hg2_codec_control_set */
    NULL, /* phymod_phy_hg2_codec_control_get */
    tscbh_phy_tx_lane_control_set,
    tscbh_phy_tx_lane_control_get,
    tscbh_phy_rx_lane_control_set,
    tscbh_phy_rx_lane_control_get,
    NULL, /* phymod_phy_fec_enable_set */
    NULL, /* phymod_phy_fec_enable_get */
    tscbh_phy_fec_override_set,
    tscbh_phy_fec_override_get,
    NULL, /* phymod_phy_forced_speed_line_side_set */
    NULL, /* phymod_phy_forced_speed_line_side_get */
    NULL, /* phymod_phy_autoneg_line_side_set */
    NULL, /* phymod_phy_autoneg_line_side_get */
    NULL, /* phymod_phy_flow_control_mode_set */
    NULL, /* phymod_phy_flow_control_mode_get */
    NULL, /* phymod_phy_psm_cos_bmp_set */
    NULL, /* phymod_phy_psm_cos_bmp_get */
    NULL, /* phymod_phy_pfc_use_ip_cos_set */
    NULL, /* phymod_phy_pfc_use_ip_cos_get */
    NULL, /* phymod_phy_autoneg_oui_set */
    NULL, /* phymod_phy_autoneg_oui_get */
    NULL, /* phymod_phy_eee_set */
    NULL, /* phymod_phy_eee_get */
    NULL, /* phymod_phy_interface_config_set */
    NULL, /* phymod_phy_interface_config_get */
    tscbh_phy_cl72_set,
    tscbh_phy_cl72_get,
    tscbh_phy_cl72_status_get,
    NULL, /* phymod_phy_autoneg_ability_set */
    NULL, /* phymod_phy_autoneg_ability_get */
    NULL, /* phymod_phy_autoneg_remote_ability_get */
    tscbh_phy_autoneg_set,
    tscbh_phy_autoneg_get,
    NULL, /* phymod_phy_autoneg_restart_set */
    tscbh_phy_autoneg_status_get,
    tscbh_core_init,
    tscbh_phy_pll_multiplier_get,
    tscbh_phy_init,
    tscbh_phy_loopback_set,
    tscbh_phy_loopback_get,
    tscbh_phy_rx_pmd_locked_get,
    tscbh_phy_local_fault_info_get,
    tscbh_phy_rx_signal_detect_get,
    tscbh_phy_link_status_get,
    NULL, /* phymod_phy_status_dump */
    NULL, /* phymod_phy_pcs_userspeed_set */
    NULL, /* phymod_phy_pcs_userspeed_get */
    tscbh_phy_reg_read,
    tscbh_phy_reg_write,
    NULL, /* phymod_phy_private_read */
    NULL, /* phymod_phy_private_write */
    NULL, /* phymod_phy_rev_id */
    NULL, /* phymod_phy_lane_cross_switch_map_set */
    NULL, /* phymod_phy_lane_cross_switch_map_get */
    NULL, /* phymod_phy_intr_enable_set */
    NULL, /* phymod_phy_intr_enable_get */
    NULL, /* phymod_phy_intr_status_get */
    NULL, /* phymod_phy_intr_status_clear */
    NULL, /* phymod_phy_i2c_read */
    NULL, /* phymod_phy_i2c_write */
    NULL, /* phymod_phy_gpio_config_set */
    NULL, /* phymod_phy_gpio_config_get */
    NULL, /* phymod_phy_gpio_pin_value_set */
    NULL, /* phymod_phy_gpio_pin_value_get */
    NULL, /* phymod_timesync_config_set */
    NULL, /* phymod_timesync_config_get */
    tscbh_timesync_enable_set,
    tscbh_timesync_enable_get,
    NULL, /* phymod_timesync_nco_addend_set */
    NULL, /* phymod_timesync_nco_addend_get */
    NULL, /* phymod_timesync_framesync_mode_set */
    NULL, /* phymod_timesync_framesync_mode_get */
    NULL, /* phymod_timesync_local_time_set */
    NULL, /* phymod_timesync_local_time_get */
    NULL, /* phymod_timesync_load_ctrl_set */
    NULL, /* phymod_timesync_load_ctrl_get */
    NULL, /* phymod_timesync_tx_timestamp_offset_set */
    NULL, /* phymod_timesync_tx_timestamp_offset_get */
    NULL, /* phymod_timesync_rx_timestamp_offset_set */
    NULL, /* phymod_timesync_rx_timestamp_offset_get */
    NULL, /* phymod_timesync_capture_timestamp_get */
    NULL, /* phymod_timesync_heartbeat_timestamp_get */
    NULL, /* phymod_timesync_do_sync */
    tscbh_timesync_offset_set,
    tscbh_timesync_adjust_set,
    NULL, /* phymod_edc_config_set */
    NULL, /* phymod_edc_config_get */
    NULL, /* phymod_phy_core_mode_set */
    NULL, /* phymod_phy_core_mode_get */
    NULL, /* phymod_failover_mode_set */
    NULL, /* phymod_failover_mode_get */
    NULL, /* phymod_port_init */
    NULL, /* phymod_phy_autoneg_try_enable */
    NULL, /* phymod_debug_ether */
    NULL, /* phymod_reset_interface */
    NULL, /* phymod_phy_short_chn_mode_enable_set */
    NULL, /* phymod_phy_short_chn_mode_enable_get */
    NULL, /* phymod_port_enable_set */
    NULL, /* phymod_port_enable_get */
    blackhawk_phy_eye_margin_est_get,
    NULL, /* phymod_phy_multi_get */
    NULL, /* phymod_phy_rescal_set */
    NULL, /* phymod_phy_rescal_get */
    NULL, /* phymod_phy_sw_an_control_status_get */
    NULL, /* phymod_phy_sw_an_base_page_exchange_handler */
    NULL, /* phymod_phy_sw_an_lp_page_rdy_handler */
    NULL, /* phymod_phy_sw_an_advert_set */
    NULL, /* phymod_phy_sw_autoneg_enable */
    tscbh_phy_speed_config_set,
    tscbh_phy_speed_config_get,
    NULL, /* phymod_phy_op_mode_get */
    tscbh_phy_tx_taps_default_get,
    tscbh_phy_lane_config_default_get,
    tscbh_phy_firmware_load_info_get,
    tscbh_phy_autoneg_advert_ability_set,
    tscbh_phy_autoneg_advert_ability_get,
    tscbh_phy_autoneg_remote_advert_ability_get,
    NULL, /* phymod_phy_bond_in_pwrdn_override */
    tscbh_phy_tx_pam4_precoder_enable_set,
    tscbh_phy_tx_pam4_precoder_enable_get,
    NULL, /* phymod_phy_tx_phase_lock_set */
    tscbh_phy_pll_reconfig,
    blackhawk_phy_pll_pwrdn,
    NULL, /* phymod_phy_linkdown_transmit_set */
    NULL, /* phymod_phy_linkdown_transmit_get */
    tscbh_phy_synce_clk_ctrl_set,
    tscbh_phy_synce_clk_ctrl_get,
    tscbh_phy_pcs_enable_set,
    tscbh_phy_rx_ppm_get,
    blackhawk_phy_channel_loss_hint_set,
    blackhawk_phy_channel_loss_hint_get,
    tscbh_intr_handler,
    tscbh_timesync_tx_info_get,
    NULL, /* phymod_phy_master_set */
    NULL, /* phymod_phy_master_get */
    tscbh_phy_pcs_lane_swap_adjust,
    tscbh_phy_load_speed_id_entry,
    tscbh_phy_pmd_override_enable_set,
    NULL, /* phymod_phy_duplex_set */
    NULL, /* phymod_phy_duplex_get */
    blackhawk_phy_pmd_info_init,
    tscbh_phy_pll_powerdown_get,
    blackhawk_phy_pmd_info_size_get,
    tscbh_phy_fec_bypass_indication_set,
    tscbh_phy_fec_bypass_indication_get,
    NULL, /* phymod_phy_fec_corruption_period_set */
    NULL, /* phymod_phy_fec_corruption_period_get */
    tscbh_phy_codec_mode_set,
    tscbh_phy_codec_mode_get,
    NULL, /* phymod_phy_autoneg_speed_id_table_reload */
    tscbh_phy_rs_fec_rxp_get,
    NULL, /* phymod_phy_pcs_tx_fsm_check */
    NULL, /* phymod_phy_pcs_reset */
    NULL, /* phymod_phy_osr_mode_get */
    NULL, /* phymod_phy_ref_clk_get */
    tscbh_phy_interrupt_enable_set,
    tscbh_phy_interrupt_enable_get,
    NULL, /* phymod_phy_pcs_lane_map_set */
    blackhawk_phy_pll_clock_buffer_pwrdn,
    NULL, /* phymod_phy_50g_nofec_20k_am_spacing_enable_set */
    NULL, /* phymod_phy_50g_nofec_20k_am_spacing_enable_get */
    NULL, /* phymod_phy_rx_pmd_lock_counter_get */
    tscbh_phy_fec_three_cw_bad_state_get,
    NULL, /* phymod_phy_tdm_mode_update */
    blackhawk_phy_pll_rx_clock_buffer_bw_update,
};

#endif /* PHYMOD_TSCBH_SUPPORT */
