// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(A,2,0);
    VL_IN8(B,2,0);
    VL_OUT8(P,5,0);
    CData/*2:0*/ mult3_test__DOT__A;
    CData/*2:0*/ mult3_test__DOT__B;
    CData/*5:0*/ mult3_test__DOT__P;
    CData/*2:0*/ mult3_test__DOT__mult_3x3_structural__DOT__A;
    CData/*2:0*/ mult3_test__DOT__mult_3x3_structural__DOT__B;
    CData/*5:0*/ mult3_test__DOT__mult_3x3_structural__DOT__P;
    CData/*0:0*/ mult3_test__DOT__mult_3x3_structural__DOT__p0;
    CData/*0:0*/ mult3_test__DOT__mult_3x3_structural__DOT__p1;
    CData/*0:0*/ mult3_test__DOT__mult_3x3_structural__DOT__p2;
    CData/*0:0*/ mult3_test__DOT__mult_3x3_structural__DOT__p3;
    CData/*0:0*/ mult3_test__DOT__mult_3x3_structural__DOT__p4;
    CData/*0:0*/ mult3_test__DOT__mult_3x3_structural__DOT__p5;
    CData/*0:0*/ mult3_test__DOT__mult_3x3_structural__DOT__c1;
    CData/*0:0*/ mult3_test__DOT__mult_3x3_structural__DOT__c2;
    CData/*0:0*/ mult3_test__DOT__mult_3x3_structural__DOT__c3;
    CData/*0:0*/ mult3_test__DOT__mult_3x3_structural__DOT__c4;
    CData/*0:0*/ mult3_test__DOT__mult_3x3_structural__DOT__c2_1;
    CData/*0:0*/ mult3_test__DOT__mult_3x3_structural__DOT__i1;
    CData/*0:0*/ mult3_test__DOT__mult_3x3_structural__DOT__i2;
    CData/*0:0*/ mult3_test__DOT__mult_3x3_structural__DOT__i3;
    CData/*0:0*/ mult3_test__DOT__mult_3x3_structural__DOT__i4;
    CData/*0:0*/ mult3_test__DOT__mult_3x3_structural__DOT__i5;
    CData/*0:0*/ mult3_test__DOT__mult_3x3_structural__DOT__i6;
    CData/*0:0*/ mult3_test__DOT__mult_3x3_structural__DOT__i7;
    CData/*0:0*/ mult3_test__DOT__mult_3x3_structural__DOT__i8;
    CData/*0:0*/ mult3_test__DOT__mult_3x3_structural__DOT__i9;
    CData/*0:0*/ mult3_test__DOT__mult_3x3_structural__DOT__i10;
    CData/*0:0*/ mult3_test__DOT__mult_3x3_structural__DOT__i11;
    CData/*0:0*/ mult3_test__DOT__mult_3x3_structural__DOT__i12;
    CData/*0:0*/ mult3_test__DOT__mult_3x3_structural__DOT__i13;
    CData/*0:0*/ mult3_test__DOT__mult_3x3_structural__DOT__i14;
    CData/*0:0*/ mult3_test__DOT__mult_3x3_structural__DOT__i15;
    CData/*0:0*/ mult3_test__DOT__mult_3x3_structural__DOT__i16;
    CData/*0:0*/ mult3_test__DOT__mult_3x3_structural__DOT__i17;
    CData/*0:0*/ mult3_test__DOT__mult_3x3_structural__DOT__i18;
    CData/*0:0*/ mult3_test__DOT__mult_3x3_structural__DOT__i19;
    CData/*0:0*/ mult3_test__DOT__mult_3x3_structural__DOT____VdfgRegularize_h836c462b_0_7;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
