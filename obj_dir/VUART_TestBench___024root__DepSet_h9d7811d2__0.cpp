// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUART_TestBench.h for the primary calling header

#include "VUART_TestBench__pch.h"
#include "VUART_TestBench__Syms.h"
#include "VUART_TestBench___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VUART_TestBench___024root___dump_triggers__act(VUART_TestBench___024root* vlSelf);
#endif  // VL_DEBUG

void VUART_TestBench___024root___eval_triggers__act(VUART_TestBench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUART_TestBench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_TestBench___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->UART_TestBench__DOT__CLK) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__UART_TestBench__DOT__CLK__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__UART_TestBench__DOT__CLK__0 
        = vlSelf->UART_TestBench__DOT__CLK;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VUART_TestBench___024root___dump_triggers__act(vlSelf);
    }
#endif
}
