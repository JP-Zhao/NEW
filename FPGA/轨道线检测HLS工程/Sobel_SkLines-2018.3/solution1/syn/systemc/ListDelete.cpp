// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "ListDelete.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic ListDelete::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic ListDelete::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<3> ListDelete::ap_ST_fsm_state1 = "1";
const sc_lv<3> ListDelete::ap_ST_fsm_state2 = "10";
const sc_lv<3> ListDelete::ap_ST_fsm_state3 = "100";
const sc_lv<32> ListDelete::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> ListDelete::ap_const_lv32_1 = "1";
const sc_lv<1> ListDelete::ap_const_lv1_0 = "0";
const sc_lv<1> ListDelete::ap_const_lv1_1 = "1";
const sc_lv<32> ListDelete::ap_const_lv32_2 = "10";
const sc_lv<32> ListDelete::ap_const_lv32_FFFFFFFF = "11111111111111111111111111111111";
const bool ListDelete::ap_const_boolean_1 = true;

ListDelete::ListDelete(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_Data_address0);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( tmp_70_fu_81_p1 );
    sensitive << ( tmp_72_fu_92_p1 );

    SC_METHOD(thread_Data_ce0);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_Data_d0);
    sensitive << ( Data_q0 );
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_Data_we0);
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( or_cond_reg_113 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( tmp_69_fu_76_p2 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( or_cond_reg_113 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( tmp_69_fu_76_p2 );

    SC_METHOD(thread_j_7_fu_97_p2);
    sensitive << ( j_reg_48 );

    SC_METHOD(thread_or_cond_fu_70_p2);
    sensitive << ( tmp_fu_58_p2 );
    sensitive << ( tmp_s_fu_64_p2 );

    SC_METHOD(thread_tmp_69_fu_76_p2);
    sensitive << ( length_r );
    sensitive << ( or_cond_reg_113 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( j_reg_48 );

    SC_METHOD(thread_tmp_70_fu_81_p1);
    sensitive << ( j_reg_48 );

    SC_METHOD(thread_tmp_71_fu_86_p2);
    sensitive << ( j_reg_48 );

    SC_METHOD(thread_tmp_72_fu_92_p1);
    sensitive << ( tmp_71_fu_86_p2 );

    SC_METHOD(thread_tmp_fu_58_p2);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( i );

    SC_METHOD(thread_tmp_s_fu_64_p2);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( i );
    sensitive << ( length_r );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( or_cond_reg_113 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( tmp_69_fu_76_p2 );

    ap_CS_fsm = "001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "ListDelete_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, Data_address0, "(port)Data_address0");
    sc_trace(mVcdFile, Data_ce0, "(port)Data_ce0");
    sc_trace(mVcdFile, Data_we0, "(port)Data_we0");
    sc_trace(mVcdFile, Data_d0, "(port)Data_d0");
    sc_trace(mVcdFile, Data_q0, "(port)Data_q0");
    sc_trace(mVcdFile, i, "(port)i");
    sc_trace(mVcdFile, length_r, "(port)length_r");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, or_cond_fu_70_p2, "or_cond_fu_70_p2");
    sc_trace(mVcdFile, or_cond_reg_113, "or_cond_reg_113");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, tmp_69_fu_76_p2, "tmp_69_fu_76_p2");
    sc_trace(mVcdFile, j_7_fu_97_p2, "j_7_fu_97_p2");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, j_reg_48, "j_reg_48");
    sc_trace(mVcdFile, tmp_70_fu_81_p1, "tmp_70_fu_81_p1");
    sc_trace(mVcdFile, tmp_72_fu_92_p1, "tmp_72_fu_92_p1");
    sc_trace(mVcdFile, tmp_fu_58_p2, "tmp_fu_58_p2");
    sc_trace(mVcdFile, tmp_s_fu_64_p2, "tmp_s_fu_64_p2");
    sc_trace(mVcdFile, tmp_71_fu_86_p2, "tmp_71_fu_86_p2");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
}

ListDelete::~ListDelete() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

}

void ListDelete::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(or_cond_fu_70_p2.read(), ap_const_lv1_0))) {
        j_reg_48 = i.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        j_reg_48 = j_7_fu_97_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        or_cond_reg_113 = or_cond_fu_70_p2.read();
    }
}

void ListDelete::thread_Data_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        Data_address0 =  (sc_lv<13>) (tmp_72_fu_92_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        Data_address0 =  (sc_lv<13>) (tmp_70_fu_81_p1.read());
    } else {
        Data_address0 = "XXXXXXXXXXXXX";
    }
}

void ListDelete::thread_Data_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()))) {
        Data_ce0 = ap_const_logic_1;
    } else {
        Data_ce0 = ap_const_logic_0;
    }
}

void ListDelete::thread_Data_d0() {
    Data_d0 = Data_q0.read();
}

void ListDelete::thread_Data_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        Data_we0 = ap_const_logic_1;
    } else {
        Data_we0 = ap_const_logic_0;
    }
}

void ListDelete::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void ListDelete::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void ListDelete::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void ListDelete::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_69_fu_76_p2.read()) || 
           esl_seteq<1,1,1>(or_cond_reg_113.read(), ap_const_lv1_1))))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void ListDelete::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void ListDelete::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_69_fu_76_p2.read()) || 
          esl_seteq<1,1,1>(or_cond_reg_113.read(), ap_const_lv1_1)))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void ListDelete::thread_j_7_fu_97_p2() {
    j_7_fu_97_p2 = (!j_reg_48.read().is_01() || !ap_const_lv32_1.is_01())? sc_lv<32>(): (sc_bigint<32>(j_reg_48.read()) + sc_biguint<32>(ap_const_lv32_1));
}

void ListDelete::thread_or_cond_fu_70_p2() {
    or_cond_fu_70_p2 = (tmp_fu_58_p2.read() | tmp_s_fu_64_p2.read());
}

void ListDelete::thread_tmp_69_fu_76_p2() {
    tmp_69_fu_76_p2 = (!j_reg_48.read().is_01() || !length_r.read().is_01())? sc_lv<1>(): (sc_bigint<32>(j_reg_48.read()) < sc_bigint<32>(length_r.read()));
}

void ListDelete::thread_tmp_70_fu_81_p1() {
    tmp_70_fu_81_p1 = esl_sext<64,32>(j_reg_48.read());
}

void ListDelete::thread_tmp_71_fu_86_p2() {
    tmp_71_fu_86_p2 = (!j_reg_48.read().is_01() || !ap_const_lv32_FFFFFFFF.is_01())? sc_lv<32>(): (sc_bigint<32>(j_reg_48.read()) + sc_bigint<32>(ap_const_lv32_FFFFFFFF));
}

void ListDelete::thread_tmp_72_fu_92_p1() {
    tmp_72_fu_92_p1 = esl_sext<64,32>(tmp_71_fu_86_p2.read());
}

void ListDelete::thread_tmp_fu_58_p2() {
    tmp_fu_58_p2 = (!i.read().is_01() || !ap_const_lv32_1.is_01())? sc_lv<1>(): (sc_bigint<32>(i.read()) < sc_bigint<32>(ap_const_lv32_1));
}

void ListDelete::thread_tmp_s_fu_64_p2() {
    tmp_s_fu_64_p2 = (!i.read().is_01() || !length_r.read().is_01())? sc_lv<1>(): (sc_bigint<32>(i.read()) > sc_bigint<32>(length_r.read()));
}

void ListDelete::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_69_fu_76_p2.read()) || 
  esl_seteq<1,1,1>(or_cond_reg_113.read(), ap_const_lv1_1)))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state2;
            break;
        default : 
            ap_NS_fsm =  (sc_lv<3>) ("XXX");
            break;
    }
}

}

