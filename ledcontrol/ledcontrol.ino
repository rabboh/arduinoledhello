int i;
int delayTiming;
char control[] = "HHHLHLHHLHLHLHLLLHLLHLHLLHLLHLLLHLLLHLLHLHLLHLLLHLLHLLHLLHLLHLLHLLHHHHHLLHHHHHHLHLLLHLLHLLH";

void setup() {
  pinMode(13, OUTPUT);
  delayTiming = 500;
}

void loop() {
  for (i = 0; i < strlen(control); i++) {
    if (control[i] == 'H') {
      digitalWrite(13, HIGH);
    } else {
      digitalWrite(13, LOW);
    }
    delay(delayTiming);
  }
}
