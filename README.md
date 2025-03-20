# Alcohol Detection System using Arduino

## Overview
This project is an alcohol detection system built with Arduino that can detect alcohol vapors in the air and trigger an alert. It can be used for personal safety, educational purposes, or as a foundation for more complex alcohol monitoring solutions.

## Components Required
1. Arduino Uno
2. MQ-3 Alcohol Sensor
3. Jumper wires
4. Buzzer
5. Breadboard
6. Power supply / Battery

## How It Works
The MQ-3 alcohol sensor is a low-cost, versatile sensor designed to detect alcohol vapors in the air. It features a sensitive tin dioxide (SnO2) layer that changes resistance in response to alcohol levels. The sensor operates within a 5V range and outputs an analog voltage, which is proportional to the alcohol concentration detected.

Key features of the MQ-3 sensor:
- Fast response time and high sensitivity
- Detection range from 0.04 mg/L to 4 mg/L
- Resistant to humidity and temperature variations
- Suitable for breathalyzer projects and automotive applications

## Circuit Diagram
![Circuit Diagram](https://github.com/AddyB0t/-Alcohol-Detection-System/blob/main/circuit%20digram.png)

## Circuit Connections
The connections are as follows:
- Sensor Vcc → +5v Arduino
- Sensor Gnd → Arduino Gnd
- Sensor data pin → A0
- Buzzer (+ve) → D9
- Buzzer (-ve) → Gnd

## Installation and Setup
1. Assemble the MQ-3 sensor and buzzer on the breadboard
2. Make the connections as per the instructions above
3. Connect the Arduino to your computer
4. Open Arduino IDE and upload the [code.ino](code.ino) file

## Usage
Once the system is set up and the code is uploaded:
1. Power on the Arduino
2. The system will continuously monitor for alcohol vapors
3. If alcohol is detected above the threshold level, the buzzer will sound
4. Monitor readings through the Serial Monitor if connected to a computer

## Demonstration
![Demonstration](https://github.com/AddyB0t/-Alcohol-Detection-System/blob/main/Demonstration.png)

## Safety Precautions
1. Ensure all connections are secure before powering on
2. Handle all components with care
3. Do not touch the MQ-3 sensor during operation as it may become hot
4. Do not apply alcohol directly to the sensor
5. Calibrate the sensor for more accurate readings if needed

## Getting Started
To replicate this project, follow these steps:
1. Clone this repository
2. Connect the components as described above
3. Upload the code.ino file to your Arduino
4. Test the system by introducing alcohol vapor near the sensor

## Limitations
This is a basic alcohol detection system and should not be used as a medical device or for legal alcohol testing. The accuracy depends on proper calibration and environmental conditions.
