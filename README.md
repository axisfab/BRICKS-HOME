# 🏠 BRICKS-HOME  
### BRICKS-ESP 기반 지능형 IoT 스마트홈 시스템  

> **IoT 디바이스와 모바일 앱을 통합한 스마트홈 제어 플랫폼**

<p align="center">
<img width="956" height="701" alt="image" src="https://github.com/user-attachments/assets/4ab7b88c-6f98-4381-a706-36fc1a425b19" />
<img width="1336" height="346" alt="image" src="https://github.com/user-attachments/assets/b2dac3a3-4f73-4ce5-b333-6f3408fb1ce3" />


</p>

---

## 📌 Overview
BRICKS-HOME은 ESP32 기반 IoT 디바이스와 모바일 애플리케이션을 연동하여  
**환경 모니터링, 자동 제어, 원격 제어 기능을 통합 제공하는 스마트홈 플랫폼**이다.  

센서 데이터를 실시간으로 수집하고, 사용자 설정 조건에 따라 자동으로 제어되며,  
모바일 앱을 통해 언제 어디서나 디바이스 상태를 확인하고 제어할 수 있도록 설계되어 있다.  

또한 TCP/IP 기반 통신 구조를 적용하여 안정적인 데이터 송수신과  
실시간 상태 피드백을 제공하며 직관적인 사용자 인터페이스를 구현하였다.

---

## 🎯 Key Features

| 구분 | 기능 |
|------|------|
| 📡 데이터 수집 | 온도, 습도, 조도, 가스, 태양광발전량 실시간 모니터링 |
| 📱 원격 제어 | 조명, 커튼, 자동문, 에어컨 제어 |
| 🔄 통신 | TCP/IP 기반 양방향 통신 |
| ⚙️ 자동화 | 조건 기반 자동 제어 (온도/조도 기준) |
| 🎥 모니터링 | IP 카메라 실시간 영상 확인 |
| 📊 UI | 실시간 상태 피드백 및 시각화 |

---

## 🧩 System Architecture

<p align="center">
  <img width="1938" height="1014" alt="image" src="https://github.com/user-attachments/assets/552b0b9c-56c9-49fd-ad33-b1d7a6df04df" />
</p>

### ✔ 구성 요소
- **모바일 앱** : 사용자 인터페이스 및 제어
- **Wi-Fi 네트워크** : 데이터 통신
- **ESP32 IoT 디바이스** : 센서 및 제어 중심
- **센서 모듈** : 환경 데이터 수집
- **액추에이터** : 실제 장치 제어

---

## 🔄 System Flow

<p align="center">
<img width="1974" height="1122" alt="image" src="https://github.com/user-attachments/assets/5e340b12-cd10-4bbf-9322-8648f594635b" />

</p>

## 🔧 Hardware Overview

### 1) 전체 구성
<p align="center">
  <img width="2708" height="1220" alt="image" src="https://github.com/user-attachments/assets/dfa7fd1d-e9bd-435b-ba17-53af7543cd18" />
</p>

### 2) 홈 센서 모듈
<p align="center">
  <img width="2614" height="1264" alt="image" src="https://github.com/user-attachments/assets/7caf4742-90a5-4d07-88b7-56b2720a2e96" />

</p>

### 3) 홈 엑츄에이터
<p align="center">
 <img width="2614" height="1024" alt="image" src="https://github.com/user-attachments/assets/23753a15-fbe9-4732-b242-5bd4ccc0795b" />
</p>

| 장치 | 기능 |
|------|------|
| 조명 | ON/OFF 및 밝기 제어 |
| 커튼 | 자동 개폐 |
| 자동문 | 출입 제어 |
| 에어컨 | 온도 기반 제어 |
---

## 📱 Mobile Application (Android)
<p align="center">
<img width="1284" height="804" alt="image" src="https://github.com/user-attachments/assets/63d72bfb-566a-4dae-85be-fa3c6690b9d7" />
</p>

### ✔ 주요 기능

- IoT 기반 스마트홈 통합 제어  
- 실시간 환경 데이터 모니터링  
- 온도 · 습도 · 조도 · 가스 상태 표시  
- Wi-Fi 카메라 영상 확인  
- 조명 ON/OFF 및 밝기·색상 제어  
- 전동 커튼 및 자동문 제어  
- 에어컨 등 가전 원격 제어  
- 자동/수동 모드 제어  
- 태양광 및 전력 상태 정보 확인  
---

## 📥 Download

<p align="center">
  <a href="https://play.google.com/store/search?q=스마트홈EDU&c=apps" target="_blank">
    <img src="https://github.com/user-attachments/assets/662bf4f7-226f-4a68-adb1-2d13d9f4388f" width="30%">
  </a>
</p>
<p align="center">
👉 <b>Google Play Store에서 "스마트홈EDU" 검색</b>
</p>

## 📌 License
This project is licensed for educational and research purposes.
