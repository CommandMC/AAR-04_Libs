#include <LED.h>

void setup() {
}

void loop() {
  // LED-Objekt initialisieren
  LED led(LED_BUILTIN);
  // LED mit "schalten"-Funktion anschalten
  led.schalten(true);
  // Eine Sekunde warten
  delay(1000);
  // LED mit "schalten"-Funktion ausschalten
  led.schalten(false);
  delay(1000);
}
