/*
 * 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */
#include <soc/debug.h>
#include <soc/drv.h>
#include <soc/mem.h>
#include <bcm/switch.h>
#include <bcm/error.h>
#include <bcm_int/esw/switch.h>

/* Helper routines for argument translation */

static int
_bool_invert(int unit, int arg, int set)
{
    /* Same for both set/get */
    return !arg;
}

bcm_switch_binding_t apache_bindings[] =
{
    { bcmSwitchL3SrcBindFailToCpu, 0, 
        CPU_CONTROL_Mr, MAC_BIND_FAILf,
        NULL, 0},
    { bcmSwitchTunnelIp4IdShared, 0, 
        EGR_TUNNEL_ID_MASKr, SHARED_FRAG_ID_ENABLEf,
        NULL, 0},
    { bcmSwitchL3InterfaceUrpfEnable, 0,
       ING_CONFIG_64r, L3IIF_URPF_SELECTf,
        NULL, soc_feature_urpf },
    { bcmSwitchClassBasedMoveFailPktToCpu, 0, 
        CPU_CONTROL_1r, CLASS_BASED_SM_PREVENTED_TOCPUf,
        NULL, soc_feature_class_based_learning },
    { bcmSwitchL3UrpfFailToCpu,            0,
        CPU_CONTROL_1r, URPF_MISS_TOCPUf,
        NULL, soc_feature_urpf },
    { bcmSwitchClassBasedMoveFailPktDrop,  0,
        ING_MISC_CONFIG2r, CLASS_BASED_SM_PREVENTED_DROPf,
        NULL, soc_feature_class_based_learning },
    { bcmSwitchSTPBlockedFieldBypass,      0,
        ING_MISC_CONFIG2r, BLOCKED_PORTS_FP_DISABLEf,
        NULL, 0},
    { bcmSwitchRateLimitLinear,            0,
        MISCCONFIGr, ITU_MODE_SELf,
        _bool_invert, 0},
    { bcmSwitchRemoteLearnTrust,           0,
        ING_CONFIG_64r, IGNORE_HG_HDR_DONOT_LEARNf,
        _bool_invert, 0 },
    { bcmSwitchMldDirectAttachedOnly,      0,
        ING_CONFIG_64r, MLD_CHECKS_ENABLEf,
        NULL, soc_feature_igmp_mld_support },
    { bcmSwitchSharedVlanL2McastEnable,    0,
        ING_CONFIG_64r, LOOKUP_L2MC_WITH_FID_IDf,
        NULL, 0},
    { bcmSwitchMldUcastEnable,             0,
        ING_CONFIG_64r, MLD_PKTS_UNICAST_IGNOREf,
        _bool_invert, soc_feature_igmp_mld_support },
    { bcmSwitchSharedVlanEnable, 0,
        ING_CONFIG_64r, SVL_ENABLEf,
        NULL, 0},
    { bcmSwitchIgmpReservedMcastEnable,    0,
        ING_CONFIG_64r, IPV4_RESERVED_MC_ADDR_IGMP_ENABLEf,
        NULL, soc_feature_igmp_mld_support },
    { bcmSwitchMldReservedMcastEnable,     0,
        ING_CONFIG_64r, IPV6_RESERVED_MC_ADDR_MLD_ENABLEf,
        NULL, soc_feature_igmp_mld_support },
    { bcmSwitchIgmpUcastEnable,            0,
        ING_CONFIG_64r, IGMP_PKTS_UNICAST_IGNOREf,
        _bool_invert, soc_feature_igmp_mld_support },
    { bcmSwitchPortEgressBlockL3,          0,
        ING_CONFIG_64r, APPLY_EGR_MASK_ON_L3f,
        NULL, 0},
    { bcmSwitchPortEgressBlockL2,          0,
        ING_CONFIG_64r, APPLY_EGR_MASK_ON_L2f,
        NULL, 0},
    { bcmSwitchHgHdrExtLengthEnable,       0,
        ING_CONFIG_64r, IGNORE_HG_HDR_HDR_EXT_LENf,
        _bool_invert, 0 },
    { bcmSwitchIp4McastL2DestCheck,        0,
        ING_CONFIG_64r, IPV4_MC_MACDA_CHECK_ENABLEf,
        NULL, 0},
    { bcmSwitchIp6McastL2DestCheck,        0,
        ING_CONFIG_64r, IPV6_MC_MACDA_CHECK_ENABLEf,
        NULL, 0},
    { bcmSwitchL3TunnelUrpfMode,           0,
        ING_CONFIG_64r, TUNNEL_URPF_MODEf,
        NULL, soc_feature_urpf },
    { bcmSwitchL3TunnelUrpfDefaultRoute,   0,
        ING_CONFIG_64r, TUNNEL_URPF_DEFAULTROUTECHECKf,
        _bool_invert, soc_feature_urpf },
    { bcmSwitchMirrorStackMode, 0,
        ING_CONFIG_64r, STACK_MODEf,
        NULL, soc_feature_src_modid_blk },
    { bcmSwitchMirrorSrcModCheck, 0,
        ING_CONFIG_64r, FB_A0_COMPATIBLEf,
        NULL, soc_feature_src_modid_blk },
    { bcmSwitchProxySrcKnockout, 0,
        IHG_LOOKUPr, REMOVE_MH_SRC_PORTf,
        NULL, soc_feature_proxy_port_property },
    { bcmSwitchDosAttackToCpu, 0,
        CPU_CONTROL_0r, DOSATTACK_TOCPUf,
        NULL, 0 },
    { bcmSwitchParityErrorToCpu, 0,
        CPU_CONTROL_0r, PARITY_ERR_TOCPUf,
        NULL, soc_feature_parity_err_tocpu },
    { bcmSwitchUnknownVlanToCpu, 0,
        CPU_CONTROL_0r, UVLAN_TOCPUf,
        NULL, 0 },
    { bcmSwitchSourceMacZeroDrop, 0,
        CPU_CONTROL_0r, MACSA_ALL_ZERO_DROPf,
        NULL, 0},
    { bcmSwitchMplsSequenceErrToCpu, 0,
        ING_MISC_CONFIGr, MPLS_SEQ_NUM_FAIL_TOCPUf,
        NULL, 0},
    { bcmSwitchMplsLabelMissToCpu, 0,
        CPU_CONTROL_Mr, MPLS_LABEL_MISSf,
        NULL, 0},
    { bcmSwitchMplsTtlErrToCpu, 0,
        CPU_CONTROL_Mr, MPLS_TTL_CHECK_FAILf,
        NULL, 0},
    { bcmSwitchMplsInvalidL3PayloadToCpu, 0,
        CPU_CONTROL_Mr, MPLS_INVALID_PAYLOADf,
        NULL, 0},
    { bcmSwitchMplsInvalidActionToCpu, 0,
        CPU_CONTROL_Mr, MPLS_INVALID_ACTIONf,
        NULL, 0},
    { bcmSwitchSharedVlanMismatchToCpu, 0,
        CPU_CONTROL_0r, PVLAN_VID_MISMATCH_TOCPUf ,
        NULL, 0},
    { bcmSwitchForceForwardFabricTrunk, 0,
        ING_MISC_CONFIGr, LOCAL_SW_DISABLE_HGTRUNK_RES_ENf,
        NULL, 0},
    { bcmSwitchFieldMultipathHashSeed, 0,
        FP_ECMP_HASH_CONTROLr, ECMP_HASH_SALTf,
        NULL, 0},
    { bcmSwitchMplsPortIndependentLowerRange1, 0,
        GLOBAL_MPLS_RANGE_1_LOWERr, LABELf,
        NULL, 0},
    { bcmSwitchMplsPortIndependentUpperRange1, 0,
        GLOBAL_MPLS_RANGE_1_UPPERr, LABELf,
        NULL, 0},
    { bcmSwitchMplsPortIndependentLowerRange2, 0,
       GLOBAL_MPLS_RANGE_2_LOWERr, LABELf,
       NULL, 0},
    { bcmSwitchMplsPortIndependentUpperRange2, 0,
        GLOBAL_MPLS_RANGE_2_UPPERr, LABELf,
        NULL, 0},       
    { bcmSwitchL3UrpfRouteEnableExternal, 0,
       L3_DEFIP_RPF_CONTROLr, DEFIP_RPF_ENABLEf,
       NULL, soc_feature_urpf},
    { bcmSwitchMplsPWControlWordToCpu, 0,
       ING_MISC_CONFIGr, PWACH_TOCPUf,
       NULL, soc_feature_mpls},
    { bcmSwitchCpuToCpuEnable, 0,
        ING_MISC_CONFIGr, DO_NOT_COPY_FROM_CPU_TO_CPUf,
        _bool_invert, 0 },
    { bcmSwitchL3UrpfRouteEnable, 0,
        L3_DEFIP_RPF_CONTROLr, DEFIP_RPF_ENABLEf,
        NULL, soc_feature_urpf},        
    { bcmSwitchBpduInvalidVlanDrop, 0, 
        EGR_CONFIG_1r, BPDU_INVALID_VLAN_DROPf,
        NULL, soc_feature_igmp_mld_support },
    { bcmSwitchMirrorInvalidVlanDrop, 0, 
        EGR_CONFIG_1r, MIRROR_INVALID_VLAN_DROPf,
        NULL, soc_feature_igmp_mld_support },
    { bcmSwitchMcastFloodBlocking, 0, 
        IGMP_MLD_PKT_CONTROLr, PFM_RULE_APPLYf,
        NULL, soc_feature_igmp_mld_support },
    { bcmSwitchIpmcTtl1ToCpu, 0, 
        CPU_CONTROL_1r, IPMC_TTL1_ERR_TOCPUf,
        NULL, 0 },
    { bcmSwitchL3UcastTtl1ToCpu, 0,
        CPU_CONTROL_1r, L3UC_TTL1_ERR_TOCPUf,
        NULL, 0 },
    { bcmSwitchDhcpLearn, 0,
        ING_MISC_CONFIG2r, DO_NOT_LEARN_DHCPf,
        NULL, 0 },
    { bcmSwitchUnknownIpmcAsMcast, 0, 
        ING_MISC_CONFIG2r, IPMC_MISS_AS_L2MCf,
        NULL, 0 },
    { bcmSwitchTunnelUnknownIpmcDrop, 0, 
        ING_MISC_CONFIG2r, UNKNOWN_TUNNEL_IPMC_DROPf,
        NULL, 0 },
    { bcmSwitchMcastUnknownErrToCpu, 0, 
        CPU_CONTROL_1r, MC_INDEX_ERROR_TOCPUf,
        NULL,0},
    { bcmSwitchDosAttackMACSAEqualMACDA, 0 ,
        DOS_CONTROLr, MACSA_EQUALS_MACDA_DROPf,
        NULL, soc_feature_enhanced_dos_ctrl },
    { bcmSwitchDosAttackFlagZeroSeqZero, 0,
        DOS_CONTROLr, TCP_FLAGS_CTRL0_SEQ0_ENABLEf,
        NULL, 0 },
    { bcmSwitchDosAttackSynFrag, 0 ,
        DOS_CONTROLr, TCP_FLAGS_SYN_FRAG_ENABLEf,
        NULL, 0},
    { bcmSwitchDosAttackIcmp, 0 ,
        DOS_CONTROL_2r, ICMP_V4_PING_SIZE_ENABLEf,
        NULL, 0 },
    { bcmSwitchDosAttackIcmp, 0 ,
        DOS_CONTROL_2r, ICMP_V6_PING_SIZE_ENABLEf,
        NULL, 0 },
    { bcmSwitchDosAttackIcmpV4, 0 ,
        DOS_CONTROL_2r, ICMP_V4_PING_SIZE_ENABLEf,
        NULL, 0 },
    { bcmSwitchDosAttackIcmpV6, 0 ,
        DOS_CONTROL_2r, ICMP_V6_PING_SIZE_ENABLEf,
        NULL, 0 },
    { bcmSwitchDosAttackIcmpFragments, 0 ,
        DOS_CONTROL_2r, ICMP_FRAG_PKTS_ENABLEf,
        NULL, soc_feature_enhanced_dos_ctrl },
    { bcmSwitchDosAttackTcpOffset, 0 ,
        DOS_CONTROL_2r, TCP_HDR_OFFSET_EQ1_ENABLEf,
        NULL, soc_feature_enhanced_dos_ctrl },
    { bcmSwitchDosAttackUdpPortsEqual, 0 ,
        DOS_CONTROL_2r, UDP_SPORT_EQ_DPORT_ENABLEf,
        NULL, soc_feature_enhanced_dos_ctrl },
    { bcmSwitchDosAttackTcpPortsEqual, 0 ,
        DOS_CONTROL_2r, TCP_SPORT_EQ_DPORT_ENABLEf,
        NULL, soc_feature_enhanced_dos_ctrl },
    { bcmSwitchDosAttackTcpFlagsSF, 0 ,
        DOS_CONTROL_2r, TCP_FLAGS_SYN_FIN_ENABLEf,
        NULL, soc_feature_enhanced_dos_ctrl },
    { bcmSwitchDosAttackTcpFlagsFUP, 0 ,
        DOS_CONTROL_2r, TCP_FLAGS_FIN_URG_PSH_SEQ0_ENABLEf,
        NULL, soc_feature_enhanced_dos_ctrl },
    { bcmSwitchDosAttackTcpHdrPartial, 0 ,
        DOS_CONTROL_2r, TCP_HDR_PARTIAL_ENABLEf,
        NULL, soc_feature_enhanced_dos_ctrl },
    { bcmSwitchDosAttackV6MinFragEnable, 0 ,
        DOS_CONTROL_2r, IPV6_MIN_FRAG_SIZE_ENABLEf,
        NULL, soc_feature_enhanced_dos_ctrl },
    { bcmSwitchDosAttackV6MinFragSize, 0 ,
        IPV6_MIN_FRAG_SIZEr, PKT_LENGTHf,
        NULL, soc_feature_enhanced_dos_ctrl },
    { bcmSwitchDosAttackIcmpPktOversize, 0, 
        DOS_CONTROL_3r, BIG_ICMP_PKT_SIZEf,
        NULL, 0 },
    { bcmSwitchDosAttackIcmpV6PingSize, 0, 
        DOS_CONTROL_3r, BIG_ICMPV6_PKT_SIZEf,
        NULL, soc_feature_big_icmpv6_ping_check },
    { bcmSwitchDosAttackMinTcpHdrSize, 0, 
        DOS_CONTROL_3r, MIN_TCPHDR_SIZEf,
        NULL, 0 },
    { bcmSwitchHashNivSrcIfEtagSvidSelect0, 0,
        RTAG7_HASH_CONTROL_2_64r, RTAG7_HASH_BIN_0_SELECT_Af,
        NULL, 0 },
    { bcmSwitchHashNivSrcIfEtagSvidSelect1, 0,
        RTAG7_HASH_CONTROL_2_64r, RTAG7_HASH_BIN_0_SELECT_Bf,
        NULL, 0 },
    { bcmSwitchHashNivDstIfEtagVidSelect0, 0,
        RTAG7_HASH_CONTROL_2_64r, RTAG7_HASH_BIN_1_SELECT_Af,
        NULL, 0 },
    { bcmSwitchHashNivDstIfEtagVidSelect1, 0,
        RTAG7_HASH_CONTROL_2_64r, RTAG7_HASH_BIN_1_SELECT_Bf,
        NULL, 0 },
    { bcmSwitchMirrorUnmarked, 0,
        EGR_CONFIG_1r, RING_MODEf,
        _bool_invert, 0 },
    { bcmSwitchMeterAdjust, 0,
        MTRI_IFGr, PACKET_IFG_BYTESf,
        NULL, soc_feature_meter_adjust },
    { bcmSwitchEgressBlockUcast, 0,
        ING_MISC_CONFIGr, APPLY_EGR_MASK_ON_UC_ONLYf,
        NULL, soc_feature_egress_blk_ucast_override },
    { bcmSwitchSourceModBlockUcast, 0,
        ING_MISC_CONFIGr, APPLY_SRCMOD_BLOCK_ON_UC_ONLYf,
        NULL, soc_feature_src_modid_blk_ucast_override },
    { bcmSwitchHgHdrMcastFloodOverride, 0,
        EGR_CONFIG_1r, FORCE_STATIC_MH_PFMf,
        NULL, soc_feature_static_pfm },
    { bcmSwitchShaperAdjust, 0,
        MTRI_IFGr, PACKET_IFG_BYTESf,
        NULL, soc_feature_meter_adjust },
    { bcmSwitchHgHdrErrToCpu,0 ,
        CPU_CONTROL_1r, HG_HDR_ERROR_TOCPUf,
        NULL, soc_feature_cpu_proto_prio},
    { bcmSwitchClassTagPacketsToCpu, 0,
        CPU_CONTROL_1r, HG_HDR_TYPE1_TOCPUf,
        NULL, soc_feature_cpu_proto_prio},
    { bcmSwitchRemoteLearnTrust, 0 ,
        EGR_CONFIG_1r, IGNORE_HG_HDR_DONOT_LEARNf,
        _bool_invert, 0 },
    { bcmSwitchSourceModBlockControlOpcode, 0 ,
        ING_MISC_CONFIGr, DO_NOT_APPLY_SRCMOD_BLOCK_ON_SCf,
        _bool_invert, soc_feature_src_modid_blk_opcode_override },
    { bcmSwitchUnknownMcastToCpu, 0 ,
    	CPU_CONTROL_1r, UMC_TOCPUf,
        NULL, 0 },
    { bcmSwitchUnknownUcastToCpu, 0 ,
    	CPU_CONTROL_1r, UUCAST_TOCPUf,
        NULL, 0 },
    { bcmSwitchL2StaticMoveToCpu, 0 ,
    	CPU_CONTROL_1r, STATICMOVE_TOCPUf,
        NULL, 0 },
    { bcmSwitchL3HeaderErrToCpu, 0 , /* compat */
    	CPU_CONTROL_1r, V4L3ERR_TOCPUf,
        NULL, 0 },
    { bcmSwitchUnknownL3DestToCpu, 0 , /* compat */
    	CPU_CONTROL_1r, V4L3DSTMISS_TOCPUf,
        NULL, 0 },
    { bcmSwitchIpmcPortMissToCpu, 0 ,
    	CPU_CONTROL_1r, IPMCPORTMISS_TOCPUf,
        NULL, 0 },
    { bcmSwitchIpmcErrorToCpu, 0 , 
    	CPU_CONTROL_1r, IPMCERR_TOCPUf,
        NULL, 0 },
    { bcmSwitchL2NonStaticMoveToCpu, 0 ,
	    CPU_CONTROL_1r, NONSTATICMOVE_TOCPUf,
        NULL, 0 },
    { bcmSwitchV6L3ErrToCpu, 0 ,
     	CPU_CONTROL_1r, V6L3ERR_TOCPUf,
        NULL, 0 },
    { bcmSwitchV6L3DstMissToCpu, 0 ,
	    CPU_CONTROL_1r, V6L3DSTMISS_TOCPUf,
        NULL, 0 },
    { bcmSwitchV4L3ErrToCpu, 0 ,
    	CPU_CONTROL_1r, V4L3ERR_TOCPUf,
        NULL, 0 },
    { bcmSwitchV4L3DstMissToCpu, 0 ,
    	CPU_CONTROL_1r, V4L3DSTMISS_TOCPUf,
        NULL, 0 },
    { bcmSwitchTunnelErrToCpu, 0 ,
    	CPU_CONTROL_1r, TUNNEL_ERR_TOCPUf,
        NULL, 0 },
    { bcmSwitchMartianAddrToCpu, 0 ,
     	CPU_CONTROL_1r, MARTIAN_ADDR_TOCPUf,
        NULL, 0 },
    { bcmSwitchL3UcTtlErrToCpu, 0 ,
    	CPU_CONTROL_1r, L3UC_TTL_ERR_TOCPUf,
        NULL, 0 },
    { bcmSwitchL3SlowpathToCpu, 0 ,
    	CPU_CONTROL_1r, L3_SLOWPATH_TOCPUf,
        NULL, 0 },
    { bcmSwitchIpmcTtlErrToCpu, 0 ,
    	CPU_CONTROL_1r, IPMC_TTL_ERR_TOCPUf,
        NULL, 0 },
    { bcmSwitchSampleIngressRandomSeed, 0 ,
	    SFLOW_ING_RAND_SEEDr, SEEDf,
        NULL, 0 },
    { bcmSwitchSampleEgressRandomSeed, 0 ,
    	SFLOW_EGR_RAND_SEEDr, SEEDf,
        NULL, 0 },
    { bcmSwitchArpReplyToCpu, 0 ,
	    PROTOCOL_PKT_CONTROLr, ARP_REPLY_TO_CPUf,
        NULL, 0 },
    { bcmSwitchArpReplyDrop, 0 ,
    	PROTOCOL_PKT_CONTROLr, ARP_REPLY_DROPf,
        NULL, 0 },
    { bcmSwitchArpRequestToCpu, 0 ,
    	PROTOCOL_PKT_CONTROLr, ARP_REQUEST_TO_CPUf,
        NULL, 0 },
    { bcmSwitchArpRequestDrop, 0 ,
    	PROTOCOL_PKT_CONTROLr, ARP_REQUEST_DROPf,
        NULL, 0 },
    { bcmSwitchNdPktToCpu, 0,
    	PROTOCOL_PKT_CONTROLr, ND_PKT_TO_CPUf,
        NULL, 0 },
    { bcmSwitchNdPktDrop, 0, 
    	PROTOCOL_PKT_CONTROLr, ND_PKT_DROPf,
        NULL, 0 },
    { bcmSwitchDhcpPktToCpu, 0, 
        PROTOCOL_PKT_CONTROLr, DHCP_PKT_TO_CPUf,
        NULL, 0 },
    { bcmSwitchDhcpPktDrop, 0, 
        PROTOCOL_PKT_CONTROLr, DHCP_PKT_DROPf,
        NULL, 0 },
    { bcmSwitchDosAttackSipEqualDip,0, 
        DOS_CONTROLr, DROP_IF_SIP_EQUALS_DIPf,
        NULL, 0 },
    { bcmSwitchDosAttackV4FirstFrag, 0, 
        DOS_CONTROLr, IPV4_FIRST_FRAG_CHECK_ENABLEf,
        NULL, 0 },
    { bcmSwitchNonIpL3ErrToCpu, 0, 
        CPU_CONTROL_1r, NIP_L3ERR_TOCPUf,
        NULL, soc_feature_nip_l3_err_tocpu },
    { bcmSwitchSourceRouteToCpu, 0, 
	    CPU_CONTROL_1r, SRCROUTE_TOCPUf,
        NULL, 0 },
    { bcmSwitchL3MtuFailToCpu,0 ,
        CPU_CONTROL_1r, L3_MTU_FAIL_TOCPUf,
        NULL, soc_feature_l3mtu_fail_tocpu },
    { bcmSwitchIpmcSameVlanL3Route, 0, 
        EGR_CONFIG_1r, IPMC_ROUTE_SAME_VLANf,
        NULL, soc_feature_l3},
    { bcmSwitchIpmcSameVlanPruning, 0,
        ING_MISC_CONFIGr, IPMC_IND_MODEf,
        _bool_invert, 0 },
    { bcmSwitchPrioDropToCpu, 0,
        CPU_CONTROL_0r, DOT1P_ADMITTANCE_DROP_TOCPUf,
        NULL, soc_feature_niv},
    { bcmSwitchNivPrioDropToCpu, 0,
        CPU_CONTROL_0r, DOT1P_ADMITTANCE_DROP_TOCPUf,
        NULL, soc_feature_niv},
    { bcmSwitchNivInterfaceMissToCpu, 0,
        CPU_CONTROL_0r, NIV_FORWARDING_DROP_TOCPUf,
        NULL, soc_feature_niv},
    { bcmSwitchNivRpfFailToCpu, 0,
        CPU_CONTROL_0r, NIV_RPF_CHECK_FAIL_TOCPUf,
        NULL, soc_feature_niv},
    { bcmSwitchNivTagInvalidToCpu, 0,
        CPU_CONTROL_0r, VNTAG_FORMAT_DROP_TOCPUf,
        NULL, soc_feature_niv},
    { bcmSwitchNivTagDropToCpu, 0,
        CPU_CONTROL_0r, DISCARD_VNTAG_PRESENT_TOCPUf,
        NULL, soc_feature_niv},
    { bcmSwitchNivUntagDropToCpu, 0,
        CPU_CONTROL_0r, DISCARD_VNTAG_NOT_PRESENT_TOCPUf,
        NULL, soc_feature_niv},
    { bcmSwitchTrillTtlErrToCpu, 0,
        CPU_CONTROL_0r, TRILL_HOPCOUNT_CHECK_FAIL_TOCPUf,
        NULL, soc_feature_trill},
    { bcmSwitchTrillHeaderErrToCpu, 0,
        CPU_CONTROL_0r, TRILL_ERROR_FRAMES_TOCPUf,
        NULL, soc_feature_trill},
    { bcmSwitchTrillMismatchToCpu, 0,
        CPU_CONTROL_0r, TRILL_UNEXPECTED_FRAMES_TOCPUf,
        NULL, soc_feature_trill},
    { bcmSwitchTrillNameMissToCpu, 0,
        CPU_CONTROL_0r, TRILL_RBRIDGE_LOOKUP_MISS_TOCPUf,
        NULL, soc_feature_trill},
    { bcmSwitchTrillRpfFailToCpu, 0,
        CPU_CONTROL_0r, TRILL_RPF_CHECK_FAIL_TOCPUf,
        NULL, soc_feature_trill},
    { bcmSwitchTrillOptionsToCpu, 0,
        CPU_CONTROL_0r, TRILL_OPTIONS_TOCPUf,
        NULL, soc_feature_trill},
    { bcmSwitchTrillNameErrDrop, 0,
        TRILL_DROP_CONTROLr, INGRESS_RBRIDGE_EQ_EGRESS_RBRIDGE_DROPf,
        NULL, soc_feature_trill},
    { bcmSwitchTrillHeaderVersionErrDrop, 0,
        TRILL_DROP_CONTROLr, TRILL_HDR_VERSION_NON_ZERO_DROPf,
        NULL, soc_feature_trill},
    { bcmSwitchTrillNameMissDrop, 0,
        TRILL_DROP_CONTROLr, UNKNOWN_INGRESS_RBRIDGE_DROPf,
        NULL, soc_feature_trill},
    { bcmSwitchTrillAdjacencyFailDrop, 0,
        TRILL_DROP_CONTROLr, TRILL_ADJACENCY_FAIL_DROPf,
        NULL, soc_feature_trill},
    { bcmSwitchTrillHeaderErrDrop, 0,
        TRILL_DROP_CONTROLr, UC_TRILL_HDR_MC_MACDA_DROPf,
        NULL, soc_feature_trill},
    { bcmSwitchTrillRpfFailDrop, 0,
        TRILL_DROP_CONTROLr, RPF_CHECK_FAIL_DROPf,
        NULL, soc_feature_trill},
    { bcmSwitchIngParseL2TunnelTermDipSipSelect, 0,
        ING_L2_TUNNEL_PARSE_CONTROLr, IFP_L2_TUNNEL_PAYLOAD_FIELD_SELf ,
        NULL, 0},
    { bcmSwitchIngParseL3L4IPv4, 0,
        ING_L2_TUNNEL_PARSE_CONTROLr, IGMP_ENABLEf ,
        NULL, 0},
     { bcmSwitchIngParseL3L4IPv6, 0,
         ING_L2_TUNNEL_PARSE_CONTROLr, MLD_ENABLEf ,
         NULL, 0},
    { bcmSwitchV6L3LocalLinkDrop, 0,
        ING_MISC_CONFIG2r, IPV6_SIP_LINK_LOCAL_DROPf,
        NULL, 0},
    { bcmSwitchMplsGalAlertLabelToCpu, 0,
        CPU_CONTROL_Mr, MPLS_GAL_EXPOSED_TO_CPUf,
        NULL, 0},
    { bcmSwitchMplsRalAlertLabelToCpu, 0,
        CPU_CONTROL_Mr, MPLS_RAL_EXPOSED_TO_CPUf,
        NULL, 0},
    { bcmSwitchMplsIllegalReservedLabelToCpu, 0,
        CPU_CONTROL_Mr, MPLS_ILLEGAL_RSVD_LABEL_TO_CPUf,
        NULL, 0},
    { bcmSwitchMplsUnknownAchTypeToCpu, 0,
        CPU_CONTROL_Mr, MPLS_UNKNOWN_ACH_TYPE_TO_CPUf,
        NULL, 0},
    { bcmSwitchMplsUnknownAchVersionToCpu, 0,
        CPU_CONTROL_Mr, MPLS_UNKNOWN_ACH_VERSION_TOCPUf,
        NULL, 0},
    { bcmSwitchFailoverDropToCpu, 0,
        CPU_CONTROL_1r, PROTECTION_DATA_DROP_TOCPUf,
        NULL, 0},
    { bcmSwitchL3SrcBindMissToCpu, 0,
        CPU_CONTROL_Mr, MAC_IP_BIND_LOOKUP_MISS_TOCPUf,
        NULL, 0},
    { bcmSwitchL3SrcBindMissToCpu, 0,
        CPU_CONTROL_Mr, MAC_IP_BIND_LOOKUP_MISS_TOCPUf,
        NULL, 0},
    { bcmSwitchMplsLookupsExceededToCpu, 0,
        CPU_CONTROL_Mr, MPLS_OUT_OF_LOOKUPS_TOCPUf,
        NULL, 0},
    { bcmSwitchTimesyncUnknownVersionToCpu,0,
        CPU_CONTROL_Mr, UNKNOWN_1588_VERSION_TO_CPUf,
        NULL, 0},
    { bcmSwitchTimesyncIngressVersion, 0,
        ING_1588_PARSING_CONTROLr, VERSION_CONTROLf,
        NULL, 0},
    { bcmSwitchTimesyncEgressVersion, 0,
        EGR_1588_PARSING_CONTROLr, VERSION_CONTROLf,
        NULL, 0},
    { bcmSwitchCongestionCnmToCpu, 0,
        IE2E_CONTROLr, ICNM_TO_CPUf,
        NULL, 0},
    { bcmSwtichCongestionCnmProxyErrorToCpu, 0,
        ING_MISC_CONFIGr, QCN_CNM_PRP_DLF_TO_CPUf,
        NULL, 0},
    { bcmSwtichCongestionCnmProxyToCpu, 0,
        ING_MISC_CONFIGr, QCN_CNM_PRP_TO_CPUf,
        NULL, 0},
    { bcmSwitchL2GreTunnelMissToCpu, 0,
        CPU_CONTROL_Mr, L2GRE_SIP_LOOKUP_FAIL_COPY_TOCPUf,
        NULL, 0},
    { bcmSwitchL2GreVpnIdMissToCpu, 0,
        CPU_CONTROL_Mr, L2GRE_VPNID_LOOKUP_FAIL_COPY_TOCPUf,
        NULL, 0},
    { bcmSwitchRemoteProtectionTrust, 0,
        ING_CONFIG_64r, USE_PROT_STATUSf,
        NULL, 0},
    { bcmSwitchVxlanTunnelMissToCpu, 0,
        CPU_CONTROL_Mr, VXLAN_SIP_LOOKUP_FAIL_COPY_TOCPUf,
        NULL, 0},
    { bcmSwitchVxlanVnIdMissToCpu, 0,
        CPU_CONTROL_Mr, VXLAN_VN_ID_LOOKUP_FAIL_COPY_TOCPUf,
        NULL, 0},
    { bcmSwitchHashL2GreKeyMask0, 0,
        RTAG7_HASH_CONTROL_L2GRE_MASK_Ar, L2GRE_TUNNEL_GRE_KEY_MASK_Af,
        NULL, soc_feature_l2gre},
    { bcmSwitchHashL2GreKeyMask1, 0,
        RTAG7_HASH_CONTROL_L2GRE_MASK_Br, L2GRE_TUNNEL_GRE_KEY_MASK_Bf,
        NULL, soc_feature_l2gre},
    { bcmSwitchRemoteProtectionEnable, 0,
        EGR_HG_HDR_PROT_STATUS_TX_CONTROLr, SET_PROT_STATUSf,
        NULL, 0},
    { bcmSwitchL3NATEnable, 0,
        ING_CONFIG_64r, NAT_ENABLEf,
        NULL, 0},
    { bcmSwitchL3DNATHairpinToCpu, 0,
        CPU_CONTROL_Mr, DNAT_HAIRPIN_COPY_TOCPUf,
        NULL, 0},
    { bcmSwitchL3DNATMissToCpu, 0,
        CPU_CONTROL_Mr, DNAT_MISS_COPY_TOCPUf,
        NULL, 0},
    { bcmSwitchL3SNATMissToCpu, 0,
        CPU_CONTROL_Mr, SNAT_MISS_COPY_TOCPUf,
        NULL, 0},
    { bcmSwitchL3NatOtherToCpu, 0,
        CPU_CONTROL_Mr, NAT_OTHER_COPY_TOCPUf,
        NULL, 0},
    { bcmSwitchL3NatRealmCrossingIcmpToCpu, 0,
        CPU_CONTROL_Mr, NAT_REALM_CROSSING_ICMP_COPY_TOCPUf,
        NULL, 0},
    { bcmSwitchL3NatFragmentsToCpu, 0,
        CPU_CONTROL_Mr, NAT_FRAGMENTS_COPY_TOCPUf,
        NULL, 0},
    { bcmSwitchExtenderInterfaceMissToCpu, 0,
        CPU_CONTROL_0r, NIV_FORWARDING_DROP_TOCPUf,
        NULL, soc_feature_port_extension},
    { bcmSwitchExtenderRpfFailToCpu, 0,
        CPU_CONTROL_0r, NIV_RPF_CHECK_FAIL_TOCPUf,
        NULL, soc_feature_port_extension},
    { bcmSwitchEtagInvalidToCpu, 0,
        CPU_CONTROL_0r, VNTAG_FORMAT_DROP_TOCPUf,
        NULL, soc_feature_port_extension},
    { bcmSwitchEtagDropToCpu, 0,
        CPU_CONTROL_0r, DISCARD_VNTAG_PRESENT_TOCPUf,
        NULL, soc_feature_port_extension},
    { bcmSwitchNonEtagDropToCpu, 0,
        CPU_CONTROL_0r, DISCARD_VNTAG_NOT_PRESENT_TOCPUf,
        NULL, soc_feature_port_extension},
    { bcmSwitchHashUseL2GreTunnelGreKey0, 0,
        RTAG7_HASH_CONTROL_2_64r, L2GRE_TUNNEL_USE_GRE_KEY_Af,
        NULL, soc_feature_l2gre},
    { bcmSwitchHashUseL2GreTunnelGreKey1, 0,
        RTAG7_HASH_CONTROL_2_64r, L2GRE_TUNNEL_USE_GRE_KEY_Bf,
        NULL, soc_feature_l2gre},
    { bcmSwitchHashL2GrePayloadSelect0, 0,
        RTAG7_HASH_CONTROL_2_64r, L2GRE_PAYLOAD_HASH_SELECT_Af,
        NULL, soc_feature_l2gre},
    { bcmSwitchHashL2GrePayloadSelect1, 0,
        RTAG7_HASH_CONTROL_2_64r, L2GRE_PAYLOAD_HASH_SELECT_Bf,
        NULL, soc_feature_l2gre},
    { bcmSwitchHashL2GreNetworkPortPayloadDisable0, 0,
        RTAG7_HASH_CONTROL_2_64r, DISABLE_HASH_L2GRE_Af,
        NULL, soc_feature_l2gre},
    { bcmSwitchHashL2GreNetworkPortPayloadDisable1, 0,
        RTAG7_HASH_CONTROL_2_64r, DISABLE_HASH_L2GRE_Bf,
        NULL, soc_feature_l2gre},
    { bcmSwitchHashUseFlowSelTrunkUc , 0, 
       RTAG7_HASH_SELr, USE_FLOW_SEL_TRUNK_UCf,
        NULL, 0},
    { bcmSwitchMcQueueSchedMode, 0,
        HSP_SCHED_PORT_CONFIGr, MC_GROUP_MODEf,
        NULL, 0},
    { bcmSwitchHashField0Ip6FlowLabel, 0,
        RTAG7_HASH_CONTROL_2_64r, ENABLE_FLOW_LABEL_IPV6_Af,
        NULL, 0},
    { bcmSwitchHashField1Ip6FlowLabel, 0,
        RTAG7_HASH_CONTROL_2_64r, ENABLE_FLOW_LABEL_IPV6_Bf,
        NULL, 0},
    { bcmSwitchMacroFlowHashUseMSB, 0,
        RTAG7_HASH_CONTROL_2_64r, MACRO_FLOW_HASH_BYTE_SELf,
        NULL, 0},
    { bcmSwitchHashHg2PktFieldsEnable, 0,
        RTAG7_HASH_CONTROL_2_64r, TREAT_PPD2_AS_KNOWN_PPDf,
        NULL, 0},
    { bcmSwitchHashField0OverlayCntagRpidEnable, 0,
        RTAG7_HASH_CONTROL_2_64r, ENABLE_BIN_12_OVERLAY_Af,
        NULL, 0},
    { bcmSwitchMimPayloadTpidEnable, 0,
        RTAG7_HASH_CONTROL_2_64r, MIM_PAYLOAD_TPID_ENABLEf,
        NULL, soc_feature_mim},
    { bcmSwitchHashMimUseTunnelHeader0, 0,
        RTAG7_HASH_CONTROL_2_64r, DISABLE_HASH_MIM_INNER_L2_Af,
        NULL, soc_feature_mim},
    { bcmSwitchHashMimUseTunnelHeader1, 0,
        RTAG7_HASH_CONTROL_2_64r, DISABLE_HASH_MIM_INNER_L2_Bf,
        NULL, soc_feature_mim},
    { bcmSwitchHashField1OverlayCntagRpidEnable, 0,
         RTAG7_HASH_CONTROL_2_64r, ENABLE_BIN_12_OVERLAY_Bf,
         NULL, 0},
    { bcmSwitchHashMPLSUseLabelStack, 0,
         RTAG7_HASH_CONTROL_2_64r, USE_MPLS_STACK_FOR_HASHINGf,
         NULL, 0},
    { bcmSwitchHashMPLSExcludeGAL, 0,
         RTAG7_HASH_CONTROL_2_64r, EXCLUDE_RESERVED_LABELS_FROM_MPLS_HASHf,
         NULL, 0},
    { bcmSwitchHashUseFlowSelEcmp, 0, 
       RTAG7_HASH_SELr, USE_FLOW_SEL_ECMPf,
        NULL, 0},
    { bcmSwitchEcmpMacroFlowHashEnable, 0,
        RTAG7_HASH_SELr, USE_FLOW_SEL_ECMPf,
        NULL, 0},
    { bcmSwitchSTPDisabledFieldBypass, 0,
        ING_MISC_CONFIG2r, DISABLED_PORTS_FP_DISABLEf,
        NULL, 0},
    { bcmSwitchV6L3SrcDstLocalLinkDropCancel, 0,
        ING_MISC_CONFIG2r, IPV6_SIP_AND_DIP_LINK_LOCAL_DO_NOT_DROPf,
        NULL, 0},
    { bcmSwitchHashUseFlowSelMplsEcmp, 0,
        RTAG7_HASH_SELr, USE_FLOW_SEL_MPLS_ECMPf,
        NULL, 0},
    { bcmSwitchMplsReservedEntropyLabelToCpu, 0,
        CPU_CONTROL_Mr, RESERVED_ENTROPY_LABEL_TOCPUf,
        NULL, 0},
    { bcmSwitchHashUseFlowSelTrunkNonUnicast, 0,
        RTAG7_HASH_SELr, USE_FLOW_SEL_TRUNK_NONUCf,
        NULL, 0},
    { bcmSwitchHashUseFlowSelHigigTrunkUnicast, 0,
        RTAG7_HASH_SELr, USE_FLOW_SEL_HG_TRUNK_UCf,
        NULL, 0},
    { bcmSwitchHashUseFlowSelHigigTrunkNonUnicast, 0,
        RTAG7_HASH_SELr, USE_FLOW_SEL_HG_TRUNK_NONUCf,
        NULL, 0},
    { bcmSwitchHashUseFlowSelHigigTrunkFailover, 0,
        RTAG7_HASH_SELr, USE_FLOW_SEL_HG_TRUNK_FAILOVERf,
        NULL, 0},
    { bcmSwitchHashUseFlowSelLbidUnicast, 0,
        RTAG7_HASH_SELr, USE_FLOW_SEL_LBID_UCf,
        NULL, 0},
    { bcmSwitchHashUseFlowSelLbidNonUnicast, 0,
        RTAG7_HASH_SELr, USE_FLOW_SEL_LBID_NONUCf,
        NULL, 0},
    { bcmSwitchHashUseFlowSelEntropy, 0,
        RTAG7_HASH_SELr, USE_FLOW_SEL_ENTROPY_LABELf,
        NULL, 0}
};

int
_bcm_apache_switch_control_port_binding_set(int unit,
                                bcm_port_t port,
                                bcm_switch_control_t type,
                                int arg, int *found)
{
    uint64 oval64, val64;
    int i;
    bcm_switch_binding_t *b;
    uint32 max;
    int fval, fwidth, prt, idx;
    port_tab_entry_t pent;

    *found = 0;
    for (i = 0; i < COUNTOF(apache_bindings); i++) {
        b = &apache_bindings[i];
        if (b->type == type) {
            /* We don't check the b->chip here since the table is specific for apache*/
            if (b->feature && !soc_feature(unit, b->feature)) {
                continue;
            }
            if (b->xlate_arg) {
                if ((fval = (b->xlate_arg)(unit, arg, 1)) < 0) {
                    return fval;
                }
            } else {
                fval = arg;
            }
            /* Negative values should be treated as errors */
            if (fval < 0) {
                return BCM_E_PARAM;
            }
            if (SOC_REG_INFO(unit, b->reg).regtype == soc_portreg) {
                prt = port;
                idx = 0;
            } else {
                if ((b->reg == PROTOCOL_PKT_CONTROLr) ||
                    (b->reg == IGMP_MLD_PKT_CONTROLr)) {
                    if (IS_CPU_PORT(unit,port)) {
                        port = SOC_INFO(unit).cpu_hg_index;
                    }
                    BCM_IF_ERROR_RETURN
                        (soc_mem_read(unit, PORT_TABm, MEM_BLOCK_ANY, port, &pent));
                    idx = soc_mem_field32_get(unit, PORT_TABm, &pent,
                            PROTOCOL_PKT_INDEXf);
                    prt = REG_PORT_ANY;
                } else {
                    prt = REG_PORT_ANY;
                    idx = 0;
                }
            }

            fwidth = soc_reg_field_length(unit, b->reg, b->field);
            if (fwidth < 32) {
                max = (1 << fwidth) - 1;
            } else {
                max = -1;
            }
            SOC_IF_ERROR_RETURN(soc_reg_get(unit, b->reg, prt, idx, &val64));
            oval64 = val64;
            soc_reg64_field32_set(unit, b->reg, &val64, b->field,
                                ((uint32)fval > max) ? max : (uint32)fval);
            if (COMPILER_64_NE(val64, oval64)) {
                SOC_IF_ERROR_RETURN(soc_reg_set(unit, b->reg, prt, idx, val64));
            }

            *found = 1;
        }
    }
    return BCM_E_NONE;
}
                                    


int
_bcm_apache_switch_control_port_binding_get(int unit,
                                bcm_port_t port,
                                bcm_switch_control_t type,
                                int *arg, int *found)
{
    uint64 val64;
    int i;
    bcm_switch_binding_t *b;
    int prt, idx;
    port_tab_entry_t pent;

    *found = 0;

    for (i = 0; i < COUNTOF(apache_bindings); i++) {
        b = &apache_bindings[i];
        if (b->type == type) {
            if (b->feature && !soc_feature(unit, b->feature)) {
                continue;
            }
            if (SOC_REG_INFO(unit, b->reg).regtype == soc_portreg) {
                prt = port;
                idx = 0;
            } else {
                if ((b->reg == PROTOCOL_PKT_CONTROLr) ||
                     (b->reg == IGMP_MLD_PKT_CONTROLr)) {
                      if (IS_CPU_PORT(unit,port)) {
                          port = SOC_INFO(unit).cpu_hg_index;
                     }
                     BCM_IF_ERROR_RETURN
                     (soc_mem_read(unit, PORT_TABm, MEM_BLOCK_ANY, port, &pent));
                     idx = soc_mem_field32_get(unit, PORT_TABm, &pent,
                               PROTOCOL_PKT_INDEXf);
                     prt = REG_PORT_ANY;
                 } else {
                     prt = REG_PORT_ANY;
                     idx = 0;
                 }
            }
            SOC_IF_ERROR_RETURN(soc_reg_get(unit, b->reg, prt, idx, &val64));
            *arg = soc_reg64_field32_get(unit, b->reg, val64, b->field);

            if (b->xlate_arg) {
                *arg = (b->xlate_arg)(unit, *arg, 0);
            }
            *found = 1;
            break;
        }
    }
    return BCM_E_NONE;
}

