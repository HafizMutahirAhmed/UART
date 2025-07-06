// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUART_TestBench.h for the primary calling header

#include "VUART_TestBench__pch.h"
#include "VUART_TestBench___024root.h"

VL_ATTR_COLD void VUART_TestBench___024root___eval_initial__TOP(VUART_TestBench___024root* vlSelf);
VlCoroutine VUART_TestBench___024root___eval_initial__TOP__Vtiming__0(VUART_TestBench___024root* vlSelf);
VlCoroutine VUART_TestBench___024root___eval_initial__TOP__Vtiming__1(VUART_TestBench___024root* vlSelf);

void VUART_TestBench___024root___eval_initial(VUART_TestBench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUART_TestBench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_TestBench___024root___eval_initial\n"); );
    // Body
    VUART_TestBench___024root___eval_initial__TOP(vlSelf);
    VUART_TestBench___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VUART_TestBench___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__UART_TestBench__DOT__CLK__0 
        = vlSelf->UART_TestBench__DOT__CLK;
}

VL_INLINE_OPT VlCoroutine VUART_TestBench___024root___eval_initial__TOP__Vtiming__0(VUART_TestBench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUART_TestBench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_TestBench___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->UART_TestBench__DOT__CLK = 0U;
    vlSelf->UART_TestBench__DOT__Reset = 1U;
    vlSelf->UART_TestBench__DOT__EN = 0U;
    vlSelf->UART_TestBench__DOT__DataIN = 0xeaU;
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "/home/mutahir/Documents/SystemVerilog/UART/UART_TestBench.sv", 
                                       22);
    vlSelf->UART_TestBench__DOT__Reset = 0U;
    vlSelf->UART_TestBench__DOT__EN = 1U;
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "/home/mutahir/Documents/SystemVerilog/UART/UART_TestBench.sv", 
                                       25);
    VL_FINISH_MT("/home/mutahir/Documents/SystemVerilog/UART/UART_TestBench.sv", 26, "");
}

VL_INLINE_OPT VlCoroutine VUART_TestBench___024root___eval_initial__TOP__Vtiming__1(VUART_TestBench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUART_TestBench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_TestBench___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "/home/mutahir/Documents/SystemVerilog/UART/UART_TestBench.sv", 
                                           14);
        vlSelf->UART_TestBench__DOT__CLK = (1U & (~ (IData)(vlSelf->UART_TestBench__DOT__CLK)));
    }
}

void VUART_TestBench___024root___eval_act(VUART_TestBench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUART_TestBench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_TestBench___024root___eval_act\n"); );
}

VL_INLINE_OPT void VUART_TestBench___024root___nba_sequent__TOP__0(VUART_TestBench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUART_TestBench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_TestBench___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*1:0*/ __Vdly__UART_TestBench__DOT__DUT__DOT__TX__DOT__state;
    __Vdly__UART_TestBench__DOT__DUT__DOT__TX__DOT__state = 0;
    CData/*7:0*/ __Vdly__UART_TestBench__DOT__DUT__DOT__TX__DOT__databuffer;
    __Vdly__UART_TestBench__DOT__DUT__DOT__TX__DOT__databuffer = 0;
    CData/*7:0*/ __Vdly__UART_TestBench__DOT__DUT__DOT__TX__DOT__count;
    __Vdly__UART_TestBench__DOT__DUT__DOT__TX__DOT__count = 0;
    CData/*1:0*/ __Vdly__UART_TestBench__DOT__DUT__DOT__RX__DOT__state;
    __Vdly__UART_TestBench__DOT__DUT__DOT__RX__DOT__state = 0;
    CData/*7:0*/ __Vdly__UART_TestBench__DOT__DUT__DOT__RX__DOT__databuffer;
    __Vdly__UART_TestBench__DOT__DUT__DOT__RX__DOT__databuffer = 0;
    CData/*2:0*/ __Vdly__UART_TestBench__DOT__DUT__DOT__RX__DOT__count;
    __Vdly__UART_TestBench__DOT__DUT__DOT__RX__DOT__count = 0;
    // Body
    __Vdly__UART_TestBench__DOT__DUT__DOT__TX__DOT__count 
        = vlSelf->UART_TestBench__DOT__DUT__DOT__TX__DOT__count;
    __Vdly__UART_TestBench__DOT__DUT__DOT__TX__DOT__databuffer 
        = vlSelf->UART_TestBench__DOT__DUT__DOT__TX__DOT__databuffer;
    __Vdly__UART_TestBench__DOT__DUT__DOT__TX__DOT__state 
        = vlSelf->UART_TestBench__DOT__DUT__DOT__TX__DOT__state;
    __Vdly__UART_TestBench__DOT__DUT__DOT__RX__DOT__count 
        = vlSelf->UART_TestBench__DOT__DUT__DOT__RX__DOT__count;
    __Vdly__UART_TestBench__DOT__DUT__DOT__RX__DOT__databuffer 
        = vlSelf->UART_TestBench__DOT__DUT__DOT__RX__DOT__databuffer;
    __Vdly__UART_TestBench__DOT__DUT__DOT__RX__DOT__state 
        = vlSelf->UART_TestBench__DOT__DUT__DOT__RX__DOT__state;
    if (vlSelf->UART_TestBench__DOT__Reset) {
        __Vdly__UART_TestBench__DOT__DUT__DOT__RX__DOT__state = 0U;
        __Vdly__UART_TestBench__DOT__DUT__DOT__TX__DOT__state = 0U;
    }
    if ((0U == (IData)(vlSelf->UART_TestBench__DOT__DUT__DOT__RX__DOT__state))) {
        __Vdly__UART_TestBench__DOT__DUT__DOT__RX__DOT__databuffer = 0U;
        vlSelf->UART_TestBench__DOT__DataOUT = 0U;
        if ((1U & (~ (IData)(vlSelf->UART_TestBench__DOT__DUT__DOT__tx)))) {
            __Vdly__UART_TestBench__DOT__DUT__DOT__RX__DOT__state = 1U;
            __Vdly__UART_TestBench__DOT__DUT__DOT__RX__DOT__count = 7U;
        }
    } else if ((1U == (IData)(vlSelf->UART_TestBench__DOT__DUT__DOT__RX__DOT__state))) {
        __Vdly__UART_TestBench__DOT__DUT__DOT__RX__DOT__count 
            = (7U & ((IData)(vlSelf->UART_TestBench__DOT__DUT__DOT__RX__DOT__count) 
                     - (IData)(1U)));
        __Vdly__UART_TestBench__DOT__DUT__DOT__RX__DOT__databuffer 
            = (((~ ((IData)(1U) << (IData)(vlSelf->UART_TestBench__DOT__DUT__DOT__RX__DOT__count))) 
                & (IData)(__Vdly__UART_TestBench__DOT__DUT__DOT__RX__DOT__databuffer)) 
               | (0xffU & ((IData)(vlSelf->UART_TestBench__DOT__DUT__DOT__tx) 
                           << (IData)(vlSelf->UART_TestBench__DOT__DUT__DOT__RX__DOT__count))));
        if ((0U == (IData)(vlSelf->UART_TestBench__DOT__DUT__DOT__RX__DOT__count))) {
            __Vdly__UART_TestBench__DOT__DUT__DOT__RX__DOT__state = 2U;
        }
    } else if ((2U == (IData)(vlSelf->UART_TestBench__DOT__DUT__DOT__RX__DOT__state))) {
        vlSelf->UART_TestBench__DOT__DataOUT = vlSelf->UART_TestBench__DOT__DUT__DOT__RX__DOT__databuffer;
        __Vdly__UART_TestBench__DOT__DUT__DOT__RX__DOT__state = 0U;
    }
    vlSelf->UART_TestBench__DOT__DUT__DOT__RX__DOT__state 
        = __Vdly__UART_TestBench__DOT__DUT__DOT__RX__DOT__state;
    vlSelf->UART_TestBench__DOT__DUT__DOT__RX__DOT__databuffer 
        = __Vdly__UART_TestBench__DOT__DUT__DOT__RX__DOT__databuffer;
    vlSelf->UART_TestBench__DOT__DUT__DOT__RX__DOT__count 
        = __Vdly__UART_TestBench__DOT__DUT__DOT__RX__DOT__count;
    if ((0U == (IData)(vlSelf->UART_TestBench__DOT__DUT__DOT__TX__DOT__state))) {
        vlSelf->UART_TestBench__DOT__DUT__DOT__tx = 1U;
        if (vlSelf->UART_TestBench__DOT__EN) {
            __Vdly__UART_TestBench__DOT__DUT__DOT__TX__DOT__state = 1U;
            vlSelf->UART_TestBench__DOT__DUT__DOT__tx = 0U;
        }
    } else if ((1U == (IData)(vlSelf->UART_TestBench__DOT__DUT__DOT__TX__DOT__state))) {
        vlSelf->UART_TestBench__DOT__DUT__DOT__tx = 
            (1U & ((IData)(vlSelf->UART_TestBench__DOT__DataIN) 
                   >> 7U));
        __Vdly__UART_TestBench__DOT__DUT__DOT__TX__DOT__databuffer 
            = (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->UART_TestBench__DOT__DataIN), 1U));
        __Vdly__UART_TestBench__DOT__DUT__DOT__TX__DOT__state = 2U;
        __Vdly__UART_TestBench__DOT__DUT__DOT__TX__DOT__count = 1U;
    } else if ((2U == (IData)(vlSelf->UART_TestBench__DOT__DUT__DOT__TX__DOT__state))) {
        vlSelf->UART_TestBench__DOT__DUT__DOT__tx = 
            (1U & ((IData)(vlSelf->UART_TestBench__DOT__DUT__DOT__TX__DOT__databuffer) 
                   >> 7U));
        __Vdly__UART_TestBench__DOT__DUT__DOT__TX__DOT__databuffer 
            = (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->UART_TestBench__DOT__DUT__DOT__TX__DOT__databuffer), 1U));
        __Vdly__UART_TestBench__DOT__DUT__DOT__TX__DOT__count 
            = (0xffU & ((IData)(1U) + (IData)(vlSelf->UART_TestBench__DOT__DUT__DOT__TX__DOT__count)));
        if ((8U == (IData)(vlSelf->UART_TestBench__DOT__DUT__DOT__TX__DOT__count))) {
            __Vdly__UART_TestBench__DOT__DUT__DOT__TX__DOT__state = 3U;
            vlSelf->UART_TestBench__DOT__DUT__DOT__tx = 1U;
            __Vdly__UART_TestBench__DOT__DUT__DOT__TX__DOT__state = 0U;
        }
    }
    vlSelf->UART_TestBench__DOT__DUT__DOT__TX__DOT__state 
        = __Vdly__UART_TestBench__DOT__DUT__DOT__TX__DOT__state;
    vlSelf->UART_TestBench__DOT__DUT__DOT__TX__DOT__databuffer 
        = __Vdly__UART_TestBench__DOT__DUT__DOT__TX__DOT__databuffer;
    vlSelf->UART_TestBench__DOT__DUT__DOT__TX__DOT__count 
        = __Vdly__UART_TestBench__DOT__DUT__DOT__TX__DOT__count;
}

void VUART_TestBench___024root___eval_nba(VUART_TestBench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUART_TestBench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_TestBench___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VUART_TestBench___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void VUART_TestBench___024root___timing_resume(VUART_TestBench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUART_TestBench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_TestBench___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void VUART_TestBench___024root___eval_triggers__act(VUART_TestBench___024root* vlSelf);

bool VUART_TestBench___024root___eval_phase__act(VUART_TestBench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUART_TestBench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_TestBench___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VUART_TestBench___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VUART_TestBench___024root___timing_resume(vlSelf);
        VUART_TestBench___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VUART_TestBench___024root___eval_phase__nba(VUART_TestBench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUART_TestBench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_TestBench___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VUART_TestBench___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VUART_TestBench___024root___dump_triggers__nba(VUART_TestBench___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VUART_TestBench___024root___dump_triggers__act(VUART_TestBench___024root* vlSelf);
#endif  // VL_DEBUG

void VUART_TestBench___024root___eval(VUART_TestBench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUART_TestBench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_TestBench___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VUART_TestBench___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/mutahir/Documents/SystemVerilog/UART/UART_TestBench.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VUART_TestBench___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/mutahir/Documents/SystemVerilog/UART/UART_TestBench.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VUART_TestBench___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VUART_TestBench___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VUART_TestBench___024root___eval_debug_assertions(VUART_TestBench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUART_TestBench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_TestBench___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
