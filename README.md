cat << 'EOF' > README.md
# Automatic Barrier Gate System 🚗🚧

This project implements an **automatic barrier gate system** using **Arduino Uno**, **Ultrasonic Sensor (HC-SR04)**, and **Servo Motor (SG90)**. It detects vehicles using ultrasonic sensing and opens/closes the barrier arm using a servo motor.

---

## 📌 Objective

To design a responsive and low-cost automated gate system that can detect approaching vehicles and control barrier movement without human intervention.

---

## ⚙️ Components Used

- Arduino Uno
- Ultrasonic Sensor HC-SR04
- Servo Motor SG90
- Jumper Wires
- Breadboard (optional)
- USB Cable / 9V Battery

---

## 🔁 Working Principle

1. The **Ultrasonic Sensor** continuously checks for any object in front.
2. If an object is detected within **30 cm**, the **servo motor rotates** to open the gate.
3. After a brief pause, the **servo rotates back** to close the barrier.
4. The system waits and repeats this process.

---
