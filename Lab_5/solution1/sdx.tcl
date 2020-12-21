# ==============================================================
# File generated on Thu Nov 19 11:07:34 -0500 2020
# Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
# SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
# IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
# Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
# ==============================================================
add_files -tb ../../vhls/testbench.cpp -cflags { -Wno-unknown-pragmas}
add_files vhls/rock512.pgm
add_files vhls/image.hpp
add_files vhls/image.cpp
add_files vhls/convolution.hpp
add_files vhls/convolution.cpp
set_part xc7z020clg400-1
create_clock -name default -period 10
config_export -display_name=hw_conv
config_export -format=ip_catalog
config_export -rtl=vhdl
