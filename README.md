# 🪖 Smart Helmet Safety System

## 📌 Overview
This project presents a smart helmet safety system designed to enhance rider safety using sensor-based monitoring and real-time alert logic. The system simulates detection of unsafe conditions such as no helmet usage, collision, or abnormal movement.

The project follows a modular embedded design approach, separating sensing, processing, and alert mechanisms for scalability and real-world integration.

---

## 🚀 Features
- Helmet safety monitoring using simulated sensor data
- Detection of abnormal conditions (impact, helmet status)
- Real-time alert triggering
- Modular system architecture
- Scalable for real embedded hardware integration

---

## 🛠️ Technologies Used
- C++ (Embedded-style programming)
- Modular system design
- Sensor simulation
- Control logic

---

## ⚙️ System Architecture

The system is designed using multiple modules:

- **Sensor Module**
  - Detects helmet status and impact conditions (simulated)

- **Controller Module**
  - Processes sensor inputs and decides safety actions

- **Alert Module**
  - Triggers alerts based on unsafe conditions

- **Main Application**
  - Integrates all modules and runs the system logic

---

## 🔄 How It Works

1. Sensors simulate helmet usage and impact detection
2. Data is passed to the controller
3. Controller evaluates safety conditions
4. Alerts are triggered when unsafe conditions are detected
5. Output is shown for monitoring system behavior

---

## ▶️ How to Run

### Compile:
g++ main.cpp sensors.cpp controller.cpp alert.cpp -o helmet_system

### Run:
./helmet_system

---

## 📁 Project Structure

smart-helmet-safety-system/
│
├── main.cpp         # Main application
├── sensors.cpp      # Sensor simulation
├── sensors.h        # Sensor interface
├── controller.cpp   # Decision-making logic
├── controller.h     # Controller interface
├── alert.cpp        # Alert system
├── alert.h          # Alert interface

---

## 📊 Example Output

Smart Helmet Safety System

Helmet Worn: NO
Impact Detected: YES

[ALERT] Please wear helmet!
[ALERT] Accident detected!
-----------------------------

---

## 🧠 Design Highlights

- Modular architecture separating sensing, processing, and alerting
- Real-time condition monitoring logic
- Simulation-based validation without hardware
- Extendable for real-world embedded systems

---

## ⚠️ Limitations

- Uses simulated data instead of real sensors
- No GPS or communication system
- No cloud integration or storage

---

## 📷 Future Improvements

- Integration with real sensors (Arduino / ESP32)
- GPS tracking for accident location
- GSM communication for emergency alerts
- Mobile application integration
- AI-based accident detection

---

## 📚 What I Learned
- Embedded safety system design
- Real-time condition monitoring
- Modular system architecture
- Decision-making logic in embedded applications

---

## 👨‍💻 Author
Mahan Hithalamakki Sundaresh  
Master’s Student – Electrical & Microsystems Engineering
