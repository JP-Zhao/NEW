// ==============================================================
// File generated on Sat Jun 04 16:23:54 +0800 2022
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
/***************************** Include Files *********************************/
#include "xtop_fuct.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XTop_fuct_CfgInitialize(XTop_fuct *InstancePtr, XTop_fuct_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Axilites_BaseAddress = ConfigPtr->Axilites_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XTop_fuct_Set_rows(XTop_fuct *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XTop_fuct_WriteReg(InstancePtr->Axilites_BaseAddress, XTOP_FUCT_AXILITES_ADDR_ROWS_DATA, Data);
}

u32 XTop_fuct_Get_rows(XTop_fuct *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XTop_fuct_ReadReg(InstancePtr->Axilites_BaseAddress, XTOP_FUCT_AXILITES_ADDR_ROWS_DATA);
    return Data;
}

void XTop_fuct_Set_cols(XTop_fuct *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XTop_fuct_WriteReg(InstancePtr->Axilites_BaseAddress, XTOP_FUCT_AXILITES_ADDR_COLS_DATA, Data);
}

u32 XTop_fuct_Get_cols(XTop_fuct *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XTop_fuct_ReadReg(InstancePtr->Axilites_BaseAddress, XTOP_FUCT_AXILITES_ADDR_COLS_DATA);
    return Data;
}

