#include "Ultrasonic.h"

Ultrasonic::Ultrasonic(short pin) : _sensorPin(pin)
{
  
}

long Ultrasonic::ReadSensor()
{
  long inches = (pulseIn(_sensorPin, HIGH)/25.4);
  return inches;
}

