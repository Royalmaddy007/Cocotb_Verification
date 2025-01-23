SIM ?= verilator
TOPLEVEL_LANG ?= verilog
VERILOG_SOURCES += $(PWD)/xor_gate.v
VERILOG_SOURCES += $(PWD)/xor_test.v
EXTRA_ARGS += --trace --trace-fst --trace-structs -j
xor:
	rm -rf sim_build
	rm -rf *.vcd
	rm -rf *.fst
	rm -rf __pycache__
	$(MAKE) sim MODULE=xor_test TOPLEVEL=xor_test
	ls -lrt
include $(shell cocotb-config --makefiles)/Makefile.sim
