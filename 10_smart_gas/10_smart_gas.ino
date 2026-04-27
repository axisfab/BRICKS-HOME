#include <ESP32Servo.h>

#define GAS_PIN 13
#define SERVO_PIN 37

Servo myServo;

bool isOpen = false;  // 현재 상태 (false=닫힘, true=열림)

void setup() {
  Serial.begin(115200);
  pinMode(GAS_PIN, INPUT);

  myServo.attach(SERVO_PIN);
  myServo.write(30);  // 초기 닫힘
}

void moveServo(int startAngle, int endAngle) {
  if (startAngle < endAngle) {
    for (int angle = startAngle; angle <= endAngle; angle++) {
      myServo.write(angle);
      delay(15);
    }
  } else {
    for (int angle = startAngle; angle >= endAngle; angle--) {
      myServo.write(angle);
      delay(15);
    }
  }
}

void loop() {
  int gasValue = analogRead(GAS_PIN);

  Serial.print("GAS: ");
  Serial.println(gasValue);

  // 가스 감지 → 열기 (이미 열려있으면 동작 안함)
  if (gasValue > 400 && !isOpen) {
    Serial.println("GAS DETECTED → 커튼 OPEN");
    moveServo(30, 150);
    isOpen = true;
  }

  // 정상 → 닫기 (이미 닫혀있으면 동작 안함)
  if (gasValue <= 400 && isOpen) {
    Serial.println("정상 → 커튼 CLOSE");
    moveServo(150, 30);
    isOpen = false;
  }

  delay(500);
}