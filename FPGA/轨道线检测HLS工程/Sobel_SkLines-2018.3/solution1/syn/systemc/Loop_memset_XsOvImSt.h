// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _Loop_memset_XsOvImSt_HH_
#define _Loop_memset_XsOvImSt_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct Loop_memset_XsOvImSt : public sc_module {
    // Port declarations 11
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<1> > XsOvImStrtLoc_address0;
    sc_out< sc_logic > XsOvImStrtLoc_ce0;
    sc_out< sc_logic > XsOvImStrtLoc_we0;
    sc_out< sc_lv<1> > XsOvImStrtLoc_d0;


    // Module declarations
    Loop_memset_XsOvImSt(sc_module_name name);
    SC_HAS_PROCESS(Loop_memset_XsOvImSt);

    ~Loop_memset_XsOvImSt();

    sc_trace_file* mVcdFile;

    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<2> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<1> > indvarinc1_fu_46_p2;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<1> > ap_phi_mux_invdar1_phi_fu_34_p4;
    sc_signal< sc_lv<1> > invdar1_reg_30;
    sc_signal< bool > ap_block_state1;
    sc_signal< sc_lv<64> > tmp_s_fu_41_p1;
    sc_signal< sc_lv<2> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<2> ap_ST_fsm_state1;
    static const sc_lv<2> ap_ST_fsm_state2;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_XsOvImStrtLoc_address0();
    void thread_XsOvImStrtLoc_ce0();
    void thread_XsOvImStrtLoc_d0();
    void thread_XsOvImStrtLoc_we0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_block_state1();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_phi_mux_invdar1_phi_fu_34_p4();
    void thread_ap_ready();
    void thread_indvarinc1_fu_46_p2();
    void thread_tmp_s_fu_41_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
