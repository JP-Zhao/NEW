// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _TOP_fuct_entry226_HH_
#define _TOP_fuct_entry226_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct TOP_fuct_entry226 : public sc_module {
    // Port declarations 22
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_in< sc_logic > start_full_n;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_logic > start_out;
    sc_out< sc_logic > start_write;
    sc_in< sc_lv<32> > rows_dout;
    sc_in< sc_logic > rows_empty_n;
    sc_out< sc_logic > rows_read;
    sc_in< sc_lv<32> > cols_dout;
    sc_in< sc_logic > cols_empty_n;
    sc_out< sc_logic > cols_read;
    sc_out< sc_lv<32> > rows_out_din;
    sc_in< sc_logic > rows_out_full_n;
    sc_out< sc_logic > rows_out_write;
    sc_out< sc_lv<32> > cols_out_din;
    sc_in< sc_logic > cols_out_full_n;
    sc_out< sc_logic > cols_out_write;


    // Module declarations
    TOP_fuct_entry226(sc_module_name name);
    SC_HAS_PROCESS(TOP_fuct_entry226);

    ~TOP_fuct_entry226();

    sc_trace_file* mVcdFile;

    sc_signal< sc_logic > real_start;
    sc_signal< sc_logic > start_once_reg;
    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<1> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > internal_ap_ready;
    sc_signal< sc_logic > rows_blk_n;
    sc_signal< sc_logic > cols_blk_n;
    sc_signal< sc_logic > rows_out_blk_n;
    sc_signal< sc_logic > cols_out_blk_n;
    sc_signal< bool > ap_block_state1;
    sc_signal< sc_lv<1> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<1> ap_ST_fsm_state1;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_block_state1();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_cols_blk_n();
    void thread_cols_out_blk_n();
    void thread_cols_out_din();
    void thread_cols_out_write();
    void thread_cols_read();
    void thread_internal_ap_ready();
    void thread_real_start();
    void thread_rows_blk_n();
    void thread_rows_out_blk_n();
    void thread_rows_out_din();
    void thread_rows_out_write();
    void thread_rows_read();
    void thread_start_out();
    void thread_start_write();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
