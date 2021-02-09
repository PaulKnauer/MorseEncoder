#include "CompositeMorse.h"

CompositeMorse::CompositeMorse():_morseList(new LinkedList<Morse*>()) {}

void CompositeMorse::addMorse(Morse *morse) {
  _morseList->add(morse);
}

void CompositeMorse::dit() {
  Morse *morse;
  for (int i = 0; i < _morseList->size(); i++) {
    morse = _morseList->get(i);
    morse->dit();
  }
}

void CompositeMorse::dah() {
  Morse *morse;
  for (int i = 0; i < _morseList->size(); i++) {
    morse = _morseList->get(i);
    morse->dah();
  }
}

void CompositeMorse::letterSpace() {
  Morse *morse;
  for (int i = 0; i < _morseList->size(); i++) {
    morse = _morseList->get(i);
    morse->letterSpace();
  }
}

void CompositeMorse::wordSpace() {
  Morse *morse;
  for (int i = 0; i < _morseList->size(); i++) {
    morse = _morseList->get(i);
    morse->wordSpace();
  }
}
