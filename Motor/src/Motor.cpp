#include "Motor.h"

Motor::Motor(int anschlussVor, int anschlussRueck) {
  pinMode(anschlussVor, OUTPUT);
  pinMode(anschlussRueck, OUTPUT);
  _anschlussVor = anschlussVor;
  _anschlussRueck = anschlussRueck;
}

void Motor::setMotorPower(int pwm) {
  if (pwm) {
    if (pwm > 0) {
      // Vorwärts fahren
      analogWrite(_anschlussVor, pwm);
      digitalWrite(_anschlussRueck, LOW);
    } else {
      // Rückwärts fahren
      digitalWrite(_anschlussVor, LOW);
      analogWrite(_anschlussRueck, abs(pwm));
    }
  } else {
    // Bremsen
    digitalWrite(_anschlussVor, HIGH);
    digitalWrite(_anschlussRueck, HIGH);
  }
}

void Motor::leerlauf() {
  digitalWrite(_anschlussVor, LOW);
  digitalWrite(_anschlussRueck, LOW);
}
