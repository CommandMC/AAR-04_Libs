/*
  In Ultraschall.h sind 4 Konstanten der Pins definiert, die der AAR-04 standartmäßig benutzt
*/

#include <Ultraschall.h>

Ultraschall modulL(trgL, echoL);
Ultraschall modulR(tgrR, echoR);

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
