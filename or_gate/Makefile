SIM ?= verilator
TOPLEVEL_LANG ?= verilog
VERILOG_SOURCES += $(PWD)/or_gate.v
VERILOG_SOURCES += $(PWD)/or_test.v
EXTRA_ARGS += --trace --trace-fst --trace-structs -j 0
or:
	rm -rf sim_build
	rm -rf *.vcd
	rm -rf *.fst
	rm -rf __pycache__
	$(MAKE) sim MODULE=or_test TOPLEVEL=or_test
	ls -lrt
include $(shell cocotb-config --makefiles)/Makefile.sim
