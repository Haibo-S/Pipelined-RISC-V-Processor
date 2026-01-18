// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtop__Syms;

//----------

VL_MODULE(Vtop___024root) {
  public:

    // LOCAL SIGNALS
    CData/*0:0*/ top__DOT__clock;
    CData/*0:0*/ top__DOT__reset;
    CData/*4:0*/ top__DOT__dut__DOT__core__DOT__rs1;
    CData/*0:0*/ top__DOT__dut__DOT__core__DOT__decode_stall;
    CData/*0:0*/ top__DOT__dut__DOT__core__DOT__instr_mem_enable;
    CData/*0:0*/ top__DOT__dut__DOT__core__DOT__instr_mem_enable_min1;
    CData/*0:0*/ top__DOT__dut__DOT__core__DOT__branch_taken_min1;
    CData/*0:0*/ top__DOT__dut__DOT__core__DOT__branch_taken_pc;
    CData/*0:0*/ top__DOT__dut__DOT__core__DOT__write_enable_module;
    CData/*0:0*/ top__DOT__dut__DOT__core__DOT__branch_taken;
    CData/*4:0*/ top__DOT__dut__DOT__core__DOT__addr_rs1_ex;
    CData/*4:0*/ top__DOT__dut__DOT__core__DOT__addr_rs2_ex;
    CData/*4:0*/ top__DOT__dut__DOT__core__DOT__addr_rd_ex;
    CData/*6:0*/ top__DOT__dut__DOT__core__DOT__opcode_ex;
    CData/*2:0*/ top__DOT__dut__DOT__core__DOT__funct3_ex;
    CData/*6:0*/ top__DOT__dut__DOT__core__DOT__funct7_ex;
    CData/*0:0*/ top__DOT__dut__DOT__core__DOT__write_enable_ex;
    CData/*6:0*/ top__DOT__dut__DOT__core__DOT__opcode_mem;
    CData/*2:0*/ top__DOT__dut__DOT__core__DOT__funct3_mem;
    CData/*4:0*/ top__DOT__dut__DOT__core__DOT__addr_rd_mem;
    CData/*4:0*/ top__DOT__dut__DOT__core__DOT__addr_rs2_mem;
    CData/*0:0*/ top__DOT__dut__DOT__core__DOT__write_enable_mem;
    CData/*2:0*/ top__DOT__dut__DOT__core__DOT__funct3_mem_min1;
    CData/*6:0*/ top__DOT__dut__DOT__core__DOT__opcode_wb;
    CData/*4:0*/ top__DOT__dut__DOT__core__DOT__addr_rd_wb;
    CData/*0:0*/ top__DOT__dut__DOT__core__DOT__write_enable_wb;
    CData/*0:0*/ top__DOT__dut__DOT__core__DOT__u_imemory__DOT__read_write_2;
    IData/*31:0*/ top__DOT__genblk1__DOT_____05Ftrace_fd;
    IData/*31:0*/ top__DOT__clkg__DOT__counter;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__pc_value;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__pc;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__imem_dout;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__instr_d;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__instr_d_min1;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__pc_d;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__imm_r;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__data_rs1;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__data_rs2;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__ex_pc_value;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__imm_ex;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__data_rs2_ex_bypass;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__alu_result;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__alu_result_mem;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__data_rs2_mem;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__pc_mem;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__data_rs2_mem_bypass;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__dmem_out_pre;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__pc_wb;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__next_pc_wb;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__alu_result_wb;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__wb_data;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__u_imemory__DOT__data_in_2;
    VlUnpacked<IData/*31:0*/, 262144> top__DOT__dut__DOT__core__DOT__u_imemory__DOT__mem;
    VlUnpacked<IData/*31:0*/, 32> top__DOT__dut__DOT__core__DOT__u_regfile__DOT__reg_file;
    VlUnpacked<IData/*31:0*/, 66> top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__temp;
    VlUnpacked<CData/*7:0*/, 1048576> top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__mem;

    // LOCAL VARIABLES
    CData/*0:0*/ __VinpClk__TOP__top__DOT__clock;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__top__DOT__clock;
    CData/*0:0*/ __Vchglast__TOP__top__DOT__clock;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop___024root);  ///< Copying not allowed
  public:
    Vtop___024root(const char* name);
    ~Vtop___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
