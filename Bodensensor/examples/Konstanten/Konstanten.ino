/*
  Bodensensor.h enthält zwei vordefinierte Pins für die Sensoren des AAR-04
  Diese sind LIJN_SEN1 und LIJN_SEN2 (1 = Links, 2 = Rechts)
*/

#include <Bodensensor.h>

// Bodensensor-Objekte mit vordefinierter Pin definieren
Bodensensor sensorLinks(LIJN_SEN1);
Bodensensor sensorRechts(LIJN_SEN2);

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("Wert Links: ");
  Serial.print(sensorLinks.getLineValue());
  Serial.print("\tWert Rechts: ");
  Serial.println(sensorRechts.getLineValue());
  delay(1000);
}
