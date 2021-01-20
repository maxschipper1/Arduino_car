#include <Arduino.h>
#include <motor.h>


void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(6, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  delay(1000);
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(8, LOW);
    }


