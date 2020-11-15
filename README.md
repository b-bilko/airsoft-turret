# airsoft-turret
 A simple PIR driven Airsoft turret


Uses a very simple circuit with two functions. 

One side of the circuit is a PIR triggered Relay hooked to the motor of a cheap mini Airsoft RIF. 

This triggers a burst of BB's when there is movement in front. 

The second circuit uses a Arduino Nano to drive a stepper motor to pan the RIF back and forth.

There is a simple homing done of the stepper to allow the entire setup to be mounted in an ammo box, and to prevent the stepper banging the RIF into the sides of the front slot. 

On startup the stepper tracks anticlockwise, till it hits the switch, then back clockwise to the edge of the opening. The return sweep then stops just short of the switch to avoid making a noise. 


PIR Layout

![Image of PIR Layour](https://imgur.com/R7VK1sg)



TODO:
Add Buzzer 
Fix LED Blinking to be out of time with Stepper. Blocking code issue?


Credit: 

Uses the SeveralThingsAtTheSameTimeRev1.ino from Robin2 : https://forum.arduino.cc/index.php?topic=223286.0

and the Homing function is based on https://codebender.cc/sketch:431066#home%20pin%20example%20using%20AccelStepper.ino 

