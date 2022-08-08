// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _ListInsert_HH_
#define _ListInsert_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct ListInsert : public sc_module {
    // Port declarations 14
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<13> > Data_address0;
    sc_out< sc_logic > Data_ce0;
    sc_out< sc_logic > Data_we0;
    sc_out< sc_lv<32> > Data_d0;
    sc_in< sc_lv<32> > Data_q0;
    sc_in< sc_lv<32> > i;
    sc_in< sc_lv<9> > e;
    sc_in< sc_lv<32> > length_r;


    // Module declarations
    ListInsert(sc_module_name name);
    SC_HAS_PROCESS(ListInsert);

    ~ListInsert();

    sc_trace_file* mVcdFile;

    sc_signal< sc_lv<3> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<32> > e_cast_fu_76_p1;
    sc_signal< sc_lv<32> > e_cast_reg_146;
    sc_signal< sc_lv<1> > tmp_fu_80_p2;
    sc_signal< sc_lv<1> > tmp_reg_151;
    sc_signal< sc_lv<1> > tmp_62_fu_92_p2;
    sc_signal< sc_lv<1> > tmp_62_reg_155;
    sc_signal< sc_lv<1> > tmp_63_fu_98_p2;
    sc_signal< sc_lv<1> > tmp_63_reg_159;
    sc_signal< sc_lv<13> > Data_addr_reg_163;
    sc_signal< sc_lv<32> > j_6_fu_114_p2;
    sc_signal< sc_lv<32> > j_6_reg_171;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<1> > tmp_65_fu_109_p2;
    sc_signal< sc_lv<32> > j_reg_67;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<64> > tmp_64_fu_104_p1;
    sc_signal< sc_lv<64> > tmp_68_fu_120_p1;
    sc_signal< sc_lv<64> > tmp_67_fu_130_p1;
    sc_signal< sc_lv<32> > tmp_s_fu_86_p2;
    sc_signal< sc_lv<32> > tmp_66_fu_125_p2;
    sc_signal< sc_lv<3> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<3> ap_ST_fsm_state1;
    static const sc_lv<3> ap_ST_fsm_state2;
    static const sc_lv<3> ap_ST_fsm_state3;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_1388;
    static const sc_lv<32> ap_const_lv32_FFFFFFFF;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_Data_address0();
    void thread_Data_ce0();
    void thread_Data_d0();
    void thread_Data_we0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_e_cast_fu_76_p1();
    void thread_j_6_fu_114_p2();
    void thread_tmp_62_fu_92_p2();
    void thread_tmp_63_fu_98_p2();
    void thread_tmp_64_fu_104_p1();
    void thread_tmp_65_fu_109_p2();
    void thread_tmp_66_fu_125_p2();
    void thread_tmp_67_fu_130_p1();
    void thread_tmp_68_fu_120_p1();
    void thread_tmp_fu_80_p2();
    void thread_tmp_s_fu_86_p2();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
