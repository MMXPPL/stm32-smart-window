# 基于 STM32 的智能窗户控制系统

基于 STM32F103C8 的智能窗户控制系统，集成 DHT11 温湿度、MQ-2 气体、BH1750 光照、
HCSR04 超声波等传感器，通过 ESP8266 连接 OneNET 平台实现远程监控。

## 功能
- 多路环境传感器采集与 OLED 显示
- 步进/直流电机控制窗户开合
- ESP8266 WiFi + OneNET MQTT 上云
- 按键与蜂鸣器本地交互

## 目录结构
- `Hardware/` — 外设驱动（ESP8266、DHT11、OLED、电机等）
- `Library/` — STM32 固件库
- `User/` — 主程序与中断
- `2.1.uvprojx` — Keil MDK 工程文件

## 运行前配置（重要）
源码中的 OneNET 产品/设备 ID 与 APIKey 已脱敏为占位符，请在
`Hardware/ESP8266.c` 中填入自己的设备信息后再编译烧录。

## 构建
使用 Keil MDK 打开 `2.1.uvprojx` 编译。
