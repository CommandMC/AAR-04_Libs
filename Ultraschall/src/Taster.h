#pragma once

#include <Arduino.h>

class Taster {
public:
  Taster(int tasterPin);
  unsigned long getAnzahlBetaetigt();
  void resetAnzahlBetaetigt();
private:
  static void setAnzahlBetaetigt();
  int _tasterPin;
};
