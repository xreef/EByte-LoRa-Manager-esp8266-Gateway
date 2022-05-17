#ifdef __IN_ECLIPSE__
//This is a automatic generated file
//Please do not modify this file
//If you touch this file your change will be overwritten during the next build
//This file has been generated on 2022-05-16 16:07:15

#include "Arduino.h"
#include "Arduino.h"
#include "LoRa_E32.h"
#include <ESP8266WiFi.h>
#include <WebSocketsServer.h>
#include <ESP8266WebServer.h>
#include <ArduinoJson.h>
#include <ESP8266mDNS.h>
#include "LittleFS.h"
#include <DNSServer.h>

void setup() ;
void loop() ;
void restServerRouting() ;
void setCrossOrigin();
void sendCrossOriginHeader();
void getConfigurationJSON(Configuration configuration);
void getConfiguration() ;
void getModuleInfo() ;
void resetMicrocontroller() ;
void resetModule() ;
void postConfiguration() ;
void sendTransparentMessage() ;
void sendFixedMessage() ;
void sendBroadcastMessage() ;
void printParameters(struct Configuration configuration) ;
void printModuleInformation(struct ModuleInformation moduleInformation) ;
void sendWSMessageOfMessageReceived(bool readSingleMessage);
void webSocketEvent(uint8_t num, WStype_t type, uint8_t * payload, size_t length) ;
String getContentType(String filename);
bool handleFileRead(String path);
void serverRouting() ;
void sendSimpleWSMessage(String type, String val);
void realtimeDataCallbak() ;

#include "EByte-LoRa-Manager-esp8266-Gateway.ino"


#endif
