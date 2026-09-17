# radar-system
# Ultrasonic Radar System

A real-time radar scanning and visualization system built with an ultrasonic sensor, servo motor, and Processing/C++ visualization.

## Overview
This project maps surrounding obstacles in real-time. An ultrasonic sensor sweeps across angles using a servo motor, sending distance and positional data over a serial connection to generate a dynamic, 2D radar visual display.

## Features
* Real-time angle and distance data parsing via Serial communication
* Dynamic 2D radar sweep visualization
* Object detection range highlighting (red alert line within threshold distance)
* Visual angle grid and range markers

## Hardware Requirements
* Microcontroller (Arduino Uno / Nano or compatible)
* Ultrasonic Sensor (HC-SR04)
* Micro Servo Motor (SG90)
* Jumper wires & Breadboard

## Software Requirements
* C++ / Processing IDE
* Serial library support

## Setup & Running
1. Connect the hardware components and upload the Arduino data-logger code.
2. Connect your microcontroller via USB and verify your Serial Port name/COM port.
3. Open `RADAR_SYSTEM.cpp` (or your visualization sketch) and ensure the serial port matches:
   ```cpp
   String portName = Serial.list()[0]; // Update index to match your COM port
