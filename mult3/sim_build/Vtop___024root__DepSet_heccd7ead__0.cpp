// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ mult3_test__DOT__mult_3x3_structural__DOT____VdfgRegularize_h836c462b_0_6;
    mult3_test__DOT__mult_3x3_structural__DOT____VdfgRegularize_h836c462b_0_6 = 0;
    // Body
    vlSelfRef.mult3_test__DOT__A = vlSelfRef.A;
    vlSelfRef.mult3_test__DOT__B = vlSelfRef.B;
    vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__p0 
        = (1U & ((IData)(vlSelfRef.A) & (IData)(vlSelfRef.B)));
    vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i19 
        = (1U & (((IData)(vlSelfRef.A) & (IData)(vlSelfRef.B)) 
                 >> 2U));
    vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i14 
        = (IData)((((IData)(vlSelfRef.A) >> 2U) & ((IData)(vlSelfRef.B) 
                                                   >> 1U)));
    vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i15 
        = (IData)((((IData)(vlSelfRef.A) >> 1U) & ((IData)(vlSelfRef.B) 
                                                   >> 2U)));
    vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i5 
        = (IData)((((IData)(vlSelfRef.A) >> 2U) & (IData)(vlSelfRef.B)));
    vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i7 
        = ((IData)(vlSelfRef.A) & ((IData)(vlSelfRef.B) 
                                   >> 2U));
    vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i6 
        = (1U & (((IData)(vlSelfRef.A) & (IData)(vlSelfRef.B)) 
                 >> 1U));
    vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i1 
        = (1U & (((IData)(vlSelfRef.A) >> 1U) & (IData)(vlSelfRef.B)));
    vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i2 
        = (1U & ((IData)(vlSelfRef.A) & ((IData)(vlSelfRef.B) 
                                         >> 1U)));
    vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__A 
        = vlSelfRef.mult3_test__DOT__A;
    vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__B 
        = vlSelfRef.mult3_test__DOT__B;
    vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i18 
        = ((IData)(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i14) 
           & (IData)(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i15));
    vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i12 
        = ((IData)(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i5) 
           & (IData)(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i7));
    vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i11 
        = ((IData)(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i5) 
           & (IData)(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i6));
    vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i13 
        = ((IData)(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i6) 
           & (IData)(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i7));
    vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i3 
        = vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i1;
    vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i4 
        = vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i2;
    vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__p1 
        = ((IData)(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i1) 
           ^ (IData)(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i2));
    vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__c1 
        = ((IData)(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i1) 
           & (IData)(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i2));
    vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__p2 
        = ((IData)(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__c1) 
           ^ ((IData)(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i5) 
              ^ ((IData)(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i6) 
                 ^ (IData)(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i7))));
    vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__c2_1 
        = ((IData)(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__c1) 
           & ((IData)(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i5) 
              & (IData)(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i13)));
    vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i9 
        = ((IData)(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__c1) 
           & (IData)(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i6));
    mult3_test__DOT__mult_3x3_structural__DOT____VdfgRegularize_h836c462b_0_6 
        = ((IData)(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__c1) 
           & (IData)(vlSelfRef.A));
    vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i8 
        = ((IData)(mult3_test__DOT__mult_3x3_structural__DOT____VdfgRegularize_h836c462b_0_6) 
           & (IData)(vlSelfRef.B));
    vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i10 
        = ((IData)(mult3_test__DOT__mult_3x3_structural__DOT____VdfgRegularize_h836c462b_0_6) 
           & ((IData)(vlSelfRef.B) >> 2U));
    vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__c2 
        = ((IData)(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i8) 
           | ((IData)(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i9) 
              | ((IData)(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i10) 
                 | ((IData)(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i11) 
                    | ((IData)(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i12) 
                       | (IData)(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i13))))));
    vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__p3 
        = ((IData)(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__c2) 
           ^ ((IData)(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i14) 
              ^ ((IData)(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i15) 
                 ^ (IData)(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__c2_1))));
    vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i16 
        = ((IData)(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__c2) 
           & (IData)(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i14));
    vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i17 
        = ((IData)(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__c2) 
           & (IData)(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i15));
    vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__c3 
        = ((IData)(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i16) 
           | ((IData)(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i17) 
              | (IData)(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i18)));
    vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT____VdfgRegularize_h836c462b_0_7 
        = ((IData)(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__c3) 
           & ((IData)(vlSelfRef.A) >> 2U));
    vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__p5 
        = ((IData)(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT____VdfgRegularize_h836c462b_0_7) 
           & ((IData)(vlSelfRef.B) >> 2U));
    vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__p4 
        = ((IData)(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__c3) 
           ^ ((IData)(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__i19) 
              ^ ((IData)(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT____VdfgRegularize_h836c462b_0_7) 
                 & (IData)((((6U == (6U & (IData)(vlSelfRef.B))) 
                             & ((IData)(vlSelfRef.A) 
                                >> 1U)) & (IData)(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__c2_1))))));
    vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__c4 
        = vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__p5;
    vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__P 
        = ((((IData)(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__p5) 
             << 5U) | (((IData)(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__p4) 
                        << 4U) | ((IData)(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__p3) 
                                  << 3U))) | (((IData)(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__p2) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__p1) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__p0))));
    vlSelfRef.P = vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__P;
    vlSelfRef.mult3_test__DOT__P = vlSelfRef.mult3_test__DOT__mult_3x3_structural__DOT__P;
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/home/arjun/verification/Cocotb_Verification/mult3/mult3_test.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/arjun/verification/Cocotb_Verification/mult3/mult3_test.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/arjun/verification/Cocotb_Verification/mult3/mult3_test.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.A & 0xf8U)))) {
        Verilated::overWidthError("A");}
    if (VL_UNLIKELY(((vlSelfRef.B & 0xf8U)))) {
        Verilated::overWidthError("B");}
}
#endif  // VL_DEBUG
