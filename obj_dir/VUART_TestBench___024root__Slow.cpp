// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUART_TestBench.h for the primary calling header

#include "VUART_TestBench__pch.h"
#include "VUART_TestBench__Syms.h"
#include "VUART_TestBench___024root.h"

void VUART_TestBench___024root___ctor_var_reset(VUART_TestBench___024root* vlSelf);

VUART_TestBench___024root::VUART_TestBench___024root(VUART_TestBench__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VUART_TestBench___024root___ctor_var_reset(this);
}

void VUART_TestBench___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VUART_TestBench___024root::~VUART_TestBench___024root() {
}
