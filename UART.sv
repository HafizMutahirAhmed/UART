module UART (input logic CLK, EN, Reset,
             input logic [7:0] DataIN,
             output logic [7:0] DataOUT);

    logic tx=1, BaudTick;

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
        .tx(tx)
    );

    Receiver RX(
        .CLK(CLK),
        .BaudTick(BaudTick),
        .Reset(Reset),
        .rx(tx),
        .DataOUT(DataOUT)
    );    

endmodule