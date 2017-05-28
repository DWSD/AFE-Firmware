/*
  MQTT component
  AFE Firmware for smart home devices build on ESP8266
  More info: https://github.com/tschaban/AFE-Firmware
  LICENCE: http://opensource.org/licenses/MIT
*/

#ifndef _AFE_MQTT_h
#define _AFE_MQTT_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

#include <PubSubClient.h>
#include <Streaming.h>
#include <WiFiClient.h>

class AFEMQTT {

private:
  WiFiClient 		esp;
	PubSubClient 	Broker;
  const char*  	mqttTopicForSubscription;
	const char*  	mqttUser;
	const char*  	mqttPassword;

public:
  AFEMQTT();
  void begin(
    const char * domain,
    uint16_t port,
    const char* user,
    const char* password,
    const char* subscribeTo);

  void connect();
//  void publish(char* type, char* message);
  boolean connected();
//  void loop();

};

#endif
