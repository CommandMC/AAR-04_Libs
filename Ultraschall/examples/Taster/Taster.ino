#include <Taster.h>

Taster ultraTaster(2);

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(ultraTaster.getAnzahlBetaetigt());
}
