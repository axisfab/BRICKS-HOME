#define A3 16

void setup() {
  Serial.begin(115200);
  pinMode(A3, INPUT);
}

void loop() {
  int value = digitalRead(A3);

  if (value == LOW) {
    Serial.println("물체 감지!");
  } else {
    Serial.println("없음");
  }

  delay(200);
}