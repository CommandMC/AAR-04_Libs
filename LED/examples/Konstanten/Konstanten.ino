/*
  Ähnlich wie Arduino.h enthält LED.h konstante Definitionen für LED-Pins.
  Diese sind LED_1, LED_2 und LED_14
  LED-1 ist die LED der Bodensensoren (D7)
  LED-2 ist eine bläuliche LED zwischen Batteriemodul und SV1 (D8)
  LED-14 liegt vorne-links neben JP5 und ist gerne mal kaputt :^) (auch LED_BUILTIN, D13)
*/

#include <LED.h>

void setup() {
}

void loop() {
  // LED-Objekte initialisieren
  LED led1(LED_1);
  LED led2(LED_2);
  LED led14(LED_14);
  // LEDs mit "schalten"-Funktion anschalten
  led1.schalten(true);
  led2.schalten(true);
  led14.schalten(true);
  // Eine Sekunde warten
  delay(1000);
  // LEDs mit "schalten"-Funktion ausschalten
  led1.schalten(false);
  led2.schalten(false);
  led14.schalten(false);
  delay(1000);
}
