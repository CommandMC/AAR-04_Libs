#include "Odometrie.h"

// Motorsensoren sind an Pins A0 und A1 angeschlossen,
// welche an Pins 23 und 24 am ATmega liegen.
// Pin 23 ist PC0, Pin 24 ist PC1
// Pin 23 = PCINT8, Pin 24 = PCINT9

volatile unsigned long counterA0 = 0;
volatile unsigned long counterA1 = 0;
// Da die Pullup-Wiederstände aktiviert sind, sind standardmäßig alle Pins high
volatile uint8_t portCHistory = 0xFF;
const float interruptStrecke = (3.74 * PI) / 20;

Odometrie::Odometrie() {
  // Motorsensoren an A0 und A1 als Eingang definieren
  DDRC &= ~(1 << DDC0) & ~(1 << DDC1);

  // Pullup-Wiederstände aktivieren
  PORTC |= (1 << PC0) | (1 << PC1);

  // Generell Interrupts an Interrupt Enable 1 aktivieren
  PCICR |= (1 << PCIE1);

  // Maskable Interrupts an Pins PCINT8 und PCINT9 aktivieren
  PCMSK1 |= (1 << PCINT8) | (1 << PCINT9);
}

ISR (PCINT1_vect) {
  // Die geänderten Bits mithilfe der History herausfiltern
  uint8_t changedBits = PINC ^ portCHistory;
  // Und die History updaten
  portCHistory = PINC;

  // Wenn der geänderte Bit PINC0 (Analog 0) ist und PINC0 gerade 1 ist (5V)
  if ((changedBits & (1 << PINC0)) && (PINC & (1 << PINC0))) {
    // Counter A0 updaten
    counterA0++;
  }
  if ((changedBits & (1 << PINC1)) && (PINC & (1 << PINC1))) {
    counterA1++;
  }
}

unsigned long Odometrie::getOdoLinks() {
  return counterA0;
}

unsigned long Odometrie::getOdoRechts() {
  return counterA1;
}

void Odometrie::odoReset() {
  counterA0 = 0;
  counterA1 = 0;
}

float Odometrie::getOdoLinksCM() {
  return float(counterA0 * interruptStrecke);
}

float Odometrie::getOdoRechtsCM() {
  return float(counterA1 * interruptStrecke);
}
