/*
  Mit Motor.setMotorPower(int) kann der Motor gesteuert werden.
  Werte von  1 bis  255: Motor vorwärts
  Werte von -1 bis -255: Motor rückwärts
  0: Bremsen
*/

#include <Motor.h>

void setup() {
  Motor motor(5, 3);
  motor.setMotorPower(255);
  delay(3000);
  motor.setMotorPower(0);
  delay(3000);
  motor.setMotorPower(-255);
  delay(3000);
  motor.setMotorPower(0);
}

void loop() {
}
