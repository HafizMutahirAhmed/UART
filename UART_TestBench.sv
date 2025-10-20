module UART_TestBench;
    logic CLK, EN, Reset;
    logic [7:0] DataIN, DataOUT;
    logic ParityType;
    logic ParityError;

    UART DUT(
        .CLK(CLK),
        .EN(EN),
        .Reset(Reset),
        .DataIN(DataIN),
        .DataOUT(DataOUT),
        .ParityType(ParityType),
        .ParityError(ParityError)
    );

    // Clock generation (1 time unit period)
    always #1 CLK = ~CLK;

    // Main stimulus
    initial begin
        CLK = 0;
        Reset = 1;
        EN = 0;
        DataIN = 8'h00;
        ParityType = 0;

        #5 Reset = 0;

        // Test 1: Even parity, 0xAA
        ParityType = 0;
        DataIN = 8'hAA;
        EN = 1;
        #400;

        // Test 2: Odd parity, 0x55
        ParityType = 1;
        DataIN = 8'h55;
        EN = 1;
        #400;

        // Test 3: Even parity, 0xF0
        ParityType = 0;
        DataIN = 8'hF0;
        EN = 1;
        #400;

        // Test 4: Odd parity, 0x0F
        ParityType = 1;
        DataIN = 8'h0F;
        EN = 1;
        #400;

        // Test 5: Even parity, 0xEA
        ParityType = 0;
        DataIN = 8'hEA;
        EN = 1;
        #400;

        // Test 6: Odd parity, 0xEA
        ParityType = 1;
        DataIN = 8'hEA;
        EN = 1;
        #400;

        $finish;
    end

    // VCD dump for GTKWave
    initial begin
        $dumpfile("UART.vcd");
        $dumpvars(0, UART_TestBench);
    end
endmodule
