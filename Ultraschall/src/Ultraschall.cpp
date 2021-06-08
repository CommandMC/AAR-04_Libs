#include "Ultraschall.h"

Ultraschall::Ultraschall(int triggerPin, int echoPin) {
  pinMode(triggerPin, OUTPUT);
  pinMode(echoPin, INPUT);
  _triggerPin = triggerPin;
  _echoPin = echoPin;
}

float Ultraschall::getDistance() {
  // Ultraschall-Modul auslösen
  digitalWrite(_triggerPin, HIGH);
  // 20 us warten
  delayMicroseconds(20);
  digitalWrite(_triggerPin, 0);
  // Auf Signalaussendung warten
  while (!digitalRead(_echoPin));
  // Zeit abspeichern
  unsigned long startTime = micros();
  // Auf Signalrückkehr warten
  while (digitalRead(_echoPin)) {
    // Wenn der Echo-Pin länger als 25ms auf HIGH bleibt, ist das Signal nicht zurückgekommen
    if ((micros() - startTime) / 1000 > 25) {
      return -1;
    }
  }
  // Zeitdifferenz berechnen, in CM umrechnen und zurückgeben
  return (micros() - startTime) / 58.00;
}

int Ultraschall::getTriggerPin() {
  return _triggerPin;
}

int Ultraschall::getEchoPin() {
  return _echoPin;
}
