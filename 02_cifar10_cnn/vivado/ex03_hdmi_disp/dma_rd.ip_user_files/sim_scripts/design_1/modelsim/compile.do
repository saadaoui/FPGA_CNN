vlib work
vlib msim

vlib msim/xil_defaultlib
vlib msim/xpm
vlib msim/processing_system7_bfm_v2_0_5

vmap xil_defaultlib msim/xil_defaultlib
vmap xpm msim/xpm
vmap processing_system7_bfm_v2_0_5 msim/processing_system7_bfm_v2_0_5

vlog -work xil_defaultlib -64 -incr -sv "+incdir+../../../../dma_rd.srcs/sources_1/bd/design_1/ipshared/7dd0/hdl" "+incdir+../../../../dma_rd.srcs/sources_1/bd/design_1/ipshared/100a" "+incdir+../../../../dma_rd.srcs/sources_1/bd/design_1/ipshared/7dd0/hdl" "+incdir+../../../../dma_rd.srcs/sources_1/bd/design_1/ipshared/100a" \
"D:/ProgramData/Xilinx/SDx/2016.4/Vivado/data/ip/xpm/xpm_cdc/hdl/xpm_cdc.sv" \

vcom -work xpm -64 -93 \
"D:/ProgramData/Xilinx/SDx/2016.4/Vivado/data/ip/xpm/xpm_VCOMP.vhd" \

vlog -work processing_system7_bfm_v2_0_5 -64 -incr "+incdir+../../../../dma_rd.srcs/sources_1/bd/design_1/ipshared/7dd0/hdl" "+incdir+../../../../dma_rd.srcs/sources_1/bd/design_1/ipshared/100a" "+incdir+../../../../dma_rd.srcs/sources_1/bd/design_1/ipshared/7dd0/hdl" "+incdir+../../../../dma_rd.srcs/sources_1/bd/design_1/ipshared/100a" \
"../../../../dma_rd.srcs/sources_1/bd/design_1/ipshared/7dd0/hdl/processing_system7_bfm_v2_0_vl_rfs.v" \

vlog -work xil_defaultlib -64 -incr "+incdir+../../../../dma_rd.srcs/sources_1/bd/design_1/ipshared/7dd0/hdl" "+incdir+../../../../dma_rd.srcs/sources_1/bd/design_1/ipshared/100a" "+incdir+../../../../dma_rd.srcs/sources_1/bd/design_1/ipshared/7dd0/hdl" "+incdir+../../../../dma_rd.srcs/sources_1/bd/design_1/ipshared/100a" \
"../../../bd/design_1/ip/design_1_processing_system7_0_0/sim/design_1_processing_system7_0_0.v" \
"../../../bd/design_1/ip/design_1_clk_wiz_0_0/design_1_clk_wiz_0_0_clk_wiz.v" \
"../../../bd/design_1/ip/design_1_clk_wiz_0_0/design_1_clk_wiz_0_0.v" \

vcom -work xil_defaultlib -64 -93 \
"../../../bd/design_1/ipshared/904f/hdmi_out.srcs/sources_1/imports/src/TMDSEncoder.vhd" \
"../../../bd/design_1/ipshared/904f/hdmi_out.srcs/sources_1/imports/src/SerializerN_1.vhd" \
"../../../bd/design_1/ipshared/904f/hdmi_out.srcs/sources_1/imports/src/DVITransmitter.vhd" \
"../../../bd/design_1/ipshared/904f/hdmi_out.srcs/sources_1/imports/src/hdmi_tx.vhd" \
"../../../bd/design_1/ip/design_1_hdmi_tx_0_0/sim/design_1_hdmi_tx_0_0.vhd" \

vlog -work xil_defaultlib -64 -incr "+incdir+../../../../dma_rd.srcs/sources_1/bd/design_1/ipshared/7dd0/hdl" "+incdir+../../../../dma_rd.srcs/sources_1/bd/design_1/ipshared/100a" "+incdir+../../../../dma_rd.srcs/sources_1/bd/design_1/ipshared/7dd0/hdl" "+incdir+../../../../dma_rd.srcs/sources_1/bd/design_1/ipshared/100a" \
"../../../bd/design_1/ipshared/e147/xlconstant.v" \
"../../../bd/design_1/ip/design_1_xlconstant_0_0/sim/design_1_xlconstant_0_0.v" \
"../../../bd/design_1/ipshared/a4f9/VGA_TIMING.v" \
"../../../bd/design_1/ip/design_1_VGA_TIMING_0_0/sim/design_1_VGA_TIMING_0_0.v" \
"../../../bd/design_1/ip/design_1_xlconstant_1_0/sim/design_1_xlconstant_1_0.v" \
"../../../bd/design_1/hdl/design_1.v" \

vlog -work xil_defaultlib "glbl.v"

