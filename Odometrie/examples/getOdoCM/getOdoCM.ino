/*
  Odometrie.getOdoLinksCM und .getOdoRechtsCM berechnen aus den Interrupt-Counter die gefahrene Strecke.
*/

#include <Odometrie.h>

Odometrie odo;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("Strecke Links: ");
  Serial.print(odo.getOdoLinksCM());
  Serial.print("\tStrecke Rechts: ");
  Serial.println(odo.getOdoRechtsCM());
  delay(250);
}
