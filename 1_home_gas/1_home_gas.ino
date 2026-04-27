#define AO 13

void setup() {
  Serial.begin(115200);
  pinMode(AO, INPUT);
}

void loop() {
  int value = analogRead(AO);

  Serial.print(" GAS : ");
  Serial.println(value);

  if (value > 400) {
    Serial.println("GAS DETECTION!");
  }

  delay(500);
}