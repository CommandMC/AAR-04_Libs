#include "Odometrie.h"
#include <EnableInterrupt.h>

volatile unsigned long _counter_LEFT = 0, _counter_RIGHT = 0;

Odometrie::Odometrie() {
  Odometrie(WS_LEFT, WS_RIGHT);
}

Odometrie::Odometrie(int WS_LEFT, int WS_RIGHT) {
  _WS_LEFT = WS_LEFT;
  _WS_RIGHT = WS_RIGHT;
  enableInterrupt(_WS_LEFT, zaehlFunktionLinks, RISING);
  enableInterrupt(_WS_RIGHT, zaehlFunktionRechts, RISING);
}

unsigned long Odometrie::getOdoLinks() {
  return _counter_LEFT;
}

unsigned long Odometrie::getOdoRechts() {
  return _counter_RIGHT;
}

void Odometrie::odoReset() {
  _counter_LEFT = 0;
  _counter_RIGHT = 0;
  return;
}

float Odometrie::getOdoLinksCM() {
  return float(_counter_LEFT * 0.5874605);
}

float Odometrie::getOdoRechtsCM() {
  return float(_counter_RIGHT * 0.5874605);
}

void Odometrie::zaehlFunktionLinks() {
  _counter_LEFT++;
}

void Odometrie::zaehlFunktionRechts() {
  _counter_RIGHT++;
}
