#define A1 14

void setup() {
  Serial.begin(115200);
  pinMode(A1, INPUT);
}

void loop() {
  int value = analogRead(A1);

  Serial.print(" LIGHT : ");
  Serial.println(value);

  delay(500);
}