set moduleName Block_TOP_fuct_memin
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 1
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {Block_TOP_fuct_memin}
set C_modelType { void 0 }
set C_modelArgList {
	{ rows int 32 regular {fifo 0}  }
	{ cols int 32 regular {fifo 0}  }
	{ rows_out int 32 regular {fifo 1}  }
	{ ImgRgb_Datsrc_rows_V_out int 32 regular {fifo 1}  }
	{ cols_out int 32 regular {fifo 1}  }
	{ ImgRgb_Datsrc_cols_V_out int 32 regular {fifo 1}  }
	{ ImgGry_Datsrc_rows_V_out int 32 regular {fifo 1}  }
	{ ImgGry_Datsrc_cols_V_out int 32 regular {fifo 1}  }
	{ ImgGry_Datcop_rows_V_out int 9 regular {fifo 1}  }
	{ ImgGry_Datcop_cols_V_out int 10 regular {fifo 1}  }
	{ ImgGry_Threh_sp_rows_V_out int 9 regular {fifo 1}  }
	{ ImgGry_Threh_sp_cols_V_out int 10 regular {fifo 1}  }
	{ ImgGry_Threh_cz_rows_V_out int 9 regular {fifo 1}  }
	{ ImgGry_Threh_cz_cols_V_out int 10 regular {fifo 1}  }
	{ ImgGry_Ovlaycz_rows_V_out int 9 regular {fifo 1}  }
	{ ImgGry_Ovlaycz_cols_V_out int 10 regular {fifo 1}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "rows", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "cols", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "rows_out", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "ImgRgb_Datsrc_rows_V_out", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "cols_out", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "ImgRgb_Datsrc_cols_V_out", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "ImgGry_Datsrc_rows_V_out", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "ImgGry_Datsrc_cols_V_out", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "ImgGry_Datcop_rows_V_out", "interface" : "fifo", "bitwidth" : 9, "direction" : "WRITEONLY"} , 
 	{ "Name" : "ImgGry_Datcop_cols_V_out", "interface" : "fifo", "bitwidth" : 10, "direction" : "WRITEONLY"} , 
 	{ "Name" : "ImgGry_Threh_sp_rows_V_out", "interface" : "fifo", "bitwidth" : 9, "direction" : "WRITEONLY"} , 
 	{ "Name" : "ImgGry_Threh_sp_cols_V_out", "interface" : "fifo", "bitwidth" : 10, "direction" : "WRITEONLY"} , 
 	{ "Name" : "ImgGry_Threh_cz_rows_V_out", "interface" : "fifo", "bitwidth" : 9, "direction" : "WRITEONLY"} , 
 	{ "Name" : "ImgGry_Threh_cz_cols_V_out", "interface" : "fifo", "bitwidth" : 10, "direction" : "WRITEONLY"} , 
 	{ "Name" : "ImgGry_Ovlaycz_rows_V_out", "interface" : "fifo", "bitwidth" : 9, "direction" : "WRITEONLY"} , 
 	{ "Name" : "ImgGry_Ovlaycz_cols_V_out", "interface" : "fifo", "bitwidth" : 10, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 58
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ start_full_n sc_in sc_logic 1 signal -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_continue sc_in sc_logic 1 continue -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ start_out sc_out sc_logic 1 signal -1 } 
	{ start_write sc_out sc_logic 1 signal -1 } 
	{ rows_dout sc_in sc_lv 32 signal 0 } 
	{ rows_empty_n sc_in sc_logic 1 signal 0 } 
	{ rows_read sc_out sc_logic 1 signal 0 } 
	{ cols_dout sc_in sc_lv 32 signal 1 } 
	{ cols_empty_n sc_in sc_logic 1 signal 1 } 
	{ cols_read sc_out sc_logic 1 signal 1 } 
	{ rows_out_din sc_out sc_lv 32 signal 2 } 
	{ rows_out_full_n sc_in sc_logic 1 signal 2 } 
	{ rows_out_write sc_out sc_logic 1 signal 2 } 
	{ ImgRgb_Datsrc_rows_V_out_din sc_out sc_lv 32 signal 3 } 
	{ ImgRgb_Datsrc_rows_V_out_full_n sc_in sc_logic 1 signal 3 } 
	{ ImgRgb_Datsrc_rows_V_out_write sc_out sc_logic 1 signal 3 } 
	{ cols_out_din sc_out sc_lv 32 signal 4 } 
	{ cols_out_full_n sc_in sc_logic 1 signal 4 } 
	{ cols_out_write sc_out sc_logic 1 signal 4 } 
	{ ImgRgb_Datsrc_cols_V_out_din sc_out sc_lv 32 signal 5 } 
	{ ImgRgb_Datsrc_cols_V_out_full_n sc_in sc_logic 1 signal 5 } 
	{ ImgRgb_Datsrc_cols_V_out_write sc_out sc_logic 1 signal 5 } 
	{ ImgGry_Datsrc_rows_V_out_din sc_out sc_lv 32 signal 6 } 
	{ ImgGry_Datsrc_rows_V_out_full_n sc_in sc_logic 1 signal 6 } 
	{ ImgGry_Datsrc_rows_V_out_write sc_out sc_logic 1 signal 6 } 
	{ ImgGry_Datsrc_cols_V_out_din sc_out sc_lv 32 signal 7 } 
	{ ImgGry_Datsrc_cols_V_out_full_n sc_in sc_logic 1 signal 7 } 
	{ ImgGry_Datsrc_cols_V_out_write sc_out sc_logic 1 signal 7 } 
	{ ImgGry_Datcop_rows_V_out_din sc_out sc_lv 9 signal 8 } 
	{ ImgGry_Datcop_rows_V_out_full_n sc_in sc_logic 1 signal 8 } 
	{ ImgGry_Datcop_rows_V_out_write sc_out sc_logic 1 signal 8 } 
	{ ImgGry_Datcop_cols_V_out_din sc_out sc_lv 10 signal 9 } 
	{ ImgGry_Datcop_cols_V_out_full_n sc_in sc_logic 1 signal 9 } 
	{ ImgGry_Datcop_cols_V_out_write sc_out sc_logic 1 signal 9 } 
	{ ImgGry_Threh_sp_rows_V_out_din sc_out sc_lv 9 signal 10 } 
	{ ImgGry_Threh_sp_rows_V_out_full_n sc_in sc_logic 1 signal 10 } 
	{ ImgGry_Threh_sp_rows_V_out_write sc_out sc_logic 1 signal 10 } 
	{ ImgGry_Threh_sp_cols_V_out_din sc_out sc_lv 10 signal 11 } 
	{ ImgGry_Threh_sp_cols_V_out_full_n sc_in sc_logic 1 signal 11 } 
	{ ImgGry_Threh_sp_cols_V_out_write sc_out sc_logic 1 signal 11 } 
	{ ImgGry_Threh_cz_rows_V_out_din sc_out sc_lv 9 signal 12 } 
	{ ImgGry_Threh_cz_rows_V_out_full_n sc_in sc_logic 1 signal 12 } 
	{ ImgGry_Threh_cz_rows_V_out_write sc_out sc_logic 1 signal 12 } 
	{ ImgGry_Threh_cz_cols_V_out_din sc_out sc_lv 10 signal 13 } 
	{ ImgGry_Threh_cz_cols_V_out_full_n sc_in sc_logic 1 signal 13 } 
	{ ImgGry_Threh_cz_cols_V_out_write sc_out sc_logic 1 signal 13 } 
	{ ImgGry_Ovlaycz_rows_V_out_din sc_out sc_lv 9 signal 14 } 
	{ ImgGry_Ovlaycz_rows_V_out_full_n sc_in sc_logic 1 signal 14 } 
	{ ImgGry_Ovlaycz_rows_V_out_write sc_out sc_logic 1 signal 14 } 
	{ ImgGry_Ovlaycz_cols_V_out_din sc_out sc_lv 10 signal 15 } 
	{ ImgGry_Ovlaycz_cols_V_out_full_n sc_in sc_logic 1 signal 15 } 
	{ ImgGry_Ovlaycz_cols_V_out_write sc_out sc_logic 1 signal 15 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "start_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_full_n", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "start_out", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_out", "role": "default" }} , 
 	{ "name": "start_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_write", "role": "default" }} , 
 	{ "name": "rows_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rows", "role": "dout" }} , 
 	{ "name": "rows_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "rows", "role": "empty_n" }} , 
 	{ "name": "rows_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "rows", "role": "read" }} , 
 	{ "name": "cols_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "cols", "role": "dout" }} , 
 	{ "name": "cols_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "cols", "role": "empty_n" }} , 
 	{ "name": "cols_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "cols", "role": "read" }} , 
 	{ "name": "rows_out_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rows_out", "role": "din" }} , 
 	{ "name": "rows_out_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "rows_out", "role": "full_n" }} , 
 	{ "name": "rows_out_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "rows_out", "role": "write" }} , 
 	{ "name": "ImgRgb_Datsrc_rows_V_out_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ImgRgb_Datsrc_rows_V_out", "role": "din" }} , 
 	{ "name": "ImgRgb_Datsrc_rows_V_out_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ImgRgb_Datsrc_rows_V_out", "role": "full_n" }} , 
 	{ "name": "ImgRgb_Datsrc_rows_V_out_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ImgRgb_Datsrc_rows_V_out", "role": "write" }} , 
 	{ "name": "cols_out_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "cols_out", "role": "din" }} , 
 	{ "name": "cols_out_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "cols_out", "role": "full_n" }} , 
 	{ "name": "cols_out_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "cols_out", "role": "write" }} , 
 	{ "name": "ImgRgb_Datsrc_cols_V_out_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ImgRgb_Datsrc_cols_V_out", "role": "din" }} , 
 	{ "name": "ImgRgb_Datsrc_cols_V_out_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ImgRgb_Datsrc_cols_V_out", "role": "full_n" }} , 
 	{ "name": "ImgRgb_Datsrc_cols_V_out_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ImgRgb_Datsrc_cols_V_out", "role": "write" }} , 
 	{ "name": "ImgGry_Datsrc_rows_V_out_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ImgGry_Datsrc_rows_V_out", "role": "din" }} , 
 	{ "name": "ImgGry_Datsrc_rows_V_out_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ImgGry_Datsrc_rows_V_out", "role": "full_n" }} , 
 	{ "name": "ImgGry_Datsrc_rows_V_out_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ImgGry_Datsrc_rows_V_out", "role": "write" }} , 
 	{ "name": "ImgGry_Datsrc_cols_V_out_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ImgGry_Datsrc_cols_V_out", "role": "din" }} , 
 	{ "name": "ImgGry_Datsrc_cols_V_out_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ImgGry_Datsrc_cols_V_out", "role": "full_n" }} , 
 	{ "name": "ImgGry_Datsrc_cols_V_out_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ImgGry_Datsrc_cols_V_out", "role": "write" }} , 
 	{ "name": "ImgGry_Datcop_rows_V_out_din", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "ImgGry_Datcop_rows_V_out", "role": "din" }} , 
 	{ "name": "ImgGry_Datcop_rows_V_out_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ImgGry_Datcop_rows_V_out", "role": "full_n" }} , 
 	{ "name": "ImgGry_Datcop_rows_V_out_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ImgGry_Datcop_rows_V_out", "role": "write" }} , 
 	{ "name": "ImgGry_Datcop_cols_V_out_din", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "ImgGry_Datcop_cols_V_out", "role": "din" }} , 
 	{ "name": "ImgGry_Datcop_cols_V_out_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ImgGry_Datcop_cols_V_out", "role": "full_n" }} , 
 	{ "name": "ImgGry_Datcop_cols_V_out_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ImgGry_Datcop_cols_V_out", "role": "write" }} , 
 	{ "name": "ImgGry_Threh_sp_rows_V_out_din", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "ImgGry_Threh_sp_rows_V_out", "role": "din" }} , 
 	{ "name": "ImgGry_Threh_sp_rows_V_out_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ImgGry_Threh_sp_rows_V_out", "role": "full_n" }} , 
 	{ "name": "ImgGry_Threh_sp_rows_V_out_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ImgGry_Threh_sp_rows_V_out", "role": "write" }} , 
 	{ "name": "ImgGry_Threh_sp_cols_V_out_din", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "ImgGry_Threh_sp_cols_V_out", "role": "din" }} , 
 	{ "name": "ImgGry_Threh_sp_cols_V_out_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ImgGry_Threh_sp_cols_V_out", "role": "full_n" }} , 
 	{ "name": "ImgGry_Threh_sp_cols_V_out_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ImgGry_Threh_sp_cols_V_out", "role": "write" }} , 
 	{ "name": "ImgGry_Threh_cz_rows_V_out_din", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "ImgGry_Threh_cz_rows_V_out", "role": "din" }} , 
 	{ "name": "ImgGry_Threh_cz_rows_V_out_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ImgGry_Threh_cz_rows_V_out", "role": "full_n" }} , 
 	{ "name": "ImgGry_Threh_cz_rows_V_out_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ImgGry_Threh_cz_rows_V_out", "role": "write" }} , 
 	{ "name": "ImgGry_Threh_cz_cols_V_out_din", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "ImgGry_Threh_cz_cols_V_out", "role": "din" }} , 
 	{ "name": "ImgGry_Threh_cz_cols_V_out_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ImgGry_Threh_cz_cols_V_out", "role": "full_n" }} , 
 	{ "name": "ImgGry_Threh_cz_cols_V_out_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ImgGry_Threh_cz_cols_V_out", "role": "write" }} , 
 	{ "name": "ImgGry_Ovlaycz_rows_V_out_din", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "ImgGry_Ovlaycz_rows_V_out", "role": "din" }} , 
 	{ "name": "ImgGry_Ovlaycz_rows_V_out_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ImgGry_Ovlaycz_rows_V_out", "role": "full_n" }} , 
 	{ "name": "ImgGry_Ovlaycz_rows_V_out_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ImgGry_Ovlaycz_rows_V_out", "role": "write" }} , 
 	{ "name": "ImgGry_Ovlaycz_cols_V_out_din", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "ImgGry_Ovlaycz_cols_V_out", "role": "din" }} , 
 	{ "name": "ImgGry_Ovlaycz_cols_V_out_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ImgGry_Ovlaycz_cols_V_out", "role": "full_n" }} , 
 	{ "name": "ImgGry_Ovlaycz_cols_V_out_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ImgGry_Ovlaycz_cols_V_out", "role": "write" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
		"CDFG" : "Block_TOP_fuct_memin",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "rows", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "rows_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "cols", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "cols_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "rows_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "rows_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "ImgRgb_Datsrc_rows_V_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "ImgRgb_Datsrc_rows_V_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "cols_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "cols_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "ImgRgb_Datsrc_cols_V_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "ImgRgb_Datsrc_cols_V_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "ImgGry_Datsrc_rows_V_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "ImgGry_Datsrc_rows_V_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "ImgGry_Datsrc_cols_V_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "ImgGry_Datsrc_cols_V_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "ImgGry_Datcop_rows_V_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "ImgGry_Datcop_rows_V_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "ImgGry_Datcop_cols_V_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "ImgGry_Datcop_cols_V_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "ImgGry_Threh_sp_rows_V_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "ImgGry_Threh_sp_rows_V_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "ImgGry_Threh_sp_cols_V_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "ImgGry_Threh_sp_cols_V_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "ImgGry_Threh_cz_rows_V_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "ImgGry_Threh_cz_rows_V_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "ImgGry_Threh_cz_cols_V_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "ImgGry_Threh_cz_cols_V_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "ImgGry_Ovlaycz_rows_V_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "ImgGry_Ovlaycz_rows_V_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "ImgGry_Ovlaycz_cols_V_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "ImgGry_Ovlaycz_cols_V_out_blk_n", "Type" : "RtlSignal"}]}]}]}


set ArgLastReadFirstWriteLatency {
	Block_TOP_fuct_memin {
		rows {Type I LastRead 0 FirstWrite -1}
		cols {Type I LastRead 0 FirstWrite -1}
		rows_out {Type O LastRead -1 FirstWrite 0}
		ImgRgb_Datsrc_rows_V_out {Type O LastRead -1 FirstWrite 0}
		cols_out {Type O LastRead -1 FirstWrite 0}
		ImgRgb_Datsrc_cols_V_out {Type O LastRead -1 FirstWrite 0}
		ImgGry_Datsrc_rows_V_out {Type O LastRead -1 FirstWrite 0}
		ImgGry_Datsrc_cols_V_out {Type O LastRead -1 FirstWrite 0}
		ImgGry_Datcop_rows_V_out {Type O LastRead -1 FirstWrite 0}
		ImgGry_Datcop_cols_V_out {Type O LastRead -1 FirstWrite 0}
		ImgGry_Threh_sp_rows_V_out {Type O LastRead -1 FirstWrite 0}
		ImgGry_Threh_sp_cols_V_out {Type O LastRead -1 FirstWrite 0}
		ImgGry_Threh_cz_rows_V_out {Type O LastRead -1 FirstWrite 0}
		ImgGry_Threh_cz_cols_V_out {Type O LastRead -1 FirstWrite 0}
		ImgGry_Ovlaycz_rows_V_out {Type O LastRead -1 FirstWrite 0}
		ImgGry_Ovlaycz_cols_V_out {Type O LastRead -1 FirstWrite 0}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "0", "Max" : "0"}
	, {"Name" : "Interval", "Min" : "0", "Max" : "0"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	rows { ap_fifo {  { rows_dout fifo_data 0 32 }  { rows_empty_n fifo_status 0 1 }  { rows_read fifo_update 1 1 } } }
	cols { ap_fifo {  { cols_dout fifo_data 0 32 }  { cols_empty_n fifo_status 0 1 }  { cols_read fifo_update 1 1 } } }
	rows_out { ap_fifo {  { rows_out_din fifo_data 1 32 }  { rows_out_full_n fifo_status 0 1 }  { rows_out_write fifo_update 1 1 } } }
	ImgRgb_Datsrc_rows_V_out { ap_fifo {  { ImgRgb_Datsrc_rows_V_out_din fifo_data 1 32 }  { ImgRgb_Datsrc_rows_V_out_full_n fifo_status 0 1 }  { ImgRgb_Datsrc_rows_V_out_write fifo_update 1 1 } } }
	cols_out { ap_fifo {  { cols_out_din fifo_data 1 32 }  { cols_out_full_n fifo_status 0 1 }  { cols_out_write fifo_update 1 1 } } }
	ImgRgb_Datsrc_cols_V_out { ap_fifo {  { ImgRgb_Datsrc_cols_V_out_din fifo_data 1 32 }  { ImgRgb_Datsrc_cols_V_out_full_n fifo_status 0 1 }  { ImgRgb_Datsrc_cols_V_out_write fifo_update 1 1 } } }
	ImgGry_Datsrc_rows_V_out { ap_fifo {  { ImgGry_Datsrc_rows_V_out_din fifo_data 1 32 }  { ImgGry_Datsrc_rows_V_out_full_n fifo_status 0 1 }  { ImgGry_Datsrc_rows_V_out_write fifo_update 1 1 } } }
	ImgGry_Datsrc_cols_V_out { ap_fifo {  { ImgGry_Datsrc_cols_V_out_din fifo_data 1 32 }  { ImgGry_Datsrc_cols_V_out_full_n fifo_status 0 1 }  { ImgGry_Datsrc_cols_V_out_write fifo_update 1 1 } } }
	ImgGry_Datcop_rows_V_out { ap_fifo {  { ImgGry_Datcop_rows_V_out_din fifo_data 1 9 }  { ImgGry_Datcop_rows_V_out_full_n fifo_status 0 1 }  { ImgGry_Datcop_rows_V_out_write fifo_update 1 1 } } }
	ImgGry_Datcop_cols_V_out { ap_fifo {  { ImgGry_Datcop_cols_V_out_din fifo_data 1 10 }  { ImgGry_Datcop_cols_V_out_full_n fifo_status 0 1 }  { ImgGry_Datcop_cols_V_out_write fifo_update 1 1 } } }
	ImgGry_Threh_sp_rows_V_out { ap_fifo {  { ImgGry_Threh_sp_rows_V_out_din fifo_data 1 9 }  { ImgGry_Threh_sp_rows_V_out_full_n fifo_status 0 1 }  { ImgGry_Threh_sp_rows_V_out_write fifo_update 1 1 } } }
	ImgGry_Threh_sp_cols_V_out { ap_fifo {  { ImgGry_Threh_sp_cols_V_out_din fifo_data 1 10 }  { ImgGry_Threh_sp_cols_V_out_full_n fifo_status 0 1 }  { ImgGry_Threh_sp_cols_V_out_write fifo_update 1 1 } } }
	ImgGry_Threh_cz_rows_V_out { ap_fifo {  { ImgGry_Threh_cz_rows_V_out_din fifo_data 1 9 }  { ImgGry_Threh_cz_rows_V_out_full_n fifo_status 0 1 }  { ImgGry_Threh_cz_rows_V_out_write fifo_update 1 1 } } }
	ImgGry_Threh_cz_cols_V_out { ap_fifo {  { ImgGry_Threh_cz_cols_V_out_din fifo_data 1 10 }  { ImgGry_Threh_cz_cols_V_out_full_n fifo_status 0 1 }  { ImgGry_Threh_cz_cols_V_out_write fifo_update 1 1 } } }
	ImgGry_Ovlaycz_rows_V_out { ap_fifo {  { ImgGry_Ovlaycz_rows_V_out_din fifo_data 1 9 }  { ImgGry_Ovlaycz_rows_V_out_full_n fifo_status 0 1 }  { ImgGry_Ovlaycz_rows_V_out_write fifo_update 1 1 } } }
	ImgGry_Ovlaycz_cols_V_out { ap_fifo {  { ImgGry_Ovlaycz_cols_V_out_din fifo_data 1 10 }  { ImgGry_Ovlaycz_cols_V_out_full_n fifo_status 0 1 }  { ImgGry_Ovlaycz_cols_V_out_write fifo_update 1 1 } } }
}
