/*
  Motor.h enthält 4 Konstanten, welche die Pins der Motoren des AAR-04 angeben.
  PWM1_R & PWM1_L: Rechter Motor
  PWM2_R & PWM2_L: Linker Motor
*/

#include <Motor.h>

void setup() {
  // Motor-Objekt mit vordefinierten Pins erstellen
  Motor motor(PWM1_R, PWM1_L);
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
