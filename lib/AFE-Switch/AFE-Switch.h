/*
  Switch mono and bi stable component
  AFE Firmware for smart home devices build on ESP8266
  More info: https://github.com/tschaban/AFE-Firmware
  LICENCE: http://opensource.org/licenses/MIT
*/

#ifndef _AFE_Switch_h
#define _AFE_Switch_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

/* Types of switch */
#define SWITCH_TYPE_MONO 0 // Mono stable switch
#define SWITCH_TYPE_BI 1   // Bi stabe switch


class AFESwitch
{

private:
  uint8_t gpio;
  uint8_t type;
  boolean state;
  boolean pressed = false;


public:

  /* Constructor: entry parameter is GPIO number where Switch is connected to
     second parameter defiens if the switch is mono or bi
  */
  AFESwitch(uint8_t switch_gpio, uint8_t switch_type=SWITCH_TYPE_MONO);

  /* Returns TRUE if switch is ON */
  boolean isON();

	/* Returns TRUE if switch is OFF */
  boolean isOFF();

	/* It has to be added to the loop in order to listen for switch changes */
  void listener();

};

#endif
