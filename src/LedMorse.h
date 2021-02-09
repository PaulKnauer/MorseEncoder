#ifndef LedMorse_h
#define LedMorse_h

#include "Arduino.h"
#include "Morse.h"

class LedMorse : public Morse {
  public:
    LedMorse(int pinNumber, int ditLength);
    virtual void dit();
    virtual void dah();
    virtual void letterSpace();
    virtual void wordSpace();
  private:
    int _pinNumber;
    int _ditLength;
    void sendSymbol(const int delay);
};

#endif
