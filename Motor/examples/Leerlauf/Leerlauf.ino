/*
  Mit Motor.leerlauf() kann der Motor auf Leerlauf geschaltet werden.
*/

#include <Motor.h>

void setup() {
  Motor motor(5, 3);
  motor.setMotorPower(255);
  delay(3000);
  motor.leerlauf();
}

void loop() {
}
