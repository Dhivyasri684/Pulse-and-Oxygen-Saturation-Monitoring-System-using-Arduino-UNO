# Pulse and Oxygen Saturation Monitoring System Using Arduino Uno

## 📌 Project Overview

The **Pulse and Oxygen Saturation Monitoring System** is an Arduino Uno based project designed to monitor a person's:

- **Heart Rate (BPM)**
- **Blood Oxygen Saturation (SpO2)**

The system uses the **MAX30100 Pulse Oximeter Sensor** to collect pulse and oxygen-level data. The Arduino Uno processes the sensor data and displays the readings on a **16x2 LCD with I2C interface** in real time.

## 🎯 Objective

To design and implement a low-cost, real-time pulse monitoring system using:

- Arduino Uno
- MAX30100 Pulse Oximeter Sensor
- 16x2 I2C LCD

The system measures and displays heart rate and SpO2 levels.

## 🧰 Hardware Components

| Component | Purpose |
|---|---|
| Arduino Uno | Main controller |
| MAX30100 Pulse Oximeter Sensor | Measures pulse and SpO2 |
| 16x2 LCD with I2C | Displays the readings |
| 9V Battery with Connector | Power supply |
| Connecting Wires | Circuit connections |
| Breadboard | Optional prototyping |
| USB Cable | Programming / alternative power |

## 💻 Software Requirements

- Arduino IDE
- `MAX30100_PulseOximeter` Library
- `LiquidCrystal_I2C` Library

## 🔌 Circuit Connections

### MAX30100

| MAX30100 | Arduino Uno |
|---|---|
| VIN | 3.3V |
| GND | GND |
| SDA | A4 |
| SCL | A5 |

### 16x2 I2C LCD

| LCD | Arduino Uno |
|---|---|
| VCC | 5V |
| GND | GND |
| SDA | A4 |
| SCL | A5 |

### Power

- 9V battery through the hardware connector to the Arduino barrel jack
- USB connection can also be used for programming and power

## ⚙️ Working Principle

The MAX30100 sensor uses **infrared and red LEDs** to detect pulse and oxygen levels in the blood.

The Arduino Uno receives the sensor data through the **I2C interface**, calculates/displays the BPM and SpO2 readings, and shows the results on the LCD. A callback function detects each heartbeat and displays a corresponding message.

## 📂 Project Structure

```text
Pulse-Monitoring-System/
│
├── README.md
├── Pulse_Monitoring_System.ino
├── Pulse_Monitoring_System_Report.docx
├── TEAM3.pptx
│
└── images/
    ├── circuit-diagram.png
    └── working-model.png
```

## ▶️ How to Run

1. Install the **Arduino IDE**.
2. Install the required `MAX30100_PulseOximeter` and `LiquidCrystal_I2C` libraries.
3. Connect the MAX30100 sensor and LCD according to the circuit connections.
4. Open `Pulse_Monitoring_System.ino` in Arduino IDE.
5. Select **Arduino Uno** as the board.
6. Select the correct COM port.
7. Upload the code.
8. Place a finger properly on the MAX30100 sensor.
9. Observe the BPM and SpO2 readings on the LCD.

## 📱 Applications

- Home health monitoring
- Fitness tracking
- Remote patient monitoring
- Educational purposes
- Embedded-system prototyping

## ⚠️ Limitations

- Sensitive to finger movement
- Not medically certified
- Requires stable 3.3V power for the MAX30100
- Accuracy may be affected by ambient light or poor finger placement

## ✅ Conclusion

This project demonstrates a simple way to monitor important vital parameters using accessible embedded-system components. It provides pulse and oxygen-level readings and can be useful for health awareness, learning, and embedded-system prototyping.

> **Note:** This project is intended for educational and monitoring purposes and is not a substitute for a medically certified device.

## 👩‍💻 Project

**Pulse and Oxygen Saturation Monitoring System Using Arduino Uno**

**Presented by:** Dhivyasri S
