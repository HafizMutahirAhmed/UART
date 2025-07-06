module Transmitter(input logic BaudTick, EN, CLK, Reset,
                   input logic [7:0] DataIN,
                   output logic tx);

    logic [7:0] databuffer, count;
    enum logic [1:0] {IDLE, START, TRANSMIT, STOP} state;

    always_ff @(posedge CLK) begin
        
        if (Reset) begin
            state <= IDLE; 
        end
        else if (BaudTick) begin
            case(state)
                IDLE: begin
                    tx <= 1;
                    if (EN) begin
                        state <= START;
                        tx <= 0;
                    end
                end 
                START: begin
                    tx <= DataIN[7];
                    databuffer <= DataIN << 1;
                    state <= TRANSMIT;
                    count <= 1;
                end
                TRANSMIT: begin
                    tx <= databuffer[7];
                    databuffer <= databuffer << 1;
                    count <= count + 1;
                    if (count == 8) begin
                        state <= STOP;
                        tx <= 1;
                        state <= IDLE;
                    end
                end
                default: begin
                    
                end
            endcase
        end
    end
endmodule