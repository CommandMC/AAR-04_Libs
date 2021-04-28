#include <Bodensensor.h>

// Bodensensor-Objekte mit Pin definieren
Bodensensor sensorLinks(A6);
Bodensensor sensorRechts(A7);

void setup() {
  Serial.begin(9600);
}

void loop() {
  // Wert am linken Sensor lesen und ausgeben
  Serial.print("Wert Links: ");
  Serial.print(sensorLinks.getLineValue());
  // Wert am rechten Sensor lesen und ausgeben
  Serial.print("\tWert Rechts: ");
  Serial.println(sensorRechts.getLineValue());
  delay(1000);
}
