/*
  Mit Odometrie.odoReset lassen sich die Interrupt-Counter zurücksetzen
*/

#include <Odometrie.h>

Odometrie odo;

void setup() {
  Serial.begin(9600);
}

void loop() {
  for (int i = 0; i < 5; i++) {
    Serial.print("Interrupts Links: ");
    Serial.print(odo.getOdoLinks());
    Serial.print("\tInterrupts Rechts: ");
    Serial.println(odo.getOdoRechts());
    delay(1000);
  }
  odo.odoReset();
}
