// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

void Vtop___024root____Vdpiexp_top__DOT__clkg__DOT__toggleClock_TOP(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiexp_top__DOT__clkg__DOT__toggleClock_TOP\n"); );
    // Variables
    // Body
    vlSymsp->TOP.top__DOT__clock = (1U & (~ (IData)(vlSymsp->TOP.top__DOT__clock)));
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*0:0*/ __Vdlyvset__top__DOT__dut__DOT__core__DOT__u_imemory__DOT__mem__v0;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__dut__DOT__core__DOT__u_regfile__DOT__reg_file__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__dut__DOT__core__DOT__u_regfile__DOT__reg_file__v0;
    CData/*7:0*/ __Vdlyvval__top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__mem__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__mem__v1;
    CData/*7:0*/ __Vdlyvval__top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__mem__v2;
    CData/*7:0*/ __Vdlyvval__top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__mem__v3;
    CData/*0:0*/ __Vdlyvset__top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__mem__v3;
    CData/*7:0*/ __Vdlyvval__top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__mem__v4;
    CData/*7:0*/ __Vdlyvval__top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__mem__v5;
    CData/*7:0*/ __Vdlyvval__top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__mem__v6;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__imm_i;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__data_rs1_ex;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__data_rs2_ex;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__data_rs1_ex_bypass;
    IData/*31:0*/ __Vdly__top__DOT__clkg__DOT__counter;
    IData/*31:0*/ __Vdly__top__DOT__dut__DOT__core__DOT__pc;
    IData/*17:0*/ __Vdlyvdim0__top__DOT__dut__DOT__core__DOT__u_imemory__DOT__mem__v0;
    IData/*31:0*/ __Vdlyvval__top__DOT__dut__DOT__core__DOT__u_imemory__DOT__mem__v0;
    IData/*31:0*/ __Vdlyvval__top__DOT__dut__DOT__core__DOT__u_regfile__DOT__reg_file__v0;
    IData/*19:0*/ __Vdlyvdim0__top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__mem__v0;
    IData/*19:0*/ __Vdlyvdim0__top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__mem__v1;
    IData/*19:0*/ __Vdlyvdim0__top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__mem__v2;
    IData/*19:0*/ __Vdlyvdim0__top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__mem__v3;
    IData/*19:0*/ __Vdlyvdim0__top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__mem__v4;
    IData/*19:0*/ __Vdlyvdim0__top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__mem__v5;
    IData/*19:0*/ __Vdlyvdim0__top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__mem__v6;
    // Body
    __Vdly__top__DOT__clkg__DOT__counter = vlSelf->top__DOT__clkg__DOT__counter;
    __Vdlyvset__top__DOT__dut__DOT__core__DOT__u_imemory__DOT__mem__v0 = 0U;
    __Vdly__top__DOT__dut__DOT__core__DOT__pc = vlSelf->top__DOT__dut__DOT__core__DOT__pc;
    __Vdlyvset__top__DOT__dut__DOT__core__DOT__u_regfile__DOT__reg_file__v0 = 0U;
    __Vdlyvset__top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__mem__v0 = 0U;
    __Vdlyvset__top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__mem__v1 = 0U;
    __Vdlyvset__top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__mem__v3 = 0U;
    if (vlSelf->top__DOT__dut__DOT__core__DOT__instr_mem_enable) {
        if (vlSelf->top__DOT__dut__DOT__core__DOT__u_imemory__DOT__read_write_2) {
            __Vdlyvval__top__DOT__dut__DOT__core__DOT__u_imemory__DOT__mem__v0 
                = vlSelf->top__DOT__dut__DOT__core__DOT__u_imemory__DOT__data_in_2;
            __Vdlyvset__top__DOT__dut__DOT__core__DOT__u_imemory__DOT__mem__v0 = 1U;
            __Vdlyvdim0__top__DOT__dut__DOT__core__DOT__u_imemory__DOT__mem__v0 
                = (0x3ffffU & ((vlSelf->top__DOT__dut__DOT__core__DOT__pc 
                                - (IData)(0x1000000U)) 
                               >> 2U));
        }
    }
    if (vlSelf->top__DOT__reset) {
        vlSelf->top__DOT__dut__DOT__core__DOT__imm_ex = 0U;
        vlSelf->top__DOT__dut__DOT__core__DOT__data_rs2_mem = 0U;
        vlSelf->top__DOT__dut__DOT__core__DOT__funct7_ex = 0U;
        vlSelf->top__DOT__dut__DOT__core__DOT__pc_wb = 0U;
        vlSelf->top__DOT__dut__DOT__core__DOT__addr_rs1_ex = 0U;
    } else {
        vlSelf->top__DOT__dut__DOT__core__DOT__imm_ex 
            = ((1U & ((~ (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__branch_taken_pc)) 
                      & (~ (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__decode_stall))))
                ? vlSelf->top__DOT__dut__DOT__core__DOT__imm_r
                : 0U);
        vlSelf->top__DOT__dut__DOT__core__DOT__data_rs2_mem 
            = vlSelf->top__DOT__dut__DOT__core__DOT__data_rs2_ex_bypass;
        vlSelf->top__DOT__dut__DOT__core__DOT__funct7_ex 
            = ((1U & ((~ (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__branch_taken_pc)) 
                      & (~ (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__decode_stall))))
                ? (vlSelf->top__DOT__dut__DOT__core__DOT__instr_d 
                   >> 0x19U) : 0U);
        vlSelf->top__DOT__dut__DOT__core__DOT__pc_wb 
            = vlSelf->top__DOT__dut__DOT__core__DOT__pc_mem;
        vlSelf->top__DOT__dut__DOT__core__DOT__addr_rs1_ex 
            = ((1U & ((~ (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__branch_taken_pc)) 
                      & (~ (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__decode_stall))))
                ? (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__rs1)
                : 0U);
    }
    if (vlSelf->top__DOT__dut__DOT__core__DOT__instr_mem_enable) {
        vlSelf->top__DOT__dut__DOT__core__DOT__imem_dout 
            = vlSelf->top__DOT__dut__DOT__core__DOT__u_imemory__DOT__mem
            [(0x3ffffU & ((vlSelf->top__DOT__dut__DOT__core__DOT__pc 
                           - (IData)(0x1000000U)) >> 2U))];
    }
    vlSelf->top__DOT__dut__DOT__core__DOT__branch_taken_min1 
        = ((~ (IData)(vlSelf->top__DOT__reset)) & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__branch_taken_pc));
    vlSelf->top__DOT__dut__DOT__core__DOT__data_rs1 
        = vlSelf->top__DOT__dut__DOT__core__DOT__u_regfile__DOT__reg_file
        [vlSelf->top__DOT__dut__DOT__core__DOT__rs1];
    vlSelf->top__DOT__dut__DOT__core__DOT__addr_rs2_mem 
        = ((IData)(vlSelf->top__DOT__reset) ? 0U : (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__addr_rs2_ex));
    if (vlSelf->top__DOT__reset) {
        __Vdly__top__DOT__dut__DOT__core__DOT__pc = 0x1000000U;
    } else if ((((0x6fU == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__opcode_ex)) 
                 | (0x67U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__opcode_ex))) 
                | ((0x63U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__opcode_ex)) 
                   & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__branch_taken)))) {
        __Vdly__top__DOT__dut__DOT__core__DOT__pc = vlSelf->top__DOT__dut__DOT__core__DOT__alu_result;
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__decode_stall)))) {
        __Vdly__top__DOT__dut__DOT__core__DOT__pc = 
            ((IData)(4U) + vlSelf->top__DOT__dut__DOT__core__DOT__pc);
    }
    vlSelf->top__DOT__dut__DOT__core__DOT__instr_d_min1 
        = ((IData)(vlSelf->top__DOT__reset) ? 0U : vlSelf->top__DOT__dut__DOT__core__DOT__instr_d);
    vlSelf->top__DOT__dut__DOT__core__DOT__data_rs2 
        = vlSelf->top__DOT__dut__DOT__core__DOT__u_regfile__DOT__reg_file
        [(0x1fU & (vlSelf->top__DOT__dut__DOT__core__DOT__instr_d 
                   >> 0x14U))];
    vlSelf->top__DOT__dut__DOT__core__DOT__next_pc_wb 
        = ((IData)(vlSelf->top__DOT__reset) ? 0U : 
           ((IData)(4U) + vlSelf->top__DOT__dut__DOT__core__DOT__pc_mem));
    vlSelf->top__DOT__dut__DOT__core__DOT__instr_mem_enable_min1 
        = ((~ (IData)(vlSelf->top__DOT__reset)) & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__instr_mem_enable));
    vlSelf->top__DOT__dut__DOT__core__DOT__funct3_mem_min1 
        = ((IData)(vlSelf->top__DOT__reset) ? 0U : (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__funct3_mem));
    vlSelf->top__DOT__dut__DOT__core__DOT__write_enable_wb 
        = ((~ (IData)(vlSelf->top__DOT__reset)) & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__write_enable_mem));
    vlSelf->top__DOT__dut__DOT__core__DOT__dmem_out_pre 
        = ((vlSelf->top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__mem
            [(0xfffffU & ((IData)(3U) + vlSelf->top__DOT__dut__DOT__core__DOT__alu_result_mem))] 
            << 0x18U) | ((vlSelf->top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__mem
                          [(0xfffffU & ((IData)(2U) 
                                        + vlSelf->top__DOT__dut__DOT__core__DOT__alu_result_mem))] 
                          << 0x10U) | ((vlSelf->top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__mem
                                        [(0xfffffU 
                                          & ((IData)(1U) 
                                             + vlSelf->top__DOT__dut__DOT__core__DOT__alu_result_mem))] 
                                        << 8U) | vlSelf->top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__mem
                                       [(0xfffffU & vlSelf->top__DOT__dut__DOT__core__DOT__alu_result_mem)])));
    vlSelf->top__DOT__dut__DOT__core__DOT__alu_result_wb 
        = ((IData)(vlSelf->top__DOT__reset) ? 0U : vlSelf->top__DOT__dut__DOT__core__DOT__alu_result_mem);
    if (((IData)(vlSelf->top__DOT__dut__DOT__core__DOT__write_enable_module) 
         & (0U != (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__addr_rd_wb)))) {
        __Vdlyvval__top__DOT__dut__DOT__core__DOT__u_regfile__DOT__reg_file__v0 
            = vlSelf->top__DOT__dut__DOT__core__DOT__wb_data;
        __Vdlyvset__top__DOT__dut__DOT__core__DOT__u_regfile__DOT__reg_file__v0 = 1U;
        __Vdlyvdim0__top__DOT__dut__DOT__core__DOT__u_regfile__DOT__reg_file__v0 
            = vlSelf->top__DOT__dut__DOT__core__DOT__addr_rd_wb;
    }
    vlSelf->top__DOT__dut__DOT__core__DOT__opcode_wb 
        = ((IData)(vlSelf->top__DOT__reset) ? 0U : (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__opcode_mem));
    if ((0x23U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__opcode_mem))) {
        if ((0U == (3U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__funct3_mem)))) {
            __Vdlyvval__top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__mem__v0 
                = (0xffU & vlSelf->top__DOT__dut__DOT__core__DOT__data_rs2_mem_bypass);
            __Vdlyvset__top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__mem__v0 = 1U;
            __Vdlyvdim0__top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__mem__v0 
                = (0xfffffU & vlSelf->top__DOT__dut__DOT__core__DOT__alu_result_mem);
        } else if ((1U == (3U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__funct3_mem)))) {
            __Vdlyvval__top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__mem__v1 
                = (0xffU & (vlSelf->top__DOT__dut__DOT__core__DOT__data_rs2_mem_bypass 
                            >> 8U));
            __Vdlyvset__top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__mem__v1 = 1U;
            __Vdlyvdim0__top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__mem__v1 
                = (0xfffffU & ((IData)(1U) + vlSelf->top__DOT__dut__DOT__core__DOT__alu_result_mem));
            __Vdlyvval__top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__mem__v2 
                = (0xffU & vlSelf->top__DOT__dut__DOT__core__DOT__data_rs2_mem_bypass);
            __Vdlyvdim0__top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__mem__v2 
                = (0xfffffU & vlSelf->top__DOT__dut__DOT__core__DOT__alu_result_mem);
        } else {
            __Vdlyvval__top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__mem__v3 
                = (vlSelf->top__DOT__dut__DOT__core__DOT__data_rs2_mem_bypass 
                   >> 0x18U);
            __Vdlyvset__top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__mem__v3 = 1U;
            __Vdlyvdim0__top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__mem__v3 
                = (0xfffffU & ((IData)(3U) + vlSelf->top__DOT__dut__DOT__core__DOT__alu_result_mem));
            __Vdlyvval__top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__mem__v4 
                = (0xffU & (vlSelf->top__DOT__dut__DOT__core__DOT__data_rs2_mem_bypass 
                            >> 0x10U));
            __Vdlyvdim0__top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__mem__v4 
                = (0xfffffU & ((IData)(2U) + vlSelf->top__DOT__dut__DOT__core__DOT__alu_result_mem));
            __Vdlyvval__top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__mem__v5 
                = (0xffU & (vlSelf->top__DOT__dut__DOT__core__DOT__data_rs2_mem_bypass 
                            >> 8U));
            __Vdlyvdim0__top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__mem__v5 
                = (0xfffffU & ((IData)(1U) + vlSelf->top__DOT__dut__DOT__core__DOT__alu_result_mem));
            __Vdlyvval__top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__mem__v6 
                = (0xffU & vlSelf->top__DOT__dut__DOT__core__DOT__data_rs2_mem_bypass);
            __Vdlyvdim0__top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__mem__v6 
                = (0xfffffU & vlSelf->top__DOT__dut__DOT__core__DOT__alu_result_mem);
        }
    }
    if (__Vdlyvset__top__DOT__dut__DOT__core__DOT__u_imemory__DOT__mem__v0) {
        vlSelf->top__DOT__dut__DOT__core__DOT__u_imemory__DOT__mem[__Vdlyvdim0__top__DOT__dut__DOT__core__DOT__u_imemory__DOT__mem__v0] 
            = __Vdlyvval__top__DOT__dut__DOT__core__DOT__u_imemory__DOT__mem__v0;
    }
    vlSelf->top__DOT__dut__DOT__core__DOT__pc = __Vdly__top__DOT__dut__DOT__core__DOT__pc;
    if (__Vdlyvset__top__DOT__dut__DOT__core__DOT__u_regfile__DOT__reg_file__v0) {
        vlSelf->top__DOT__dut__DOT__core__DOT__u_regfile__DOT__reg_file[__Vdlyvdim0__top__DOT__dut__DOT__core__DOT__u_regfile__DOT__reg_file__v0] 
            = __Vdlyvval__top__DOT__dut__DOT__core__DOT__u_regfile__DOT__reg_file__v0;
    }
    if (__Vdlyvset__top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__mem__v0) {
        vlSelf->top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__mem[__Vdlyvdim0__top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__mem__v0] 
            = __Vdlyvval__top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__mem__v0;
    }
    if (__Vdlyvset__top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__mem__v1) {
        vlSelf->top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__mem[__Vdlyvdim0__top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__mem__v1] 
            = __Vdlyvval__top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__mem__v1;
        vlSelf->top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__mem[__Vdlyvdim0__top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__mem__v2] 
            = __Vdlyvval__top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__mem__v2;
    }
    if (__Vdlyvset__top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__mem__v3) {
        vlSelf->top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__mem[__Vdlyvdim0__top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__mem__v3] 
            = __Vdlyvval__top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__mem__v3;
        vlSelf->top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__mem[__Vdlyvdim0__top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__mem__v4] 
            = __Vdlyvval__top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__mem__v4;
        vlSelf->top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__mem[__Vdlyvdim0__top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__mem__v5] 
            = __Vdlyvval__top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__mem__v5;
        vlSelf->top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__mem[__Vdlyvdim0__top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__mem__v6] 
            = __Vdlyvval__top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__mem__v6;
    }
    if (vlSelf->top__DOT__reset) {
        vlSelf->top__DOT__dut__DOT__core__DOT__addr_rs2_ex = 0U;
        vlSelf->top__DOT__dut__DOT__core__DOT__pc_mem = 0U;
    } else {
        vlSelf->top__DOT__dut__DOT__core__DOT__addr_rs2_ex 
            = ((1U & ((~ (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__branch_taken_pc)) 
                      & (~ (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__decode_stall))))
                ? (0x1fU & (vlSelf->top__DOT__dut__DOT__core__DOT__instr_d 
                            >> 0x14U)) : 0U);
        vlSelf->top__DOT__dut__DOT__core__DOT__pc_mem 
            = vlSelf->top__DOT__dut__DOT__core__DOT__ex_pc_value;
    }
    top__DOT__dut__DOT__core__DOT__data_rs2_ex = 0U;
    if (vlSelf->top__DOT__dut__DOT__core__DOT__instr_mem_enable_min1) {
        top__DOT__dut__DOT__core__DOT__data_rs2_ex 
            = vlSelf->top__DOT__dut__DOT__core__DOT__data_rs2;
    }
    top__DOT__dut__DOT__core__DOT__data_rs1_ex = 0U;
    if (vlSelf->top__DOT__dut__DOT__core__DOT__instr_mem_enable_min1) {
        top__DOT__dut__DOT__core__DOT__data_rs1_ex 
            = vlSelf->top__DOT__dut__DOT__core__DOT__data_rs1;
    }
    vlSelf->top__DOT__dut__DOT__core__DOT__write_enable_mem 
        = ((~ (IData)(vlSelf->top__DOT__reset)) & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__write_enable_ex));
    vlSelf->top__DOT__dut__DOT__core__DOT__addr_rd_wb 
        = ((IData)(vlSelf->top__DOT__reset) ? 0U : (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__addr_rd_mem));
    vlSelf->top__DOT__dut__DOT__core__DOT__wb_data 
        = ((3U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__opcode_wb))
            ? ((4U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__funct3_mem_min1))
                ? ((2U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__funct3_mem_min1))
                    ? 0xbadf00dU : ((1U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__funct3_mem_min1))
                                     ? (0xffffU & vlSelf->top__DOT__dut__DOT__core__DOT__dmem_out_pre)
                                     : (0xffU & vlSelf->top__DOT__dut__DOT__core__DOT__dmem_out_pre)))
                : ((2U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__funct3_mem_min1))
                    ? ((1U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__funct3_mem_min1))
                        ? 0xbadf00dU : vlSelf->top__DOT__dut__DOT__core__DOT__dmem_out_pre)
                    : ((1U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__funct3_mem_min1))
                        ? (((- (IData)((1U & (vlSelf->top__DOT__dut__DOT__core__DOT__dmem_out_pre 
                                              >> 0xfU)))) 
                            << 0x10U) | (0xffffU & vlSelf->top__DOT__dut__DOT__core__DOT__dmem_out_pre))
                        : (((- (IData)((1U & (vlSelf->top__DOT__dut__DOT__core__DOT__dmem_out_pre 
                                              >> 7U)))) 
                            << 8U) | (0xffU & vlSelf->top__DOT__dut__DOT__core__DOT__dmem_out_pre)))))
            : (((0x6fU == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__opcode_wb)) 
                | (0x67U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__opcode_wb)))
                ? vlSelf->top__DOT__dut__DOT__core__DOT__next_pc_wb
                : vlSelf->top__DOT__dut__DOT__core__DOT__alu_result_wb));
    if (vlSelf->top__DOT__reset) {
        vlSelf->top__DOT__dut__DOT__core__DOT__alu_result_mem = 0U;
        vlSelf->top__DOT__dut__DOT__core__DOT__funct3_mem = 0U;
        vlSelf->top__DOT__dut__DOT__core__DOT__opcode_mem = 0U;
        vlSelf->top__DOT__dut__DOT__core__DOT__ex_pc_value = 0U;
    } else {
        vlSelf->top__DOT__dut__DOT__core__DOT__alu_result_mem 
            = vlSelf->top__DOT__dut__DOT__core__DOT__alu_result;
        vlSelf->top__DOT__dut__DOT__core__DOT__funct3_mem 
            = vlSelf->top__DOT__dut__DOT__core__DOT__funct3_ex;
        vlSelf->top__DOT__dut__DOT__core__DOT__opcode_mem 
            = vlSelf->top__DOT__dut__DOT__core__DOT__opcode_ex;
        vlSelf->top__DOT__dut__DOT__core__DOT__ex_pc_value 
            = vlSelf->top__DOT__dut__DOT__core__DOT__pc_d;
    }
    vlSelf->top__DOT__dut__DOT__core__DOT__write_enable_ex 
        = (1U & ((~ (IData)(vlSelf->top__DOT__reset)) 
                 & ((~ ((~ (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__branch_taken_pc)) 
                        & (~ (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__decode_stall)))) 
                    | ((((0x23U != (0x7fU & vlSelf->top__DOT__dut__DOT__core__DOT__instr_d)) 
                         & (0x63U != (0x7fU & vlSelf->top__DOT__dut__DOT__core__DOT__instr_d))) 
                        & (0x73U != (0x7fU & vlSelf->top__DOT__dut__DOT__core__DOT__instr_d))) 
                       & (0U != (0x7fU & vlSelf->top__DOT__dut__DOT__core__DOT__instr_d))))));
    vlSelf->top__DOT__dut__DOT__core__DOT__data_rs2_mem_bypass 
        = vlSelf->top__DOT__dut__DOT__core__DOT__data_rs2_mem;
    if (((((IData)(vlSelf->top__DOT__dut__DOT__core__DOT__addr_rd_wb) 
           == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__addr_rs2_mem)) 
          & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__write_enable_wb)) 
         & (0U != (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__addr_rd_wb)))) {
        vlSelf->top__DOT__dut__DOT__core__DOT__data_rs2_mem_bypass 
            = vlSelf->top__DOT__dut__DOT__core__DOT__wb_data;
    }
    if (vlSelf->top__DOT__reset) {
        vlSelf->top__DOT__dut__DOT__core__DOT__addr_rd_mem = 0U;
        vlSelf->top__DOT__dut__DOT__core__DOT__funct3_ex = 0U;
        vlSelf->top__DOT__dut__DOT__core__DOT__opcode_ex = 0U;
    } else {
        vlSelf->top__DOT__dut__DOT__core__DOT__addr_rd_mem 
            = vlSelf->top__DOT__dut__DOT__core__DOT__addr_rd_ex;
        vlSelf->top__DOT__dut__DOT__core__DOT__funct3_ex 
            = ((1U & ((~ (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__branch_taken_pc)) 
                      & (~ (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__decode_stall))))
                ? (7U & (vlSelf->top__DOT__dut__DOT__core__DOT__instr_d 
                         >> 0xcU)) : 0U);
        vlSelf->top__DOT__dut__DOT__core__DOT__opcode_ex 
            = ((1U & ((~ (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__branch_taken_pc)) 
                      & (~ (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__decode_stall))))
                ? (0x7fU & vlSelf->top__DOT__dut__DOT__core__DOT__instr_d)
                : 0x13U);
    }
    if (vlSelf->top__DOT__reset) {
        vlSelf->top__DOT__dut__DOT__core__DOT__pc_d = 0U;
    } else if ((1U & ((~ (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__branch_taken_pc)) 
                      & (~ (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__decode_stall))))) {
        vlSelf->top__DOT__dut__DOT__core__DOT__pc_d 
            = vlSelf->top__DOT__dut__DOT__core__DOT__pc_value;
    }
    top__DOT__dut__DOT__core__DOT__data_rs1_ex_bypass 
        = top__DOT__dut__DOT__core__DOT__data_rs1_ex;
    if (((((IData)(vlSelf->top__DOT__dut__DOT__core__DOT__addr_rd_wb) 
           == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__addr_rs1_ex)) 
          & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__write_enable_wb)) 
         & (0U != (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__addr_rd_wb)))) {
        top__DOT__dut__DOT__core__DOT__data_rs1_ex_bypass 
            = vlSelf->top__DOT__dut__DOT__core__DOT__wb_data;
    }
    if ((((((IData)(vlSelf->top__DOT__dut__DOT__core__DOT__addr_rd_mem) 
            == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__addr_rs1_ex)) 
           & (3U != (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__opcode_mem))) 
          & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__write_enable_mem)) 
         & (0U != (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__addr_rd_mem)))) {
        top__DOT__dut__DOT__core__DOT__data_rs1_ex_bypass 
            = vlSelf->top__DOT__dut__DOT__core__DOT__alu_result_mem;
    }
    vlSelf->top__DOT__dut__DOT__core__DOT__data_rs2_ex_bypass 
        = top__DOT__dut__DOT__core__DOT__data_rs2_ex;
    if (((((IData)(vlSelf->top__DOT__dut__DOT__core__DOT__addr_rd_wb) 
           == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__addr_rs2_ex)) 
          & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__write_enable_wb)) 
         & (0U != (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__addr_rd_wb)))) {
        vlSelf->top__DOT__dut__DOT__core__DOT__data_rs2_ex_bypass 
            = vlSelf->top__DOT__dut__DOT__core__DOT__wb_data;
    }
    if ((((((IData)(vlSelf->top__DOT__dut__DOT__core__DOT__addr_rd_mem) 
            == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__addr_rs2_ex)) 
           & (3U != (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__opcode_mem))) 
          & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__write_enable_mem)) 
         & (0U != (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__addr_rd_mem)))) {
        vlSelf->top__DOT__dut__DOT__core__DOT__data_rs2_ex_bypass 
            = vlSelf->top__DOT__dut__DOT__core__DOT__alu_result_mem;
    }
    vlSelf->top__DOT__dut__DOT__core__DOT__addr_rd_ex 
        = ((IData)(vlSelf->top__DOT__reset) ? 0U : 
           ((1U & ((~ (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__branch_taken_pc)) 
                   & (~ (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__decode_stall))))
             ? (0x1fU & (vlSelf->top__DOT__dut__DOT__core__DOT__instr_d 
                         >> 7U)) : 0U));
    vlSelf->top__DOT__dut__DOT__core__DOT__alu_result = 0U;
    if ((0x40U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__opcode_ex))) {
        vlSelf->top__DOT__dut__DOT__core__DOT__alu_result 
            = ((0x20U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__opcode_ex))
                ? ((0x10U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__opcode_ex))
                    ? 0U : ((8U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__opcode_ex))
                             ? ((4U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__opcode_ex))
                                 ? ((2U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__opcode_ex))
                                     ? ((1U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__opcode_ex))
                                         ? (vlSelf->top__DOT__dut__DOT__core__DOT__ex_pc_value 
                                            + vlSelf->top__DOT__dut__DOT__core__DOT__imm_ex)
                                         : 0U) : 0U)
                                 : 0U) : ((4U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__opcode_ex))
                                           ? ((2U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__opcode_ex))
                                               ? ((1U 
                                                   & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__opcode_ex))
                                                   ? 
                                                  (0xfffffffeU 
                                                   & (top__DOT__dut__DOT__core__DOT__data_rs1_ex_bypass 
                                                      + vlSelf->top__DOT__dut__DOT__core__DOT__imm_ex))
                                                   : 0U)
                                               : 0U)
                                           : ((2U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__opcode_ex))
                                               ? ((1U 
                                                   & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__opcode_ex))
                                                   ? 
                                                  (vlSelf->top__DOT__dut__DOT__core__DOT__ex_pc_value 
                                                   + vlSelf->top__DOT__dut__DOT__core__DOT__imm_ex)
                                                   : 0U)
                                               : 0U))))
                : 0U);
    } else if ((0x20U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__opcode_ex))) {
        if ((0x10U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__opcode_ex))) {
            if ((8U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__opcode_ex))) {
                vlSelf->top__DOT__dut__DOT__core__DOT__alu_result = 0U;
            } else if ((4U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__opcode_ex))) {
                vlSelf->top__DOT__dut__DOT__core__DOT__alu_result 
                    = ((2U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__opcode_ex))
                        ? ((1U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__opcode_ex))
                            ? vlSelf->top__DOT__dut__DOT__core__DOT__imm_ex
                            : 0U) : 0U);
            } else if ((2U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__opcode_ex))) {
                if ((1U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__opcode_ex))) {
                    if ((0U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__funct3_ex))) {
                        vlSelf->top__DOT__dut__DOT__core__DOT__alu_result 
                            = ((0x20U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__funct7_ex))
                                ? (top__DOT__dut__DOT__core__DOT__data_rs1_ex_bypass 
                                   - vlSelf->top__DOT__dut__DOT__core__DOT__data_rs2_ex_bypass)
                                : (top__DOT__dut__DOT__core__DOT__data_rs1_ex_bypass 
                                   + vlSelf->top__DOT__dut__DOT__core__DOT__data_rs2_ex_bypass));
                    }
                    if ((1U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__funct3_ex))) {
                        vlSelf->top__DOT__dut__DOT__core__DOT__alu_result 
                            = (top__DOT__dut__DOT__core__DOT__data_rs1_ex_bypass 
                               << (0x1fU & vlSelf->top__DOT__dut__DOT__core__DOT__data_rs2_ex_bypass));
                    }
                    if ((2U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__funct3_ex))) {
                        vlSelf->top__DOT__dut__DOT__core__DOT__alu_result 
                            = (VL_LTS_III(1,32,32, top__DOT__dut__DOT__core__DOT__data_rs1_ex_bypass, vlSelf->top__DOT__dut__DOT__core__DOT__data_rs2_ex_bypass)
                                ? 1U : 0U);
                    }
                    if ((3U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__funct3_ex))) {
                        vlSelf->top__DOT__dut__DOT__core__DOT__alu_result 
                            = ((top__DOT__dut__DOT__core__DOT__data_rs1_ex_bypass 
                                < vlSelf->top__DOT__dut__DOT__core__DOT__data_rs2_ex_bypass)
                                ? 1U : 0U);
                    }
                    if ((4U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__funct3_ex))) {
                        vlSelf->top__DOT__dut__DOT__core__DOT__alu_result 
                            = (top__DOT__dut__DOT__core__DOT__data_rs1_ex_bypass 
                               ^ vlSelf->top__DOT__dut__DOT__core__DOT__data_rs2_ex_bypass);
                    }
                    if ((5U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__funct3_ex))) {
                        if ((0U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__funct7_ex))) {
                            vlSelf->top__DOT__dut__DOT__core__DOT__alu_result 
                                = (top__DOT__dut__DOT__core__DOT__data_rs1_ex_bypass 
                                   >> (0x1fU & vlSelf->top__DOT__dut__DOT__core__DOT__data_rs2_ex_bypass));
                        } else if ((0x20U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__funct7_ex))) {
                            vlSelf->top__DOT__dut__DOT__core__DOT__alu_result 
                                = VL_SHIFTRS_III(32,32,5, top__DOT__dut__DOT__core__DOT__data_rs1_ex_bypass, 
                                                 (0x1fU 
                                                  & vlSelf->top__DOT__dut__DOT__core__DOT__data_rs2_ex_bypass));
                        }
                    }
                    if ((6U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__funct3_ex))) {
                        vlSelf->top__DOT__dut__DOT__core__DOT__alu_result 
                            = (top__DOT__dut__DOT__core__DOT__data_rs1_ex_bypass 
                               | vlSelf->top__DOT__dut__DOT__core__DOT__data_rs2_ex_bypass);
                    }
                    if ((7U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__funct3_ex))) {
                        vlSelf->top__DOT__dut__DOT__core__DOT__alu_result 
                            = (top__DOT__dut__DOT__core__DOT__data_rs1_ex_bypass 
                               & vlSelf->top__DOT__dut__DOT__core__DOT__data_rs2_ex_bypass);
                    }
                } else {
                    vlSelf->top__DOT__dut__DOT__core__DOT__alu_result = 0U;
                }
            } else {
                vlSelf->top__DOT__dut__DOT__core__DOT__alu_result = 0U;
            }
        } else {
            vlSelf->top__DOT__dut__DOT__core__DOT__alu_result 
                = ((8U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__opcode_ex))
                    ? 0U : ((4U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__opcode_ex))
                             ? 0U : ((2U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__opcode_ex))
                                      ? ((1U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__opcode_ex))
                                          ? (top__DOT__dut__DOT__core__DOT__data_rs1_ex_bypass 
                                             + vlSelf->top__DOT__dut__DOT__core__DOT__imm_ex)
                                          : 0U) : 0U)));
        }
    } else if ((0x10U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__opcode_ex))) {
        if ((8U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__opcode_ex))) {
            vlSelf->top__DOT__dut__DOT__core__DOT__alu_result = 0U;
        } else if ((4U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__opcode_ex))) {
            vlSelf->top__DOT__dut__DOT__core__DOT__alu_result 
                = ((2U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__opcode_ex))
                    ? ((1U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__opcode_ex))
                        ? (vlSelf->top__DOT__dut__DOT__core__DOT__ex_pc_value 
                           + vlSelf->top__DOT__dut__DOT__core__DOT__imm_ex)
                        : 0U) : 0U);
        } else if ((2U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__opcode_ex))) {
            if ((1U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__opcode_ex))) {
                if ((0U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__funct3_ex))) {
                    vlSelf->top__DOT__dut__DOT__core__DOT__alu_result 
                        = (top__DOT__dut__DOT__core__DOT__data_rs1_ex_bypass 
                           + vlSelf->top__DOT__dut__DOT__core__DOT__imm_ex);
                }
                if ((1U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__funct3_ex))) {
                    vlSelf->top__DOT__dut__DOT__core__DOT__alu_result 
                        = ((0x1fU >= vlSelf->top__DOT__dut__DOT__core__DOT__imm_ex)
                            ? (top__DOT__dut__DOT__core__DOT__data_rs1_ex_bypass 
                               << vlSelf->top__DOT__dut__DOT__core__DOT__imm_ex)
                            : 0U);
                }
                if ((2U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__funct3_ex))) {
                    vlSelf->top__DOT__dut__DOT__core__DOT__alu_result 
                        = (VL_LTS_III(1,32,32, top__DOT__dut__DOT__core__DOT__data_rs1_ex_bypass, vlSelf->top__DOT__dut__DOT__core__DOT__imm_ex)
                            ? 1U : 0U);
                }
                if ((3U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__funct3_ex))) {
                    vlSelf->top__DOT__dut__DOT__core__DOT__alu_result 
                        = ((top__DOT__dut__DOT__core__DOT__data_rs1_ex_bypass 
                            < vlSelf->top__DOT__dut__DOT__core__DOT__imm_ex)
                            ? 1U : 0U);
                }
                if ((4U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__funct3_ex))) {
                    vlSelf->top__DOT__dut__DOT__core__DOT__alu_result 
                        = (top__DOT__dut__DOT__core__DOT__data_rs1_ex_bypass 
                           ^ vlSelf->top__DOT__dut__DOT__core__DOT__imm_ex);
                }
                if ((5U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__funct3_ex))) {
                    if ((0U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__funct7_ex))) {
                        vlSelf->top__DOT__dut__DOT__core__DOT__alu_result 
                            = ((0x1fU >= vlSelf->top__DOT__dut__DOT__core__DOT__imm_ex)
                                ? (top__DOT__dut__DOT__core__DOT__data_rs1_ex_bypass 
                                   >> vlSelf->top__DOT__dut__DOT__core__DOT__imm_ex)
                                : 0U);
                    } else if ((0x20U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__funct7_ex))) {
                        vlSelf->top__DOT__dut__DOT__core__DOT__alu_result 
                            = ((0x1fU >= vlSelf->top__DOT__dut__DOT__core__DOT__imm_ex)
                                ? VL_SHIFTRS_III(32,32,32, top__DOT__dut__DOT__core__DOT__data_rs1_ex_bypass, vlSelf->top__DOT__dut__DOT__core__DOT__imm_ex)
                                : (- (top__DOT__dut__DOT__core__DOT__data_rs1_ex_bypass 
                                      >> 0x1fU)));
                    }
                }
                if ((6U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__funct3_ex))) {
                    vlSelf->top__DOT__dut__DOT__core__DOT__alu_result 
                        = (top__DOT__dut__DOT__core__DOT__data_rs1_ex_bypass 
                           | vlSelf->top__DOT__dut__DOT__core__DOT__imm_ex);
                }
                if ((7U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__funct3_ex))) {
                    vlSelf->top__DOT__dut__DOT__core__DOT__alu_result 
                        = (top__DOT__dut__DOT__core__DOT__data_rs1_ex_bypass 
                           & vlSelf->top__DOT__dut__DOT__core__DOT__imm_ex);
                }
            } else {
                vlSelf->top__DOT__dut__DOT__core__DOT__alu_result = 0U;
            }
        } else {
            vlSelf->top__DOT__dut__DOT__core__DOT__alu_result = 0U;
        }
    } else {
        vlSelf->top__DOT__dut__DOT__core__DOT__alu_result 
            = ((8U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__opcode_ex))
                ? 0U : ((4U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__opcode_ex))
                         ? 0U : ((2U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__opcode_ex))
                                  ? ((1U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__opcode_ex))
                                      ? (top__DOT__dut__DOT__core__DOT__data_rs1_ex_bypass 
                                         + vlSelf->top__DOT__dut__DOT__core__DOT__imm_ex)
                                      : 0U) : 0U)));
    }
    vlSelf->top__DOT__dut__DOT__core__DOT__branch_taken = 0U;
    if ((0x63U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__opcode_ex))) {
        vlSelf->top__DOT__dut__DOT__core__DOT__branch_taken 
            = ((4U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__funct3_ex))
                ? ((2U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__funct3_ex))
                    ? ((1U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__funct3_ex))
                        ? (top__DOT__dut__DOT__core__DOT__data_rs1_ex_bypass 
                           >= vlSelf->top__DOT__dut__DOT__core__DOT__data_rs2_ex_bypass)
                        : (top__DOT__dut__DOT__core__DOT__data_rs1_ex_bypass 
                           < vlSelf->top__DOT__dut__DOT__core__DOT__data_rs2_ex_bypass))
                    : ((1U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__funct3_ex))
                        ? VL_GTES_III(1,32,32, top__DOT__dut__DOT__core__DOT__data_rs1_ex_bypass, vlSelf->top__DOT__dut__DOT__core__DOT__data_rs2_ex_bypass)
                        : VL_LTS_III(1,32,32, top__DOT__dut__DOT__core__DOT__data_rs1_ex_bypass, vlSelf->top__DOT__dut__DOT__core__DOT__data_rs2_ex_bypass)))
                : ((~ ((IData)(vlSelf->top__DOT__dut__DOT__core__DOT__funct3_ex) 
                       >> 1U)) & ((1U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__funct3_ex))
                                   ? (top__DOT__dut__DOT__core__DOT__data_rs1_ex_bypass 
                                      != vlSelf->top__DOT__dut__DOT__core__DOT__data_rs2_ex_bypass)
                                   : (top__DOT__dut__DOT__core__DOT__data_rs1_ex_bypass 
                                      == vlSelf->top__DOT__dut__DOT__core__DOT__data_rs2_ex_bypass))));
    }
    if ((0x67U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__opcode_ex))) {
        vlSelf->top__DOT__dut__DOT__core__DOT__branch_taken = 0U;
    }
    if ((0x6fU == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__opcode_ex))) {
        vlSelf->top__DOT__dut__DOT__core__DOT__branch_taken = 0U;
    }
    vlSelf->top__DOT__dut__DOT__core__DOT__instr_d 
        = vlSelf->top__DOT__dut__DOT__core__DOT__instr_d_min1;
    if (vlSelf->top__DOT__dut__DOT__core__DOT__instr_mem_enable_min1) {
        vlSelf->top__DOT__dut__DOT__core__DOT__instr_d 
            = vlSelf->top__DOT__dut__DOT__core__DOT__imem_dout;
    }
    if (vlSelf->top__DOT__dut__DOT__core__DOT__branch_taken_min1) {
        vlSelf->top__DOT__dut__DOT__core__DOT__instr_d = 0x13U;
    }
    vlSelf->top__DOT__dut__DOT__core__DOT__branch_taken_pc 
        = (((0x6fU == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__opcode_ex)) 
            | (0x67U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__opcode_ex))) 
           | ((0x63U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__opcode_ex)) 
              & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__branch_taken)));
    top__DOT__dut__DOT__core__DOT__imm_i = (((- (IData)(
                                                        (vlSelf->top__DOT__dut__DOT__core__DOT__instr_d 
                                                         >> 0x1fU))) 
                                             << 0xcU) 
                                            | (vlSelf->top__DOT__dut__DOT__core__DOT__instr_d 
                                               >> 0x14U));
    vlSelf->top__DOT__dut__DOT__core__DOT__rs1 = ((0x37U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->top__DOT__dut__DOT__core__DOT__instr_d))
                                                   ? 0U
                                                   : 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__dut__DOT__core__DOT__instr_d 
                                                      >> 0xfU)));
    __Vdly__top__DOT__clkg__DOT__counter = ((IData)(1U) 
                                            + vlSelf->top__DOT__clkg__DOT__counter);
    vlSelf->top__DOT__reset = VL_GTS_III(1,32,32, 5U, vlSelf->top__DOT__clkg__DOT__counter);
    if (VL_UNLIKELY((0xc350U == vlSelf->top__DOT__clkg__DOT__counter))) {
        VL_FINISH_MT("/home/h3sun/ece320/h3sun-pd6/verif/tests/clockgen.sv", 40, "");
    }
    vlSelf->top__DOT__dut__DOT__core__DOT__imm_r = 
        ((0x40U & vlSelf->top__DOT__dut__DOT__core__DOT__instr_d)
          ? ((0x20U & vlSelf->top__DOT__dut__DOT__core__DOT__instr_d)
              ? ((0x10U & vlSelf->top__DOT__dut__DOT__core__DOT__instr_d)
                  ? 0U : ((8U & vlSelf->top__DOT__dut__DOT__core__DOT__instr_d)
                           ? ((4U & vlSelf->top__DOT__dut__DOT__core__DOT__instr_d)
                               ? ((2U & vlSelf->top__DOT__dut__DOT__core__DOT__instr_d)
                                   ? ((1U & vlSelf->top__DOT__dut__DOT__core__DOT__instr_d)
                                       ? (((- (IData)(
                                                      (vlSelf->top__DOT__dut__DOT__core__DOT__instr_d 
                                                       >> 0x1fU))) 
                                           << 0x15U) 
                                          | ((0x100000U 
                                              & (vlSelf->top__DOT__dut__DOT__core__DOT__instr_d 
                                                 >> 0xbU)) 
                                             | ((0xff000U 
                                                 & vlSelf->top__DOT__dut__DOT__core__DOT__instr_d) 
                                                | ((0x800U 
                                                    & (vlSelf->top__DOT__dut__DOT__core__DOT__instr_d 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (vlSelf->top__DOT__dut__DOT__core__DOT__instr_d 
                                                         >> 0x14U))))))
                                       : 0U) : 0U) : 0U)
                           : ((4U & vlSelf->top__DOT__dut__DOT__core__DOT__instr_d)
                               ? ((2U & vlSelf->top__DOT__dut__DOT__core__DOT__instr_d)
                                   ? ((1U & vlSelf->top__DOT__dut__DOT__core__DOT__instr_d)
                                       ? (((5U == (7U 
                                                   & (vlSelf->top__DOT__dut__DOT__core__DOT__instr_d 
                                                      >> 0xcU))) 
                                           & (0x20U 
                                              == (vlSelf->top__DOT__dut__DOT__core__DOT__instr_d 
                                                  >> 0x19U)))
                                           ? (0x1fU 
                                              & (vlSelf->top__DOT__dut__DOT__core__DOT__instr_d 
                                                 >> 0x14U))
                                           : top__DOT__dut__DOT__core__DOT__imm_i)
                                       : 0U) : 0U) : 
                              ((2U & vlSelf->top__DOT__dut__DOT__core__DOT__instr_d)
                                ? ((1U & vlSelf->top__DOT__dut__DOT__core__DOT__instr_d)
                                    ? (((- (IData)(
                                                   (vlSelf->top__DOT__dut__DOT__core__DOT__instr_d 
                                                    >> 0x1fU))) 
                                        << 0xdU) | 
                                       ((0x1000U & 
                                         (vlSelf->top__DOT__dut__DOT__core__DOT__instr_d 
                                          >> 0x13U)) 
                                        | ((0x800U 
                                            & (vlSelf->top__DOT__dut__DOT__core__DOT__instr_d 
                                               << 4U)) 
                                           | ((0x7e0U 
                                               & (vlSelf->top__DOT__dut__DOT__core__DOT__instr_d 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->top__DOT__dut__DOT__core__DOT__instr_d 
                                                    >> 7U))))))
                                    : 0U) : 0U)))) : 0U)
          : ((0x20U & vlSelf->top__DOT__dut__DOT__core__DOT__instr_d)
              ? ((0x10U & vlSelf->top__DOT__dut__DOT__core__DOT__instr_d)
                  ? ((8U & vlSelf->top__DOT__dut__DOT__core__DOT__instr_d)
                      ? 0U : ((4U & vlSelf->top__DOT__dut__DOT__core__DOT__instr_d)
                               ? ((2U & vlSelf->top__DOT__dut__DOT__core__DOT__instr_d)
                                   ? ((1U & vlSelf->top__DOT__dut__DOT__core__DOT__instr_d)
                                       ? (0xfffff000U 
                                          & vlSelf->top__DOT__dut__DOT__core__DOT__instr_d)
                                       : 0U) : 0U) : 0U))
                  : ((8U & vlSelf->top__DOT__dut__DOT__core__DOT__instr_d)
                      ? 0U : ((4U & vlSelf->top__DOT__dut__DOT__core__DOT__instr_d)
                               ? 0U : ((2U & vlSelf->top__DOT__dut__DOT__core__DOT__instr_d)
                                        ? ((1U & vlSelf->top__DOT__dut__DOT__core__DOT__instr_d)
                                            ? (((- (IData)(
                                                           (vlSelf->top__DOT__dut__DOT__core__DOT__instr_d 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | ((0xfe0U 
                                                   & (vlSelf->top__DOT__dut__DOT__core__DOT__instr_d 
                                                      >> 0x14U)) 
                                                  | (0x1fU 
                                                     & (vlSelf->top__DOT__dut__DOT__core__DOT__instr_d 
                                                        >> 7U))))
                                            : 0U) : 0U))))
              : ((0x10U & vlSelf->top__DOT__dut__DOT__core__DOT__instr_d)
                  ? ((8U & vlSelf->top__DOT__dut__DOT__core__DOT__instr_d)
                      ? 0U : ((4U & vlSelf->top__DOT__dut__DOT__core__DOT__instr_d)
                               ? ((2U & vlSelf->top__DOT__dut__DOT__core__DOT__instr_d)
                                   ? ((1U & vlSelf->top__DOT__dut__DOT__core__DOT__instr_d)
                                       ? (0xfffff000U 
                                          & vlSelf->top__DOT__dut__DOT__core__DOT__instr_d)
                                       : 0U) : 0U) : 
                              ((2U & vlSelf->top__DOT__dut__DOT__core__DOT__instr_d)
                                ? ((1U & vlSelf->top__DOT__dut__DOT__core__DOT__instr_d)
                                    ? (((5U == (7U 
                                                & (vlSelf->top__DOT__dut__DOT__core__DOT__instr_d 
                                                   >> 0xcU))) 
                                        & (0x20U == 
                                           (vlSelf->top__DOT__dut__DOT__core__DOT__instr_d 
                                            >> 0x19U)))
                                        ? (0x1fU & 
                                           (vlSelf->top__DOT__dut__DOT__core__DOT__instr_d 
                                            >> 0x14U))
                                        : top__DOT__dut__DOT__core__DOT__imm_i)
                                    : 0U) : 0U))) : 
                 ((8U & vlSelf->top__DOT__dut__DOT__core__DOT__instr_d)
                   ? 0U : ((4U & vlSelf->top__DOT__dut__DOT__core__DOT__instr_d)
                            ? 0U : ((2U & vlSelf->top__DOT__dut__DOT__core__DOT__instr_d)
                                     ? ((1U & vlSelf->top__DOT__dut__DOT__core__DOT__instr_d)
                                         ? (((5U == 
                                              (7U & 
                                               (vlSelf->top__DOT__dut__DOT__core__DOT__instr_d 
                                                >> 0xcU))) 
                                             & (0x20U 
                                                == 
                                                (vlSelf->top__DOT__dut__DOT__core__DOT__instr_d 
                                                 >> 0x19U)))
                                             ? (0x1fU 
                                                & (vlSelf->top__DOT__dut__DOT__core__DOT__instr_d 
                                                   >> 0x14U))
                                             : top__DOT__dut__DOT__core__DOT__imm_i)
                                         : 0U) : 0U))))));
    vlSelf->top__DOT__dut__DOT__core__DOT__decode_stall = 0U;
    if (((((((((((IData)(vlSelf->top__DOT__dut__DOT__core__DOT__addr_rd_wb) 
                 == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__rs1)) 
                & (((IData)(vlSelf->top__DOT__dut__DOT__core__DOT__addr_rd_wb) 
                    != (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__addr_rd_ex)) 
                   | (~ (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__write_enable_ex)))) 
               & (((IData)(vlSelf->top__DOT__dut__DOT__core__DOT__addr_rd_wb) 
                   != (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__addr_rd_mem)) 
                  | (~ (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__write_enable_mem)))) 
              & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__write_enable_wb)) 
             & (0U != (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__addr_rd_wb))) 
            & (0x6fU != (0x7fU & vlSelf->top__DOT__dut__DOT__core__DOT__instr_d))) 
           & (0x37U != (0x7fU & vlSelf->top__DOT__dut__DOT__core__DOT__instr_d))) 
          & (0x17U != (0x7fU & vlSelf->top__DOT__dut__DOT__core__DOT__instr_d))) 
         & (0x73U != (0x7fU & vlSelf->top__DOT__dut__DOT__core__DOT__instr_d)))) {
        vlSelf->top__DOT__dut__DOT__core__DOT__decode_stall = 1U;
    }
    if ((((((((IData)(vlSelf->top__DOT__dut__DOT__core__DOT__addr_rd_wb) 
              == (0x1fU & (vlSelf->top__DOT__dut__DOT__core__DOT__instr_d 
                           >> 0x14U))) & (((IData)(vlSelf->top__DOT__dut__DOT__core__DOT__addr_rd_wb) 
                                           != (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__addr_rd_ex)) 
                                          | (~ (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__write_enable_ex)))) 
            & (((IData)(vlSelf->top__DOT__dut__DOT__core__DOT__addr_rd_wb) 
                != (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__addr_rd_mem)) 
               | (~ (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__write_enable_mem)))) 
           & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__write_enable_wb)) 
          & (0U != (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__addr_rd_wb))) 
         & (((0x33U == (0x7fU & vlSelf->top__DOT__dut__DOT__core__DOT__instr_d)) 
             | (0x23U == (0x7fU & vlSelf->top__DOT__dut__DOT__core__DOT__instr_d))) 
            | (0x63U == (0x7fU & vlSelf->top__DOT__dut__DOT__core__DOT__instr_d))))) {
        vlSelf->top__DOT__dut__DOT__core__DOT__decode_stall = 1U;
    }
    if (((((3U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__opcode_ex)) 
           & ((IData)(vlSelf->top__DOT__dut__DOT__core__DOT__addr_rd_ex) 
              == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__rs1))) 
          & (0U != (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__addr_rd_ex))) 
         & ((((((0x33U == (0x7fU & vlSelf->top__DOT__dut__DOT__core__DOT__instr_d)) 
                | (0x13U == (0x7fU & vlSelf->top__DOT__dut__DOT__core__DOT__instr_d))) 
               | (3U == (0x7fU & vlSelf->top__DOT__dut__DOT__core__DOT__instr_d))) 
              | (0x23U == (0x7fU & vlSelf->top__DOT__dut__DOT__core__DOT__instr_d))) 
             | (0x63U == (0x7fU & vlSelf->top__DOT__dut__DOT__core__DOT__instr_d))) 
            | (0x67U == (0x7fU & vlSelf->top__DOT__dut__DOT__core__DOT__instr_d))))) {
        vlSelf->top__DOT__dut__DOT__core__DOT__decode_stall = 1U;
    }
    if (((((3U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__opcode_ex)) 
           & ((IData)(vlSelf->top__DOT__dut__DOT__core__DOT__addr_rd_ex) 
              == (0x1fU & (vlSelf->top__DOT__dut__DOT__core__DOT__instr_d 
                           >> 0x14U)))) & (0U != (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__addr_rd_ex))) 
         & ((0x33U == (0x7fU & vlSelf->top__DOT__dut__DOT__core__DOT__instr_d)) 
            | (0x63U == (0x7fU & vlSelf->top__DOT__dut__DOT__core__DOT__instr_d))))) {
        vlSelf->top__DOT__dut__DOT__core__DOT__decode_stall = 1U;
    }
    vlSelf->top__DOT__clkg__DOT__counter = __Vdly__top__DOT__clkg__DOT__counter;
    vlSelf->top__DOT__dut__DOT__core__DOT__instr_mem_enable 
        = (1U & ((~ (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__branch_taken_pc)) 
                 & (~ (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__decode_stall))));
    if (vlSelf->top__DOT__reset) {
        vlSelf->top__DOT__dut__DOT__core__DOT__pc_value = 0x1000000U;
        vlSelf->top__DOT__dut__DOT__core__DOT__write_enable_module = 0U;
    } else {
        vlSelf->top__DOT__dut__DOT__core__DOT__pc_value 
            = vlSelf->top__DOT__dut__DOT__core__DOT__pc;
        vlSelf->top__DOT__dut__DOT__core__DOT__write_enable_module 
            = (1U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__write_enable_wb));
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__2\n"); );
    // Body
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->top__DOT__reset))))) {
        VL_FWRITEF(vlSelf->top__DOT__genblk1__DOT_____05Ftrace_fd,"[F] %x %x\n",
                   32,vlSelf->top__DOT__dut__DOT__core__DOT__pc_value,
                   32,vlSelf->top__DOT__dut__DOT__core__DOT__imem_dout);
        if (vlSelf->top__DOT__genblk1__DOT_____05Ftrace_fd) { VL_FFLUSH_I(vlSelf->top__DOT__genblk1__DOT_____05Ftrace_fd); }
        VL_FWRITEF(vlSelf->top__DOT__genblk1__DOT_____05Ftrace_fd,"[D] %x %x %x %x %x %x %x %x %x\n",
                   32,vlSelf->top__DOT__dut__DOT__core__DOT__pc_d,
                   7,(0x7fU & vlSelf->top__DOT__dut__DOT__core__DOT__instr_d),
                   5,(0x1fU & (vlSelf->top__DOT__dut__DOT__core__DOT__instr_d 
                               >> 7U)),5,(IData)(vlSelf->top__DOT__dut__DOT__core__DOT__rs1),
                   5,(0x1fU & (vlSelf->top__DOT__dut__DOT__core__DOT__instr_d 
                               >> 0x14U)),3,(7U & (vlSelf->top__DOT__dut__DOT__core__DOT__instr_d 
                                                   >> 0xcU)),
                   7,(vlSelf->top__DOT__dut__DOT__core__DOT__instr_d 
                      >> 0x19U),32,vlSelf->top__DOT__dut__DOT__core__DOT__imm_r,
                   5,(0x1fU & (vlSelf->top__DOT__dut__DOT__core__DOT__instr_d 
                               >> 0x14U)));
        if (vlSelf->top__DOT__genblk1__DOT_____05Ftrace_fd) { VL_FFLUSH_I(vlSelf->top__DOT__genblk1__DOT_____05Ftrace_fd); }
        VL_FWRITEF(vlSelf->top__DOT__genblk1__DOT_____05Ftrace_fd,"[R] %x %x %x %x\n",
                   5,vlSelf->top__DOT__dut__DOT__core__DOT__rs1,
                   5,(0x1fU & (vlSelf->top__DOT__dut__DOT__core__DOT__instr_d 
                               >> 0x14U)),32,vlSelf->top__DOT__dut__DOT__core__DOT__data_rs1,
                   32,vlSelf->top__DOT__dut__DOT__core__DOT__data_rs2);
        if (vlSelf->top__DOT__genblk1__DOT_____05Ftrace_fd) { VL_FFLUSH_I(vlSelf->top__DOT__genblk1__DOT_____05Ftrace_fd); }
        VL_FWRITEF(vlSelf->top__DOT__genblk1__DOT_____05Ftrace_fd,"[E] %x %x %x\n",
                   32,vlSelf->top__DOT__dut__DOT__core__DOT__ex_pc_value,
                   32,vlSelf->top__DOT__dut__DOT__core__DOT__alu_result,
                   1,(IData)(vlSelf->top__DOT__dut__DOT__core__DOT__branch_taken));
        if (vlSelf->top__DOT__genblk1__DOT_____05Ftrace_fd) { VL_FFLUSH_I(vlSelf->top__DOT__genblk1__DOT_____05Ftrace_fd); }
        VL_FWRITEF(vlSelf->top__DOT__genblk1__DOT_____05Ftrace_fd,"[M] %x %x %x %x %x\n",
                   32,vlSelf->top__DOT__dut__DOT__core__DOT__pc_mem,
                   32,vlSelf->top__DOT__dut__DOT__core__DOT__alu_result_mem,
                   1,(0x23U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__opcode_mem)),
                   2,(3U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__funct3_mem)),
                   32,vlSelf->top__DOT__dut__DOT__core__DOT__data_rs2_mem_bypass);
        if (vlSelf->top__DOT__genblk1__DOT_____05Ftrace_fd) { VL_FFLUSH_I(vlSelf->top__DOT__genblk1__DOT_____05Ftrace_fd); }
        VL_FWRITEF(vlSelf->top__DOT__genblk1__DOT_____05Ftrace_fd,"[W] %x %x %x %x\n",
                   32,vlSelf->top__DOT__dut__DOT__core__DOT__pc_wb,
                   1,(IData)(vlSelf->top__DOT__dut__DOT__core__DOT__write_enable_module),
                   5,vlSelf->top__DOT__dut__DOT__core__DOT__addr_rd_wb,
                   32,vlSelf->top__DOT__dut__DOT__core__DOT__wb_data);
        if (vlSelf->top__DOT__genblk1__DOT_____05Ftrace_fd) { VL_FFLUSH_I(vlSelf->top__DOT__genblk1__DOT_____05Ftrace_fd); }
    }
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->__VinpClk__TOP__top__DOT__clock) 
         & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__top__DOT__clock)))) {
        Vtop___024root___sequent__TOP__1(vlSelf);
    }
    if (((~ (IData)(vlSelf->__VinpClk__TOP__top__DOT__clock)) 
         & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__top__DOT__clock))) {
        Vtop___024root___sequent__TOP__2(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP____VinpClk__TOP__top__DOT__clock 
        = vlSelf->__VinpClk__TOP__top__DOT__clock;
    vlSelf->__VinpClk__TOP__top__DOT__clock = vlSelf->top__DOT__clock;
}

QData Vtop___024root___change_request_1(Vtop___024root* vlSelf);

VL_INLINE_OPT QData Vtop___024root___change_request(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request\n"); );
    // Body
    return (Vtop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtop___024root___change_request_1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->top__DOT__clock ^ vlSelf->__Vchglast__TOP__top__DOT__clock));
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__clock ^ vlSelf->__Vchglast__TOP__top__DOT__clock))) VL_DBG_MSGF("        CHANGE: /home/h3sun/ece320/h3sun-pd6/verif/tests/test_pd.sv:5: top.clock\n"); );
    // Final
    vlSelf->__Vchglast__TOP__top__DOT__clock = vlSelf->top__DOT__clock;
    return __req;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
