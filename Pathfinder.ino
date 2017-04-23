

#include "Sabertooth.h"


Sabertooth ST1 = Sabertooth(128); //Address RIGHT motor controller
Sabertooth ST2 = Sabertooth(130); //Address LEFT motor controller

void setup()
{
  SabertoothTXPinSerial.begin(9600);

}

void loop()
{


  for(int i = 1; i < 127; i++){
    ST1.motor(1, i);
    ST1.motor(2, i);
  
    ST2.motor(1, i);
    ST2.motor(2, i);

    delay(50);

  }
  
  delay(1000);


  for(int i = 126; i > 0; i--){
    ST1.motor(1, i);
    ST1.motor(2, i);
  
    ST2.motor(1, i);
    ST2.motor(2, i);

    delay(50);

  }


  delay(2000);

}

