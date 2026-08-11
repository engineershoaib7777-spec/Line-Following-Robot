# Line-Following-Robot
Arduino-based Line Following Robot (LFR) designed using an Arduino Nano, L298N motor driver, DC geared motors, and IR sensors. The project demonstrates autonomous line tracking using PWM motor speed control. Includes source code, circuit connections, and project documentation.
# 🤖 Line Following Robot

## 📌 Project Overview

This project is an autonomous Line Following Robot (LFR) developed using an Arduino Nano, IR sensors, an L298N motor driver, two DC motors, and a 3S 11.1V battery.

The robot detects a line using infrared sensors and controls the speed and direction of the motors to follow the line autonomously.

This project is part of my practical learning in embedded systems, robotics, electronics, motor control, and autonomous systems.

---

## 🎯 Objectives

- Build an autonomous line-following robot
- Interface IR sensors with an Arduino Nano
- Control DC motors using an L298N motor driver
- Implement differential motor-speed control
- Understand sensor-based autonomous navigation
- Develop practical skills in embedded programming and robotics
- Improve the robot for future robotics competitions

---

## ⚙️ Components

- Arduino Nano
- 2 × IR Line Sensors
- L298N Motor Driver
- 2 × DC Geared Motors
- 3S 11.1V Battery
- Robot Chassis
- 2 × Wheels
- Caster Wheel
- Connecting Wires

---

## 🔌 Pin Configuration

### L298N Motor Driver → Arduino Nano

| L298N Pin | Arduino Nano Pin | Function |
|---|---|---|
| IN1 | D7 | Motor A Direction |
| IN2 | D6 | Motor A Direction |
| IN3 | D5 | Motor B Direction |
| IN4 | D4 | Motor B Direction |
| ENA | D9 | Motor A PWM |
| ENB | D3 | Motor B PWM |

### IR Sensors → Arduino Nano

| IR Sensor | Arduino Nano Pin |
|---|---|
| IR Sensor 1 OUT | D2 |
| IR Sensor 2 OUT | D11 |

---

## 🔋 Power Supply

The robot uses a 3S 11.1V battery pack.

A 3S lithium battery has:

- Nominal voltage: 11.1V
- Fully charged voltage: approximately 12.6V

The battery supplies the motor-driver system. The Arduino Nano and L298N share a common ground.

---

## 🧠 Working Principle

The robot uses two IR sensors to detect the position of the line.

The Arduino continuously reads the sensor outputs and determines the required movement.

The current control logic is:

| IR1 | IR2 | Action |
|---|---|---|
| HIGH | HIGH | Forward |
| LOW | HIGH | Right |
| HIGH | LOW | Left |
| LOW | LOW | Stop |

The robot uses PWM to control the speed of the two motors. During turning, the speed of one motor is reduced while the other motor continues at a higher speed.

---

## 🚗 Motor Control

Current PWM values:

| Movement | Motor A | Motor B |
|---|---:|---:|
| Forward | 180 | 180 |
| Right | 60 | 180 |
| Left | 180 | 60 |
| Stop | 0 | 0 |

These values can be adjusted during testing to improve the robot's stability and turning performance.

---

## 💻 Software

The robot is programmed using Arduino C/C++.

### Concepts used

- Digital input/output
- PWM motor control
- IR sensor interfacing
- Conditional statements
- Functions
- Serial communication
- DC motor control

---

## 🔧 Circuit Diagram

The circuit was designed using Fritzing.

The repository contains both the circuit image and the editable Fritzing project file.

The main system consists of:

Arduino Nano → L298N Motor Driver → DC Motors

IR Sensors → Arduino Nano

3S Battery → Motor Driver

---

## 🧪 Testing

The robot was tested on a line-following track to evaluate its ability to detect the line and change direction.

During development, motor PWM values, sensor positioning, motor direction, and sensor logic were adjusted to improve performance.

The current version demonstrates the basic operation of an autonomous line-following robot.

---

# 🚀 Future Improvements

This project is currently a working prototype and will be continuously improved.

Planned improvements include:

- [ ] Improve IR sensor positioning
- [ ] Use a multi-sensor array
- [ ] Improve sensor calibration
- [ ] Optimize motor speed
- [ ] Improve chassis design
- [ ] Reduce wiring
- [ ] Implement PID control
- [ ] Add wheel encoders
- [ ] Improve turning accuracy
- [ ] Increase operating speed
- [ ] Optimize battery and power management
- [ ] Develop a competition-oriented version

---

# 🏆 Competition Goal

My long-term goal is to develop this prototype into a high-performance Line Following Robot suitable for robotics competitions.

The main focus will be:

**Accuracy → Speed → Stability → Reliability**

Future versions will focus on advanced control algorithms, better sensors, improved mechanical design, and optimized motor control.

---

## 📚 Skills Developed

Through this project, I am developing practical skills in:

- Embedded Systems
- Arduino Programming
- C/C++ Programming
- Electronics
- Sensor Interfacing
- PWM
- DC Motor Control
- H-Bridge Motor Drivers
- Circuit Design
- Robotics
- Autonomous Navigation
- Hardware Troubleshooting
- Git & GitHub
- Fritzing
---

## 👨‍💻 Author

**Shoaib Athar**

Electrical Engineering Student

This project was designed and developed as part of my practical learning in electrical engineering, embedded systems, and robotics.

---

## 📌 Project Status

**Current Status**: Working Prototype

MY next Goal is to Improve accuracy, speed, stability, and reliability for competition-level performance.