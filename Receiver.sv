module Receiver (
    input  logic BaudTick, CLK, Reset,
    input  logic rx, 
    input  logic ParityType, // <-- 0 = even, 1 = odd
    output logic [7:0] DataOUT,
    output logic ParityError
);

    enum logic [2:0] {IDLE, RECEIVE, PARITY, STOP} state;
    logic [7:0] databuffer;
    logic [2:0] count;
    logic parity_bit;
    logic computed_parity;

    always_ff @(posedge CLK) begin
        if (Reset) begin
            state <= IDLE;
            ParityError <= 0;
        end
        else if (BaudTick) begin
            case (state)
                IDLE: begin
                    databuffer <= 0;
                    DataOUT <= 0;
                    ParityError <= 0;
                    if (rx == 0) begin
                        state <= RECEIVE;
                        count <= 7;
                    end
                end

                RECEIVE: begin
                    databuffer[count] <= rx;
                    if (count == 0) begin
                        state <= PARITY;
                    end
                    else begin
                        count <= count - 1;
                    end
                end

                PARITY: begin
                    parity_bit <= rx; 
                    // compute parity depending on type
                    computed_parity = (ParityType) ? ~(^databuffer) : ^databuffer;
                    ParityError <= (computed_parity != parity_bit);
                    state <= STOP;
                end

                STOP: begin
                    DataOUT <= databuffer;
                    state <= IDLE;
                end

                default: state <= IDLE;
            endcase
        end
    end
endmodule
