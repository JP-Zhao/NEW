// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _SeekPoint_HH_
#define _SeekPoint_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "ListInsert.h"
#include "ListDelete.h"
#include "TOP_fuct_faddfsubudo.h"
#include "TOP_fuct_fmul_32nvdy.h"
#include "TOP_fuct_fdiv_32nwdI.h"
#include "TOP_fuct_sitofp_3xdS.h"
#include "TOP_fuct_fcmp_32nyd2.h"
#include "TOP_fuct_fsqrt_32zec.h"
#include "SeekPoint_SJLB.h"
#include "SeekPoint_WtPoitRqcK.h"
#include "SeekPoint_CalaPoisc4.h"

namespace ap_rtl {

struct SeekPoint : public sc_module {
    // Port declarations 25
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<8> > src_data_stream_V_dout;
    sc_in< sc_logic > src_data_stream_V_empty_n;
    sc_out< sc_logic > src_data_stream_V_read;
    sc_out< sc_lv<6> > K_address0;
    sc_out< sc_logic > K_ce0;
    sc_out< sc_logic > K_we0;
    sc_out< sc_lv<32> > K_d0;
    sc_in< sc_lv<32> > K_q0;
    sc_out< sc_lv<6> > B_address0;
    sc_out< sc_logic > B_ce0;
    sc_out< sc_logic > B_we0;
    sc_out< sc_lv<32> > B_d0;
    sc_in< sc_lv<32> > B_q0;
    sc_out< sc_lv<6> > NumPoint_address0;
    sc_out< sc_logic > NumPoint_ce0;
    sc_out< sc_logic > NumPoint_we0;
    sc_out< sc_lv<32> > NumPoint_d0;
    sc_in< sc_lv<32> > NumPoint_q0;
    sc_signal< sc_logic > ap_var_for_const0;
    sc_signal< sc_lv<32> > ap_var_for_const3;
    sc_signal< sc_lv<32> > ap_var_for_const1;
    sc_signal< sc_lv<5> > ap_var_for_const2;


    // Module declarations
    SeekPoint(sc_module_name name);
    SC_HAS_PROCESS(SeekPoint);

    ~SeekPoint();

    sc_trace_file* mVcdFile;

    SeekPoint_SJLB* SJLB_U;
    SeekPoint_WtPoitRqcK* WtPoitRowLoc_U;
    SeekPoint_WtPoitRqcK* WtPoitColLoc_U;
    SeekPoint_CalaPoisc4* CalaPoint_0_U;
    SeekPoint_CalaPoisc4* CalaPoint_1_U;
    ListInsert* grp_ListInsert_fu_423;
    ListInsert* grp_ListInsert_fu_431;
    ListDelete* grp_ListDelete_fu_440;
    ListDelete* grp_ListDelete_fu_448;
    TOP_fuct_faddfsubudo<1,4,32,32,32>* TOP_fuct_faddfsubudo_U133;
    TOP_fuct_fmul_32nvdy<1,2,32,32,32>* TOP_fuct_fmul_32nvdy_U134;
    TOP_fuct_fdiv_32nwdI<1,8,32,32,32>* TOP_fuct_fdiv_32nwdI_U135;
    TOP_fuct_sitofp_3xdS<1,3,32,32>* TOP_fuct_sitofp_3xdS_U136;
    TOP_fuct_sitofp_3xdS<1,3,32,32>* TOP_fuct_sitofp_3xdS_U137;
    TOP_fuct_fcmp_32nyd2<1,1,32,32,1>* TOP_fuct_fcmp_32nyd2_U138;
    TOP_fuct_fsqrt_32zec<1,7,32,32,32>* TOP_fuct_fsqrt_32zec_U139;
    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<58> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<7> > SJLB_address0;
    sc_signal< sc_logic > SJLB_ce0;
    sc_signal< sc_lv<32> > SJLB_q0;
    sc_signal< sc_logic > src_data_stream_V_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<1> > exitcond8_fu_569_p2;
    sc_signal< sc_lv<32> > grp_fu_473_p1;
    sc_signal< sc_lv<32> > reg_506;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_logic > ap_CS_fsm_state19;
    sc_signal< sc_logic > ap_CS_fsm_state27;
    sc_signal< sc_logic > ap_CS_fsm_state29;
    sc_signal< sc_logic > ap_CS_fsm_state38;
    sc_signal< sc_logic > ap_CS_fsm_state40;
    sc_signal< sc_lv<32> > grp_fu_465_p2;
    sc_signal< sc_lv<32> > reg_515;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_logic > ap_CS_fsm_state37;
    sc_signal< sc_lv<32> > grp_fu_469_p2;
    sc_signal< sc_lv<32> > reg_521;
    sc_signal< sc_logic > ap_CS_fsm_state56;
    sc_signal< sc_lv<8> > i_3_fu_549_p2;
    sc_signal< sc_lv<8> > i_3_reg_988;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<9> > i_cast8_cast_fu_555_p1;
    sc_signal< sc_lv<9> > i_cast8_cast_reg_993;
    sc_signal< sc_lv<1> > exitcond9_fu_543_p2;
    sc_signal< sc_lv<9> > j_3_fu_575_p2;
    sc_signal< sc_lv<9> > j_3_reg_1037;
    sc_signal< bool > ap_block_state3;
    sc_signal< sc_lv<1> > tmp_24_fu_581_p2;
    sc_signal< sc_lv<1> > tmp_24_reg_1042;
    sc_signal< sc_lv<32> > WtPoitRowLoc_lenth_l_1_reg_1046;
    sc_signal< sc_lv<32> > WtPoitColLoc_lenth_l_1_reg_1051;
    sc_signal< sc_lv<32> > SrcPoitLeh_load_reg_1056;
    sc_signal< sc_lv<32> > templong_2_reg_1062;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<6> > K_addr_reg_1075;
    sc_signal< sc_lv<6> > B_addr_reg_1080;
    sc_signal< sc_lv<6> > NumPoint_addr_reg_1085;
    sc_signal< sc_lv<32> > WtPoitRowLoc_lenth_1_fu_632_p2;
    sc_signal< sc_lv<32> > WtPoitRowLoc_lenth_1_reg_1090;
    sc_signal< sc_lv<32> > WtPoitColLoc_lenth_2_fu_637_p2;
    sc_signal< sc_lv<32> > WtPoitColLoc_lenth_2_reg_1095;
    sc_signal< sc_lv<6> > p_rec_fu_643_p2;
    sc_signal< sc_lv<6> > p_rec_reg_1100;
    sc_signal< sc_lv<2> > RandSelet_2_fu_655_p2;
    sc_signal< sc_lv<2> > RandSelet_2_reg_1108;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<64> > tmp_36_fu_661_p1;
    sc_signal< sc_lv<64> > tmp_36_reg_1113;
    sc_signal< sc_lv<1> > exitcond_fu_649_p2;
    sc_signal< sc_lv<32> > SJLB_load_reg_1124;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<32> > p_Val2_7_fu_810_p3;
    sc_signal< sc_lv<32> > p_Val2_7_reg_1129;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_lv<32> > WtPoitRowLoc_lenth_2_fu_824_p2;
    sc_signal< sc_lv<32> > WtPoitRowLoc_lenth_2_reg_1145;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_lv<32> > WtPoitColLoc_lenth_3_fu_830_p2;
    sc_signal< sc_lv<32> > WtPoitColLoc_lenth_3_reg_1150;
    sc_signal< sc_lv<32> > CalaPoint_0_q1;
    sc_signal< sc_lv<32> > CalaPoint_0_load_1_reg_1155;
    sc_signal< sc_logic > ap_CS_fsm_state16;
    sc_signal< sc_lv<32> > tmp_25_fu_836_p2;
    sc_signal< sc_lv<32> > tmp_25_reg_1160;
    sc_signal< sc_lv<32> > CalaPoint_1_q1;
    sc_signal< sc_lv<32> > CalaPoint_1_load_1_reg_1165;
    sc_signal< sc_lv<32> > tmp_29_fu_842_p2;
    sc_signal< sc_lv<32> > tmp_29_reg_1170;
    sc_signal< sc_lv<32> > grp_fu_476_p1;
    sc_signal< sc_lv<32> > tmp_30_reg_1175;
    sc_signal< sc_logic > ap_CS_fsm_state34;
    sc_signal< sc_lv<1> > tmp_40_fu_848_p2;
    sc_signal< sc_lv<32> > K_load_reg_1193;
    sc_signal< sc_logic > ap_CS_fsm_state35;
    sc_signal< sc_lv<32> > WtPoitColLoc_q0;
    sc_signal< sc_lv<32> > WtPoitColLoc_load_1_reg_1199;
    sc_signal< sc_lv<32> > WtPoitRowLoc_q0;
    sc_signal< sc_lv<32> > WtPoitRowLoc_load_1_reg_1204;
    sc_signal< sc_lv<32> > tmp_43_reg_1209;
    sc_signal< sc_lv<32> > grp_fu_458_p2;
    sc_signal< sc_lv<32> > x_assign_reg_1214;
    sc_signal< sc_logic > ap_CS_fsm_state41;
    sc_signal< sc_lv<32> > tmp_45_reg_1219;
    sc_signal< sc_logic > ap_CS_fsm_state44;
    sc_signal< sc_logic > ap_CS_fsm_state45;
    sc_signal< sc_lv<31> > tmp_19_fu_864_p1;
    sc_signal< sc_lv<31> > tmp_19_reg_1229;
    sc_signal< sc_logic > ap_CS_fsm_state48;
    sc_signal< sc_lv<32> > grp_fu_484_p2;
    sc_signal< sc_lv<32> > tmp_i_reg_1234;
    sc_signal< sc_lv<32> > ret_i_i_i_i_i_fu_875_p1;
    sc_signal< sc_logic > ap_CS_fsm_state49;
    sc_signal< sc_lv<1> > tmp_50_fu_916_p2;
    sc_signal< sc_lv<1> > tmp_50_reg_1244;
    sc_signal< sc_logic > ap_CS_fsm_state57;
    sc_signal< sc_lv<32> > WtPoitColLoc_lenth_1_2_reg_1254;
    sc_signal< sc_lv<32> > i_6_fu_958_p2;
    sc_signal< sc_logic > ap_CS_fsm_state58;
    sc_signal< sc_logic > grp_ListDelete_fu_440_ap_ready;
    sc_signal< sc_logic > grp_ListDelete_fu_440_ap_done;
    sc_signal< sc_logic > grp_ListDelete_fu_448_ap_ready;
    sc_signal< sc_logic > grp_ListDelete_fu_448_ap_done;
    sc_signal< bool > ap_block_state58_on_subcall_done;
    sc_signal< sc_lv<13> > WtPoitRowLoc_address0;
    sc_signal< sc_logic > WtPoitRowLoc_ce0;
    sc_signal< sc_logic > WtPoitRowLoc_we0;
    sc_signal< sc_lv<32> > WtPoitRowLoc_d0;
    sc_signal< sc_lv<13> > WtPoitColLoc_address0;
    sc_signal< sc_logic > WtPoitColLoc_ce0;
    sc_signal< sc_logic > WtPoitColLoc_we0;
    sc_signal< sc_lv<32> > WtPoitColLoc_d0;
    sc_signal< sc_lv<1> > CalaPoint_0_address0;
    sc_signal< sc_logic > CalaPoint_0_ce0;
    sc_signal< sc_logic > CalaPoint_0_we0;
    sc_signal< sc_lv<32> > CalaPoint_0_q0;
    sc_signal< sc_lv<1> > CalaPoint_0_address1;
    sc_signal< sc_logic > CalaPoint_0_ce1;
    sc_signal< sc_lv<1> > CalaPoint_1_address0;
    sc_signal< sc_logic > CalaPoint_1_ce0;
    sc_signal< sc_logic > CalaPoint_1_we0;
    sc_signal< sc_lv<32> > CalaPoint_1_q0;
    sc_signal< sc_lv<1> > CalaPoint_1_address1;
    sc_signal< sc_logic > CalaPoint_1_ce1;
    sc_signal< sc_logic > grp_ListInsert_fu_423_ap_start;
    sc_signal< sc_logic > grp_ListInsert_fu_423_ap_done;
    sc_signal< sc_logic > grp_ListInsert_fu_423_ap_idle;
    sc_signal< sc_logic > grp_ListInsert_fu_423_ap_ready;
    sc_signal< sc_lv<13> > grp_ListInsert_fu_423_Data_address0;
    sc_signal< sc_logic > grp_ListInsert_fu_423_Data_ce0;
    sc_signal< sc_logic > grp_ListInsert_fu_423_Data_we0;
    sc_signal< sc_lv<32> > grp_ListInsert_fu_423_Data_d0;
    sc_signal< sc_logic > grp_ListInsert_fu_431_ap_start;
    sc_signal< sc_logic > grp_ListInsert_fu_431_ap_done;
    sc_signal< sc_logic > grp_ListInsert_fu_431_ap_idle;
    sc_signal< sc_logic > grp_ListInsert_fu_431_ap_ready;
    sc_signal< sc_lv<13> > grp_ListInsert_fu_431_Data_address0;
    sc_signal< sc_logic > grp_ListInsert_fu_431_Data_ce0;
    sc_signal< sc_logic > grp_ListInsert_fu_431_Data_we0;
    sc_signal< sc_lv<32> > grp_ListInsert_fu_431_Data_d0;
    sc_signal< sc_logic > grp_ListDelete_fu_440_ap_start;
    sc_signal< sc_logic > grp_ListDelete_fu_440_ap_idle;
    sc_signal< sc_lv<13> > grp_ListDelete_fu_440_Data_address0;
    sc_signal< sc_logic > grp_ListDelete_fu_440_Data_ce0;
    sc_signal< sc_logic > grp_ListDelete_fu_440_Data_we0;
    sc_signal< sc_lv<32> > grp_ListDelete_fu_440_Data_d0;
    sc_signal< sc_lv<32> > grp_ListDelete_fu_440_i;
    sc_signal< sc_lv<32> > grp_ListDelete_fu_440_length_r;
    sc_signal< sc_logic > grp_ListDelete_fu_448_ap_start;
    sc_signal< sc_logic > grp_ListDelete_fu_448_ap_idle;
    sc_signal< sc_lv<13> > grp_ListDelete_fu_448_Data_address0;
    sc_signal< sc_logic > grp_ListDelete_fu_448_Data_ce0;
    sc_signal< sc_logic > grp_ListDelete_fu_448_Data_we0;
    sc_signal< sc_lv<32> > grp_ListDelete_fu_448_Data_d0;
    sc_signal< sc_lv<32> > grp_ListDelete_fu_448_i;
    sc_signal< sc_lv<32> > grp_ListDelete_fu_448_length_r;
    sc_signal< sc_lv<8> > i_reg_314;
    sc_signal< bool > ap_block_state1;
    sc_signal< sc_lv<9> > j_reg_325;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< bool > ap_block_state4_on_subcall_done;
    sc_signal< sc_lv<6> > p_02_rec_reg_337;
    sc_signal< sc_lv<32> > WtPoitColLoc_lenth_4_reg_348;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< bool > ap_block_state15_on_subcall_done;
    sc_signal< sc_lv<32> > WtPoitRowLoc_lenth_4_reg_358;
    sc_signal< sc_lv<2> > RandSelet_reg_368;
    sc_signal< sc_lv<32> > templong1_reg_379;
    sc_signal< sc_logic > ap_CS_fsm_state33;
    sc_signal< sc_lv<32> > ap_phi_mux_templong_1_phi_fu_405_p4;
    sc_signal< sc_lv<32> > i2_reg_389;
    sc_signal< sc_lv<32> > WtPoitRowLoc_lenth_5_fu_933_p2;
    sc_signal< sc_lv<32> > templong_1_reg_401;
    sc_signal< sc_lv<32> > i_5_fu_939_p2;
    sc_signal< sc_lv<32> > ap_phi_mux_i2_1_phi_fu_416_p4;
    sc_signal< sc_lv<32> > i2_1_reg_413;
    sc_signal< sc_logic > grp_ListInsert_fu_423_ap_start_reg;
    sc_signal< bool > ap_block_state3_ignore_call4;
    sc_signal< sc_logic > grp_ListInsert_fu_431_ap_start_reg;
    sc_signal< bool > ap_block_state3_ignore_call6;
    sc_signal< sc_logic > grp_ListDelete_fu_440_ap_start_reg;
    sc_signal< sc_logic > grp_ListDelete_fu_448_ap_start_reg;
    sc_signal< sc_lv<64> > p_02_rec_cast_fu_625_p1;
    sc_signal< sc_lv<64> > tmp_37_fu_818_p1;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_lv<64> > tmp_41_fu_854_p1;
    sc_signal< sc_lv<32> > WtPoitRowLoc_lenth_fu_122;
    sc_signal< sc_lv<32> > tmp_38_fu_592_p2;
    sc_signal< sc_lv<32> > WtPoitColLoc_lenth_fu_126;
    sc_signal< sc_lv<32> > tmp_39_fu_598_p2;
    sc_signal< sc_lv<32> > SrcPoitLeh_fu_130;
    sc_signal< sc_lv<32> > SrcPoitLeh_1_fu_604_p2;
    sc_signal< sc_lv<32> > templong_fu_150;
    sc_signal< sc_lv<32> > WtPoitColLoc_lenth_1_fu_154;
    sc_signal< sc_lv<32> > WtPoitColLoc_lenth_5_fu_922_p2;
    sc_signal< sc_logic > ap_CS_fsm_state28;
    sc_signal< sc_lv<32> > tmp_51_fu_946_p2;
    sc_signal< sc_lv<32> > grp_fu_458_p0;
    sc_signal< sc_lv<32> > grp_fu_458_p1;
    sc_signal< sc_logic > ap_CS_fsm_state30;
    sc_signal< sc_lv<32> > grp_fu_465_p0;
    sc_signal< sc_lv<32> > grp_fu_465_p1;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_logic > ap_CS_fsm_state36;
    sc_signal< sc_logic > ap_CS_fsm_state39;
    sc_signal< sc_lv<32> > grp_fu_469_p0;
    sc_signal< sc_lv<32> > grp_fu_469_p1;
    sc_signal< sc_logic > ap_CS_fsm_state20;
    sc_signal< sc_lv<32> > grp_fu_473_p0;
    sc_signal< sc_logic > ap_CS_fsm_state17;
    sc_signal< sc_logic > ap_CS_fsm_state25;
    sc_signal< sc_logic > ap_CS_fsm_state42;
    sc_signal< sc_lv<32> > p_Val2_s_fu_674_p1;
    sc_signal< sc_lv<23> > tmp_V_1_fu_696_p1;
    sc_signal< sc_lv<25> > mantissa_V_fu_700_p4;
    sc_signal< sc_lv<8> > tmp_V_fu_686_p4;
    sc_signal< sc_lv<9> > tmp_i_i_i_i_cast_fu_714_p1;
    sc_signal< sc_lv<9> > sh_assign_fu_718_p2;
    sc_signal< sc_lv<8> > tmp_i_i_i_fu_732_p2;
    sc_signal< sc_lv<1> > isNeg_fu_724_p3;
    sc_signal< sc_lv<9> > tmp_i_i_i_cast_fu_738_p1;
    sc_signal< sc_lv<9> > ush_fu_742_p3;
    sc_signal< sc_lv<32> > sh_assign_2_i_i_i_ca_fu_750_p1;
    sc_signal< sc_lv<25> > sh_assign_2_i_i_i_ca_1_fu_754_p1;
    sc_signal< sc_lv<79> > mantissa_V_1_i_i_i_c_fu_710_p1;
    sc_signal< sc_lv<79> > tmp_i_i_i_132_fu_758_p1;
    sc_signal< sc_lv<25> > r_V_fu_762_p2;
    sc_signal< sc_lv<1> > tmp_18_fu_774_p3;
    sc_signal< sc_lv<79> > r_V_1_fu_768_p2;
    sc_signal< sc_lv<32> > tmp_26_fu_782_p1;
    sc_signal< sc_lv<32> > tmp_27_fu_786_p4;
    sc_signal< sc_lv<32> > p_Val2_6_fu_796_p3;
    sc_signal< sc_lv<1> > p_Result_s_fu_678_p3;
    sc_signal< sc_lv<32> > result_V_1_fu_804_p2;
    sc_signal< sc_lv<32> > p_Val2_5_fu_860_p1;
    sc_signal< sc_lv<32> > p_Result_1_fu_868_p3;
    sc_signal< sc_lv<32> > d_to_int_fu_880_p1;
    sc_signal< sc_lv<8> > tmp_47_fu_884_p4;
    sc_signal< sc_lv<23> > tmp_20_fu_894_p1;
    sc_signal< sc_lv<1> > notrhs_fu_904_p2;
    sc_signal< sc_lv<1> > notlhs_fu_898_p2;
    sc_signal< sc_lv<1> > tmp_48_fu_910_p2;
    sc_signal< sc_lv<1> > tmp_49_fu_479_p2;
    sc_signal< sc_lv<2> > grp_fu_458_opcode;
    sc_signal< sc_lv<58> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<58> ap_ST_fsm_state1;
    static const sc_lv<58> ap_ST_fsm_state2;
    static const sc_lv<58> ap_ST_fsm_state3;
    static const sc_lv<58> ap_ST_fsm_state4;
    static const sc_lv<58> ap_ST_fsm_state5;
    static const sc_lv<58> ap_ST_fsm_state6;
    static const sc_lv<58> ap_ST_fsm_state7;
    static const sc_lv<58> ap_ST_fsm_state8;
    static const sc_lv<58> ap_ST_fsm_state9;
    static const sc_lv<58> ap_ST_fsm_state10;
    static const sc_lv<58> ap_ST_fsm_state11;
    static const sc_lv<58> ap_ST_fsm_state12;
    static const sc_lv<58> ap_ST_fsm_state13;
    static const sc_lv<58> ap_ST_fsm_state14;
    static const sc_lv<58> ap_ST_fsm_state15;
    static const sc_lv<58> ap_ST_fsm_state16;
    static const sc_lv<58> ap_ST_fsm_state17;
    static const sc_lv<58> ap_ST_fsm_state18;
    static const sc_lv<58> ap_ST_fsm_state19;
    static const sc_lv<58> ap_ST_fsm_state20;
    static const sc_lv<58> ap_ST_fsm_state21;
    static const sc_lv<58> ap_ST_fsm_state22;
    static const sc_lv<58> ap_ST_fsm_state23;
    static const sc_lv<58> ap_ST_fsm_state24;
    static const sc_lv<58> ap_ST_fsm_state25;
    static const sc_lv<58> ap_ST_fsm_state26;
    static const sc_lv<58> ap_ST_fsm_state27;
    static const sc_lv<58> ap_ST_fsm_state28;
    static const sc_lv<58> ap_ST_fsm_state29;
    static const sc_lv<58> ap_ST_fsm_state30;
    static const sc_lv<58> ap_ST_fsm_state31;
    static const sc_lv<58> ap_ST_fsm_state32;
    static const sc_lv<58> ap_ST_fsm_state33;
    static const sc_lv<58> ap_ST_fsm_state34;
    static const sc_lv<58> ap_ST_fsm_state35;
    static const sc_lv<58> ap_ST_fsm_state36;
    static const sc_lv<58> ap_ST_fsm_state37;
    static const sc_lv<58> ap_ST_fsm_state38;
    static const sc_lv<58> ap_ST_fsm_state39;
    static const sc_lv<58> ap_ST_fsm_state40;
    static const sc_lv<58> ap_ST_fsm_state41;
    static const sc_lv<58> ap_ST_fsm_state42;
    static const sc_lv<58> ap_ST_fsm_state43;
    static const sc_lv<58> ap_ST_fsm_state44;
    static const sc_lv<58> ap_ST_fsm_state45;
    static const sc_lv<58> ap_ST_fsm_state46;
    static const sc_lv<58> ap_ST_fsm_state47;
    static const sc_lv<58> ap_ST_fsm_state48;
    static const sc_lv<58> ap_ST_fsm_state49;
    static const sc_lv<58> ap_ST_fsm_state50;
    static const sc_lv<58> ap_ST_fsm_state51;
    static const sc_lv<58> ap_ST_fsm_state52;
    static const sc_lv<58> ap_ST_fsm_state53;
    static const sc_lv<58> ap_ST_fsm_state54;
    static const sc_lv<58> ap_ST_fsm_state55;
    static const sc_lv<58> ap_ST_fsm_state56;
    static const sc_lv<58> ap_ST_fsm_state57;
    static const sc_lv<58> ap_ST_fsm_state58;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_12;
    static const sc_lv<32> ap_const_lv32_1A;
    static const sc_lv<32> ap_const_lv32_1C;
    static const sc_lv<32> ap_const_lv32_25;
    static const sc_lv<32> ap_const_lv32_27;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_24;
    static const sc_lv<32> ap_const_lv32_37;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_21;
    static const sc_lv<32> ap_const_lv32_22;
    static const sc_lv<32> ap_const_lv32_28;
    static const sc_lv<32> ap_const_lv32_2B;
    static const sc_lv<32> ap_const_lv32_2C;
    static const sc_lv<32> ap_const_lv32_2F;
    static const sc_lv<32> ap_const_lv32_30;
    static const sc_lv<32> ap_const_lv32_38;
    static const sc_lv<32> ap_const_lv32_39;
    static const bool ap_const_boolean_0;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<9> ap_const_lv9_0;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<6> ap_const_lv6_0;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<32> ap_const_lv32_20;
    static const sc_lv<64> ap_const_lv64_1;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_1B;
    static const sc_lv<32> ap_const_lv32_3F800000;
    static const sc_lv<32> ap_const_lv32_1D;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_23;
    static const sc_lv<32> ap_const_lv32_26;
    static const sc_lv<32> ap_const_lv32_13;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_18;
    static const sc_lv<32> ap_const_lv32_40A00000;
    static const sc_lv<32> ap_const_lv32_29;
    static const sc_lv<8> ap_const_lv8_B4;
    static const sc_lv<8> ap_const_lv8_1;
    static const sc_lv<9> ap_const_lv9_122;
    static const sc_lv<9> ap_const_lv9_1;
    static const sc_lv<32> ap_const_lv32_FFFFFFFE;
    static const sc_lv<6> ap_const_lv6_1;
    static const sc_lv<2> ap_const_lv2_2;
    static const sc_lv<2> ap_const_lv2_1;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<32> ap_const_lv32_1E;
    static const sc_lv<9> ap_const_lv9_181;
    static const sc_lv<8> ap_const_lv8_7F;
    static const sc_lv<32> ap_const_lv32_FFFFFFFF;
    static const sc_lv<8> ap_const_lv8_FF;
    static const sc_lv<23> ap_const_lv23_0;
    static const sc_lv<5> ap_const_lv5_4;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_var_for_const3();
    void thread_ap_var_for_const1();
    void thread_ap_var_for_const2();
    void thread_ap_clk_no_reset_();
    void thread_B_address0();
    void thread_B_ce0();
    void thread_B_d0();
    void thread_B_we0();
    void thread_CalaPoint_0_address0();
    void thread_CalaPoint_0_address1();
    void thread_CalaPoint_0_ce0();
    void thread_CalaPoint_0_ce1();
    void thread_CalaPoint_0_we0();
    void thread_CalaPoint_1_address0();
    void thread_CalaPoint_1_address1();
    void thread_CalaPoint_1_ce0();
    void thread_CalaPoint_1_ce1();
    void thread_CalaPoint_1_we0();
    void thread_K_address0();
    void thread_K_ce0();
    void thread_K_d0();
    void thread_K_we0();
    void thread_NumPoint_address0();
    void thread_NumPoint_ce0();
    void thread_NumPoint_d0();
    void thread_NumPoint_we0();
    void thread_RandSelet_2_fu_655_p2();
    void thread_SJLB_address0();
    void thread_SJLB_ce0();
    void thread_SrcPoitLeh_1_fu_604_p2();
    void thread_WtPoitColLoc_address0();
    void thread_WtPoitColLoc_ce0();
    void thread_WtPoitColLoc_d0();
    void thread_WtPoitColLoc_lenth_2_fu_637_p2();
    void thread_WtPoitColLoc_lenth_3_fu_830_p2();
    void thread_WtPoitColLoc_lenth_5_fu_922_p2();
    void thread_WtPoitColLoc_we0();
    void thread_WtPoitRowLoc_address0();
    void thread_WtPoitRowLoc_ce0();
    void thread_WtPoitRowLoc_d0();
    void thread_WtPoitRowLoc_lenth_1_fu_632_p2();
    void thread_WtPoitRowLoc_lenth_2_fu_824_p2();
    void thread_WtPoitRowLoc_lenth_5_fu_933_p2();
    void thread_WtPoitRowLoc_we0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state11();
    void thread_ap_CS_fsm_state12();
    void thread_ap_CS_fsm_state13();
    void thread_ap_CS_fsm_state14();
    void thread_ap_CS_fsm_state15();
    void thread_ap_CS_fsm_state16();
    void thread_ap_CS_fsm_state17();
    void thread_ap_CS_fsm_state19();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state20();
    void thread_ap_CS_fsm_state25();
    void thread_ap_CS_fsm_state27();
    void thread_ap_CS_fsm_state28();
    void thread_ap_CS_fsm_state29();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state30();
    void thread_ap_CS_fsm_state33();
    void thread_ap_CS_fsm_state34();
    void thread_ap_CS_fsm_state35();
    void thread_ap_CS_fsm_state36();
    void thread_ap_CS_fsm_state37();
    void thread_ap_CS_fsm_state38();
    void thread_ap_CS_fsm_state39();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state40();
    void thread_ap_CS_fsm_state41();
    void thread_ap_CS_fsm_state42();
    void thread_ap_CS_fsm_state44();
    void thread_ap_CS_fsm_state45();
    void thread_ap_CS_fsm_state48();
    void thread_ap_CS_fsm_state49();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state56();
    void thread_ap_CS_fsm_state57();
    void thread_ap_CS_fsm_state58();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_block_state1();
    void thread_ap_block_state15_on_subcall_done();
    void thread_ap_block_state3();
    void thread_ap_block_state3_ignore_call4();
    void thread_ap_block_state3_ignore_call6();
    void thread_ap_block_state4_on_subcall_done();
    void thread_ap_block_state58_on_subcall_done();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_phi_mux_i2_1_phi_fu_416_p4();
    void thread_ap_phi_mux_templong_1_phi_fu_405_p4();
    void thread_ap_ready();
    void thread_d_to_int_fu_880_p1();
    void thread_exitcond8_fu_569_p2();
    void thread_exitcond9_fu_543_p2();
    void thread_exitcond_fu_649_p2();
    void thread_grp_ListDelete_fu_440_ap_start();
    void thread_grp_ListDelete_fu_440_i();
    void thread_grp_ListDelete_fu_440_length_r();
    void thread_grp_ListDelete_fu_448_ap_start();
    void thread_grp_ListDelete_fu_448_i();
    void thread_grp_ListDelete_fu_448_length_r();
    void thread_grp_ListInsert_fu_423_ap_start();
    void thread_grp_ListInsert_fu_431_ap_start();
    void thread_grp_fu_458_opcode();
    void thread_grp_fu_458_p0();
    void thread_grp_fu_458_p1();
    void thread_grp_fu_465_p0();
    void thread_grp_fu_465_p1();
    void thread_grp_fu_469_p0();
    void thread_grp_fu_469_p1();
    void thread_grp_fu_473_p0();
    void thread_i_3_fu_549_p2();
    void thread_i_5_fu_939_p2();
    void thread_i_6_fu_958_p2();
    void thread_i_cast8_cast_fu_555_p1();
    void thread_isNeg_fu_724_p3();
    void thread_j_3_fu_575_p2();
    void thread_mantissa_V_1_i_i_i_c_fu_710_p1();
    void thread_mantissa_V_fu_700_p4();
    void thread_notlhs_fu_898_p2();
    void thread_notrhs_fu_904_p2();
    void thread_p_02_rec_cast_fu_625_p1();
    void thread_p_Result_1_fu_868_p3();
    void thread_p_Result_s_fu_678_p3();
    void thread_p_Val2_5_fu_860_p1();
    void thread_p_Val2_6_fu_796_p3();
    void thread_p_Val2_7_fu_810_p3();
    void thread_p_Val2_s_fu_674_p1();
    void thread_p_rec_fu_643_p2();
    void thread_r_V_1_fu_768_p2();
    void thread_r_V_fu_762_p2();
    void thread_result_V_1_fu_804_p2();
    void thread_ret_i_i_i_i_i_fu_875_p1();
    void thread_sh_assign_2_i_i_i_ca_1_fu_754_p1();
    void thread_sh_assign_2_i_i_i_ca_fu_750_p1();
    void thread_sh_assign_fu_718_p2();
    void thread_src_data_stream_V_blk_n();
    void thread_src_data_stream_V_read();
    void thread_tmp_18_fu_774_p3();
    void thread_tmp_19_fu_864_p1();
    void thread_tmp_20_fu_894_p1();
    void thread_tmp_24_fu_581_p2();
    void thread_tmp_25_fu_836_p2();
    void thread_tmp_26_fu_782_p1();
    void thread_tmp_27_fu_786_p4();
    void thread_tmp_29_fu_842_p2();
    void thread_tmp_36_fu_661_p1();
    void thread_tmp_37_fu_818_p1();
    void thread_tmp_38_fu_592_p2();
    void thread_tmp_39_fu_598_p2();
    void thread_tmp_40_fu_848_p2();
    void thread_tmp_41_fu_854_p1();
    void thread_tmp_47_fu_884_p4();
    void thread_tmp_48_fu_910_p2();
    void thread_tmp_50_fu_916_p2();
    void thread_tmp_51_fu_946_p2();
    void thread_tmp_V_1_fu_696_p1();
    void thread_tmp_V_fu_686_p4();
    void thread_tmp_i_i_i_132_fu_758_p1();
    void thread_tmp_i_i_i_cast_fu_738_p1();
    void thread_tmp_i_i_i_fu_732_p2();
    void thread_tmp_i_i_i_i_cast_fu_714_p1();
    void thread_ush_fu_742_p3();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
