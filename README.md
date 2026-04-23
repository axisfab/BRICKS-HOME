# 🏠 BRICKS-HOME  
### BRICKS-ESP 기반 지능형 IoT 스마트홈 시스템  

> **Wi-Fi 기반 IoT 디바이스와 모바일 앱을 통합한 스마트홈 제어 플랫폼**

<p align="center">
  <img src="/workspaces/BRICKS-HOME/image-1.png" width="50%">
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
| 📡 데이터 수집 | 온도, 습도, 조도, 가스 센서 실시간 모니터링 |
| 📱 원격 제어 | 조명, 커튼, 자동문, 에어컨 제어 |
| 🔄 통신 | TCP/IP 기반 양방향 통신 |
| ⚙️ 자동화 | 조건 기반 자동 제어 (온도/조도 기준) |
| 🎥 모니터링 | IP 카메라 실시간 영상 확인 |
| 📊 UI | 실시간 상태 피드백 및 시각화 |

---

## 🧩 System Architecture

<p align="center">
  <img src="/workspaces/BRICKS-HOME/image.png" width="60%">
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
  <img src="/workspaces/BRICKS-HOME/image_3.png" width="60%">
</p>

### ✔ 데이터 흐름

---

## 🔧 Hardware Overview

### 1) 전체 구성
<p align="center">
  <img src="/workspaces/BRICKS-HOME/image_4.png" width="50%">
</p>

### 2) 센서 모듈
<p align="center">
  <img src="/workspaces/BRICKS-HOME/image_5.png" width="50%">
</p>

| 센서 | 기능 |
|------|------|
| 온도/습도 | 실내 환경 상태 측정 |
| 조도 | 밝기 감지 |
| 가스 | 공기질 및 위험 감지 |

---

### 3) 액추에이터
<p align="center">
  <img src="/workspaces/BRICKS-HOME/image_6.png" width="50%">
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
  <img src="/workspaces/BRICKS-HOME/image_7.png" width="50%">
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
- **Google Play Store**  
👉 `스마트홈EDU` 검색

---

## 📌 License
This project is licensed for educational and research purposes.
