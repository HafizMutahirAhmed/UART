// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUART_TestBench.h for the primary calling header

#include "VUART_TestBench__pch.h"
#include "VUART_TestBench___024root.h"

VL_ATTR_COLD void VUART_TestBench___024root___eval_static(VUART_TestBench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUART_TestBench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_TestBench___024root___eval_static\n"); );
}

VL_ATTR_COLD void VUART_TestBench___024root___eval_final(VUART_TestBench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUART_TestBench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_TestBench___024root___eval_final\n"); );
}

VL_ATTR_COLD void VUART_TestBench___024root___eval_settle(VUART_TestBench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUART_TestBench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_TestBench___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VUART_TestBench___024root___dump_triggers__act(VUART_TestBench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUART_TestBench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_TestBench___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge UART_TestBench.CLK)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VUART_TestBench___024root___dump_triggers__nba(VUART_TestBench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUART_TestBench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_TestBench___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge UART_TestBench.CLK)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VUART_TestBench___024root___ctor_var_reset(VUART_TestBench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUART_TestBench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_TestBench___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->UART_TestBench__DOT__CLK = VL_RAND_RESET_I(1);
    vlSelf->UART_TestBench__DOT__EN = VL_RAND_RESET_I(1);
    vlSelf->UART_TestBench__DOT__Reset = VL_RAND_RESET_I(1);
    vlSelf->UART_TestBench__DOT__DataIN = VL_RAND_RESET_I(8);
    vlSelf->UART_TestBench__DOT__DataOUT = VL_RAND_RESET_I(8);
    vlSelf->UART_TestBench__DOT__DUT__DOT__tx = VL_RAND_RESET_I(1);
    vlSelf->UART_TestBench__DOT__DUT__DOT__TX__DOT__databuffer = VL_RAND_RESET_I(8);
    vlSelf->UART_TestBench__DOT__DUT__DOT__TX__DOT__count = VL_RAND_RESET_I(8);
    vlSelf->UART_TestBench__DOT__DUT__DOT__TX__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->UART_TestBench__DOT__DUT__DOT__RX__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->UART_TestBench__DOT__DUT__DOT__RX__DOT__databuffer = VL_RAND_RESET_I(8);
    vlSelf->UART_TestBench__DOT__DUT__DOT__RX__DOT__count = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__UART_TestBench__DOT__CLK__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
