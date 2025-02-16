module mult3_test(
    input [2:0] A,
    input [2:0] B,
    output [5:0] P 
);
mult_3x3_structural mult_3x3_structural(
	.A(A),
	.B(B),
	.P(P)
);

initial begin
	$dumpfile("or.vcd");
	$dumpvars(0,or_test);
end
endmodule
