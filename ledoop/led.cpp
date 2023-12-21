#include "led.h"

Led::Led() {
}

void Led::init() {
  pinMode(pin, OUTPUT);
  off();
}

void Led::setPin(byte pin) {
  this->pin = pin;
  init();
}

void Led::on() {
  digitalWrite(pin, HIGH);
}

void Led::off() {
  digitalWrite(pin, LOW);
}
