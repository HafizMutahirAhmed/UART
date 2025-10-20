module Transmitter(
    input  logic BaudTick, EN, CLK, Reset,
    input  logic [7:0] DataIN,
    input  logic ParityType, // <-- 0 = even, 1 = odd
    output logic tx
);
    logic [7:0] databuffer, count;
    logic parity_bit;
    enum logic [2:0] {IDLE, START, TRANSMIT, PARITY, STOP} state;

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
                    // compute parity depending on type
                    parity_bit <= (ParityType) ? ~(^DataIN) : ^DataIN;
                    state <= TRANSMIT;
                    count <= 1;
                end
                TRANSMIT: begin
                    tx <= databuffer[7];
                    databuffer <= databuffer << 1;
                    count <= count + 1;
                    if (count == 8) begin
                        state <= PARITY;
                    end
                end
                PARITY: begin
                    tx <= parity_bit; // send parity bit
                    state <= STOP;
                end
                STOP: begin
                    tx <= 1; // stop bit
                    state <= IDLE;
                end
                default: state <= IDLE;
            endcase
        end
    end
endmodule
