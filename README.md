# UART Transmitter and Receiver in SystemVerilog (MSB-First, 9600 Baud)

This project implements a simple **UART Transmitter and Receiver** in SystemVerilog, along with a **Baud Generator** that produces a tick at **9600 baud** from a **50 MHz system clock**.

Unlike standard UART communication, this implementation transmits and receives **8-bit data MSB first**.

---

## 📦 Modules

### `Transmitter.sv`
- Sends 8-bit data serially over the `tx` line.
- Adds a **start bit** (`0`) and **stop bit** (`1`) to each frame.
- Transmits **MSB first**.
- Controlled by an `EN` signal and synchronized using `BaudTick`.

### `Receiver.sv`
- Listens for a **start bit**, then receives 8 bits in MSB-first order.
- Stores the result in `DataOUT` and returns to idle after detecting the stop bit.

### `BaudGenerator.sv`
- Generates a `BaudTick` pulse once every **5208 clock cycles**, equivalent to **9600 baud** when using a **50 MHz** input clock.
- Used to pace both transmission and reception.

---

## 🔧 UART Configuration

| Parameter   | Value       |
|-------------|-------------|
| Clock       | 50 MHz      |
| Baud Rate   | 9600        |
| Data Bits   | 8           |
| Start Bit   | 1 (`0`)     |
| Stop Bit    | 1 (`1`)     |
| Parity      | None        |
| Bit Order   | **MSB first** |

> ⚠️ **Note:** Standard UART sends **LSB first**. This implementation sends **MSB first**, so make sure both transmitter and receiver use the same bit ordering.

---

## 🛠️ How to Use

You can use these modules for UART simulation or integrate them in an FPGA design.

### Transmitter:
- Provide 8-bit `DataIN`.
- Pulse `EN` high for 1 clock cycle.
- Data is transmitted serially with MSB first, synchronized with `BaudTick`.

### Receiver:
- Connect the `rx` line to an external UART source.
- After a start bit is detected, 8 bits are received and assembled into `DataOUT`.

### Baud Generator:
- Drives a 1-clock-cycle `BaudTick` pulse every ~104 µs (for 9600 baud from 50 MHz).
- Connect to both Transmitter and Receiver to synchronize bit timing.

---

## 🧪 Simulation

You can simulate the system with your own testbench to verify:

- Correct bit ordering
- Timing of `BaudTick`
- Proper transition from IDLE → START → TRANSMIT → STOP (in both TX and RX)

---

## 💡 Future Improvements

- Add **LSB-first support** to match standard UART devices.
- Add framing/parity/error checking.
- Create a top-level integration module for DE1-SoC (e.g., using switches/LEDs).

---

## 👨‍💻 Author

**Mutahir Ahmed**  
Student of Computer Systems Engineering – NED University of Engineering & Technology
