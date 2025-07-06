// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VUART_TestBench__Syms.h"


void VUART_TestBench___024root__trace_chg_0_sub_0(VUART_TestBench___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VUART_TestBench___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_TestBench___024root__trace_chg_0\n"); );
    // Init
    VUART_TestBench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VUART_TestBench___024root*>(voidSelf);
    VUART_TestBench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VUART_TestBench___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VUART_TestBench___024root__trace_chg_0_sub_0(VUART_TestBench___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VUART_TestBench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_TestBench___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->UART_TestBench__DOT__DataOUT),8);
        bufp->chgBit(oldp+1,(vlSelf->UART_TestBench__DOT__DUT__DOT__tx));
        bufp->chgBit(oldp+2,(vlSelf->UART_TestBench__DOT__DUT__DOT__BaudTick));
        bufp->chgSData(oldp+3,(vlSelf->UART_TestBench__DOT__DUT__DOT__BaudGen__DOT__count),13);
        bufp->chgCData(oldp+4,(vlSelf->UART_TestBench__DOT__DUT__DOT__RX__DOT__state),2);
        bufp->chgCData(oldp+5,(vlSelf->UART_TestBench__DOT__DUT__DOT__RX__DOT__databuffer),8);
        bufp->chgCData(oldp+6,(vlSelf->UART_TestBench__DOT__DUT__DOT__RX__DOT__count),3);
        bufp->chgCData(oldp+7,(vlSelf->UART_TestBench__DOT__DUT__DOT__TX__DOT__databuffer),8);
        bufp->chgCData(oldp+8,(vlSelf->UART_TestBench__DOT__DUT__DOT__TX__DOT__count),8);
        bufp->chgCData(oldp+9,(vlSelf->UART_TestBench__DOT__DUT__DOT__TX__DOT__state),2);
    }
    bufp->chgBit(oldp+10,(vlSelf->UART_TestBench__DOT__CLK));
    bufp->chgBit(oldp+11,(vlSelf->UART_TestBench__DOT__EN));
    bufp->chgBit(oldp+12,(vlSelf->UART_TestBench__DOT__Reset));
    bufp->chgCData(oldp+13,(vlSelf->UART_TestBench__DOT__DataIN),8);
}

void VUART_TestBench___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_TestBench___024root__trace_cleanup\n"); );
    // Init
    VUART_TestBench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VUART_TestBench___024root*>(voidSelf);
    VUART_TestBench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
