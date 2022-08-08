// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module ListDelete (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        Data_address0,
        Data_ce0,
        Data_we0,
        Data_d0,
        Data_q0,
        i,
        length_r
);

parameter    ap_ST_fsm_state1 = 3'd1;
parameter    ap_ST_fsm_state2 = 3'd2;
parameter    ap_ST_fsm_state3 = 3'd4;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [12:0] Data_address0;
output   Data_ce0;
output   Data_we0;
output  [31:0] Data_d0;
input  [31:0] Data_q0;
input  [31:0] i;
input  [31:0] length_r;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg[12:0] Data_address0;
reg Data_ce0;
reg Data_we0;

(* fsm_encoding = "none" *) reg   [2:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [0:0] or_cond_fu_70_p2;
reg   [0:0] or_cond_reg_113;
wire    ap_CS_fsm_state2;
wire   [0:0] tmp_69_fu_76_p2;
wire   [31:0] j_7_fu_97_p2;
wire    ap_CS_fsm_state3;
reg  signed [31:0] j_reg_48;
wire  signed [63:0] tmp_70_fu_81_p1;
wire  signed [63:0] tmp_72_fu_92_p1;
wire   [0:0] tmp_fu_58_p2;
wire   [0:0] tmp_s_fu_64_p2;
wire   [31:0] tmp_71_fu_86_p2;
reg   [2:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 3'd1;
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_start == 1'b1) & (or_cond_fu_70_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state1))) begin
        j_reg_48 <= i;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        j_reg_48 <= j_7_fu_97_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        or_cond_reg_113 <= or_cond_fu_70_p2;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        Data_address0 = tmp_72_fu_92_p1;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        Data_address0 = tmp_70_fu_81_p1;
    end else begin
        Data_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state2))) begin
        Data_ce0 = 1'b1;
    end else begin
        Data_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        Data_we0 = 1'b1;
    end else begin
        Data_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((((1'b1 == ap_CS_fsm_state2) & ((tmp_69_fu_76_p2 == 1'd0) | (or_cond_reg_113 == 1'd1))) | ((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state2) & ((tmp_69_fu_76_p2 == 1'd0) | (or_cond_reg_113 == 1'd1)))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((1'b1 == ap_CS_fsm_state2) & ((tmp_69_fu_76_p2 == 1'd0) | (or_cond_reg_113 == 1'd1)))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            ap_NS_fsm = ap_ST_fsm_state2;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign Data_d0 = Data_q0;

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign j_7_fu_97_p2 = ($signed(j_reg_48) + $signed(32'd1));

assign or_cond_fu_70_p2 = (tmp_s_fu_64_p2 | tmp_fu_58_p2);

assign tmp_69_fu_76_p2 = (($signed(j_reg_48) < $signed(length_r)) ? 1'b1 : 1'b0);

assign tmp_70_fu_81_p1 = j_reg_48;

assign tmp_71_fu_86_p2 = ($signed(j_reg_48) + $signed(32'd4294967295));

assign tmp_72_fu_92_p1 = $signed(tmp_71_fu_86_p2);

assign tmp_fu_58_p2 = (($signed(i) < $signed(32'd1)) ? 1'b1 : 1'b0);

assign tmp_s_fu_64_p2 = (($signed(i) > $signed(length_r)) ? 1'b1 : 1'b0);

endmodule //ListDelete
