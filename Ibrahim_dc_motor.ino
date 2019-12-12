#include <PRIZM.h>

void setup() {
  // put your setup code here, to run once:
  prizm.setMotorPower(1,25);    // spin Motor 1 CW at 25% power
  prizm.setGreenLED(HIGH);      // turn the GREEN LED on
    delay(1000);                  // wait here for 1000ms (1 seconds)
  prizm.setGreenLED(LOW);       // turn the GREEN LED off
     delay(1000);                  // wait here for 1000ms (1 seconds)
 

  prizm.setMotorPower(1,0);     // stop motor (coast to stop)
  delay(3000);                  // After stopping, wait here for 3 seconds
  
  prizm.setMotorPower(1,-25);   // spin Motor 1 CCW at 25% power
  prizm.setRedLED(HIGH);      // turn the RED LED on
    delay(1000);                  // wait here for 1000ms (1 seconds)
  prizm.setRedLED(LOW);       // turn the RED LED off
    delay(1000);                  // wait here for 1000ms (1 seconds)
  
 
  prizm.setMotorPower(1,0);     // stop motor (coast to stop);
   delay(10000);                  // After stopping, wait here for 10 seconds, then repeat


void loop() {
  // 
prizm.setMotorPower(1,25);    // spin Motor 1 CW at 25% power
  prizm.setGreenLED(HIGH);      // turn the GREEN LED on
    delay(1000);                  // wait here for 1000ms (1 seconds)
  prizm.setGreenLED(LOW);       // turn the GREEN LED off
     delay(1000);                  // wait here for 1000ms (1 seconds)
 

  prizm.setMotorPower(1,0);     // stop motor (coast to stop)
  delay(3000);                  // After stopping, wait here for 3 seconds
  
  prizm.setMotorPower(1,-25);   // spin Motor 1 CCW at 25% power
  prizm.setRedLED(HIGH);      // turn the RED LED on
    delay(1000);                  // wait here for 1000ms (1 seconds)
  prizm.setRedLED(LOW);       // turn the RED LED off
    delay(1000);                  // wait here for 1000ms (1 seconds)
  
 
  prizm.setMotorPower(1,0);     // stop motor (coast to stop);
   delay(10000);                  // After stopping, wait here for 10 seconds, then repeat
