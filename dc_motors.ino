/*  PRIZM Controller example program
 *  Spin DC motor channel 1 for 5 seconds, then coast to a stop.
 *  After stopping, wait for 2 seconds, spin in opposite direction.
 *  Continue to repeat until RED reset button is pressed.
 *  author PWU on 08/05/2016
*/

  #include <PRIZM.h>    // include the PRIZM library in the sketch
  PRIZM prizm;          // instantiate a PRIZM object “prizm” so we can use its functions

void setup() {        

  prizm.PrizmBegin();   // Initialize the PRIZM controller
}

void loop() {     // repeat in a loop
  
  prizm.setMotorPower(1,25);    // spin Motor 1 CW at 25% power
  prizm.setGreenLED(HIGH);      // turn the GREEN LED on
    delay(500);                  // wait here for 500ms (0.5 seconds)
  prizm.setGreenLED(LOW);       // turn the GREEN LED off
     delay(500);                  // wait here for 500ms (0.5 seconds)
  prizm.setGreenLED(HIGH);      // turn the GREEN LED on5
    delay(500);                  // wait here for 500ms (0.5 seconds)
  prizm.setGreenLED(LOW);       // turn the GREEN LED off
     delay(500);                  // wait here for 500ms (0.5 seconds)
  prizm.setGreenLED(HIGH);      // turn the GREEN LED on
    delay(500);                  // wait here for 500ms (0. seconds)
  prizm.setGreenLED(LOW);       // turn the GREEN LED off
    delay(500);                  // wait here for 500ms (0.5 seconds)

  prizm.setMotorPower(1,0);     // stop motor (coast to stop)
  delay(500);                  // After stopping, wait here for 0.5 seconds
  
  prizm.setMotorPower(1,-25);   // spin Motor 1 CCW at 25% power
  prizm.setRedLED(HIGH);      // turn the RED LED on
    delay(500);                  // wait here for 500ms (0.5 seconds)
  prizm.setRedLED(LOW);       // turn the RED LED off
    delay(500);                  // wait here for 500ms (0.5 seconds)
  prizm.setRedLED(HIGH);      // turn the RED LED on
    delay(500);                  // wait here for 500ms (0.5 seconds)
  prizm.setRedLED(LOW);       // turn the RED LED off
    delay(500);                  // wait here for 500ms (0.5 seconds)
  prizm.setRedLED(HIGH);      // turn the RED LED on
   delay(500);                  // wait here for 500ms (0.5 seconds)
  prizm.setRedLED(LOW);         //turn the RED LED off
 
  prizm.setMotorPower(1,0);     // stop motor (coast to stop);
   delay(10000);                  // After stopping, wait here for 10 seconds, then repeat
  
}
