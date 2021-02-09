#ifndef SpeakerMorse_h
#define SpeakerMorse_h

#define FREQUENCY 1000

#include "Arduino.h"
#include "Morse.h"

class SpeakerMorse : public Morse {
  public:
    SpeakerMorse(int pinNumber, int ditLength);
    virtual void dit();
    virtual void dah();
    virtual void letterSpace();
    virtual void wordSpace();
  private:
    int _pinNumber;
    int _ditLength;
    void sendSymbol(const int symbolLength);
};

#endif
