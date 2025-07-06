module UART (input logic CLK, EN, Reset,
             input logic [7:0] DataIN,
             output logic [7:0] DataOUT);
    logic tx;

    Transmitter TX(
        .CLK(CLK),
        .Reset(Reset),
        .EN(EN),
        .DataIN(DataIN),
        .tx(tx)
    );

    Receiver RX(
        .CLK(CLK),
        .Reset(Reset),
        .rx(tx),
        .DataOUT(DataOUT)
    );    

endmodule