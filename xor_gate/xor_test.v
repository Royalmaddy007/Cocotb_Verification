module xor_test(
    input wire a,
    input wire b,
    output wire c
);

xor_gate xor_gate_DUT(
    .a(a),
    .b(b),
    .c(c)
);

initial begin
    $dumpfile("xor.vcd");
    $dumpvars(0,xor_test);
end
    
endmodule