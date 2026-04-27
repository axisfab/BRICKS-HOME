#define FAN 15

void setup() {
  pinMode(FAN, OUTPUT);
}

void loop() {
  digitalWrite(FAN, HIGH); // 팬 ON
  delay(3000);

  digitalWrite(FAN, LOW);  // 팬 OFF
  delay(3000);
}