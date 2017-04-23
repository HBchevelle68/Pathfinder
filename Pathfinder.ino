#include "Sabertooth.h"
#include "Ultrasonic.h"

Sabertooth ST1 = Sabertooth(128); //Address RIGHT motor controller
Sabertooth ST2 = Sabertooth(130); //Address LEFT motor controller
Ultrasonic US1 = Ultrasonic(2);

long inches;


void setup()
{
  SabertoothTXPinSerial.begin(9600);

}

void loop()
{
  inches = US1.ReadSensor();
  

  if(inches <= 18){
    
    ST1.stop();
    ST2.stop();
    
  } else {

    ST1.motor(1,30);
    ST1.motor(2,30);
    ST2.motor(1,30);
    ST2.motor(2,30);
    
  }


/*
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
*/
}

