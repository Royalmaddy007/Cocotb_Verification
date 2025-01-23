import cocotb
from cocotb.triggers import Timer, RisingEdge

@cocotb.test()
async def xor_test(dut):
    a=(0,0,1,1)
    b=(0,1,0,1)

    for i in range(4):
        dut.a.value = a[i]
        dut.b.value = b[i]
        await Timer(1, 'ns')
        assert dut.c.value == a[i]^b[i], f"Error at iteration {i+1}"