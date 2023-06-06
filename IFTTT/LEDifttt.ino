#include "config.h"

int led = D1;

AdafruitIO_Feed *ledifttt = io.feed("aznarm-onoff")

void setup() {
  Serial.begin(115200);
  io.connect();

  while(io.status() < AIO_CONNECTED){
    Serial.println(".");
    delay(500);
  }
  Serial.println(io.statusText());
////////////

pinMode(aznarm-onoff, OUTPUT);
ledifttt->onMessage(iftttonoff);
}

void loop() {
  io.run();
}

void iftttonoff(Adafruit_data * data){
  int number = data ->toInt();
  digitalWrite(aznarm-onoff, number);
  Serial.println(number);
}