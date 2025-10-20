# UART Transmitter and Receiver in SystemVerilog (MSB-First, 9600 Baud, with Parity Check)

This project implements a **UART Transmitter and Receiver** in SystemVerilog, along with an updated **Baud Generator** that produces a precise tick at **9600 baud** from a **50 MHz system clock**.  

Unlike standard UART communication, this design transmits and receives **8-bit data MSB first** and also includes **even parity checking** for error detection.

---

## 📦 Modules

### `Transmitter.sv`
- Sends 8-bit data serially over the `tx` line.  
- Appends:
  - **Start bit** (`0`)
  - **8 data bits (MSB first)**
  - **Parity bit** (even parity)
  - **Stop bit** (`1`)
- Controlled by an `EN` signal and synchronized using `BaudTick`.  
- Internally computes parity as the XOR of all transmitted bits.

---

### `Receiver.sv`
- Waits for a **start bit** (`0`), then samples 8 data bits **MSB first**.  
- Reads the **parity bit** after the data bits and checks it against the computed parity.  
- Raises a **`ParityError`** flag if the received and computed parity bits differ.  
- After reading the **stop bit**, it stores the received byte into `DataOUT` and returns to the idle state.

---

### `BaudGenerator.sv`
- Generates a **single-cycle `BaudTick` pulse** every 5208 system clock cycles, equivalent to **9600 baud** when the system clock is **50 MHz**.  
- Synchronous reset clears the counter and tick output.  
- Provides a stable timing reference for both transmitter and receiver FSMs.

---

## 🔧 UART Configuration

| Parameter   | Value        |
|--------------|--------------|
| Clock        | 50 MHz       |
| Baud Rate    | 9600         |
| Data Bits    | 8            |
| Start Bit    | 1 (`0`)      |
| Stop Bit     | 1 (`1`)      |
| Parity       | **Even**     |
| Bit Order    | **MSB First** |

> ⚠️ **Note:** Standard UARTs use **LSB first** and may use no parity or odd parity.  
> This implementation transmits **MSB first** with **even parity**, so both transmitter and receiver must match this configuration.

---

## 🛠️ How to Use

### 🧩 Transmitter
1. Provide an 8-bit `DataIN`.  
2. Pulse `EN` high for one clock cycle.  
3. The transmitter automatically sends:
   ```
   Start(0) → 8 Data Bits (MSB→LSB) → Parity Bit → Stop(1)
   ```
4. All transitions are synchronized with `BaudTick`.

---

### 🧩 Receiver
1. Connect `rx` to the transmitting UART line.  
2. The receiver waits for the start bit (`0`), then samples bits on each `BaudTick`.  
3. After receiving 8 data bits and the parity bit:
   - It checks for parity mismatch and sets `ParityError` if detected.
4. After the stop bit, the valid byte is available on `DataOUT`.

---

### 🧩 Baud Generator
- Input: `CLK = 50 MHz`, `Reset`  
- Output: `BaudTick` (1-cycle pulse every 5208 clocks → 9600 baud)  
- Drives both transmitter and receiver for synchronous operation.

---

## 🧪 Simulation

Run the UART testbench using **Verilator**:

```bash
rm -rf obj_dir && verilator --timing --cc --binary --top-module UART_TestBench --trace --build UART.sv UART_TestBench.sv && ./obj_dir/VUART_TestBench
```

**Verify the following:**
- Accurate `BaudTick` generation (tick every ~104 µs)
- Correct MSB-first transmission order
- Proper start → data → parity → stop sequencing
- Receiver correctly reconstructs data
- Parity error detection behavior

---

## 🚀 Future Improvements

- Add **LSB-first** option via parameterization.  
- Add **selectable parity modes** (none/odd/even).  
- Combine all modules into a **single top-level UART** for FPGA integration.  
- Support **configurable baud rates** via dynamic divisor.

---

## 👨‍💻 Author

**Mutahir Ahmed**  
Student of Computer Systems Engineering – NED University of Engineering & Technology  