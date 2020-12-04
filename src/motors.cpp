#include <Arduino.h>

void forward(){
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
}

void backward(){
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
}