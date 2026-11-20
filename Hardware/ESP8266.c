#include "stm32f10x.h"                  // Device header
#include <string.h>
#include <stdio.h>
#include "Serial.h"
#include "ESP8266.h"
#include "Delay.h"
#include "LED.h"
#include "Data.h"
#include "OLED.h"

const char* WifiName = "17p";
const char* WifiPass = "senge666";
const char* ProductID="YOUR_ONENET_PRODUCT_ID";
const char* UserID="316452";
const char* DeviceID="YOUR_ONENET_DEVICE_ID";
const char* Device_AuthID="ESP8266";
const char* Device_APIKey="YOUR_ONENET_DEVICE_APIKEY";
const char* Master_APIKey="YOUR_ONENET_MASTER_APIKEY";
const char* Access_Key="KhRZHaYc/qO2RkhG4C+SC0pZveY7LyjscBvb5TzLQEg=";
const char* func1 = "Temp";
const char* func2 = "Humi";
const char* func3 = "LEDSwitch";

/*OneNet*/
void ESP8266_Init(void)
{
	//Serial_Init();
	//while(1)
	//{
	//	if (strstr((const char*)Serial_RxPacket,"WIFI GOT IP"))				//ȴwifi
	//	{
	//			memset(Serial_RxPacket,0,500);														//
	//			break;
	//	}
	//}
	//Delay_ms(2000);
	
	memset(Serial_RxPacket,0,500);
	printf("AT+IOTSTATUS\r\n");							//õַ
	Delay_ms(2000);
	
	memset(Serial_RxPacket,0,500);
	printf("AT+IOTCFG=%s,%s,%s\r\n",DeviceID,ProductID,Device_AuthID);							//õַ
	Delay_ms(2000);

	
	memset(Serial_RxPacket,0,500);															//
	printf("AT+IOTSUB=Window_Switch\r\n");													//õַ
	Delay_ms(2000);
	
	ESP8266_Send(0,"WindowSwitch",0);	
	
	
}


/*ESP
ָAT+IOTSEND=a,b,c,(d)
a0ֵ
1ַ
2gps
b
cֵ
dֵ (ֻϴGPSʱŻõ)*/
void ESP8266_Send(uint8_t a,char* b,float c)
{
		printf("AT+IOTSEND=%d,%s,%.1f\r\n",a,b,c);												
}



