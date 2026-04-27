//[주의] 스마트홈키트 기구부 이탈 및 서보모터 손상을 방지하기 위해, 제어 각도를 반드시 30° ~ 150° 범위 내로 제한

#include <ESP32Servo.h>
Servo myServo;
int servoPin = 35; 

void setup() {
  myServo.attach(servoPin);
}

void loop() {
  // 1. 30도에서 150도까지 서서히 증가
  for (int angle = 40; angle <= 150; angle++) {
    myServo.write(angle);  // 현재 각도로 이동
    delay(30);             // 이동 속도 조절 (작을수록 빠름)
  }

  delay(1000); 
  // 2. 150도에서 30도까지 서서히 감소
  for (int angle = 150; angle >= 30; angle--) {
    myServo.write(angle);  // 현재 각도로 이동
    delay(30);             // 이동 속도 조절
  }
  delay(1000);         
}