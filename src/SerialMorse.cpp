#include "SerialMorse.h"
#include "Arduino.h"

SerialMorse::SerialMorse(int baudRate) {
  Serial.begin(baudRate);
}

void SerialMorse::dit() {
  Serial.print(".");
}

void SerialMorse::dah() {
  Serial.print("-");
}

void SerialMorse::letterSpace() {
  Serial.print(" ");
}

void SerialMorse::wordSpace() {
  Serial.println();
}
