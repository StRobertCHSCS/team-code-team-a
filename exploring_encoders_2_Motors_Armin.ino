/* Implement PID control of TETRIX motors equipped with encoders using the PRIZM controller.
 * The recommended DC motor is the TETRIX TorqueNADO - part number 44260.
 * This example demonstrates how to use position targetting functions to accurately
 * position a DC motor + encoder to an encoder count position and hold the position
 * in a servo like mode. For more detailed information on using the PRIZM library functions,
 * Please see the Arduino Library functions grid in the TETRIX PRIZM Program 




void setup() {

  prizm.PrizmBegin(); // Initiates the PRIZM controller - must be called in the setup of each PRIZM sketch
  

}

void loop()  {

  prizm.setMotorDegree(1,700,500);   // Spin DC motor 1 at a constant 360 degrees per second and stop when encoder count reaches 1440
     
  prizm.setMotorDegree(2,-700,-500);                                   // For TETRIX TorqueNADO encoders, 1440 = 1 motor shaft revolution. (1440 / 4 = 360)

  delay(5000);    // wait here for 2 seconds while motor gets to it's destination

  prizm.setMotorDegree(1,-700,-500);
  prizm.setMotorDegree(2,700,500);           // Spin DC motor at 360 degrees per second back to encoder position "0".   

  delay(5000);    // wait here for 2 seconds, and repeat                                     
}
