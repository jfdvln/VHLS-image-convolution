// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2018.3 (win64) Build 2405991 Thu Dec  6 23:38:27 MST 2018
// Date        : Sun Nov 15 18:59:32 2020
// Host        : LAPTOP-8BN5ORHT running 64-bit major release  (build 9200)
// Command     : write_verilog -force -mode synth_stub -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix
//               decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ system_hw_conv_0_0_stub.v
// Design      : system_hw_conv_0_0
// Purpose     : Stub declaration of top-level module interface
// Device      : xc7z020clg400-1
// --------------------------------------------------------------------------------

// This empty module with port declaration file causes synthesis tools to infer a black box for IP.
// The synthesis directives are for Synopsys Synplify support to prevent IO buffer insertion.
// Please paste the declaration into a Verilog source file or add the file as an additional source.
(* x_core_info = "hw_conv,Vivado 2018.3" *)
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix(ap_clk, ap_rst_n, sin_TVALID, sin_TREADY, 
  sin_TDATA, sin_TDEST, sin_TKEEP, sin_TSTRB, sin_TUSER, sin_TLAST, sin_TID, sout_TVALID, 
  sout_TREADY, sout_TDATA, sout_TDEST, sout_TKEEP, sout_TSTRB, sout_TUSER, sout_TLAST, sout_TID)
/* synthesis syn_black_box black_box_pad_pin="ap_clk,ap_rst_n,sin_TVALID,sin_TREADY,sin_TDATA[7:0],sin_TDEST[0:0],sin_TKEEP[0:0],sin_TSTRB[0:0],sin_TUSER[0:0],sin_TLAST[0:0],sin_TID[0:0],sout_TVALID,sout_TREADY,sout_TDATA[7:0],sout_TDEST[0:0],sout_TKEEP[0:0],sout_TSTRB[0:0],sout_TUSER[0:0],sout_TLAST[0:0],sout_TID[0:0]" */;
  input ap_clk;
  input ap_rst_n;
  input sin_TVALID;
  output sin_TREADY;
  input [7:0]sin_TDATA;
  input [0:0]sin_TDEST;
  input [0:0]sin_TKEEP;
  input [0:0]sin_TSTRB;
  input [0:0]sin_TUSER;
  input [0:0]sin_TLAST;
  input [0:0]sin_TID;
  output sout_TVALID;
  input sout_TREADY;
  output [7:0]sout_TDATA;
  output [0:0]sout_TDEST;
  output [0:0]sout_TKEEP;
  output [0:0]sout_TSTRB;
  output [0:0]sout_TUSER;
  output [0:0]sout_TLAST;
  output [0:0]sout_TID;
endmodule
