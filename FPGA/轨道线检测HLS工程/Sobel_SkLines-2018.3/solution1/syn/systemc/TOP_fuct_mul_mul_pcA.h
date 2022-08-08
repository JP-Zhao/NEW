// ==============================================================
// File generated on Sat Jun 04 16:23:53 +0800 2022
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __TOP_fuct_mul_mul_pcA__HH__
#define __TOP_fuct_mul_mul_pcA__HH__
#include "ACMP_smul_us.h"
#include <systemc>

template<
    int ID,
    int NUM_STAGE,
    int din0_WIDTH,
    int din1_WIDTH,
    int dout_WIDTH>
SC_MODULE(TOP_fuct_mul_mul_pcA) {
    sc_core::sc_in< sc_dt::sc_lv<din0_WIDTH> >   din0;
    sc_core::sc_in< sc_dt::sc_lv<din1_WIDTH> >   din1;
    sc_core::sc_out< sc_dt::sc_lv<dout_WIDTH> >   dout;



    ACMP_smul_us<ID, 1, din0_WIDTH, din1_WIDTH, dout_WIDTH> ACMP_smul_us_U;

    SC_CTOR(TOP_fuct_mul_mul_pcA):  ACMP_smul_us_U ("ACMP_smul_us_U") {
        ACMP_smul_us_U.din0(din0);
        ACMP_smul_us_U.din1(din1);
        ACMP_smul_us_U.dout(dout);

    }

};

#endif //
