#ifndef Ultrasonic_h
#define Ultrasonic_h  

#include "Arduino.h"

class Ultrasonic
{
public:

  Ultrasonic(short pin);
  long ReadSensor();
  

private:
  
  short _sensorPin; //PWM pin

    
};



#endif
