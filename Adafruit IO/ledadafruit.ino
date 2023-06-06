#include "config.h"

int ledPin = D1; 
AdafruitIO_Feed *turnOnOff = io.feed("aznarm-onoff");
AdafruitIO_Feed *brightness = io.feed("aznarm-brightness");

void setup() {
  Serial.begin(115200);
  io.connect();

  while (io.status() < AIO_CONNECTED) {
      Serial.println(".");
    delay(500);
  }

  Serial.println(io.statusText());

  pinMode(ledPin, OUTPUT);
  
  turnOnOff->onMessage(turnOnOffLed);
  turnOnOff->get();

  brightness->onMessage(setBrightness);
  brightness->get();
}

void loop() {
  io.run();
}

void turnOnOffLed(AdafruitIO_Data *data) {
  int state = data->toInt();
  digitalWrite(ledPin, state);
}

void setBrightness(AdafruitIO_Data *data) {
  int brightnessValue = data->toInt();
  analogWrite(ledPin, brightnessValue);
}
