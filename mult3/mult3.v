module mult_3x3_structural(
    input [2:0] A,
    input [2:0] B,
    output [5:0] P 
);

    wire p0,p1,p2,p3,p4,p5;
    wire c1,c2,c3,c4,c2_1;
    wire i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11,i12,i13,i14,i15,i16,i17,i18,i19;
    //p0
    and a1 (p0, A[0], B[0]);
    //p1
    and a2 (i1, A[1], B[0]);
    and a3 (i2, A[0], B[1]);
    xor x1 (p1, i1, i2);
    //c1
    and a4 (i3, A[1], B[0]);
    and a5 (i4, A[0], B[1]);
    and a6 (c1, i3, i4);
    //p2
    and a7 (i5, A[2], B[0]);
    and a8 (i6, A[1], B[1]);
    and a9 (i7, A[0], B[2]);
    xor x2 (p2 ,c1 , i5, i6, i7);
    //c2
    and a10 (i8 , c1, A[0], B[0]);
    and a11 (i9 , c1, A[1], B[1]);
    and a12 (i10 , c1, A[0], B[2]);
    and a13 (i11 , A[2], B[0], A[1], B[1]);
    and a14 (i12 , A[2], B[0], A[0], B[2]);
    and a15 (i13 , A[1], B[1], A[0], B[2]);
    or o1 (c2 , i8, i9, i10, i11, i12, i13);
    //c2_1
    and a23 (c2_1, c1, A[2], B[0], A[1], B[1], A[0], B[2]);
    //p3
    and a16 (i14 , A[2], B[1]);
    and a17 (i15 , A[1], B[2]);
    xor x3 (p3 , c2 , i14, i15, c2_1);
    //c3
    and a18 (i16 , c2, A[2], B[1]);
    and a19 (i17 , c2, A[1], B[2]);
    and a20 (i18 , A[2], B[1], A[1], B[2]);
    or o2 (c3 , i16, i17, i18);
    //c3_1
    and a24 (c3_1, c3, A[2], B[1], A[1], B[2],c2_1);
    //p4
    and a21 (i19 , A[2], B[2]);
    xor x4 (p4 , c3 , i19, c3_1);
    //c4
    and a22 (c4 , c3, A[2], B[2]);
    //p5
    assign p5 = c4;

    assign P = {p5, p4, p3, p2, p1, p0};
endmodule