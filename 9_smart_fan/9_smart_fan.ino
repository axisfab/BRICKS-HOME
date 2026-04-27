#include "DHT.h"

#define DHTPIN 36
#define DHTTYPE DHT22
#define FAN_PIN 15

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200);
  dht.begin();
  pinMode(FAN_PIN, OUTPUT);
}

void loop() {
  float t = dht.readTemperature();

  if (isnan(t)) return;
  Serial.print("온도: "); Serial.println(t);
  if (t > 28) {
    digitalWrite(FAN_PIN, HIGH);
    Serial.println("에어컨 켜짐");
  } else {
    digitalWrite(FAN_PIN, LOW);
    Serial.println("에어컨 꺼짐");
  }
  delay(2000);
}