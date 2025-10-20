module UART (
    input  logic CLK, EN, Reset,
    input  logic [7:0] DataIN,
    input  logic ParityType,       // 0 = even, 1 = odd
    output logic [7:0] DataOUT,
    output logic ParityError
);

    logic tx = 1, BaudTick;

    BaudGenerator BaudGen(
        .CLK(CLK),     
        .Reset(Reset),   
        .BaudTick(BaudTick)
    );

    Transmitter TX(
        .CLK(CLK),
        .BaudTick(BaudTick),
        .Reset(Reset),
        .EN(EN),
        .DataIN(DataIN),
        .ParityType(ParityType), // <-- connected
        .tx(tx)
    );

    Receiver RX(
        .CLK(CLK),
        .BaudTick(BaudTick),
        .Reset(Reset),
        .rx(tx),
        .ParityType(ParityType),  // <-- connected
        .DataOUT(DataOUT),
        .ParityError(ParityError)
    );    

endmodule
