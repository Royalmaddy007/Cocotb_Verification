SIM ?= verilator
TOPLEVEL_LANG ?= verilog
VERILOG_SOURCES += $(PWD)/mult3.v
VERILOG_SOURCES += $(PWD)/mult3_test.v
EXTRA_ARGS += --trace --trace-fst --trace-structs -j 0 -Wno-MODDUP -Wno-IMPLICIT
mult3_test:
	rm -rf sim_build
	rm -rf *.vcd
	rm -rf *.fst
	rm -rf __pycache__
	$(MAKE) sim MODULE=mult3_test TOPLEVEL=mult3_test
	ls -lrt
include $(shell cocotb-config --makefiles)/Makefile.sim
