#pragma once

#include <Arduino.h>

const int WS_LEFT = A0, WS_RIGHT = A1;

extern volatile unsigned long _counter_LEFT, _counter_RIGHT;

class Odometrie {
public:
  Odometrie();
  Odometrie(int WS_LEFT, int WS_RIGHT);
  unsigned long getOdoLinks();
  unsigned long getOdoRechts();
  void odoReset();
  float getOdoLinksCM();
  float getOdoRechtsCM();
private:
  static void zaehlFunktionLinks();
  static void zaehlFunktionRechts();
  int _WS_LEFT;
  int _WS_RIGHT;
};
