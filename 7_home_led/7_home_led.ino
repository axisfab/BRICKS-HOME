#include <Adafruit_NeoPixel.h>

#define PIN        38
#define NUMPIXELS  8   

Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  pixels.begin(); 
}

void loop() {
  pixels.clear(); 

  for(int i=0; i<NUMPIXELS; i++) {
    // pixels.Color(빨강, 초록, 파랑) - 각 0~255 범위
    pixels.setPixelColor(i, pixels.Color(100, 0, 0)); 
    pixels.show();   // 설정한 색상을 실제로 LED에 전송
    delay(200);      // 0.2초 간격
  }
  delay(1000);
  for(int i=0; i<NUMPIXELS; i++) {
    pixels.setPixelColor(i, pixels.Color(0, 100, 0)); 
  }
  pixels.show();
  delay(1000);
}