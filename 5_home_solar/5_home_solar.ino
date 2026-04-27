#include <Wire.h>
#include <Adafruit_INA219.h>

// 1. 통신 핀 설정 (ESP32-S3 전용)
#define SDA_PIN 40
#define SCL_PIN 39

Adafruit_INA219 ina219;

void setup() {
  Serial.begin(115200);

  // 2. I2C 통신 시작 (우리가 정한 핀으로 길을 엽니다)
  Wire.begin(SDA_PIN, SCL_PIN);

  // 3. 센서 연결 확인
  if (!ina219.begin()) {
    Serial.println("센서를 찾을 수 없습니다. 선 연결을 다시 확인하세요!");
    while (1); 
  }

  // 4. 측정 범위 설정 (태양광 패널에 맞게 정밀 모드로 설정)
  ina219.setCalibration_16V_400mA();

  Serial.println("--- 태양광 발전 측정 시작 ---");
}

void loop() {
  // 5. 센서로부터 값 읽어오기
  float voltage = ina219.getBusVoltage_V();  // 전압 (V)
  float current = ina219.getCurrent_mA();    // 전류 (mA)
  float power   = ina219.getPower_mW();      // 전력 (mW)

  // 6. 시리얼 모니터에 보기 좋게 출력하기
  Serial.print("전압: "); Serial.print(voltage); Serial.print("V | ");
  Serial.print("전류: "); Serial.print(current); Serial.print("mA | ");
  Serial.print("전력: "); Serial.print(power);   Serial.println("mW");

  delay(1000);
}