#include "led.h"

Led myled(13);
int i;
int delayTiming;
char control[] = "LLLLHHHLHLHHLHLHLHLLLHLLHLHLLHLLHLLLHLLLHLLHLHLLHLLLHLLHLLHLLHLLHLLHLLHHHHHLLHHHHHHLHLLLHLLHLLH";

void setup() {
  pinMode(13, OUTPUT);
  delayTiming = 100;
}

void loop() {
  for (i = 0; i < strlen(control); i++) {
    if (control[i] == 'H') {
      myled.on();
    } else {
      myled.off();
    }
    delay(delayTiming);
  }
}
