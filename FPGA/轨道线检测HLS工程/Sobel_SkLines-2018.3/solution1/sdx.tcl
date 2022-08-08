# ==============================================================
# File generated on Sat Jun 04 16:23:59 +0800 2022
# Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
# SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
# IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
# Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
# ==============================================================
add_files -tb ../src/0110_32.jpg -cflags { -Wno-unknown-pragmas}
add_files -tb ../src/0110_35.jpg -cflags { -Wno-unknown-pragmas}
add_files -tb ../src/TOP_fuct_tb.cpp -cflags { -Wno-unknown-pragmas}
add_files Sobel_SkLines/src/CopImage.cpp
add_files Sobel_SkLines/src/CopImage.h
add_files Sobel_SkLines/src/OvlayImage.cpp
add_files Sobel_SkLines/src/OvlayImage.h
add_files Sobel_SkLines/src/PlotLines.cpp
add_files Sobel_SkLines/src/PlotLines.h
add_files Sobel_SkLines/src/SeekLines.cpp
add_files Sobel_SkLines/src/SeekLines.h
add_files Sobel_SkLines/src/SeekPoint.cpp
add_files Sobel_SkLines/src/SeekPoint.h
add_files Sobel_SkLines/src/TOP_fuct.cpp
add_files Sobel_SkLines/src/TOP_fuct.h
add_files Sobel_SkLines/src/filtrel_kernel.cpp
add_files Sobel_SkLines/src/filtrel_kernel.h
add_files Sobel_SkLines/src/filtrel_kernelXS.cpp
add_files Sobel_SkLines/src/filtrel_kernelXS.h
set_part xczu9eg-ffvb1156-2-i
create_clock -name default -period 10
