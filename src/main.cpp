#include <Arduino.h>
#include <motor.h>
#include <bluetooth.h>

void setup() {
   pinMode(13, OUTPUT);
   pinMode(12, OUTPUT);
   Serial.begin(9600);
}

void loop() {
  ledOn();
    }


