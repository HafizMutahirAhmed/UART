module Transmitter_tb;
    logic CLK, EN, Reset,tx;
    logic [7:0] DataIN;

    Transmitter Tx(
        .EN(EN), 
        .CLK(CLK), 
        .Reset(Reset),
        .DataIN(DataIN),
        .tx(tx)
    );

    always begin
        #1 CLK = ~CLK;
    end

    initial begin
        CLK = 0;
        EN = 0;
        Reset = 1;
        DataIN = 8'b11110000;
        #5;
        Reset=0;
        EN = 1;
        #100;
        
        $finish;
    end

    
    initial begin
        $dumpfile("Transmitter.vcd");
        $dumpvars(0,Transmitter_tb);
    end


endmodule
