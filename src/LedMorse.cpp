#include "LedMorse.h"

LedMorse::LedMorse(int pinNumber, int ditLength):_pinNumber(pinNumber), _ditLength(ditLength) {
  pinMode(_pinNumber, OUTPUT);
}

void LedMorse::dit() {
  sendSymbol(_ditLength);
}

void LedMorse::dah() {
  sendSymbol(_ditLength * 3);
}

void LedMorse::letterSpace() {
  delay(_ditLength * 3);
}

void LedMorse::wordSpace() {
  delay(_ditLength * 7);
}

void LedMorse::sendSymbol(const int symbolLength) {
  digitalWrite(_pinNumber, HIGH);
  delay(symbolLength);
  digitalWrite(_pinNumber, LOW);
  delay(_ditLength);
}
