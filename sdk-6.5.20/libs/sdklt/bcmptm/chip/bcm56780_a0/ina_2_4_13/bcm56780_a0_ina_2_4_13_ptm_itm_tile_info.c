/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by xfcr from Tile Info data files.
 *
 * Tool: $SDK/INTERNAL/fltg/bin/xfcr
 *
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */
#include "bcmltd/chip/bcmltd_id.h"
#include "bcmdrd/chip/bcm56780_a0_defs.h"
#include "bcm56780_a0_ina_2_4_13_ptm_em_tile.h"
#include "bcmptm/bcmptm_tile_info.h"

static const bcmptm_tile_acc_mode_info_t bcm56780_a0_ina_2_4_13_ptm_itm_acc_data_mode[8];
static const bcmptm_tile_acc_mode_list_t bcm56780_a0_ina_2_4_13_ptm_itm_acc_data_list;
static const bcmptm_tile_acc_mode_value_t bcm56780_a0_ina_2_4_13_ptm_itm_acc_data_efta10_i1t_00_acc_mode_values[1];
static const bcmptm_tile_acc_mode_value_t bcm56780_a0_ina_2_4_13_ptm_itm_acc_data_efta10_i1t_01_acc_mode_values[2];
static const bcmptm_tile_acc_mode_value_t bcm56780_a0_ina_2_4_13_ptm_itm_acc_data_efta10_i1t_02_acc_mode_values[1];
static const bcmptm_tile_acc_mode_value_t bcm56780_a0_ina_2_4_13_ptm_itm_acc_data_efta10_i1t_03_acc_mode_values[1];
static const bcmptm_tile_acc_mode_value_t bcm56780_a0_ina_2_4_13_ptm_itm_acc_data_ifta130_i1t_00_acc_mode_values[1];
static const bcmptm_tile_acc_mode_value_t bcm56780_a0_ina_2_4_13_ptm_itm_acc_data_ifta130_i1t_01_acc_mode_values[2];
static const bcmptm_tile_acc_mode_value_t bcm56780_a0_ina_2_4_13_ptm_itm_acc_data_ifta130_i1t_02_acc_mode_values[1];
static const bcmptm_tile_acc_mode_value_t bcm56780_a0_ina_2_4_13_ptm_itm_acc_data_ifta130_i1t_03_acc_mode_values[1];
static const bcmptm_tile_info_t bcm56780_a0_ina_2_4_13_ptm_itm_tile_data[10];
const bcmptm_tile_list_t bcm56780_a0_ina_2_4_13_ptm_itm_tile_list;
static const bcmptm_tile_memory_t bcm56780_a0_ina_2_4_13_ptm_itm_tile_data_egr_ifa_attributes[2];
static const bcmptm_tile_memory_t bcm56780_a0_ina_2_4_13_ptm_itm_tile_data_egr_l3_next_hop_1[3];
static const bcmptm_tile_memory_t bcm56780_a0_ina_2_4_13_ptm_itm_tile_data_egr_l3_next_hop_2[2];
static const bcmptm_tile_memory_t bcm56780_a0_ina_2_4_13_ptm_itm_tile_data_egr_l3_oif_2[2];
static const bcmptm_tile_memory_t bcm56780_a0_ina_2_4_13_ptm_itm_tile_data_egr_l3_tunnel_0[2];
static const bcmptm_tile_memory_t bcm56780_a0_ina_2_4_13_ptm_itm_tile_data_egr_l3_tunnel_1[2];
static const bcmptm_tile_memory_t bcm56780_a0_ina_2_4_13_ptm_itm_tile_data_ing_ipmc_remap_table[1];
static const bcmptm_tile_memory_t bcm56780_a0_ina_2_4_13_ptm_itm_tile_data_ing_l3_next_hop_1_table[3];
static const bcmptm_tile_memory_t bcm56780_a0_ina_2_4_13_ptm_itm_tile_data_ing_l3_next_hop_2_table[2];
static const bcmptm_tile_memory_t bcm56780_a0_ina_2_4_13_ptm_itm_tile_data_ing_l3_src_next_hop_table[2];

static const bcmptm_tile_acc_mode_info_t bcm56780_a0_ina_2_4_13_ptm_itm_acc_data_mode[8] = {
    {
        .fid_acc_modef = ACC_MODE1f,
        .sid_acc_moder = MEMDB_EFTA10_ACC_MODESr,
        .tile_id = EFTA10_I1T_01,
        .tile_mode_values =     bcm56780_a0_ina_2_4_13_ptm_itm_acc_data_efta10_i1t_01_acc_mode_values,
        .tile_mode_values_count = 2,/* implicit length assignment */
    },
    {
        .fid_acc_modef = ACC_MODE1f,
        .sid_acc_moder = MEMDB_IFTA130_ACC_MODESr,
        .tile_id = IFTA130_I1T_01,
        .tile_mode_values =     bcm56780_a0_ina_2_4_13_ptm_itm_acc_data_ifta130_i1t_01_acc_mode_values,
        .tile_mode_values_count = 2,/* implicit length assignment */
    },
    {
        .fid_acc_modef = ACC_MODE0f,
        .sid_acc_moder = MEMDB_EFTA10_ACC_MODESr,
        .tile_id = EFTA10_I1T_00,
        .tile_mode_values =     bcm56780_a0_ina_2_4_13_ptm_itm_acc_data_efta10_i1t_00_acc_mode_values,
        .tile_mode_values_count = 1,/* implicit length assignment */
    },
    {
        .fid_acc_modef = ACC_MODE0f,
        .sid_acc_moder = MEMDB_EFTA10_ACC_MODESr,
        .tile_id = EFTA10_I1T_03,
        .tile_mode_values =     bcm56780_a0_ina_2_4_13_ptm_itm_acc_data_efta10_i1t_03_acc_mode_values,
        .tile_mode_values_count = 1,/* implicit length assignment */
    },
    {
        .fid_acc_modef = ACC_MODE0f,
        .sid_acc_moder = MEMDB_EFTA10_ACC_MODESr,
        .tile_id = EFTA10_I1T_02,
        .tile_mode_values =     bcm56780_a0_ina_2_4_13_ptm_itm_acc_data_efta10_i1t_02_acc_mode_values,
        .tile_mode_values_count = 1,/* implicit length assignment */
    },
    {
        .fid_acc_modef = ACC_MODE0f,
        .sid_acc_moder = MEMDB_IFTA130_ACC_MODESr,
        .tile_id = IFTA130_I1T_02,
        .tile_mode_values =     bcm56780_a0_ina_2_4_13_ptm_itm_acc_data_ifta130_i1t_02_acc_mode_values,
        .tile_mode_values_count = 1,/* implicit length assignment */
    },
    {
        .fid_acc_modef = ACC_MODE0f,
        .sid_acc_moder = MEMDB_IFTA130_ACC_MODESr,
        .tile_id = IFTA130_I1T_00,
        .tile_mode_values =     bcm56780_a0_ina_2_4_13_ptm_itm_acc_data_ifta130_i1t_00_acc_mode_values,
        .tile_mode_values_count = 1,/* implicit length assignment */
    },
    {
        .fid_acc_modef = ACC_MODE0f,
        .sid_acc_moder = MEMDB_IFTA130_ACC_MODESr,
        .tile_id = IFTA130_I1T_03,
        .tile_mode_values =     bcm56780_a0_ina_2_4_13_ptm_itm_acc_data_ifta130_i1t_03_acc_mode_values,
        .tile_mode_values_count = 1,/* implicit length assignment */
    },
};
static const bcmptm_tile_acc_mode_list_t bcm56780_a0_ina_2_4_13_ptm_itm_acc_data_list = {
    .tile_acc_mode_info =     bcm56780_a0_ina_2_4_13_ptm_itm_acc_data_mode,
    .tile_acc_mode_info_count = 8,/* implicit length assignment */
};
static const bcmptm_tile_acc_mode_value_t bcm56780_a0_ina_2_4_13_ptm_itm_acc_data_efta10_i1t_00_acc_mode_values[1] = {
    {
        .acc_mode_value = 0,
        .tile_mode = EFTA10_I1T_00_MODE0,
    },
};
static const bcmptm_tile_acc_mode_value_t bcm56780_a0_ina_2_4_13_ptm_itm_acc_data_efta10_i1t_01_acc_mode_values[2] = {
    {
        .acc_mode_value = 1,
        .tile_mode = EFTA10_I1T_01_MODE0,
    },
    {
        .acc_mode_value = 1,
        .tile_mode = EFTA10_I1T_01_MODE1,
    },
};
static const bcmptm_tile_acc_mode_value_t bcm56780_a0_ina_2_4_13_ptm_itm_acc_data_efta10_i1t_02_acc_mode_values[1] = {
    {
        .acc_mode_value = 0,
        .tile_mode = EFTA10_I1T_02_MODE0,
    },
};
static const bcmptm_tile_acc_mode_value_t bcm56780_a0_ina_2_4_13_ptm_itm_acc_data_efta10_i1t_03_acc_mode_values[1] = {
    {
        .acc_mode_value = 0,
        .tile_mode = EFTA10_I1T_03_MODE0,
    },
};
static const bcmptm_tile_acc_mode_value_t bcm56780_a0_ina_2_4_13_ptm_itm_acc_data_ifta130_i1t_00_acc_mode_values[1] = {
    {
        .acc_mode_value = 0,
        .tile_mode = IFTA130_I1T_00_MODE0,
    },
};
static const bcmptm_tile_acc_mode_value_t bcm56780_a0_ina_2_4_13_ptm_itm_acc_data_ifta130_i1t_01_acc_mode_values[2] = {
    {
        .acc_mode_value = 1,
        .tile_mode = IFTA130_I1T_01_MODE0,
    },
    {
        .acc_mode_value = 1,
        .tile_mode = IFTA130_I1T_01_MODE1,
    },
};
static const bcmptm_tile_acc_mode_value_t bcm56780_a0_ina_2_4_13_ptm_itm_acc_data_ifta130_i1t_02_acc_mode_values[1] = {
    {
        .acc_mode_value = 0,
        .tile_mode = IFTA130_I1T_02_MODE0,
    },
};
static const bcmptm_tile_acc_mode_value_t bcm56780_a0_ina_2_4_13_ptm_itm_acc_data_ifta130_i1t_03_acc_mode_values[1] = {
    {
        .acc_mode_value = 0,
        .tile_mode = IFTA130_I1T_03_MODE0,
    },
};
static const bcmptm_tile_info_t bcm56780_a0_ina_2_4_13_ptm_itm_tile_data[10] = {
    {
        .memory =     bcm56780_a0_ina_2_4_13_ptm_itm_tile_data_egr_ifa_attributes,
        .memory_count = 2,/* implicit length assignment */
        .sid = BCM56780_A0_INA_2_4_13_EGR_IFA_ATTRIBUTESt,
    },
    {
        .memory =     bcm56780_a0_ina_2_4_13_ptm_itm_tile_data_egr_l3_next_hop_1,
        .memory_count = 3,/* implicit length assignment */
        .sid = BCM56780_A0_INA_2_4_13_EGR_L3_NEXT_HOP_1t,
    },
    {
        .memory =     bcm56780_a0_ina_2_4_13_ptm_itm_tile_data_egr_l3_next_hop_2,
        .memory_count = 2,/* implicit length assignment */
        .sid = BCM56780_A0_INA_2_4_13_EGR_L3_NEXT_HOP_2t,
    },
    {
        .memory =     bcm56780_a0_ina_2_4_13_ptm_itm_tile_data_egr_l3_oif_2,
        .memory_count = 2,/* implicit length assignment */
        .sid = BCM56780_A0_INA_2_4_13_EGR_L3_OIF_2t,
    },
    {
        .memory =     bcm56780_a0_ina_2_4_13_ptm_itm_tile_data_egr_l3_tunnel_0,
        .memory_count = 2,/* implicit length assignment */
        .sid = BCM56780_A0_INA_2_4_13_EGR_L3_TUNNEL_0t,
    },
    {
        .memory =     bcm56780_a0_ina_2_4_13_ptm_itm_tile_data_egr_l3_tunnel_1,
        .memory_count = 2,/* implicit length assignment */
        .sid = BCM56780_A0_INA_2_4_13_EGR_L3_TUNNEL_1t,
    },
    {
        .memory =     bcm56780_a0_ina_2_4_13_ptm_itm_tile_data_ing_ipmc_remap_table,
        .memory_count = 1,/* implicit length assignment */
        .sid = BCM56780_A0_INA_2_4_13_ING_IPMC_REMAP_TABLEt,
    },
    {
        .memory =     bcm56780_a0_ina_2_4_13_ptm_itm_tile_data_ing_l3_next_hop_1_table,
        .memory_count = 3,/* implicit length assignment */
        .sid = BCM56780_A0_INA_2_4_13_ING_L3_NEXT_HOP_1_TABLEt,
    },
    {
        .memory =     bcm56780_a0_ina_2_4_13_ptm_itm_tile_data_ing_l3_next_hop_2_table,
        .memory_count = 2,/* implicit length assignment */
        .sid = BCM56780_A0_INA_2_4_13_ING_L3_NEXT_HOP_2_TABLEt,
    },
    {
        .memory =     bcm56780_a0_ina_2_4_13_ptm_itm_tile_data_ing_l3_src_next_hop_table,
        .memory_count = 2,/* implicit length assignment */
        .sid = BCM56780_A0_INA_2_4_13_ING_L3_SRC_NEXT_HOP_TABLEt,
    },
};
const bcmptm_tile_list_t bcm56780_a0_ina_2_4_13_ptm_itm_tile_list = {
    .tile_acc_mode_list = &bcm56780_a0_ina_2_4_13_ptm_itm_acc_data_list,
    .tile_info =     bcm56780_a0_ina_2_4_13_ptm_itm_tile_data,
    .tile_info_count = 10,/* implicit length assignment */
};
static const bcmptm_tile_memory_t bcm56780_a0_ina_2_4_13_ptm_itm_tile_data_egr_ifa_attributes[2] = {
    {
        .instance = 0,
        .logical_multiplier = 2,
        .pt_index_bit_size = 8,
        .sid = MEMDB_EFTA20_2P_MEM2m,
        .size = 4096,
        .tile_id = EFTA20_I1T_05,
        .tile_mode = EFTA20_I1T_05_MODE0,
    },
    {
        .instance = 0,
        .logical_multiplier = 2,
        .pt_index_bit_size = 8,
        .sid = MEMDB_EFTA20_MEM1m,
        .size = 2048,
        .tile_id = EFTA20_I1T_03,
        .tile_mode = EFTA20_I1T_03_MODE1,
    },
};
static const bcmptm_tile_memory_t bcm56780_a0_ina_2_4_13_ptm_itm_tile_data_egr_l3_next_hop_1[3] = {
    {
        .instance = 0,
        .logical_multiplier = 2,
        .pt_index_bit_size = 16,
        .sid = MEMDB_EFTA10_MEM0m,
        .size = 16384,
        .tile_id = EFTA10_I1T_00,
        .tile_mode = EFTA10_I1T_00_MODE0,
    },
    {
        .instance = 0,
        .logical_multiplier = 2,
        .pt_index_bit_size = 16,
        .sid = MEMDB_EFTA10_MEM2m,
        .size = 8192,
        .tile_id = EFTA10_I1T_01,
        .tile_mode = EFTA10_I1T_01_MODE1,
    },
    {
        .instance = 2,
        .logical_multiplier = 2,
        .pt_index_bit_size = 16,
        .sid = MEMDB_EFTA10_MEM1m,
        .size = 8192,
        .tile_id = EFTA10_I1T_01,
        .tile_mode = EFTA10_I1T_01_MODE1,
    },
};
static const bcmptm_tile_memory_t bcm56780_a0_ina_2_4_13_ptm_itm_tile_data_egr_l3_next_hop_2[2] = {
    {
        .instance = 0,
        .logical_multiplier = 2,
        .pt_index_bit_size = 15,
        .sid = MEMDB_EFTA10_MEM2m,
        .size = 8192,
        .tile_id = EFTA10_I1T_01,
        .tile_mode = EFTA10_I1T_01_MODE0,
    },
    {
        .instance = 2,
        .logical_multiplier = 2,
        .pt_index_bit_size = 15,
        .sid = MEMDB_EFTA10_MEM1m,
        .size = 8192,
        .tile_id = EFTA10_I1T_01,
        .tile_mode = EFTA10_I1T_01_MODE0,
    },
};
static const bcmptm_tile_memory_t bcm56780_a0_ina_2_4_13_ptm_itm_tile_data_egr_l3_oif_2[2] = {
    {
        .instance = 0,
        .logical_multiplier = 2,
        .pt_index_bit_size = 13,
        .sid = MEMDB_EFTA20_2P_MEM0m,
        .size = 4096,
        .tile_id = EFTA20_I1T_00,
        .tile_mode = EFTA20_I1T_00_MODE0,
    },
    {
        .instance = 0,
        .logical_multiplier = 2,
        .pt_index_bit_size = 13,
        .sid = MEMDB_EFTA20_MEM0m,
        .size = 2048,
        .tile_id = EFTA20_I1T_02,
        .tile_mode = EFTA20_I1T_02_MODE1,
    },
};
static const bcmptm_tile_memory_t bcm56780_a0_ina_2_4_13_ptm_itm_tile_data_egr_l3_tunnel_0[2] = {
    {
        .instance = 0,
        .logical_multiplier = 1,
        .pt_index_bit_size = 12,
        .sid = MEMDB_EFTA20_2P_MEM0m,
        .size = 4096,
        .tile_id = EFTA20_I1T_00,
        .tile_mode = EFTA20_I1T_00_MODE1,
    },
    {
        .instance = 0,
        .logical_multiplier = 1,
        .pt_index_bit_size = 12,
        .sid = MEMDB_EFTA20_MEM0m,
        .size = 2048,
        .tile_id = EFTA20_I1T_02,
        .tile_mode = EFTA20_I1T_02_MODE0,
    },
};
static const bcmptm_tile_memory_t bcm56780_a0_ina_2_4_13_ptm_itm_tile_data_egr_l3_tunnel_1[2] = {
    {
        .instance = 0,
        .logical_multiplier = 1,
        .pt_index_bit_size = 12,
        .sid = MEMDB_EFTA20_2P_MEM2m,
        .size = 4096,
        .tile_id = EFTA20_I1T_05,
        .tile_mode = EFTA20_I1T_05_MODE1,
    },
    {
        .instance = 0,
        .logical_multiplier = 1,
        .pt_index_bit_size = 12,
        .sid = MEMDB_EFTA20_MEM1m,
        .size = 2048,
        .tile_id = EFTA20_I1T_03,
        .tile_mode = EFTA20_I1T_03_MODE0,
    },
};
static const bcmptm_tile_memory_t bcm56780_a0_ina_2_4_13_ptm_itm_tile_data_ing_ipmc_remap_table[1] = {
    {
        .instance = 0,
        .logical_multiplier = 2,
        .pt_index_bit_size = 14,
        .sid = MEMDB_IFTA130_MEM4m,
        .size = 16384,
        .tile_id = IFTA130_I1T_03,
        .tile_mode = IFTA130_I1T_03_MODE0,
    },
};
static const bcmptm_tile_memory_t bcm56780_a0_ina_2_4_13_ptm_itm_tile_data_ing_l3_next_hop_1_table[3] = {
    {
        .instance = 0,
        .logical_multiplier = 2,
        .pt_index_bit_size = 16,
        .sid = MEMDB_IFTA130_MEM0m,
        .size = 16384,
        .tile_id = IFTA130_I1T_00,
        .tile_mode = IFTA130_I1T_00_MODE0,
    },
    {
        .instance = 0,
        .logical_multiplier = 2,
        .pt_index_bit_size = 16,
        .sid = MEMDB_IFTA130_MEM2m,
        .size = 8192,
        .tile_id = IFTA130_I1T_01,
        .tile_mode = IFTA130_I1T_01_MODE1,
    },
    {
        .instance = 2,
        .logical_multiplier = 2,
        .pt_index_bit_size = 16,
        .sid = MEMDB_IFTA130_MEM1m,
        .size = 8192,
        .tile_id = IFTA130_I1T_01,
        .tile_mode = IFTA130_I1T_01_MODE1,
    },
};
static const bcmptm_tile_memory_t bcm56780_a0_ina_2_4_13_ptm_itm_tile_data_ing_l3_next_hop_2_table[2] = {
    {
        .instance = 0,
        .logical_multiplier = 2,
        .pt_index_bit_size = 15,
        .sid = MEMDB_IFTA130_MEM2m,
        .size = 8192,
        .tile_id = IFTA130_I1T_01,
        .tile_mode = IFTA130_I1T_01_MODE0,
    },
    {
        .instance = 2,
        .logical_multiplier = 2,
        .pt_index_bit_size = 15,
        .sid = MEMDB_IFTA130_MEM1m,
        .size = 8192,
        .tile_id = IFTA130_I1T_01,
        .tile_mode = IFTA130_I1T_01_MODE0,
    },
};
static const bcmptm_tile_memory_t bcm56780_a0_ina_2_4_13_ptm_itm_tile_data_ing_l3_src_next_hop_table[2] = {
    {
        .instance = 0,
        .logical_multiplier = 2,
        .pt_index_bit_size = 16,
        .sid = MEMDB_IFTA130_MEM3m,
        .size = 16384,
        .tile_id = IFTA130_I1T_02,
        .tile_mode = IFTA130_I1T_02_MODE0,
    },
    {
        .instance = 0,
        .logical_multiplier = 2,
        .pt_index_bit_size = 16,
        .sid = MEMDB_IFTA130_MEM4m,
        .size = 16384,
        .tile_id = IFTA130_I1T_03,
        .tile_mode = IFTA130_I1T_03_MODE1,
    },
};

