// AccelStepper.h Copyright (C) 2009 Mike McCauley
// $Id: HRFMessage.h,v 1.1 2009/08/15 05:32:58 mikem Exp mikem $

#include <AccelStepper.h>

AccelStepper stepper1(1,3,4); // driver, step 3, dir 4
int homePin = 0;

void setup()

{
  pinMode(homePin, INPUT); // limit switch to GND
  digitalWrite(homePin, HIGH); // pullup on Pin
  
    stepper1.setMaxSpeed(500);
    stepper1.setAcceleration(500);     
       
   while(digitalRead(homePin) == HIGH){ // switch not yet triggered/home
     stepper1.move(-stepper1.currentPosition()); // then continue to move in anticlockwise directio      
             }
   stepper1.setCurrentPosition(0); // once homePin == LOW, reset currentPosition to 0
  
}

void loop()
{
    if (stepper1.distanceToGo() == 0) 
   stepper1.move(1000);
        delay(500);

    stepper1.run();
}
