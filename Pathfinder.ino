

#include "Sabertooth.h"


Sabertooth ST1 = Sabertooth(128);
Sabertooth ST2 = Sabertooth(130);

void setup()
{
  SabertoothTXPinSerial.begin(9600);
  //Sabertooth::autobaud(SabertoothTXPinSerial);  Autobaud is for the whole serial line -- you don't need to do
                                               // it for each individual motor driver. This is the version of
                                               // the autobaud command that is not tied to a particular
                                               // Sabertooth object.
                                               // See the examples in 1.Basics for information on whether you
                                               // need this line at all.
}

void loop()
{
  // ST1[0] (address 128) has power 50 (of 127 max) on M1,
  // ST1[1] (address 129) has power 60 (of 127 max) on M2,
 
  // Do this for 5 seconds.

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

