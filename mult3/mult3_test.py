import cocotb
from cocotb.triggers import Timer, RisingEdge


@cocotb.test()
async def or_test(dut):
    # a = (0, 0, 1, 1)
    # b = (0, 1, 0, 1)
    # y = (0, 1, 1, 1)

    for i in range(7):
        for j in range (7):
            dut.A.value = i
            dut.B.value = j
            await Timer(1, 'ns')
            assert dut.P.value == i*j, f"Error at iteration {i+1}"