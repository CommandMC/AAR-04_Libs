/*
  Mit Odometrie.getOdoLinks und .getOdoRechts lassen sich die Interrupt-Counter abrufen.
  Dies ist hilfreich, wenn z. B. nach x Interrupts eine Funktion aufgerufen werden soll.
*/

#include <Odometrie.h>

Odometrie odo;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("Interrupts Links: ");
  Serial.print(odo.getOdoLinks());
  Serial.print("\tInterrupts Rechts: ");
  Serial.println(odo.getOdoRechts());
  delay(250);
}
