#include "led.h"

Led myredled(13);
Led myyellowled(12);
Led mydarkgreenled(11);
Led mylightgreenled(10);

int i;
int delayTiming;
char control[] = "LLLLHHHLHLHHLHLHLHLLLHLLHLHLLHLLHLLLHLLLHLLHLHLLHLLLHLLHLLHLLHLLHLLHLLHHHHHLLHHHHHHLHLLLHLLHLLH";

void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  delayTiming = 1000;
}

void loop() {
  for (i = 0; i < strlen(control); i++) {
    if (control[i] == 'H') {
      myredled.on();
      myyellowled.on();
      mydarkgreenled.on();
      mylightgreenled.on();
    } else {
      myredled.off();
      myyellowled.off();
      mydarkgreenled.off();
      mylightgreenled.off();
    }
    delay(delayTiming);
  }
}
