// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(Vtop__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vtop___024root::~Vtop___024root() {
}

extern const VlWide<15>/*479:0*/ Vtop__ConstPool__CONST_980265a6_0;

void Vtop___024root___initial__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__3\n"); );
    // Variables
    CData/*7:0*/ top__DOT__dut__DOT__core__DOT__u_dmemory__DOT____Vconcswap1;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__i;
    IData/*23:0*/ top__DOT__dut__DOT__core__DOT__u_dmemory__DOT____Vconcswap2;
    VlWide<3>/*95:0*/ __Vtemp2;
    // Body
    __Vtemp2[0U] = 0x72616365U;
    __Vtemp2[1U] = 0x61702e74U;
    __Vtemp2[2U] = 0x5377U;
    vlSelf->top__DOT__genblk1__DOT_____05Ftrace_fd = VL_FOPEN_NN(
                                                                 VL_CVT_PACK_STR_NW(3, __Vtemp2)
                                                                 , 
                                                                 std::string("w"));
    VL_READMEM_N(true, 32, 66, 0, VL_CVT_PACK_STR_NW(15, Vtop__ConstPool__CONST_980265a6_0)
                 ,  &(vlSelf->top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__temp)
                 , 0, ~0ULL);
    top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0x42U, top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__i)) {
        top__DOT__dut__DOT__core__DOT__u_dmemory__DOT____Vconcswap1 
            = (((0x41U >= (0x7fU & top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__i))
                 ? vlSelf->top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__temp
                [(0x7fU & top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__i)]
                 : 0U) >> 0x18U);
        top__DOT__dut__DOT__core__DOT__u_dmemory__DOT____Vconcswap2 
            = ((0x41U >= (0x7fU & top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__i))
                ? (0xffffffU & vlSelf->top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__temp
                   [(0x7fU & top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__i)])
                : 0U);
        vlSelf->top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__mem[(0xfffffU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       VL_MULS_III(20,32,32, (IData)(4U), top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__i)))] 
            = top__DOT__dut__DOT__core__DOT__u_dmemory__DOT____Vconcswap1;
        vlSelf->top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__mem[(0xfffffU 
                                                                    & ((IData)(2U) 
                                                                       + 
                                                                       VL_MULS_III(20,32,32, (IData)(4U), top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__i)))] 
            = (0xffU & (top__DOT__dut__DOT__core__DOT__u_dmemory__DOT____Vconcswap2 
                        >> 0x10U));
        vlSelf->top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__mem[(0xfffffU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       VL_MULS_III(20,32,32, (IData)(4U), top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__i)))] 
            = (0xffU & (top__DOT__dut__DOT__core__DOT__u_dmemory__DOT____Vconcswap2 
                        >> 8U));
        vlSelf->top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__mem[(0xfffffU 
                                                                    & VL_MULS_III(20,32,32, (IData)(4U), top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__i))] 
            = (0xffU & top__DOT__dut__DOT__core__DOT__u_dmemory__DOT____Vconcswap2);
        top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__i 
            = ((IData)(1U) + top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__i);
    }
    VL_READMEM_N(true, 32, 262144, 0, VL_CVT_PACK_STR_NW(15, Vtop__ConstPool__CONST_980265a6_0)
                 ,  &(vlSelf->top__DOT__dut__DOT__core__DOT__u_imemory__DOT__mem)
                 , 0, ~0ULL);
    vlSelf->top__DOT__dut__DOT__core__DOT__u_regfile__DOT__reg_file[0U] = 0U;
    vlSelf->top__DOT__dut__DOT__core__DOT__u_regfile__DOT__reg_file[1U] = 0U;
    vlSelf->top__DOT__dut__DOT__core__DOT__u_regfile__DOT__reg_file[2U] = 0x1100000U;
    vlSelf->top__DOT__dut__DOT__core__DOT__u_regfile__DOT__reg_file[3U] = 0U;
    vlSelf->top__DOT__dut__DOT__core__DOT__u_regfile__DOT__reg_file[4U] = 0U;
    vlSelf->top__DOT__dut__DOT__core__DOT__u_regfile__DOT__reg_file[5U] = 0U;
    vlSelf->top__DOT__dut__DOT__core__DOT__u_regfile__DOT__reg_file[6U] = 0U;
    vlSelf->top__DOT__dut__DOT__core__DOT__u_regfile__DOT__reg_file[7U] = 0U;
    vlSelf->top__DOT__dut__DOT__core__DOT__u_regfile__DOT__reg_file[8U] = 0U;
    vlSelf->top__DOT__dut__DOT__core__DOT__u_regfile__DOT__reg_file[9U] = 0U;
    vlSelf->top__DOT__dut__DOT__core__DOT__u_regfile__DOT__reg_file[0xaU] = 0U;
    vlSelf->top__DOT__dut__DOT__core__DOT__u_regfile__DOT__reg_file[0xbU] = 0U;
    vlSelf->top__DOT__dut__DOT__core__DOT__u_regfile__DOT__reg_file[0xcU] = 0U;
    vlSelf->top__DOT__dut__DOT__core__DOT__u_regfile__DOT__reg_file[0xdU] = 0U;
    vlSelf->top__DOT__dut__DOT__core__DOT__u_regfile__DOT__reg_file[0xeU] = 0U;
    vlSelf->top__DOT__dut__DOT__core__DOT__u_regfile__DOT__reg_file[0xfU] = 0U;
    vlSelf->top__DOT__dut__DOT__core__DOT__u_regfile__DOT__reg_file[0x10U] = 0U;
    vlSelf->top__DOT__dut__DOT__core__DOT__u_regfile__DOT__reg_file[0x11U] = 0U;
    vlSelf->top__DOT__dut__DOT__core__DOT__u_regfile__DOT__reg_file[0x12U] = 0U;
    vlSelf->top__DOT__dut__DOT__core__DOT__u_regfile__DOT__reg_file[0x13U] = 0U;
    vlSelf->top__DOT__dut__DOT__core__DOT__u_regfile__DOT__reg_file[0x14U] = 0U;
    vlSelf->top__DOT__dut__DOT__core__DOT__u_regfile__DOT__reg_file[0x15U] = 0U;
    vlSelf->top__DOT__dut__DOT__core__DOT__u_regfile__DOT__reg_file[0x16U] = 0U;
    vlSelf->top__DOT__dut__DOT__core__DOT__u_regfile__DOT__reg_file[0x17U] = 0U;
    vlSelf->top__DOT__dut__DOT__core__DOT__u_regfile__DOT__reg_file[0x18U] = 0U;
    vlSelf->top__DOT__dut__DOT__core__DOT__u_regfile__DOT__reg_file[0x19U] = 0U;
    vlSelf->top__DOT__dut__DOT__core__DOT__u_regfile__DOT__reg_file[0x1aU] = 0U;
    vlSelf->top__DOT__dut__DOT__core__DOT__u_regfile__DOT__reg_file[0x1bU] = 0U;
    vlSelf->top__DOT__dut__DOT__core__DOT__u_regfile__DOT__reg_file[0x1cU] = 0U;
    vlSelf->top__DOT__dut__DOT__core__DOT__u_regfile__DOT__reg_file[0x1dU] = 0U;
    vlSelf->top__DOT__dut__DOT__core__DOT__u_regfile__DOT__reg_file[0x1eU] = 0U;
    vlSelf->top__DOT__dut__DOT__core__DOT__u_regfile__DOT__reg_file[0x1fU] = 0U;
    vlSelf->top__DOT__clock = 0U;
    vlSelf->top__DOT__reset = 1U;
    vlSelf->top__DOT__clkg__DOT__counter = 0U;
}

void Vtop___024root___settle__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__4\n"); );
    // Variables
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__imm_i;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__data_rs1_ex;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__data_rs2_ex;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__data_rs1_ex_bypass;
    // Body
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
    vlSelf->top__DOT__dut__DOT__core__DOT__instr_d 
        = vlSelf->top__DOT__dut__DOT__core__DOT__instr_d_min1;
    if (vlSelf->top__DOT__dut__DOT__core__DOT__instr_mem_enable_min1) {
        vlSelf->top__DOT__dut__DOT__core__DOT__instr_d 
            = vlSelf->top__DOT__dut__DOT__core__DOT__imem_dout;
    }
    if (vlSelf->top__DOT__dut__DOT__core__DOT__branch_taken_min1) {
        vlSelf->top__DOT__dut__DOT__core__DOT__instr_d = 0x13U;
    }
    if (vlSelf->top__DOT__reset) {
        vlSelf->top__DOT__dut__DOT__core__DOT__pc_value = 0x1000000U;
        vlSelf->top__DOT__dut__DOT__core__DOT__write_enable_module = 0U;
    } else {
        vlSelf->top__DOT__dut__DOT__core__DOT__pc_value 
            = vlSelf->top__DOT__dut__DOT__core__DOT__pc;
        vlSelf->top__DOT__dut__DOT__core__DOT__write_enable_module 
            = (1U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__write_enable_wb));
    }
    vlSelf->top__DOT__dut__DOT__core__DOT__data_rs2_mem_bypass 
        = vlSelf->top__DOT__dut__DOT__core__DOT__data_rs2_mem;
    if (((((IData)(vlSelf->top__DOT__dut__DOT__core__DOT__addr_rd_wb) 
           == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__addr_rs2_mem)) 
          & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__write_enable_wb)) 
         & (0U != (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__addr_rd_wb)))) {
        vlSelf->top__DOT__dut__DOT__core__DOT__data_rs2_mem_bypass 
            = vlSelf->top__DOT__dut__DOT__core__DOT__wb_data;
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
    vlSelf->top__DOT__dut__DOT__core__DOT__branch_taken_pc 
        = (((0x6fU == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__opcode_ex)) 
            | (0x67U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__opcode_ex))) 
           | ((0x63U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__opcode_ex)) 
              & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__branch_taken)));
    vlSelf->top__DOT__dut__DOT__core__DOT__instr_mem_enable 
        = (1U & ((~ (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__branch_taken_pc)) 
                 & (~ (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__decode_stall))));
}

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP____VinpClk__TOP__top__DOT__clock 
        = vlSelf->__VinpClk__TOP__top__DOT__clock;
    Vtop___024root___initial__TOP__3(vlSelf);
}

void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__4(vlSelf);
}

void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->top__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__genblk1__DOT_____05Ftrace_fd = 0;
    vlSelf->top__DOT__clkg__DOT__counter = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__core__DOT__pc_value = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__core__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__core__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__core__DOT__imem_dout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__core__DOT__decode_stall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__core__DOT__instr_d = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__core__DOT__instr_d_min1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__core__DOT__instr_mem_enable = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__core__DOT__instr_mem_enable_min1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__core__DOT__pc_d = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__core__DOT__branch_taken_min1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__core__DOT__branch_taken_pc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__core__DOT__imm_r = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__core__DOT__write_enable_module = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__core__DOT__data_rs1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__core__DOT__data_rs2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__core__DOT__branch_taken = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__core__DOT__ex_pc_value = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__core__DOT__addr_rs1_ex = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__core__DOT__addr_rs2_ex = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__core__DOT__addr_rd_ex = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__core__DOT__opcode_ex = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__dut__DOT__core__DOT__imm_ex = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__core__DOT__funct3_ex = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__core__DOT__funct7_ex = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__dut__DOT__core__DOT__write_enable_ex = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__core__DOT__data_rs2_ex_bypass = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__core__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__core__DOT__opcode_mem = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__dut__DOT__core__DOT__alu_result_mem = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__core__DOT__data_rs2_mem = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__core__DOT__funct3_mem = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__core__DOT__pc_mem = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__core__DOT__addr_rd_mem = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__core__DOT__addr_rs2_mem = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__core__DOT__write_enable_mem = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__core__DOT__data_rs2_mem_bypass = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__core__DOT__dmem_out_pre = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__core__DOT__funct3_mem_min1 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__core__DOT__opcode_wb = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__dut__DOT__core__DOT__pc_wb = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__core__DOT__next_pc_wb = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__core__DOT__alu_result_wb = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__core__DOT__addr_rd_wb = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__core__DOT__write_enable_wb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__core__DOT__wb_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__core__DOT__u_imemory__DOT__data_in_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__core__DOT__u_imemory__DOT__read_write_2 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<262144; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__core__DOT__u_imemory__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__core__DOT__u_regfile__DOT__reg_file[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<66; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__temp[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<1048576; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__core__DOT__u_dmemory__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__VinpClk__TOP__top__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__clock = VL_RAND_RESET_I(1);
}
