#include "SpeakerMorse.h"

SpeakerMorse::SpeakerMorse(int pinNumber, int ditLength):_pinNumber(pinNumber), _ditLength(ditLength) {}

void SpeakerMorse::dit() {
  sendSymbol(_ditLength);
}

void SpeakerMorse::dah() {
  sendSymbol(_ditLength * 3);
}

void SpeakerMorse::letterSpace() {
  delay(_ditLength * 3);
}

void SpeakerMorse::wordSpace() {
  delay(_ditLength * 7);
}

void SpeakerMorse::sendSymbol(const int symbolLength) {
  tone(_pinNumber, FREQUENCY, symbolLength);
  delay(symbolLength);
  noTone(_pinNumber);
  delay(_ditLength);
}
