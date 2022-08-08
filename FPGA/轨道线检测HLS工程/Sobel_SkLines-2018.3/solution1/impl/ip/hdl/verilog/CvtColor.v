// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module CvtColor (
        ap_clk,
        ap_rst,
        ap_start,
        start_full_n,
        ap_done,
        ap_continue,
        ap_idle,
        ap_ready,
        start_out,
        start_write,
        p_src_rows_V_dout,
        p_src_rows_V_empty_n,
        p_src_rows_V_read,
        p_src_cols_V_dout,
        p_src_cols_V_empty_n,
        p_src_cols_V_read,
        p_src_data_stream_0_V_dout,
        p_src_data_stream_0_V_empty_n,
        p_src_data_stream_0_V_read,
        p_src_data_stream_1_V_dout,
        p_src_data_stream_1_V_empty_n,
        p_src_data_stream_1_V_read,
        p_src_data_stream_2_V_dout,
        p_src_data_stream_2_V_empty_n,
        p_src_data_stream_2_V_read,
        p_dst_data_stream_V_din,
        p_dst_data_stream_V_full_n,
        p_dst_data_stream_V_write
);

parameter    ap_ST_fsm_state1 = 4'd1;
parameter    ap_ST_fsm_state2 = 4'd2;
parameter    ap_ST_fsm_pp0_stage0 = 4'd4;
parameter    ap_ST_fsm_state6 = 4'd8;

input   ap_clk;
input   ap_rst;
input   ap_start;
input   start_full_n;
output   ap_done;
input   ap_continue;
output   ap_idle;
output   ap_ready;
output   start_out;
output   start_write;
input  [31:0] p_src_rows_V_dout;
input   p_src_rows_V_empty_n;
output   p_src_rows_V_read;
input  [31:0] p_src_cols_V_dout;
input   p_src_cols_V_empty_n;
output   p_src_cols_V_read;
input  [7:0] p_src_data_stream_0_V_dout;
input   p_src_data_stream_0_V_empty_n;
output   p_src_data_stream_0_V_read;
input  [7:0] p_src_data_stream_1_V_dout;
input   p_src_data_stream_1_V_empty_n;
output   p_src_data_stream_1_V_read;
input  [7:0] p_src_data_stream_2_V_dout;
input   p_src_data_stream_2_V_empty_n;
output   p_src_data_stream_2_V_read;
output  [7:0] p_dst_data_stream_V_din;
input   p_dst_data_stream_V_full_n;
output   p_dst_data_stream_V_write;

reg ap_done;
reg ap_idle;
reg start_write;
reg p_src_rows_V_read;
reg p_src_cols_V_read;
reg p_src_data_stream_0_V_read;
reg p_src_data_stream_1_V_read;
reg p_src_data_stream_2_V_read;
reg p_dst_data_stream_V_write;

reg    real_start;
reg    start_once_reg;
reg    ap_done_reg;
(* fsm_encoding = "none" *) reg   [3:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg    internal_ap_ready;
reg    p_src_rows_V_blk_n;
reg    p_src_cols_V_blk_n;
reg    p_src_data_stream_0_V_blk_n;
wire    ap_CS_fsm_pp0_stage0;
reg    ap_enable_reg_pp0_iter1;
wire    ap_block_pp0_stage0;
reg   [0:0] tmp_23_i_reg_301;
reg    p_src_data_stream_1_V_blk_n;
reg    p_src_data_stream_2_V_blk_n;
reg    p_dst_data_stream_V_blk_n;
reg    ap_enable_reg_pp0_iter2;
reg   [0:0] tmp_23_i_reg_301_pp0_iter1_reg;
reg   [30:0] j_i_reg_140;
reg   [31:0] cols_reg_282;
reg    ap_block_state1;
reg   [31:0] rows_reg_287;
wire   [0:0] tmp_i_fu_155_p2;
wire    ap_CS_fsm_state2;
wire   [30:0] i_fu_160_p2;
reg   [30:0] i_reg_296;
wire   [0:0] tmp_23_i_fu_170_p2;
wire    ap_block_state3_pp0_stage0_iter0;
reg    ap_block_state4_pp0_stage0_iter1;
reg    ap_block_state5_pp0_stage0_iter2;
reg    ap_block_pp0_stage0_11001;
wire   [30:0] j_fu_175_p2;
reg    ap_enable_reg_pp0_iter0;
reg   [7:0] tmp_70_reg_310;
wire   [28:0] grp_fu_263_p3;
reg   [28:0] ret_V_reg_315;
reg    ap_block_pp0_stage0_subdone;
reg    ap_condition_pp0_exit_iter0_state3;
reg   [30:0] i_i_reg_129;
wire    ap_CS_fsm_state6;
reg    ap_block_pp0_stage0_01001;
wire   [31:0] i_cast_i_fu_151_p1;
wire   [31:0] j_cast_i_fu_166_p1;
wire   [29:0] grp_fu_271_p3;
wire   [0:0] tmp_fu_204_p3;
wire   [7:0] tmp_5_i_i_i_cast_i_fu_211_p1;
wire   [7:0] p_Val2_6_fu_195_p4;
wire   [0:0] tmp_66_fu_221_p3;
wire   [7:0] p_Val2_7_fu_215_p2;
wire   [0:0] tmp_67_fu_234_p3;
wire   [0:0] rev_fu_228_p2;
wire   [0:0] deleted_zeros_fu_242_p2;
wire   [21:0] r_V_i_i_fu_257_p0;
wire   [7:0] r_V_i_i_fu_257_p1;
wire   [19:0] grp_fu_263_p0;
wire   [7:0] grp_fu_263_p1;
wire   [28:0] r_V_i_i_fu_257_p2;
wire   [22:0] grp_fu_271_p0;
wire   [7:0] grp_fu_271_p1;
wire   [28:0] grp_fu_271_p2;
reg   [3:0] ap_NS_fsm;
reg    ap_idle_pp0;
wire    ap_enable_pp0;
wire   [27:0] grp_fu_263_p10;
wire   [29:0] grp_fu_271_p10;
wire   [29:0] grp_fu_271_p20;
wire   [28:0] r_V_i_i_fu_257_p10;

// power-on initialization
initial begin
#0 start_once_reg = 1'b0;
#0 ap_done_reg = 1'b0;
#0 ap_CS_fsm = 4'd1;
#0 ap_enable_reg_pp0_iter1 = 1'b0;
#0 ap_enable_reg_pp0_iter2 = 1'b0;
#0 ap_enable_reg_pp0_iter0 = 1'b0;
end

TOP_fuct_mul_mul_bkb #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 22 ),
    .din1_WIDTH( 8 ),
    .dout_WIDTH( 29 ))
TOP_fuct_mul_mul_bkb_U41(
    .din0(r_V_i_i_fu_257_p0),
    .din1(r_V_i_i_fu_257_p1),
    .dout(r_V_i_i_fu_257_p2)
);

TOP_fuct_mac_mulacud #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 20 ),
    .din1_WIDTH( 8 ),
    .din2_WIDTH( 29 ),
    .dout_WIDTH( 29 ))
TOP_fuct_mac_mulacud_U42(
    .din0(grp_fu_263_p0),
    .din1(grp_fu_263_p1),
    .din2(r_V_i_i_fu_257_p2),
    .dout(grp_fu_263_p3)
);

TOP_fuct_mac_muladEe #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 23 ),
    .din1_WIDTH( 8 ),
    .din2_WIDTH( 29 ),
    .dout_WIDTH( 30 ))
TOP_fuct_mac_muladEe_U43(
    .din0(grp_fu_271_p0),
    .din1(grp_fu_271_p1),
    .din2(grp_fu_271_p2),
    .dout(grp_fu_271_p3)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_done_reg <= 1'b0;
    end else begin
        if ((ap_continue == 1'b1)) begin
            ap_done_reg <= 1'b0;
        end else if (((1'b1 == ap_CS_fsm_state2) & (tmp_i_fu_155_p2 == 1'd0))) begin
            ap_done_reg <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter0 <= 1'b0;
    end else begin
        if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b1 == ap_condition_pp0_exit_iter0_state3) & (1'b0 == ap_block_pp0_stage0_subdone))) begin
            ap_enable_reg_pp0_iter0 <= 1'b0;
        end else if (((tmp_i_fu_155_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
            ap_enable_reg_pp0_iter0 <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter1 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            if ((1'b1 == ap_condition_pp0_exit_iter0_state3)) begin
                ap_enable_reg_pp0_iter1 <= (1'b1 ^ ap_condition_pp0_exit_iter0_state3);
            end else if ((1'b1 == 1'b1)) begin
                ap_enable_reg_pp0_iter1 <= ap_enable_reg_pp0_iter0;
            end
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter2 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter2 <= ap_enable_reg_pp0_iter1;
        end else if (((tmp_i_fu_155_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
            ap_enable_reg_pp0_iter2 <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        start_once_reg <= 1'b0;
    end else begin
        if (((internal_ap_ready == 1'b0) & (real_start == 1'b1))) begin
            start_once_reg <= 1'b1;
        end else if ((internal_ap_ready == 1'b1)) begin
            start_once_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        i_i_reg_129 <= i_reg_296;
    end else if ((~((p_src_cols_V_empty_n == 1'b0) | (p_src_rows_V_empty_n == 1'b0) | (real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        i_i_reg_129 <= 31'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_23_i_fu_170_p2 == 1'd1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        j_i_reg_140 <= j_fu_175_p2;
    end else if (((tmp_i_fu_155_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        j_i_reg_140 <= 31'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((~((p_src_cols_V_empty_n == 1'b0) | (p_src_rows_V_empty_n == 1'b0) | (real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        cols_reg_282 <= p_src_cols_V_dout;
        rows_reg_287 <= p_src_rows_V_dout;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        i_reg_296 <= i_fu_160_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_23_i_reg_301 == 1'd1) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        ret_V_reg_315 <= grp_fu_263_p3;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        tmp_23_i_reg_301 <= tmp_23_i_fu_170_p2;
        tmp_23_i_reg_301_pp0_iter1_reg <= tmp_23_i_reg_301;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_23_i_reg_301 == 1'd1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        tmp_70_reg_310 <= p_src_data_stream_1_V_dout;
    end
end

always @ (*) begin
    if ((tmp_23_i_fu_170_p2 == 1'd0)) begin
        ap_condition_pp0_exit_iter0_state3 = 1'b1;
    end else begin
        ap_condition_pp0_exit_iter0_state3 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state2) & (tmp_i_fu_155_p2 == 1'd0))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = ap_done_reg;
    end
end

always @ (*) begin
    if (((real_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter2 == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b0))) begin
        ap_idle_pp0 = 1'b1;
    end else begin
        ap_idle_pp0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state2) & (tmp_i_fu_155_p2 == 1'd0))) begin
        internal_ap_ready = 1'b1;
    end else begin
        internal_ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (((tmp_23_i_reg_301_pp0_iter1_reg == 1'd1) & (1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter2 == 1'b1))) begin
        p_dst_data_stream_V_blk_n = p_dst_data_stream_V_full_n;
    end else begin
        p_dst_data_stream_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((tmp_23_i_reg_301_pp0_iter1_reg == 1'd1) & (ap_enable_reg_pp0_iter2 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        p_dst_data_stream_V_write = 1'b1;
    end else begin
        p_dst_data_stream_V_write = 1'b0;
    end
end

always @ (*) begin
    if ((~((real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        p_src_cols_V_blk_n = p_src_cols_V_empty_n;
    end else begin
        p_src_cols_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~((p_src_cols_V_empty_n == 1'b0) | (p_src_rows_V_empty_n == 1'b0) | (real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        p_src_cols_V_read = 1'b1;
    end else begin
        p_src_cols_V_read = 1'b0;
    end
end

always @ (*) begin
    if (((tmp_23_i_reg_301 == 1'd1) & (1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        p_src_data_stream_0_V_blk_n = p_src_data_stream_0_V_empty_n;
    end else begin
        p_src_data_stream_0_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((tmp_23_i_reg_301 == 1'd1) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        p_src_data_stream_0_V_read = 1'b1;
    end else begin
        p_src_data_stream_0_V_read = 1'b0;
    end
end

always @ (*) begin
    if (((tmp_23_i_reg_301 == 1'd1) & (1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        p_src_data_stream_1_V_blk_n = p_src_data_stream_1_V_empty_n;
    end else begin
        p_src_data_stream_1_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((tmp_23_i_reg_301 == 1'd1) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        p_src_data_stream_1_V_read = 1'b1;
    end else begin
        p_src_data_stream_1_V_read = 1'b0;
    end
end

always @ (*) begin
    if (((tmp_23_i_reg_301 == 1'd1) & (1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        p_src_data_stream_2_V_blk_n = p_src_data_stream_2_V_empty_n;
    end else begin
        p_src_data_stream_2_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((tmp_23_i_reg_301 == 1'd1) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        p_src_data_stream_2_V_read = 1'b1;
    end else begin
        p_src_data_stream_2_V_read = 1'b0;
    end
end

always @ (*) begin
    if ((~((real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        p_src_rows_V_blk_n = p_src_rows_V_empty_n;
    end else begin
        p_src_rows_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~((p_src_cols_V_empty_n == 1'b0) | (p_src_rows_V_empty_n == 1'b0) | (real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        p_src_rows_V_read = 1'b1;
    end else begin
        p_src_rows_V_read = 1'b0;
    end
end

always @ (*) begin
    if (((start_once_reg == 1'b0) & (start_full_n == 1'b0))) begin
        real_start = 1'b0;
    end else begin
        real_start = ap_start;
    end
end

always @ (*) begin
    if (((start_once_reg == 1'b0) & (real_start == 1'b1))) begin
        start_write = 1'b1;
    end else begin
        start_write = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if ((~((p_src_cols_V_empty_n == 1'b0) | (p_src_rows_V_empty_n == 1'b0) | (real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((1'b1 == ap_CS_fsm_state2) & (tmp_i_fu_155_p2 == 1'd0))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end
        end
        ap_ST_fsm_pp0_stage0 : begin
            if ((~((ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b0 == ap_block_pp0_stage0_subdone) & (tmp_23_i_fu_170_p2 == 1'd0)) & ~((ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter2 == 1'b1) & (1'b0 == ap_block_pp0_stage0_subdone)))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else if ((((ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter2 == 1'b1) & (1'b0 == ap_block_pp0_stage0_subdone)) | ((ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b0 == ap_block_pp0_stage0_subdone) & (tmp_23_i_fu_170_p2 == 1'd0)))) begin
                ap_NS_fsm = ap_ST_fsm_state6;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end
        end
        ap_ST_fsm_state6 : begin
            ap_NS_fsm = ap_ST_fsm_state2;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_CS_fsm_pp0_stage0 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd3];

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_pp0_stage0_01001 = (((tmp_23_i_reg_301_pp0_iter1_reg == 1'd1) & (p_dst_data_stream_V_full_n == 1'b0) & (ap_enable_reg_pp0_iter2 == 1'b1)) | ((ap_enable_reg_pp0_iter1 == 1'b1) & (((tmp_23_i_reg_301 == 1'd1) & (p_src_data_stream_2_V_empty_n == 1'b0)) | ((tmp_23_i_reg_301 == 1'd1) & (p_src_data_stream_1_V_empty_n == 1'b0)) | ((tmp_23_i_reg_301 == 1'd1) & (p_src_data_stream_0_V_empty_n == 1'b0)))));
end

always @ (*) begin
    ap_block_pp0_stage0_11001 = (((tmp_23_i_reg_301_pp0_iter1_reg == 1'd1) & (p_dst_data_stream_V_full_n == 1'b0) & (ap_enable_reg_pp0_iter2 == 1'b1)) | ((ap_enable_reg_pp0_iter1 == 1'b1) & (((tmp_23_i_reg_301 == 1'd1) & (p_src_data_stream_2_V_empty_n == 1'b0)) | ((tmp_23_i_reg_301 == 1'd1) & (p_src_data_stream_1_V_empty_n == 1'b0)) | ((tmp_23_i_reg_301 == 1'd1) & (p_src_data_stream_0_V_empty_n == 1'b0)))));
end

always @ (*) begin
    ap_block_pp0_stage0_subdone = (((tmp_23_i_reg_301_pp0_iter1_reg == 1'd1) & (p_dst_data_stream_V_full_n == 1'b0) & (ap_enable_reg_pp0_iter2 == 1'b1)) | ((ap_enable_reg_pp0_iter1 == 1'b1) & (((tmp_23_i_reg_301 == 1'd1) & (p_src_data_stream_2_V_empty_n == 1'b0)) | ((tmp_23_i_reg_301 == 1'd1) & (p_src_data_stream_1_V_empty_n == 1'b0)) | ((tmp_23_i_reg_301 == 1'd1) & (p_src_data_stream_0_V_empty_n == 1'b0)))));
end

always @ (*) begin
    ap_block_state1 = ((p_src_cols_V_empty_n == 1'b0) | (p_src_rows_V_empty_n == 1'b0) | (real_start == 1'b0) | (ap_done_reg == 1'b1));
end

assign ap_block_state3_pp0_stage0_iter0 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_state4_pp0_stage0_iter1 = (((tmp_23_i_reg_301 == 1'd1) & (p_src_data_stream_2_V_empty_n == 1'b0)) | ((tmp_23_i_reg_301 == 1'd1) & (p_src_data_stream_1_V_empty_n == 1'b0)) | ((tmp_23_i_reg_301 == 1'd1) & (p_src_data_stream_0_V_empty_n == 1'b0)));
end

always @ (*) begin
    ap_block_state5_pp0_stage0_iter2 = ((tmp_23_i_reg_301_pp0_iter1_reg == 1'd1) & (p_dst_data_stream_V_full_n == 1'b0));
end

assign ap_enable_pp0 = (ap_idle_pp0 ^ 1'b1);

assign ap_ready = internal_ap_ready;

assign deleted_zeros_fu_242_p2 = (tmp_67_fu_234_p3 | rev_fu_228_p2);

assign grp_fu_263_p0 = 28'd478150;

assign grp_fu_263_p1 = grp_fu_263_p10;

assign grp_fu_263_p10 = p_src_data_stream_2_V_dout;

assign grp_fu_271_p0 = 30'd2462056;

assign grp_fu_271_p1 = grp_fu_271_p10;

assign grp_fu_271_p10 = tmp_70_reg_310;

assign grp_fu_271_p2 = grp_fu_271_p20;

assign grp_fu_271_p20 = ret_V_reg_315;

assign i_cast_i_fu_151_p1 = i_i_reg_129;

assign i_fu_160_p2 = (i_i_reg_129 + 31'd1);

assign j_cast_i_fu_166_p1 = j_i_reg_140;

assign j_fu_175_p2 = (j_i_reg_140 + 31'd1);

assign p_Val2_6_fu_195_p4 = {{grp_fu_271_p3[29:22]}};

assign p_Val2_7_fu_215_p2 = (tmp_5_i_i_i_cast_i_fu_211_p1 + p_Val2_6_fu_195_p4);

assign p_dst_data_stream_V_din = ((deleted_zeros_fu_242_p2[0:0] === 1'b1) ? p_Val2_7_fu_215_p2 : 8'd255);

assign r_V_i_i_fu_257_p0 = 29'd1254096;

assign r_V_i_i_fu_257_p1 = r_V_i_i_fu_257_p10;

assign r_V_i_i_fu_257_p10 = p_src_data_stream_0_V_dout;

assign rev_fu_228_p2 = (tmp_66_fu_221_p3 ^ 1'd1);

assign start_out = real_start;

assign tmp_23_i_fu_170_p2 = (($signed(j_cast_i_fu_166_p1) < $signed(cols_reg_282)) ? 1'b1 : 1'b0);

assign tmp_5_i_i_i_cast_i_fu_211_p1 = tmp_fu_204_p3;

assign tmp_66_fu_221_p3 = grp_fu_271_p3[32'd29];

assign tmp_67_fu_234_p3 = p_Val2_7_fu_215_p2[32'd7];

assign tmp_fu_204_p3 = grp_fu_271_p3[32'd21];

assign tmp_i_fu_155_p2 = (($signed(i_cast_i_fu_151_p1) < $signed(rows_reg_287)) ? 1'b1 : 1'b0);

endmodule //CvtColor
