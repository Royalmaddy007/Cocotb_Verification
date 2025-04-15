// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgCData(oldp+0,(vlSelfRef.A),3);
    bufp->chgCData(oldp+1,(vlSelfRef.B),3);
    bufp->chgCData(oldp+2,(vlSelfRef.P),6);
    bufp->chgCData(oldp+3,(vlSelfRef.mult3_test__DOT__A),3);
    bufp->chgCData(oldp+4,(vlSelfRef.mult3_test__DOT__B),3);
    bufp->chgCData(oldp+5,(vlSelfRef.mult3_test__DOT__P),6);
    bufp->chgCData(oldp+6,(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__A),3);
    bufp->chgCData(oldp+7,(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__B),3);
    bufp->chgCData(oldp+8,(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__P),6);
    bufp->chgBit(oldp+9,(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__p0));
    bufp->chgBit(oldp+10,(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__p1));
    bufp->chgBit(oldp+11,(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__p2));
    bufp->chgBit(oldp+12,(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__p3));
    bufp->chgBit(oldp+13,(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__p4));
    bufp->chgBit(oldp+14,(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__p5));
    bufp->chgBit(oldp+15,(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__c1));
    bufp->chgBit(oldp+16,(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__c2));
    bufp->chgBit(oldp+17,(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__c3));
    bufp->chgBit(oldp+18,(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__c4));
    bufp->chgBit(oldp+19,(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__c2_1));
    bufp->chgBit(oldp+20,(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i1));
    bufp->chgBit(oldp+21,(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i2));
    bufp->chgBit(oldp+22,(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i3));
    bufp->chgBit(oldp+23,(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i4));
    bufp->chgBit(oldp+24,(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i5));
    bufp->chgBit(oldp+25,(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i6));
    bufp->chgBit(oldp+26,(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i7));
    bufp->chgBit(oldp+27,(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i8));
    bufp->chgBit(oldp+28,(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i9));
    bufp->chgBit(oldp+29,(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i10));
    bufp->chgBit(oldp+30,(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i11));
    bufp->chgBit(oldp+31,(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i12));
    bufp->chgBit(oldp+32,(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i13));
    bufp->chgBit(oldp+33,(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i14));
    bufp->chgBit(oldp+34,(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i15));
    bufp->chgBit(oldp+35,(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i16));
    bufp->chgBit(oldp+36,(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i17));
    bufp->chgBit(oldp+37,(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i18));
    bufp->chgBit(oldp+38,(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i19));
    bufp->chgBit(oldp+39,(((IData)(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT____VdfgRegularize_h836c462b_0_7) 
                           & (IData)((((6U == (6U & (IData)(vlSelfRef.B))) 
                                       & ((IData)(vlSelfRef.A) 
                                          >> 1U)) & (IData)(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__c2_1))))));
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
