/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by npl-pcm from NPL Logical - Physical Map files
 * for device bcm56880_a0 and variant dna_4_6_6.
 *
 * Tool: $SDK/INTERNAL/fltg/bin/npl-pcm
 *
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */
#include <bcmltd/chip/bcmltd_id.h>
#include <bcmlrd/bcmlrd_types.h>
#include <bcmlrd/chip/bcm56880_a0/dna_4_6_6/bcm56880_a0_dna_4_6_6_lrd_table_pcm_data.h>
#include <bcmlrd/chip/bcm56880_a0/bcm56880_a0_tile_hcf.h>

const bcmlrd_pdd_info_t bcm56880_a0_dna_4_6_6_dt_em_fp_action_template_ing_obj_bus_em_ft_opaque_obj0_pdd_info[] = {
    {
      /*
       * BITS:  0 - 15
       * CONT:  ing_obj1__cont_3
       * LBUS:  ing_obj_bus.em_ft_opaque_obj_or_ifp_opaque_obj
       * CYCLE: 223
       * MAP:   ifta90__PDD
       */
        .phy_cont_id = 133,
        .sbr_phy_cont_id = 133,
        .phy_cont_size = 16,
        .offset = 0,
        .width = 16,
        .is_lsb = 0,
    },
};

const bcmlrd_pdd_info_t bcm56880_a0_dna_4_6_6_dt_em_fp_action_template_ing_cmd_bus_em_ft_drop_action_pdd_info[] = {
    {
      /*
       * BITS:  0 - 1
       * CONT:  ing_cmd3__cont_3
       * LBUS:  ing_cmd_bus.em_ft_drop_action
       * CYCLE: 223
       * MAP:   ifta90__PDD
       */
        .phy_cont_id = 103,
        .sbr_phy_cont_id = 103,
        .phy_cont_size = 4,
        .offset = 0,
        .width = 2,
        .is_lsb = 0,
    },
};

const bcmlrd_pdd_info_t bcm56880_a0_dna_4_6_6_dt_em_fp_action_template_ing_cmd_bus_destination_type_pdd_info[] = {
    {
      /*
       * BITS:  0 - 3
       * CONT:  ing_cmd2__cont_35
       * LBUS:  ing_cmd_bus.destination_type
       * CYCLE: 223
       * MAP:   ifta90__PDD
       */
        .phy_cont_id = 95,
        .sbr_phy_cont_id = 95,
        .phy_cont_size = 4,
        .offset = 0,
        .width = 4,
        .is_lsb = 0,
    },
};

const bcmlrd_pdd_info_t bcm56880_a0_dna_4_6_6_dt_em_fp_action_template_ing_cmd_bus_em_ft_copy_to_cpu_pdd_info[] = {
    {
      /*
       * BITS:  0 - 0
       * CONT:  ing_cmd3__cont_4
       * LBUS:  ing_cmd_bus.em_ft_copy_to_cpu
       * CYCLE: 223
       * MAP:   ifta90__PDD
       */
        .phy_cont_id = 104,
        .sbr_phy_cont_id = 104,
        .phy_cont_size = 4,
        .offset = 0,
        .width = 1,
        .is_lsb = 0,
    },
};

const bcmlrd_pdd_info_t bcm56880_a0_dna_4_6_6_dt_em_fp_action_template_ing_obj_bus_destination_pdd_info[] = {
    {
      /*
       * BITS:  0 - 15
       * CONT:  ing_obj0__cont_11
       * LBUS:  ing_obj_bus.destination
       * CYCLE: 223
       * MAP:   ifta90__PDD
       */
        .phy_cont_id = 121,
        .sbr_phy_cont_id = 121,
        .phy_cont_size = 16,
        .offset = 0,
        .width = 16,
        .is_lsb = 0,
    },
};

const bcmlrd_pdd_info_t bcm56880_a0_dna_4_6_6_dt_em_fp_action_template_ing_cmd_bus_em_ft_ioam_gbp_action_pdd_info[] = {
    {
      /*
       * BITS:  0 - 3
       * CONT:  ing_cmd2__cont_29
       * LBUS:  ing_cmd_bus.ifp_ioam_gbp_action
       * CYCLE: 223
       * MAP:   ifta90__PDD
       */
        .phy_cont_id = 89,
        .sbr_phy_cont_id = 89,
        .phy_cont_size = 4,
        .offset = 0,
        .width = 4,
        .is_lsb = 0,
    },
};

const bcmlrd_pdd_info_t bcm56880_a0_dna_4_6_6_dt_em_fp_action_template_ing_cmd_bus_pkt_flow_eligibility_pdd_info[] = {
    {
      /*
       * BITS:  0 - 3
       * CONT:  ing_cmd0__cont_10
       * LBUS:  ing_cmd_bus.pkt_flow_eligibility
       * CYCLE: 223
       * MAP:   ifta90__PDD
       */
        .phy_cont_id = 10,
        .sbr_phy_cont_id = 10,
        .phy_cont_size = 4,
        .offset = 0,
        .width = 4,
        .is_lsb = 0,
    },
};


const bcmlrd_field_pdd_info_t bcm56880_a0_dna_4_6_6_dt_em_fp_action_template_ing_obj_bus_em_ft_opaque_obj0_field_pdd_info = {
        .count = 1,
        .sbr_type = BCMLRD_SBR_EXTERNAL,
        .info = bcm56880_a0_dna_4_6_6_dt_em_fp_action_template_ing_obj_bus_em_ft_opaque_obj0_pdd_info,
};

const bcmlrd_field_pdd_info_t bcm56880_a0_dna_4_6_6_dt_em_fp_action_template_ing_cmd_bus_em_ft_drop_action_field_pdd_info = {
        .count = 1,
        .sbr_type = BCMLRD_SBR_EXTERNAL,
        .info = bcm56880_a0_dna_4_6_6_dt_em_fp_action_template_ing_cmd_bus_em_ft_drop_action_pdd_info,
};

const bcmlrd_field_pdd_info_t bcm56880_a0_dna_4_6_6_dt_em_fp_action_template_ing_cmd_bus_destination_type_field_pdd_info = {
        .count = 1,
        .sbr_type = BCMLRD_SBR_EXTERNAL,
        .info = bcm56880_a0_dna_4_6_6_dt_em_fp_action_template_ing_cmd_bus_destination_type_pdd_info,
};

const bcmlrd_field_pdd_info_t bcm56880_a0_dna_4_6_6_dt_em_fp_action_template_ing_cmd_bus_em_ft_copy_to_cpu_field_pdd_info = {
        .count = 1,
        .sbr_type = BCMLRD_SBR_EXTERNAL,
        .info = bcm56880_a0_dna_4_6_6_dt_em_fp_action_template_ing_cmd_bus_em_ft_copy_to_cpu_pdd_info,
};

const bcmlrd_field_pdd_info_t bcm56880_a0_dna_4_6_6_dt_em_fp_action_template_ing_obj_bus_destination_field_pdd_info = {
        .count = 1,
        .sbr_type = BCMLRD_SBR_EXTERNAL,
        .info = bcm56880_a0_dna_4_6_6_dt_em_fp_action_template_ing_obj_bus_destination_pdd_info,
};

const bcmlrd_field_pdd_info_t bcm56880_a0_dna_4_6_6_dt_em_fp_action_template_ing_cmd_bus_em_ft_ioam_gbp_action_field_pdd_info = {
        .count = 1,
        .sbr_type = BCMLRD_SBR_EXTERNAL,
        .info = bcm56880_a0_dna_4_6_6_dt_em_fp_action_template_ing_cmd_bus_em_ft_ioam_gbp_action_pdd_info,
};

const bcmlrd_field_pdd_info_t bcm56880_a0_dna_4_6_6_dt_em_fp_action_template_ing_cmd_bus_pkt_flow_eligibility_field_pdd_info = {
        .count = 1,
        .sbr_type = BCMLRD_SBR_EXTERNAL,
        .info = bcm56880_a0_dna_4_6_6_dt_em_fp_action_template_ing_cmd_bus_pkt_flow_eligibility_pdd_info,
};


const bcmlrd_field_info_t bcm56880_a0_dna_4_6_6_dt_em_fp_action_template_field_info[] = {
    {
        .name = "ing_obj_bus_em_ft_opaque_obj0",
        .id = BCM56880_A0_DNA_4_6_6_DT_EM_FP_ACTION_TEMPLATEt_ING_OBJ_BUS_EM_FT_OPAQUE_OBJ0f,
        .cont_info = NULL,
        .pdd_info = &bcm56880_a0_dna_4_6_6_dt_em_fp_action_template_ing_obj_bus_em_ft_opaque_obj0_field_pdd_info,
    },
    {
        .name = "ing_cmd_bus_em_ft_drop_action",
        .id = BCM56880_A0_DNA_4_6_6_DT_EM_FP_ACTION_TEMPLATEt_ING_CMD_BUS_EM_FT_DROP_ACTIONf,
        .cont_info = NULL,
        .pdd_info = &bcm56880_a0_dna_4_6_6_dt_em_fp_action_template_ing_cmd_bus_em_ft_drop_action_field_pdd_info,
    },
    {
        .name = "ing_cmd_bus_destination_type",
        .id = BCM56880_A0_DNA_4_6_6_DT_EM_FP_ACTION_TEMPLATEt_ING_CMD_BUS_DESTINATION_TYPEf,
        .cont_info = NULL,
        .pdd_info = &bcm56880_a0_dna_4_6_6_dt_em_fp_action_template_ing_cmd_bus_destination_type_field_pdd_info,
    },
    {
        .name = "ing_cmd_bus_em_ft_copy_to_cpu",
        .id = BCM56880_A0_DNA_4_6_6_DT_EM_FP_ACTION_TEMPLATEt_ING_CMD_BUS_EM_FT_COPY_TO_CPUf,
        .cont_info = NULL,
        .pdd_info = &bcm56880_a0_dna_4_6_6_dt_em_fp_action_template_ing_cmd_bus_em_ft_copy_to_cpu_field_pdd_info,
    },
    {
        .name = "ing_obj_bus_destination",
        .id = BCM56880_A0_DNA_4_6_6_DT_EM_FP_ACTION_TEMPLATEt_ING_OBJ_BUS_DESTINATIONf,
        .cont_info = NULL,
        .pdd_info = &bcm56880_a0_dna_4_6_6_dt_em_fp_action_template_ing_obj_bus_destination_field_pdd_info,
    },
    {
        .name = "ing_cmd_bus_em_ft_ioam_gbp_action",
        .id = BCM56880_A0_DNA_4_6_6_DT_EM_FP_ACTION_TEMPLATEt_ING_CMD_BUS_EM_FT_IOAM_GBP_ACTIONf,
        .cont_info = NULL,
        .pdd_info = &bcm56880_a0_dna_4_6_6_dt_em_fp_action_template_ing_cmd_bus_em_ft_ioam_gbp_action_field_pdd_info,
    },
    {
        .name = "ing_cmd_bus_pkt_flow_eligibility",
        .id = BCM56880_A0_DNA_4_6_6_DT_EM_FP_ACTION_TEMPLATEt_ING_CMD_BUS_PKT_FLOW_ELIGIBILITYf,
        .cont_info = NULL,
        .pdd_info = &bcm56880_a0_dna_4_6_6_dt_em_fp_action_template_ing_cmd_bus_pkt_flow_eligibility_field_pdd_info,
    },
};


const bcmlrd_table_pcm_info_t bcm56880_a0_dna_4_6_6_dt_em_fp_action_template_table_pcm_info = {
    .src_id = BCM56880_A0_DNA_4_6_6_DT_EM_FP_ACTION_TEMPLATEt,
    .field_count = 7,
    .field_info = bcm56880_a0_dna_4_6_6_dt_em_fp_action_template_field_info,
    .tile_id = BCMLRD_BCM56880_A0_TILE_IFTA90,
};
