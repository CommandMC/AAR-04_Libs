#include "Taster.h"

volatile unsigned long _taster_counter = 0;
volatile unsigned long _taster_time = 0;

Taster::Taster(int tasterPin) {
  pinMode(tasterPin, INPUT_PULLUP);
  _tasterPin = tasterPin;
  attachInterrupt(digitalPinToInterrupt(tasterPin), setAnzahlBetaetigt, FALLING);
}

void Taster::setAnzahlBetaetigt() {
  if (millis() <= _taster_time + 100)
    return;

  _taster_counter++;
  _taster_time = millis();
}

unsigned long Taster::getAnzahlBetaetigt() {
  return _taster_counter;
}

void Taster::resetAnzahlBetaetigt() {
  _taster_counter = 0;
}
