#include <Adafruit_NeoPixel.h>

#define LDR_PIN 14
#define LED_PIN 38
#define NUMPIXELS 8

Adafruit_NeoPixel pixels(NUMPIXELS, LED_PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  Serial.begin(115200);
  pixels.begin();
}

void loop() {
  int lightValue = analogRead(LDR_PIN);  // 0~4095

  // 어두울수록 밝게 (반전 매핑)
  int brightness = map(lightValue, 0, 4095, 0, 255);

  // 밝기 적용
  pixels.setBrightness(brightness);

  // LED 색상 (흰색)
  for (int i = 0; i < NUMPIXELS; i++) {
    pixels.setPixelColor(i, pixels.Color(255, 255, 255));
  }

  pixels.show();

  Serial.print("Light: ");
  Serial.print(lightValue);
  Serial.print(" | Brightness: ");
  Serial.println(brightness);

  delay(200);
}