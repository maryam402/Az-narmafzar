# Az-narmafzar
# Controlling a Lamp
---

## Project Overview
This project offers an IoT-based solution that allows users to control a lamp using their smartphones. Leveraging the power of the Internet of Things (IoT), individuals can conveniently switch the lamp on or off remotely. This project serves as an educational resource, providing insights into IoT concepts and practical implementation.

# About IoT
What is IoT? The Internet of Things (IoT) refers to the concept of connecting everyday physical objects or "things" to the internet, enabling them to send and receive data. These objects encompass a wide range of items, including household appliances, wearables, vehicles, and industrial equipment. By enabling communication, data collection, and automation, IoT aims to enhance convenience, efficiency, and productivity in various domains of our lives.

# Technologies
This project utilizes the following technologies:

- Arduino IDE: Arduino IDE is an open-source integrated development environment used for writing and uploading code to Arduino boards. In this project, we write code using the Arduino IDE in the C++ programming language.

- Adafruit IO: Adafruit IO is an IoT platform that simplifies the integration and control of connected devices. We leverage Adafruit IO to facilitate remote control of the lamp, including turning it on/off and adjusting brightness.

- IFTTT: IFTTT (If This Then That) is a web-based service that allows users to create applets for automating tasks. In this project, we utilize IFTTT to enable lamp control through predefined triggers and actions.

- NodeMCU ESP8266: The NodeMCU ESP8266 board is a popular and versatile choice for IoT projects. It provides a reliable hardware platform for connecting devices to the internet and exchanging data.


# About the Project
In this project, we implement lamp control using two methods:

1. Adafruit IO: We utilize Adafruit IO to control the lamp. The code in the Adafruit IO folder contains detailed information and the complete code for this approach.

2. IFTTT: We also offer lamp control through IFTTT (If This Then That). The code in the IFTTT folder provides further details and the necessary code for implementing this method.

Important Functions in Adafruit IO:

The code in Adafruit IO folder contains two functions:

- turnOnOffLed: This function handles the on/off functionality of the lamp.

  ```cpp
    void turnOnOffLed(AdafruitIO_Data *data) {
    int state = data->toInt();
    digitalWrite(ledPin, state);
    } 
    

- setBrightness: This function allows control of the lamp's brightness.

  ```cpp
    void setBrightness(AdafruitIO_Data *data) {
    int brightnessValue = data->toInt();
    analogWrite(ledPin, brightnessValue);
    }

 For a more comprehensive understanding and to view the complete code, please refer to the Adafruit IO folder and IFTTT folder.
