#include "led.h"

Led myLeds[4];

int i;
int delayTiming;
char control[] = "HHHLLLHL";

void setup() {
  pinMode(13, OUTPUT);
  myLeds[0].setPin(13);
  pinMode(12, OUTPUT);
  myLeds[1].setPin(12);
  pinMode(11, OUTPUT);
  myLeds[2].setPin(11);
  pinMode(10, OUTPUT);
  myLeds[3].setPin(10);
  delayTiming = 1000;
}

void loop() {
  for (i = 0; i < strlen(control); i++) {
    if (control[i] == 'H') {
      myLeds[0].on();
      myLeds[1].on();
      myLeds[2].on();
      myLeds[3].on();
    } else {
      myLeds[0].off();
      myLeds[1].off();
      myLeds[2].off();
      myLeds[3].off();
    }
    delay(delayTiming);
  }
}
