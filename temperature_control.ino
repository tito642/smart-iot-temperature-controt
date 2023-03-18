/*by t2 elattar
   -- temperature --
   
   This source code of graphical user interface 
   has been generated automatically by RemoteXY editor.
   To compile this code using RemoteXY library 3.1.8 or later version 
   download by link http://remotexy.com/en/library/
   To connect using RemoteXY mobile app by link http://remotexy.com/en/download/                   
     - for ANDROID 4.11.1 or later version;
     - for iOS 1.9.1 or later version;
    
   This source code is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.    
*/

//////////////////////////////////////////////
//        RemoteXY include library          //
//////////////////////////////////////////////

// RemoteXY select connection mode and include library 


// RemoteXY select connection mode and include library 
#define REMOTEXY_MODE__ESP8266_HARDSERIAL_CLOUD

#include <RemoteXY.h>

// RemoteXY connection settings 
#define REMOTEXY_SERIAL Serial
#define REMOTEXY_SERIAL_SPEED 115200
#define REMOTEXY_WIFI_SSID "           "
#define REMOTEXY_WIFI_PASSWORD "          "
#define REMOTEXY_CLOUD_SERVER "cloud.remotexy.com"
#define REMOTEXY_CLOUD_PORT 6376
#define REMOTEXY_CLOUD_TOKEN "                  "


// RemoteXY configurate  
#pragma pack(push, 1)
uint8_t RemoteXY_CONF[] =   // 319 bytes
  { 255,3,0,52,0,56,1,16,31,1,71,56,3,4,23,23,4,2,24,118,
  0,0,0,0,0,0,72,66,0,0,32,65,0,0,160,64,0,0,128,63,
  24,100,101,103,114,101,101,0,135,0,0,0,0,0,0,200,65,94,0,0,
  200,65,0,0,12,66,36,0,0,12,66,0,0,52,66,24,0,0,52,66,
  0,0,72,66,129,0,2,25,23,4,35,116,101,109,112,101,114,97,116,117,
  114,101,32,58,0,71,56,36,3,21,21,4,2,24,189,0,0,0,0,0,
  0,200,66,0,0,32,65,0,0,160,64,0,0,128,63,24,0,135,0,0,
  0,0,0,0,72,66,94,0,0,72,66,0,0,160,66,36,0,0,160,66,
  0,0,190,66,24,0,0,190,66,0,0,200,66,129,0,34,24,26,5,24,
  104,117,109,105,100,105,116,121,32,37,0,67,4,5,33,20,5,2,26,11,
  67,4,37,33,20,5,2,26,11,2,0,19,45,22,11,2,26,31,31,79,
  78,0,79,70,70,0,4,0,32,59,6,34,2,26,4,0,3,58,7,34,
  2,26,67,4,10,70,20,5,2,26,11,129,0,11,65,16,3,8,116,101,
  109,112,101,114,97,116,117,114,101,0,129,0,11,78,13,4,1,100,101,103,
  114,101,101,0,129,0,41,64,17,4,8,104,117,109,105,100,105,116,121,32,
  0,67,4,39,70,20,5,2,26,11,129,0,45,77,4,5,1,37,0 };



/*#define REMOTEXY_MODE__ESP8266_SOFTSERIAL_CLOUD
#include <SoftwareSerial.h>

#include <RemoteXY.h>

// RemoteXY connection settings 
#define REMOTEXY_SERIAL_RX 2
#define REMOTEXY_SERIAL_TX 3
#define REMOTEXY_SERIAL_SPEED 115200
#define REMOTEXY_WIFI_SSID "Ahmed"
#define REMOTEXY_WIFI_PASSWORD ""
#define REMOTEXY_CLOUD_SERVER "cloud.remotexy.com"
#define REMOTEXY_CLOUD_PORT 6376
#define REMOTEXY_CLOUD_TOKEN "164c278615fa579a68ce03c56934fa1e"


// RemoteXY configurate  
#pragma pack(push, 1)
uint8_t RemoteXY_CONF[] =   // 319 bytes
  { 255,3,0,52,0,56,1,16,31,1,71,56,3,4,23,23,4,2,24,118,
  0,0,0,0,0,0,72,66,0,0,32,65,0,0,160,64,0,0,128,63,
  24,100,101,103,114,101,101,0,135,0,0,0,0,0,0,200,65,94,0,0,
  200,65,0,0,12,66,36,0,0,12,66,0,0,52,66,24,0,0,52,66,
  0,0,72,66,129,0,2,25,23,4,35,116,101,109,112,101,114,97,116,117,
  114,101,32,58,0,71,56,36,3,21,21,4,2,24,189,0,0,0,0,0,
  0,200,66,0,0,32,65,0,0,160,64,0,0,128,63,24,0,135,0,0,
  0,0,0,0,72,66,94,0,0,72,66,0,0,160,66,36,0,0,160,66,
  0,0,190,66,24,0,0,190,66,0,0,200,66,129,0,34,24,26,5,24,
  104,117,109,105,100,105,116,121,32,37,0,67,4,4,33,20,5,2,26,11,
  67,4,37,33,20,5,2,26,11,2,0,19,45,22,11,2,26,31,31,79,
  78,0,79,70,70,0,4,0,32,59,6,34,2,26,4,0,3,58,7,34,
  2,26,67,4,10,70,20,5,2,26,11,129,0,11,65,16,3,8,116,101,
  109,112,101,114,97,116,117,114,101,0,129,0,11,78,13,4,1,100,101,103,
  114,101,101,0,129,0,41,64,17,4,8,104,117,109,105,100,105,116,121,32,
  0,67,4,39,70,20,5,2,26,11,129,0,45,77,4,5,1,37,0 };


  */
  
// this structure defines all the variables and events of your control interface 




/*
   -- temperature --
   
   This source code of graphical user interface 
   has been generated automatically by RemoteXY editor.
   To compile this code using RemoteXY library 3.1.8 or later version 
   download by link http://remotexy.com/en/library/
   To connect using RemoteXY mobile app by link http://remotexy.com/en/download/                   
     - for ANDROID 4.11.1 or later version;
     - for iOS 1.9.1 or later version;
    
   This source code is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.    
*/
/*
//////////////////////////////////////////////
//        RemoteXY include library          //
//////////////////////////////////////////////

// RemoteXY select connection mode and include library 
#define REMOTEXY_MODE__ESP8266_HARDSERIAL_CLOUD

#include <RemoteXY.h>

// RemoteXY connection settings 
#define REMOTEXY_SERIAL Serial
#define REMOTEXY_SERIAL_SPEED 115200
#define REMOTEXY_WIFI_SSID "Tito"
#define REMOTEXY_WIFI_PASSWORD "attar@642"
#define REMOTEXY_CLOUD_SERVER "cloud.remotexy.com"
#define REMOTEXY_CLOUD_PORT 6376
#define REMOTEXY_CLOUD_TOKEN "164c278615fa579a68ce03c56934fa1e"


// RemoteXY configurate  
#pragma pack(push, 1)
uint8_t RemoteXY_CONF[] =   // 319 bytes
  { 255,3,0,52,0,56,1,16,31,1,71,56,3,4,23,23,4,2,24,118,
  0,0,0,0,0,0,72,66,0,0,32,65,0,0,160,64,0,0,128,63,
  24,100,101,103,114,101,101,0,135,0,0,0,0,0,0,200,65,94,0,0,
  200,65,0,0,12,66,36,0,0,12,66,0,0,52,66,24,0,0,52,66,
  0,0,72,66,129,0,2,25,23,4,35,116,101,109,112,101,114,97,116,117,
  114,101,32,58,0,71,56,36,3,21,21,4,2,24,189,0,0,0,0,0,
  0,200,66,0,0,32,65,0,0,160,64,0,0,128,63,24,0,135,0,0,
  0,0,0,0,72,66,94,0,0,72,66,0,0,160,66,36,0,0,160,66,
  0,0,190,66,24,0,0,190,66,0,0,200,66,129,0,34,24,26,5,24,
  104,117,109,105,100,105,116,121,32,37,0,67,4,5,33,20,5,2,26,11,
  67,4,37,33,20,5,2,26,11,2,0,19,45,22,11,2,26,31,31,79,
  78,0,79,70,70,0,4,0,32,59,6,34,2,26,4,0,3,58,7,34,
  2,26,67,4,10,70,20,5,2,26,11,129,0,11,65,16,3,8,116,101,
  109,112,101,114,97,116,117,114,101,0,129,0,11,78,13,4,1,100,101,103,
  114,101,101,0,129,0,41,64,17,4,8,104,117,109,105,100,105,116,121,32,
  0,67,4,39,70,20,5,2,26,11,129,0,45,77,4,5,1,37,0 };*/
/*
   -- temperature --
   
   This source code of graphical user interface 
   has been generated automatically by RemoteXY editor.
   To compile this code using RemoteXY library 3.1.8 or later version 
   download by link http://remotexy.com/en/library/
   To connect using RemoteXY mobile app by link http://remotexy.com/en/download/                   
     - for ANDROID 4.11.1 or later version;
     - for iOS 1.9.1 or later version;
    
   This source code is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.    
*/

//////////////////////////////////////////////
//        RemoteXY include library          //
//////////////////////////////////////////////

// RemoteXY select connection mode and include library 








//#define REMOTEXY_MODE__ESP8266_HARDSERIAL_POINT

//#include <RemoteXY.h>





// RemoteXY connection settings 
/*#define REMOTEXY_SERIAL Serial
#define REMOTEXY_SERIAL_SPEED 115200
#define REMOTEXY_WIFI_SSID "Tito"
#define REMOTEXY_WIFI_PASSWORD "attar@642"
#define REMOTEXY_SERVER_PORT 6377*/


/*
// RemoteXY connection settings 
#define REMOTEXY_SERIAL Serial
#define REMOTEXY_SERIAL_SPEED 115200
#define REMOTEXY_WIFI_SSID "ahmed"
#define REMOTEXY_WIFI_PASSWORD ""
#define REMOTEXY_SERVER_PORT 6377
// RemoteXY configurate  
#pragma pack(push, 1)
uint8_t RemoteXY_CONF[] =   // 319 bytes
  { 255,3,0,52,0,56,1,16,31,1,71,56,3,4,23,23,4,2,24,118,
  0,0,0,0,0,0,72,66,0,0,32,65,0,0,160,64,0,0,128,63,
  24,100,101,103,114,101,101,0,135,0,0,0,0,0,0,200,65,94,0,0,
  200,65,0,0,12,66,36,0,0,12,66,0,0,52,66,24,0,0,52,66,
  0,0,72,66,129,0,2,25,23,4,35,116,101,109,112,101,114,97,116,117,
  114,101,32,58,0,71,56,36,3,21,21,4,2,24,189,0,0,0,0,0,
  0,200,66,0,0,32,65,0,0,160,64,0,0,128,63,24,0,135,0,0,
  0,0,0,0,72,66,94,0,0,72,66,0,0,160,66,36,0,0,160,66,
  0,0,190,66,24,0,0,190,66,0,0,200,66,129,0,34,24,26,5,24,
  104,117,109,105,100,105,116,121,32,37,0,67,4,5,33,20,5,2,26,11,
  67,4,37,33,20,5,2,26,11,2,0,19,45,22,11,2,26,31,31,79,
  78,0,79,70,70,0,4,0,32,59,6,34,2,26,4,0,3,58,7,34,
  2,26,67,4,10,70,20,5,2,26,11,129,0,11,65,16,3,8,116,101,
  109,112,101,114,97,116,117,114,101,0,129,0,11,78,13,4,1,100,101,103,
  114,101,101,0,129,0,41,64,17,4,8,104,117,109,105,100,105,116,121,32,
  0,67,4,39,70,20,5,2,26,11,129,0,45,77,4,5,1,37,0 };*/
  
// this structure defines all the variables and events of your control interface
struct {

    // input variables
  uint8_t open; // =1 if switch ON and =0 if OFF 
  int8_t slider_1; // =0..100 slider position 
  int8_t slider_2; // =0..100 slider position 

    // output variables
  float temperature;  // from 0 to 50 
  float humidity;  // from 0 to 100 
  
   char temperature_text[11];  // string UTF8 end zero 
  char humidity_text[11];  // string UTF8 end zero 
 
  char text_1[11];  // string UTF8 end zero 
  char text_2[11];  // string UTF8 end zero 

    // other variable
  uint8_t connect_flag;  // =1 if wire connected, else =0 

} RemoteXY;
#pragma pack(pop)

/////////////////////////////////////////////
//           END RemoteXY include          //
/////////////////////////////////////////////

#define PIN_OPEN 3






#include "DHT.h"

#define DHTPIN 2     // Digital pin connected to the DHT sensor
// Feather HUZZAH ESP8266 note: use pins 3, 4, 5, 12, 13 or 14 --
// Pin 15 can work but DHT must be disconnected during program upload.

// Uncomment whatever type you're using!
#define DHTTYPE DHT11   // DHT 11
//#define DHTTYPE DHT22   // DHT 22  (AM2302), AM2321
//#define DHTTYPE DHT21   // DHT 21 (AM2301)

// Connect pin 1 (on the left) of the sensor to +5V
// NOTE: If using a board with 3.3V logic like an Arduino Due connect pin 1
// to 3.3V instead of 5V!
// Connect pin 2 of the sensor to whatever your DHTPIN is
// Connect pin 3 (on the right) of the sensor to GROUND (if your sensor has 3 pins)
// Connect pin 4 (on the right) of the sensor to GROUND and leave the pin 3 EMPTY (if your sensor has 4 pins)
// Connect a 10K resistor from pin 2 (data) to pin 1 (power) of the sensor

// Initialize DHT sensor.
// Note that older versions of this library took an optional third parameter to
// tweak the timings for faster processors.  This parameter is no longer needed
// as the current DHT reading algorithm adjusts itself to work on faster procs.
DHT dht(DHTPIN, DHTTYPE);



void setup() 
{
  RemoteXY_Init (); 
  
  pinMode (PIN_OPEN, OUTPUT);

  pinMode(A4,OUTPUT);
  pinMode(A5,OUTPUT);
  
  // TODO you setup code
  dht.begin();
}

void loop() 
{ 
  RemoteXY_Handler ();
  
  digitalWrite(PIN_OPEN, (RemoteXY.open==1)?LOW:HIGH);
  
  // TODO you loop code
  // use the RemoteXY structure for data transfer
  // do not call delay() 
 //float temperature = dht.readTemperature();
   //float humidity  = dht.readHumidity();
RemoteXY.temperature = dht.readTemperature(); 
 RemoteXY.humidity  = dht.readHumidity();   

  float temp = dht.readTemperature();   
  float hum = dht.readHumidity(); 
  dtostrf(temp, 0, 1, RemoteXY.temperature_text); 
  dtostrf(hum, 0, 1, RemoteXY.humidity_text);



  
  

 float maxTemp = RemoteXY.slider_2*.5; 
  float maxHum = RemoteXY.slider_1; 
  dtostrf(maxTemp, 0, 1, RemoteXY.text_1); 
  dtostrf(maxHum, 0, 1, RemoteXY.text_2);


//int maxHum = 70;
//int maxTemp = 22;
/*int maxHum1 = 68;
int maxTemp1 = 20;*/


  if(hum >= maxHum ) {
      digitalWrite(A4, LOW);
      
  } else if(hum < maxHum ){
     digitalWrite(A4, HIGH);
      
  }

  if(temp >= maxTemp ) {
      digitalWrite(A5, LOW);
      
  } else if(temp < maxTemp ){
     digitalWrite(A5, HIGH);
      
  }
}
