#!/bin/sh

# 
# Vivado(TM)
# runme.sh: a Vivado-generated Runs Script for UNIX
# Copyright 1986-2016 Xilinx, Inc. All Rights Reserved.
# 

echo "This script was generated under a different operating system."
echo "Please update the PATH and LD_LIBRARY_PATH variables below, before executing this script"
exit

if [ -z "$PATH" ]; then
  PATH=D:/ProgramData/Xilinx/SDx/2016.4/SDK/bin;D:/ProgramData/Xilinx/SDx/2016.4/Vivado/ids_lite/ISE/bin/nt64;D:/ProgramData/Xilinx/SDx/2016.4/Vivado/ids_lite/ISE/lib/nt64:D:/ProgramData/Xilinx/SDx/2016.4/Vivado/bin
else
  PATH=D:/ProgramData/Xilinx/SDx/2016.4/SDK/bin;D:/ProgramData/Xilinx/SDx/2016.4/Vivado/ids_lite/ISE/bin/nt64;D:/ProgramData/Xilinx/SDx/2016.4/Vivado/ids_lite/ISE/lib/nt64:D:/ProgramData/Xilinx/SDx/2016.4/Vivado/bin:$PATH
fi
export PATH

if [ -z "$LD_LIBRARY_PATH" ]; then
  LD_LIBRARY_PATH=
else
  LD_LIBRARY_PATH=:$LD_LIBRARY_PATH
fi
export LD_LIBRARY_PATH

HD_PWD='E:/Exercise/FPGA/FPGA_CNN/02_cifar10_cnn/vivado/ex02_dma_rd/dma_rd.runs/impl_1'
cd "$HD_PWD"

HD_LOG=runme.log
/bin/touch $HD_LOG

ISEStep="./ISEWrap.sh"
EAStep()
{
     $ISEStep $HD_LOG "$@" >> $HD_LOG 2>&1
     if [ $? -ne 0 ]
     then
         exit
     fi
}

# pre-commands:
/bin/touch .init_design.begin.rst
EAStep vivado -log design_1_wrapper.vdi -applog -m64 -product Vivado -messageDb vivado.pb -mode batch -source design_1_wrapper.tcl -notrace


