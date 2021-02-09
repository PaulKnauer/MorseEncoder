#ifndef MorseEncoder_h
#define MorseEncoder_h

#include <ctype.h>
#include "Morse.h"
#include "Arduino.h"

class MorseEncoder {
  public:
    MorseEncoder(Morse *morse);
    void encodeMessage(String *message);
  private:
    void sendCode(const char *code);
    Morse *_morse;
};

#endif
