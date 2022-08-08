// ==============================================================
// File generated on Sat Jun 04 16:23:54 +0800 2022
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef XTOP_FUCT_H
#define XTOP_FUCT_H

#ifdef __cplusplus
extern "C" {
#endif

/***************************** Include Files *********************************/
#ifndef __linux__
#include "xil_types.h"
#include "xil_assert.h"
#include "xstatus.h"
#include "xil_io.h"
#else
#include <stdint.h>
#include <assert.h>
#include <dirent.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>
#include <stddef.h>
#endif
#include "xtop_fuct_hw.h"

/**************************** Type Definitions ******************************/
#ifdef __linux__
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
#else
typedef struct {
    u16 DeviceId;
    u32 Axilites_BaseAddress;
} XTop_fuct_Config;
#endif

typedef struct {
    u32 Axilites_BaseAddress;
    u32 IsReady;
} XTop_fuct;

/***************** Macros (Inline Functions) Definitions *********************/
#ifndef __linux__
#define XTop_fuct_WriteReg(BaseAddress, RegOffset, Data) \
    Xil_Out32((BaseAddress) + (RegOffset), (u32)(Data))
#define XTop_fuct_ReadReg(BaseAddress, RegOffset) \
    Xil_In32((BaseAddress) + (RegOffset))
#else
#define XTop_fuct_WriteReg(BaseAddress, RegOffset, Data) \
    *(volatile u32*)((BaseAddress) + (RegOffset)) = (u32)(Data)
#define XTop_fuct_ReadReg(BaseAddress, RegOffset) \
    *(volatile u32*)((BaseAddress) + (RegOffset))

#define Xil_AssertVoid(expr)    assert(expr)
#define Xil_AssertNonvoid(expr) assert(expr)

#define XST_SUCCESS             0
#define XST_DEVICE_NOT_FOUND    2
#define XST_OPEN_DEVICE_FAILED  3
#define XIL_COMPONENT_IS_READY  1
#endif

/************************** Function Prototypes *****************************/
#ifndef __linux__
int XTop_fuct_Initialize(XTop_fuct *InstancePtr, u16 DeviceId);
XTop_fuct_Config* XTop_fuct_LookupConfig(u16 DeviceId);
int XTop_fuct_CfgInitialize(XTop_fuct *InstancePtr, XTop_fuct_Config *ConfigPtr);
#else
int XTop_fuct_Initialize(XTop_fuct *InstancePtr, const char* InstanceName);
int XTop_fuct_Release(XTop_fuct *InstancePtr);
#endif


void XTop_fuct_Set_rows(XTop_fuct *InstancePtr, u32 Data);
u32 XTop_fuct_Get_rows(XTop_fuct *InstancePtr);
void XTop_fuct_Set_cols(XTop_fuct *InstancePtr, u32 Data);
u32 XTop_fuct_Get_cols(XTop_fuct *InstancePtr);

#ifdef __cplusplus
}
#endif

#endif
