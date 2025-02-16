// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"
#include "Vtop.h"
#include "Vtop___024root.h"

// FUNCTIONS
Vtop__Syms::~Vtop__Syms()
{

    // Tear down scope hierarchy
    __Vhier.remove(0, &__Vscope_mult3_test);
    __Vhier.remove(&__Vscope_mult3_test, &__Vscope_mult3_test__mult_3x3_structural);

#ifdef VM_TRACE
    if (__Vm_dumping) _traceDumpClose();
#endif  // VM_TRACE
}

void Vtop__Syms::_traceDump() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumperp->dump(VL_TIME_Q());
}

void Vtop__Syms::_traceDumpOpen() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    if (VL_UNLIKELY(!__Vm_dumperp)) {
        __Vm_dumperp = new VerilatedFstC();
        __Vm_modelp->trace(__Vm_dumperp, 0, 0);
        std::string dumpfile = _vm_contextp__->dumpfileCheck();
        __Vm_dumperp->open(dumpfile.c_str());
        __Vm_dumping = true;
    }
}

void Vtop__Syms::_traceDumpClose() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumping = false;
    VL_DO_CLEAR(delete __Vm_dumperp, __Vm_dumperp = nullptr);
}

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(29);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_TOP.configure(this, name(), "TOP", "TOP", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_mult3_test.configure(this, name(), "mult3_test", "mult3_test", "mult3_test", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_mult3_test__mult_3x3_structural.configure(this, name(), "mult3_test.mult_3x3_structural", "mult_3x3_structural", "mult_3x3_structural", -9, VerilatedScope::SCOPE_MODULE);

    // Set up scope hierarchy
    __Vhier.add(0, &__Vscope_mult3_test);
    __Vhier.add(&__Vscope_mult3_test, &__Vscope_mult3_test__mult_3x3_structural);

    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_TOP.varInsert(__Vfinal,"A", &(TOP.A), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_TOP.varInsert(__Vfinal,"B", &(TOP.B), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_TOP.varInsert(__Vfinal,"P", &(TOP.P), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,1 ,5,0);
        __Vscope_mult3_test.varInsert(__Vfinal,"A", &(TOP.mult3_test__DOT__A), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_mult3_test.varInsert(__Vfinal,"B", &(TOP.mult3_test__DOT__B), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_mult3_test.varInsert(__Vfinal,"P", &(TOP.mult3_test__DOT__P), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,5,0);
        __Vscope_mult3_test__mult_3x3_structural.varInsert(__Vfinal,"A", &(TOP.mult3_test__DOT__mult_3x3_structural__DOT__A), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_mult3_test__mult_3x3_structural.varInsert(__Vfinal,"B", &(TOP.mult3_test__DOT__mult_3x3_structural__DOT__B), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_mult3_test__mult_3x3_structural.varInsert(__Vfinal,"P", &(TOP.mult3_test__DOT__mult_3x3_structural__DOT__P), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,5,0);
        __Vscope_mult3_test__mult_3x3_structural.varInsert(__Vfinal,"c1", &(TOP.mult3_test__DOT__mult_3x3_structural__DOT__c1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_mult3_test__mult_3x3_structural.varInsert(__Vfinal,"c2", &(TOP.mult3_test__DOT__mult_3x3_structural__DOT__c2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_mult3_test__mult_3x3_structural.varInsert(__Vfinal,"c2_1", &(TOP.mult3_test__DOT__mult_3x3_structural__DOT__c2_1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_mult3_test__mult_3x3_structural.varInsert(__Vfinal,"c3", &(TOP.mult3_test__DOT__mult_3x3_structural__DOT__c3), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_mult3_test__mult_3x3_structural.varInsert(__Vfinal,"c4", &(TOP.mult3_test__DOT__mult_3x3_structural__DOT__c4), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_mult3_test__mult_3x3_structural.varInsert(__Vfinal,"i1", &(TOP.mult3_test__DOT__mult_3x3_structural__DOT__i1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_mult3_test__mult_3x3_structural.varInsert(__Vfinal,"i10", &(TOP.mult3_test__DOT__mult_3x3_structural__DOT__i10), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_mult3_test__mult_3x3_structural.varInsert(__Vfinal,"i11", &(TOP.mult3_test__DOT__mult_3x3_structural__DOT__i11), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_mult3_test__mult_3x3_structural.varInsert(__Vfinal,"i12", &(TOP.mult3_test__DOT__mult_3x3_structural__DOT__i12), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_mult3_test__mult_3x3_structural.varInsert(__Vfinal,"i13", &(TOP.mult3_test__DOT__mult_3x3_structural__DOT__i13), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_mult3_test__mult_3x3_structural.varInsert(__Vfinal,"i14", &(TOP.mult3_test__DOT__mult_3x3_structural__DOT__i14), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_mult3_test__mult_3x3_structural.varInsert(__Vfinal,"i15", &(TOP.mult3_test__DOT__mult_3x3_structural__DOT__i15), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_mult3_test__mult_3x3_structural.varInsert(__Vfinal,"i16", &(TOP.mult3_test__DOT__mult_3x3_structural__DOT__i16), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_mult3_test__mult_3x3_structural.varInsert(__Vfinal,"i17", &(TOP.mult3_test__DOT__mult_3x3_structural__DOT__i17), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_mult3_test__mult_3x3_structural.varInsert(__Vfinal,"i18", &(TOP.mult3_test__DOT__mult_3x3_structural__DOT__i18), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_mult3_test__mult_3x3_structural.varInsert(__Vfinal,"i19", &(TOP.mult3_test__DOT__mult_3x3_structural__DOT__i19), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_mult3_test__mult_3x3_structural.varInsert(__Vfinal,"i2", &(TOP.mult3_test__DOT__mult_3x3_structural__DOT__i2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_mult3_test__mult_3x3_structural.varInsert(__Vfinal,"i3", &(TOP.mult3_test__DOT__mult_3x3_structural__DOT__i3), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_mult3_test__mult_3x3_structural.varInsert(__Vfinal,"i4", &(TOP.mult3_test__DOT__mult_3x3_structural__DOT__i4), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_mult3_test__mult_3x3_structural.varInsert(__Vfinal,"i5", &(TOP.mult3_test__DOT__mult_3x3_structural__DOT__i5), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_mult3_test__mult_3x3_structural.varInsert(__Vfinal,"i6", &(TOP.mult3_test__DOT__mult_3x3_structural__DOT__i6), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_mult3_test__mult_3x3_structural.varInsert(__Vfinal,"i7", &(TOP.mult3_test__DOT__mult_3x3_structural__DOT__i7), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_mult3_test__mult_3x3_structural.varInsert(__Vfinal,"i8", &(TOP.mult3_test__DOT__mult_3x3_structural__DOT__i8), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_mult3_test__mult_3x3_structural.varInsert(__Vfinal,"i9", &(TOP.mult3_test__DOT__mult_3x3_structural__DOT__i9), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_mult3_test__mult_3x3_structural.varInsert(__Vfinal,"p0", &(TOP.mult3_test__DOT__mult_3x3_structural__DOT__p0), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_mult3_test__mult_3x3_structural.varInsert(__Vfinal,"p1", &(TOP.mult3_test__DOT__mult_3x3_structural__DOT__p1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_mult3_test__mult_3x3_structural.varInsert(__Vfinal,"p2", &(TOP.mult3_test__DOT__mult_3x3_structural__DOT__p2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_mult3_test__mult_3x3_structural.varInsert(__Vfinal,"p3", &(TOP.mult3_test__DOT__mult_3x3_structural__DOT__p3), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_mult3_test__mult_3x3_structural.varInsert(__Vfinal,"p4", &(TOP.mult3_test__DOT__mult_3x3_structural__DOT__p4), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_mult3_test__mult_3x3_structural.varInsert(__Vfinal,"p5", &(TOP.mult3_test__DOT__mult_3x3_structural__DOT__p5), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
    }
}
