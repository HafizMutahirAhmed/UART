module BaudGenerator (
    input  logic CLK,     
    input  logic Reset,   
    output logic BaudTick
);

    logic [12:0] MAX_COUNT = 13'd5208;

    logic [12:0] count; // 13 bits are enough for 5208

    always_ff @(posedge CLK) begin
        if (Reset) begin
            count     <= 13'd0;
            BaudTick  <= 1'b0;
        end else begin
            if (count == MAX_COUNT - 1) begin
                count     <= 13'd0;
                BaudTick  <= 1'b1;  
            end 
            else begin
                count     <= count + 1;
                BaudTick  <= 1'b0; 
            end
        end
    end
endmodule
