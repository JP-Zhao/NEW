############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project Sobel_SkLines
set_top TOP_fuct
add_files Sobel_SkLines/src/filtrel_kernelXS.h
add_files Sobel_SkLines/src/filtrel_kernelXS.cpp
add_files Sobel_SkLines/src/filtrel_kernel.h
add_files Sobel_SkLines/src/filtrel_kernel.cpp
add_files Sobel_SkLines/src/TOP_fuct.h
add_files Sobel_SkLines/src/TOP_fuct.cpp
add_files Sobel_SkLines/src/SeekPoint.h
add_files Sobel_SkLines/src/SeekPoint.cpp
add_files Sobel_SkLines/src/SeekLines.h
add_files Sobel_SkLines/src/SeekLines.cpp
add_files Sobel_SkLines/src/PlotLines.h
add_files Sobel_SkLines/src/PlotLines.cpp
add_files Sobel_SkLines/src/OvlayImage.h
add_files Sobel_SkLines/src/OvlayImage.cpp
add_files Sobel_SkLines/src/CopImage.h
add_files Sobel_SkLines/src/CopImage.cpp
add_files -tb Sobel_SkLines/src/TOP_fuct_tb.cpp -cflags "-Wno-unknown-pragmas"
add_files -tb Sobel_SkLines/src/0110_35.jpg -cflags "-Wno-unknown-pragmas"
add_files -tb Sobel_SkLines/src/0110_32.jpg -cflags "-Wno-unknown-pragmas"
open_solution "solution1"
set_part {xczu9eg-ffvb1156-2-i} -tool vivado
create_clock -period 10 -name default
config_export -format ip_catalog -rtl verilog
#source "./Sobel_SkLines/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -rtl verilog -format ip_catalog
