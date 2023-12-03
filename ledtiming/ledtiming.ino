// Szabályos időközönként fel- és lekapcsolja a ledet

void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);
  delay(3000);
  digitalWrite(13, LOW);
  delay(500);
}
