#ifndef SerialMorse_h
#define SerialMorse_h

#include "Morse.h"

class SerialMorse : public Morse {
  public:
    SerialMorse(int baudRate);
    virtual void dit();
    virtual void dah();
    virtual void letterSpace();
    virtual void wordSpace();
};

#endif
