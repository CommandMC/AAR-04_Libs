#include <LED.h>

// LED-Objekt initialisieren
LED led(LED_BUILTIN);

void setup() {
}

void loop() {
  // LED mit "schalten"-Funktion anschalten
  led.schalten(true);
  // Eine Sekunde warten
  delay(1000);
  // LED mit "schalten"-Funktion ausschalten
  led.schalten(false);
  delay(1000);
}
