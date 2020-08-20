// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "matrix_add.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic matrix_add::ap_const_logic_1 = sc_dt::Log_1;
const sc_lv<4> matrix_add::ap_const_lv4_0 = "0000";
const sc_logic matrix_add::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<32> matrix_add::ap_const_lv32_0 = "00000000000000000000000000000000";

matrix_add::matrix_add(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_A_address0);

    SC_METHOD(thread_A_address1);

    SC_METHOD(thread_A_ce0);

    SC_METHOD(thread_A_ce1);

    SC_METHOD(thread_A_d0);

    SC_METHOD(thread_A_d1);

    SC_METHOD(thread_A_we0);

    SC_METHOD(thread_A_we1);

    SC_METHOD(thread_C_address0);

    SC_METHOD(thread_C_address1);

    SC_METHOD(thread_C_ce0);

    SC_METHOD(thread_C_ce1);

    SC_METHOD(thread_C_d0);

    SC_METHOD(thread_C_d1);

    SC_METHOD(thread_C_we0);

    SC_METHOD(thread_C_we1);

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_start );

    SC_METHOD(thread_ap_idle);

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_start );

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( ap_virtual_clock.pos() );

    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "matrix_add_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT__
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, A_address0, "(port)A_address0");
    sc_trace(mVcdFile, A_ce0, "(port)A_ce0");
    sc_trace(mVcdFile, A_we0, "(port)A_we0");
    sc_trace(mVcdFile, A_d0, "(port)A_d0");
    sc_trace(mVcdFile, A_q0, "(port)A_q0");
    sc_trace(mVcdFile, A_address1, "(port)A_address1");
    sc_trace(mVcdFile, A_ce1, "(port)A_ce1");
    sc_trace(mVcdFile, A_we1, "(port)A_we1");
    sc_trace(mVcdFile, A_d1, "(port)A_d1");
    sc_trace(mVcdFile, A_q1, "(port)A_q1");
    sc_trace(mVcdFile, B, "(port)B");
    sc_trace(mVcdFile, C_address0, "(port)C_address0");
    sc_trace(mVcdFile, C_ce0, "(port)C_ce0");
    sc_trace(mVcdFile, C_we0, "(port)C_we0");
    sc_trace(mVcdFile, C_d0, "(port)C_d0");
    sc_trace(mVcdFile, C_q0, "(port)C_q0");
    sc_trace(mVcdFile, C_address1, "(port)C_address1");
    sc_trace(mVcdFile, C_ce1, "(port)C_ce1");
    sc_trace(mVcdFile, C_we1, "(port)C_we1");
    sc_trace(mVcdFile, C_d1, "(port)C_d1");
    sc_trace(mVcdFile, C_q1, "(port)C_q1");
#endif

    }
    mHdltvinHandle.open("matrix_add.hdltvin.dat");
    mHdltvoutHandle.open("matrix_add.hdltvout.dat");
}

matrix_add::~matrix_add() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    mHdltvinHandle << "] " << endl;
    mHdltvoutHandle << "] " << endl;
    mHdltvinHandle.close();
    mHdltvoutHandle.close();
}

void matrix_add::thread_A_address0() {
    A_address0 = ap_const_lv4_0;
}

void matrix_add::thread_A_address1() {
    A_address1 = ap_const_lv4_0;
}

void matrix_add::thread_A_ce0() {
    A_ce0 = ap_const_logic_0;
}

void matrix_add::thread_A_ce1() {
    A_ce1 = ap_const_logic_0;
}

void matrix_add::thread_A_d0() {
    A_d0 = ap_const_lv32_0;
}

void matrix_add::thread_A_d1() {
    A_d1 = ap_const_lv32_0;
}

void matrix_add::thread_A_we0() {
    A_we0 = ap_const_logic_0;
}

void matrix_add::thread_A_we1() {
    A_we1 = ap_const_logic_0;
}

void matrix_add::thread_C_address0() {
    C_address0 = ap_const_lv4_0;
}

void matrix_add::thread_C_address1() {
    C_address1 = ap_const_lv4_0;
}

void matrix_add::thread_C_ce0() {
    C_ce0 = ap_const_logic_0;
}

void matrix_add::thread_C_ce1() {
    C_ce1 = ap_const_logic_0;
}

void matrix_add::thread_C_d0() {
    C_d0 = ap_const_lv32_0;
}

void matrix_add::thread_C_d1() {
    C_d1 = ap_const_lv32_0;
}

void matrix_add::thread_C_we0() {
    C_we0 = ap_const_logic_0;
}

void matrix_add::thread_C_we1() {
    C_we1 = ap_const_logic_0;
}

void matrix_add::thread_ap_done() {
    ap_done = ap_start.read();
}

void matrix_add::thread_ap_idle() {
    ap_idle = ap_const_logic_1;
}

void matrix_add::thread_ap_ready() {
    ap_ready = ap_start.read();
}

void matrix_add::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_start\" :  \"" << ap_start.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"ap_done\" :  \"" << ap_done.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_idle\" :  \"" << ap_idle.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_ready\" :  \"" << ap_ready.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"A_address0\" :  \"" << A_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"A_ce0\" :  \"" << A_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"A_we0\" :  \"" << A_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"A_d0\" :  \"" << A_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"A_q0\" :  \"" << A_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"A_address1\" :  \"" << A_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"A_ce1\" :  \"" << A_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"A_we1\" :  \"" << A_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"A_d1\" :  \"" << A_d1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"A_q1\" :  \"" << A_q1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"B\" :  \"" << B.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"C_address0\" :  \"" << C_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"C_ce0\" :  \"" << C_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"C_we0\" :  \"" << C_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"C_d0\" :  \"" << C_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"C_q0\" :  \"" << C_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"C_address1\" :  \"" << C_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"C_ce1\" :  \"" << C_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"C_we1\" :  \"" << C_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"C_d1\" :  \"" << C_d1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"C_q1\" :  \"" << C_q1.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

