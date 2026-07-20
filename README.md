# Arduino Line Follower & Obstacle Avoidance Robot 🚗🤖

## Project Overview

This project is an Arduino-based smart robot car that can follow a black line using IR line sensors and detect obstacles using an ultrasonic sensor.

The robot moves when it detects the black line and stops when it detects a white surface. If an obstacle is detected in front of the robot, it automatically moves backward to avoid collision.

---

## Features ✨

* Line following using IR sensors.
* Obstacle detection using an ultrasonic sensor (HC-SR04).
* Automatic backward movement when an obstacle is detected.
* Motor control using L298N motor driver.
* PWM speed control for DC motors.

---

## Components Used 🛠️

* Arduino Uno
* L298N Motor Driver
* DC Motors
* Robot Car Chassis
* IR Line Sensors
* HC-SR04 Ultrasonic Sensor
* Battery Pack
* Jumper Wires

---

## Circuit Connections 🔌

### L298N Motor Driver

| L298N | Arduino |
| ----- | ------- |
| ENA   | Pin 3   |
| ENB   | Pin 5   |
| IN1   | Pin 9   |
| IN2   | Pin 8   |
| IN3   | Pin 7   |
| IN4   | Pin 6   |
| GND   | GND     |

### Line Sensors

| Sensor          | Arduino |
| --------------- | ------- |
| Left Sensor DO  | Pin 2   |
| Right Sensor DO | Pin 10  |
| VCC             | 5V      |
| GND             | GND     |

### Ultrasonic Sensor (HC-SR04)

| HC-SR04 | Arduino |
| ------- | ------- |
| TRIG    | Pin 13  |
| ECHO    | Pin 12  |
| VCC     | 5V      |
| GND     | GND     |

---

## How It Works ⚙️

1. The IR sensors detect the color of the surface.
2. When the sensors detect a black line, the motors move forward.
3. When the sensors detect a white surface, the robot stops.
4. The ultrasonic sensor measures the distance in front of the robot.
5. If an obstacle is closer than 20 cm, the robot moves backward to avoid collision.

---

## Technologies Used 💻

* Arduino C/C++
* Embedded Systems
* Robotics
* Sensors Integration
* Motor Control

---

## Future Improvements 🚀

* Add more IR sensors for better line tracking.
* Implement automatic turning and direction correction.
* Add Bluetooth/Wi-Fi control.
* Improve obstacle avoidance algorithm.

---

## Author 👩‍💻

**Ayten Ehab Akl**

Computer Science & Artificial Intelligence Student
Interested in AI, Robotics, and Embedded Systems.
# Arduino_Line_Follower_Obstacle_Avoidance
