module Receiver (
    input logic CLK, Reset,
    input logic rx, 
    output logic [7:0] DataOUT
);

enum logic [1:0] {IDLE, RECEIVE, STOP} state;
logic [7:0] databuffer;
logic [2:0] count;

always_ff @(posedge CLK) begin
    if (Reset) begin
        state <= IDLE;
    end
    case (state)
        IDLE: begin
            databuffer <= 0;
            DataOUT <= 0;
            if (rx == 0) begin
                state <= RECEIVE;
                count <= 7;
            end
        end
        RECEIVE: begin
            count <= count - 1;
            databuffer[count] <= rx;
            // databuffer <= databuffer >> 1;
            if (count == 0) begin
                state <= STOP;
            end
        end
        STOP: begin
            DataOUT <= databuffer;
            state <= IDLE;
        end
        default: begin
        end
    endcase
end

endmodule