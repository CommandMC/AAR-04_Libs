#pragma once

#include <Arduino.h>

const int tgrL = 6;
const int echoL = A2;
const int tgrR = 8;
const int echoR = 4;

class Ultraschall {
public:
  Ultraschall(int triggerPin, int echoPin);
  float getDistance();
  int getTriggerPin();
  int getEchoPin();
private:
  int _triggerPin;
  int _echoPin;
};
