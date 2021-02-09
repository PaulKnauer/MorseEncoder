#include "MorseEncoder.h"

char* LETTERS[] = {
  ".-", "-...", "-.-.", "-..", ".",
  "..-.", "--.", "....", "..", ".---", 
  "-.-", ".-..", "--", "-.", "---",
  ".--.", "--.-", ".-.", "...", "-",
  "..-", "...-", ".--", "-..-", "-.--",
  "--.."
};

char* DIGITS[] = {
  "-----", ".----", "..---", "...--", 
  "....-", ".....", "-....", "--...", 
  "---..", "----."
};

MorseEncoder::MorseEncoder(Morse *morse):_morse(morse) {}

void MorseEncoder::encodeMessage(String *message) {
  for (int i = 0; i < message->length(); i++) {
    const char currentChar = toupper(message->charAt(i));
    if (isalpha(currentChar)) {
      sendCode(LETTERS[currentChar - 'A']);
    } else if (isdigit(currentChar)) {
      sendCode(DIGITS[currentChar - '0']);
    } else if (currentChar == ' ') {
      _morse->wordSpace();
    }
  }
  _morse->wordSpace();
}

/* Private Method */
void MorseEncoder::sendCode(const char *code) {
  for (int i = 0; i < strlen(code); i++) {
    if (code[i] == '.') {
      _morse->dit();
    } else if (code[i] == '-') {
      _morse->dah();
    }
  }
  _morse->letterSpace();
}
