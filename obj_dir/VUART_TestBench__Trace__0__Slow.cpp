// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VUART_TestBench__Syms.h"


VL_ATTR_COLD void VUART_TestBench___024root__trace_init_sub__TOP__0(VUART_TestBench___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VUART_TestBench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_TestBench___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("UART_TestBench", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+9,0,"CLK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"EN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"Reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"DataIN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1,0,"DataOUT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("DUT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+9,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"Reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"DataIN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1,0,"DataOUT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+2,0,"tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("RX", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+9,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"Reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"DataOUT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+3,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+4,0,"databuffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+5,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("TX", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+10,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"Reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"DataIN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+2,0,"tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"databuffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+7,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+8,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VUART_TestBench___024root__trace_init_top(VUART_TestBench___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VUART_TestBench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_TestBench___024root__trace_init_top\n"); );
    // Body
    VUART_TestBench___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VUART_TestBench___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VUART_TestBench___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VUART_TestBench___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VUART_TestBench___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VUART_TestBench___024root__trace_register(VUART_TestBench___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VUART_TestBench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_TestBench___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&VUART_TestBench___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VUART_TestBench___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VUART_TestBench___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VUART_TestBench___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VUART_TestBench___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_TestBench___024root__trace_const_0\n"); );
    // Init
    VUART_TestBench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VUART_TestBench___024root*>(voidSelf);
    VUART_TestBench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void VUART_TestBench___024root__trace_full_0_sub_0(VUART_TestBench___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VUART_TestBench___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_TestBench___024root__trace_full_0\n"); );
    // Init
    VUART_TestBench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VUART_TestBench___024root*>(voidSelf);
    VUART_TestBench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VUART_TestBench___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VUART_TestBench___024root__trace_full_0_sub_0(VUART_TestBench___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VUART_TestBench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_TestBench___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->UART_TestBench__DOT__DataOUT),8);
    bufp->fullBit(oldp+2,(vlSelf->UART_TestBench__DOT__DUT__DOT__tx));
    bufp->fullCData(oldp+3,(vlSelf->UART_TestBench__DOT__DUT__DOT__RX__DOT__state),2);
    bufp->fullCData(oldp+4,(vlSelf->UART_TestBench__DOT__DUT__DOT__RX__DOT__databuffer),8);
    bufp->fullCData(oldp+5,(vlSelf->UART_TestBench__DOT__DUT__DOT__RX__DOT__count),3);
    bufp->fullCData(oldp+6,(vlSelf->UART_TestBench__DOT__DUT__DOT__TX__DOT__databuffer),8);
    bufp->fullCData(oldp+7,(vlSelf->UART_TestBench__DOT__DUT__DOT__TX__DOT__count),8);
    bufp->fullCData(oldp+8,(vlSelf->UART_TestBench__DOT__DUT__DOT__TX__DOT__state),2);
    bufp->fullBit(oldp+9,(vlSelf->UART_TestBench__DOT__CLK));
    bufp->fullBit(oldp+10,(vlSelf->UART_TestBench__DOT__EN));
    bufp->fullBit(oldp+11,(vlSelf->UART_TestBench__DOT__Reset));
    bufp->fullCData(oldp+12,(vlSelf->UART_TestBench__DOT__DataIN),8);
}
