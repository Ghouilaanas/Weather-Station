# 🌦️🌡️Weather-Station
## 📄 Description
This project consists of a weather station designed to collect and monitor key environmental parameters such as temperature, humidity, and pressure. The system integrates multiple sensors with a microcontroller for data acquisition, processing, and calibration. A real-time data visualization interface was implemented to provide users with accurate and accessible climate information. The final prototype demonstrates potential applications in agriculture, environmental monitoring, and smart city solutions.

## ⚙️ Tools and Technologies

#### 1. Hardware components
- **Microcontroller**: Arduino Uno
- **Sensors**:
  - Temperature and humidity sensor **DHT11**
  - Pressure sensor **BMP180**
  - Light sensor/ Photoresistor
- LED RGB
- **Display**: I²C LCD 16x2
- **Programming**: ArduinoIDE

#### 1.2 Hardware connections
- **DHT11** : 
  - VCC → 5V
  - DATA → Pin 7
  - GND → GND
- **BMP180** : 
  - VCC → 3.3V
  - SDA → A4 
  - SCL → A5
  - GND → GND
- **LED RGB (Common cathode)** : 
  - R → Pin 11
  - G → Pin 10
  - B → Pin 9
  - C → GND
- **LDR** : 
  - LDR + resistor in a voltage divider → common output connected to A0
  - One leg of the LDR → 5V
  - The other leg of the LDR → A0 + resistor (≈10kΩ) to GND
- **LCD** :
  - VCC → 5V
  - SDA → A4 
  - SCL → A5 
  - GND → GND
---
## Wiring of Components
The image below shows the complete wiring of all components with the Arduino Uno for this project, including the DHT11, BMP180, I2C LCD, RGB LED, and LDR.

![Arduino Wiring](Wiring_of_Components.png)

---
## 📖 Guide to Use
1. Clone this repository:
git clone https://github.com/Ghouilaanas/Weather-Station.git
2. 📂 **Open the the Arduino Sketch** : open the Arduino IDE and load the .ino file for this project.
3. ⚙️ **Connect the Components**.
4. 🛠️ **Build and flash the firmware** onto the Arduino Uno board using the Arduino IDE.
5. 🔌 **Connect the sensors, microcontroller, and display** following the wiring diagram for the selected setup.
6. ⚡ **Power on the system** and **monitor the real-time environmental data (temperature, humidity, atmospheric pressure, and light intensity) displayed** on the LCD.

