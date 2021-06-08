#pragma once

#include <Arduino.h>

const int WS_LEFT = A0, WS_RIGHT = A1;

extern volatile unsigned long _counter_LEFT, _counter_RIGHT;

class Odometrie {
public:
  Odometrie();
  static unsigned long getOdoLinks();
  static unsigned long getOdoRechts();
  static void odoReset();
  float getOdoLinksCM();
  float getOdoRechtsCM();
};
