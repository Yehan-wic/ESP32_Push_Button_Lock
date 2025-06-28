# 🔐 ESP32 Push Button Lock System

A smart, Wifi-capable lock system using the ESP32, a relay module, and a solenoid lock. Designed for automation and smart access control, this project activates the solenoid lock when a physical button is pressed, triggering the ESP32 to energize the relay. This system is ideal for DIY smart home applications, offering basic access control with potential for future upgrades such as Wi-Fi-based control, keypad input, or RFID authentication.


## 🛠️ Features
- Simple button-based locking mechanism
- Controls a solenoid lock via relay
- ESP32 microcontroller (WiFi-capable for future expansion)
- Operates on a 12V DC adapter for lock power

## 📦 Components Used
- ESP32 Dev Board
- Push Button
- Relay Module(5V) 
- Solenoid Lock
- 12V DC Power Adapter
- Jumper wires, Breadboard

## 🧠 How It Works
1. Pressing the button sends a signal to GPIO27 of the ESP32.
2. ESP32 activates the relay connected to the solenoid lock.
3. Lock is powered via the 12V adapter, allowing access.
4. After push the button again, the relay turns off, locking the door again.

## 🧰 Circuit Diagram
![Circuit Diagram](circuit-diagram.jpg)

## ⚙️ ESP32 Pin Diagram
![Pin Diagram](pin-diagram.jpg)

## 🔄 Future Improvements
- Add password keypad or RFID module
- Integrate with mobile app or web server
- Add status LEDs or buzzer for feedback
