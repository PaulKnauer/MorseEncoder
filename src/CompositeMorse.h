#ifndef CompositeMorse_h
#define CompositeMorse_h

#include <LinkedList.h>
#include "Morse.h"

class CompositeMorse : public Morse {
  public:
    CompositeMorse();
    void addMorse(Morse *morse);
    virtual void dit();
    virtual void dah();
    virtual void letterSpace();
    virtual void wordSpace();
  private:
    LinkedList<Morse*> *_morseList;
};

#endif
