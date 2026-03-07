## Overview
This project demonstrates **serial communication between an ATmega32 microcontroller and an Arduino UNO using USART**.

When a **push button connected to ATmega32 (PB0)** is pressed, the ATmega32 transmits the character **'A'** through USART at a **9600 baud rate**.

The **Arduino UNO receives this character through UART** and **blinks the onboard LED (Digital Pin 13)** when the character `'A'` is received.

The entire system was **simulated using Proteus**.

---

## Working Principle

1. A **push button is connected to PB0 of ATmega32**.
2. When the button is pressed:
   - ATmega32 sends the character `'A'` via **USART transmission**.
3. The **Arduino UNO continuously listens on the serial port**.
4. When Arduino receives `'A'`:
   - It blinks the **LED connected to Digital Pin 13**.

---

## Communication Configuration

| Parameter | Value |
|-----------|-------|
| Protocol | USART / UART |
| Baud Rate | 9600 |
| Data Bits | 8 |
| Parity | None |
| Stop Bits | 1 |

---

## Pin Connections

| ATmega32 | Arduino UNO | Description |
|----------|-------------|-------------|
| TXD (PD1) | RX (Pin 0) | Serial Data Transmission |
| GND | GND | Common Ground |
| PB0 | Push Button | Button Input |

---

## Software

### ATmega32
- Written in **Embedded C using Atmel Studio**
- USART configured for **9600 baud transmission**
- On button press, transmit character `'A'`

### Arduino UNO
- Programmed using **Arduino IDE**
- Continuously checks serial buffer
- If received character succesfully, blink LED on **Pin 13**

---

## Simulation

The system was tested using **Proteus Simulation Software**.

Simulation verifies:
- USART communication
- Character transmission
- LED response on Arduino
- 
<img src="/Simulation_1.png" alt="Simulation_1" width=50%>
<img src="/Simulation_2.png" alt="Simulation_2" width=50%>

---

## Applications

This project demonstrates basic concepts of:

- **Microcontroller-to-microcontroller communication**
- **USART protocol**
- **Embedded system interfacing**
- **Serial data triggering hardware actions**

---

## Future Improvements

- Two-way communication
- Sending multiple commands
- Sensor data transmission
- Interrupt-driven UART
