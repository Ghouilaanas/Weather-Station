# 🌦️🌡️Weather-Station
## 📄 Description
This project consists of a weather station designed to collect and monitor key environmental parameters such as temperature, humidity, and pressure. The system integrates multiple sensors with a microcontroller for data acquisition, processing, and calibration. A real-time data visualization interface was implemented to provide users with accurate and accessible climate information. The final prototype demonstrates potential applications in agriculture, environmental monitoring, and smart city solutions.

## ⚙️ Tools and Technologies

#### 1. Hardware components
- **Microcontroller**: STM32F407 Discovery
- **Sensor**: Analog Infrared Sensor **Sharp**
- **Display**: I²C LCD 16x2
- **Programming**: STM32CubeIDE / HAL library (Hardware Abstraction Layer)

#### 1.2 Hardware connections
- **Sharp** : 
  - VCC → 5V
  - OUT → PA1 (ADC1_IN1 sur STM32)
  - GND → GND
- **LCD** :
  - VCC → 5V
  - SDA → PB7 (Bus I2C1 sur STM32)
  - SCL → PB6 (Bus I2C1 sur STM32)
  - GND → GND
---
## 📖 Guide to Use
1. Clone this repository:
git clone https://github.com/Ghouilaanas/Traffic-flow-detection-system.git
2. 📂 **Open the STM32CubeIDE project** corresponding to the desired traffic flow detection approach.
3. 🛠️ **Build and flash the firmware** for that approach onto the appropriate STM32 board.
4. 🔌 **Connect the sensors, microcontroller, and display** following the wiring diagram for the selected setup.
5. ⚡ **Power on the system** and **observe the real-time traffic flow readings** on the LCD.

