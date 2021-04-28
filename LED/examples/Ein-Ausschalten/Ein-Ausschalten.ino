#include <LED.h>

// LED-Objekt initialisieren
LED led(LED_BUILTIN);

void setup() {
}

void loop() {
  // LED mit "einschalten"-Funktion einschalten
  led.einschalten();
  // Eine Sekunde warten
  delay(1000);
  // LED mit "ausschalten"-Funktion ausschalten
  led.ausschalten();
  delay(1000);
}
