// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUART_TestBench.h for the primary calling header

#include "VUART_TestBench__pch.h"
#include "VUART_TestBench__Syms.h"
#include "VUART_TestBench___024root.h"

VL_ATTR_COLD void VUART_TestBench___024root___eval_initial__TOP(VUART_TestBench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUART_TestBench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_TestBench___024root___eval_initial__TOP\n"); );
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"UART.vcd"});
    vlSymsp->_traceDumpOpen();
}
