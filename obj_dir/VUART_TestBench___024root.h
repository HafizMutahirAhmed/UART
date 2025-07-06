// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUART_TestBench.h for the primary calling header

#ifndef VERILATED_VUART_TESTBENCH___024ROOT_H_
#define VERILATED_VUART_TESTBENCH___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VUART_TestBench__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUART_TestBench___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ UART_TestBench__DOT__CLK;
    CData/*0:0*/ UART_TestBench__DOT__EN;
    CData/*0:0*/ UART_TestBench__DOT__Reset;
    CData/*7:0*/ UART_TestBench__DOT__DataIN;
    CData/*7:0*/ UART_TestBench__DOT__DataOUT;
    CData/*0:0*/ UART_TestBench__DOT__DUT__DOT__tx;
    CData/*7:0*/ UART_TestBench__DOT__DUT__DOT__TX__DOT__databuffer;
    CData/*7:0*/ UART_TestBench__DOT__DUT__DOT__TX__DOT__count;
    CData/*1:0*/ UART_TestBench__DOT__DUT__DOT__TX__DOT__state;
    CData/*1:0*/ UART_TestBench__DOT__DUT__DOT__RX__DOT__state;
    CData/*7:0*/ UART_TestBench__DOT__DUT__DOT__RX__DOT__databuffer;
    CData/*2:0*/ UART_TestBench__DOT__DUT__DOT__RX__DOT__count;
    CData/*0:0*/ __Vtrigprevexpr___TOP__UART_TestBench__DOT__CLK__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    VUART_TestBench__Syms* const vlSymsp;

    // CONSTRUCTORS
    VUART_TestBench___024root(VUART_TestBench__Syms* symsp, const char* v__name);
    ~VUART_TestBench___024root();
    VL_UNCOPYABLE(VUART_TestBench___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
