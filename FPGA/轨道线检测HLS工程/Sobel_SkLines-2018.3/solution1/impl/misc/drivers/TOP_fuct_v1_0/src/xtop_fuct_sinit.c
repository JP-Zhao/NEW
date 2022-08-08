// ==============================================================
// File generated on Sat Jun 04 16:23:54 +0800 2022
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __linux__

#include "xstatus.h"
#include "xparameters.h"
#include "xtop_fuct.h"

extern XTop_fuct_Config XTop_fuct_ConfigTable[];

XTop_fuct_Config *XTop_fuct_LookupConfig(u16 DeviceId) {
	XTop_fuct_Config *ConfigPtr = NULL;

	int Index;

	for (Index = 0; Index < XPAR_XTOP_FUCT_NUM_INSTANCES; Index++) {
		if (XTop_fuct_ConfigTable[Index].DeviceId == DeviceId) {
			ConfigPtr = &XTop_fuct_ConfigTable[Index];
			break;
		}
	}

	return ConfigPtr;
}

int XTop_fuct_Initialize(XTop_fuct *InstancePtr, u16 DeviceId) {
	XTop_fuct_Config *ConfigPtr;

	Xil_AssertNonvoid(InstancePtr != NULL);

	ConfigPtr = XTop_fuct_LookupConfig(DeviceId);
	if (ConfigPtr == NULL) {
		InstancePtr->IsReady = 0;
		return (XST_DEVICE_NOT_FOUND);
	}

	return XTop_fuct_CfgInitialize(InstancePtr, ConfigPtr);
}

#endif

