module UART_TestBench;
    logic CLK, EN, Reset;
    logic [7:0] DataIN, DataOUT;

    UART DUT(
        .CLK(CLK),
        .EN(EN),
        .Reset(Reset),
        .DataIN(DataIN),
        .DataOUT(DataOUT)
    );

    always begin
        #1 CLK = ~CLK;
    end

    initial begin
        CLK = 0;
        Reset = 1;
        EN = 0;
        DataIN = 8'hEA;
        #5;
        Reset = 0;
        EN = 1;
        #100;
        $finish;
    end
    initial begin
        $dumpfile("UART.vcd");
        $dumpvars(0,UART_TestBench);
    end
endmodule