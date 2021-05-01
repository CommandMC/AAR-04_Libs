/*
  Mit Ultraschall.getDistance() wird das Ultraschallmodul aktiviert und die Entfernung gemessen
  Valide Rückgabewerte sind ~ 0-400, -1 gibt einen Signalverlust an
*/

#include <Ultraschall.h>

Ultraschall modulL(6, A2);
Ultraschall modulR(8, 4);

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("Distanz Links: ");
  Serial.print(modulL.getDistance());
  Serial.print("\tDistanz Rechts: ");
  Serial.println(modulR.getDistance());
  delay(1000);
}
