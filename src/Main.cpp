#include "LedMorse.h"
#include "SpeakerMorse.h"
#include "SerialMorse.h"
#include "CompositeMorse.h"
#include "MorseEncoder.h"

#define LED_PIN 13
#define SPEAKER_PIN 8
#define DIT_LENGTH 50
#define BAUD_RATE 9600

LedMorse *led = new LedMorse(LED_PIN, DIT_LENGTH);
SpeakerMorse *speaker = new SpeakerMorse(SPEAKER_PIN, DIT_LENGTH);
SerialMorse *serial = new SerialMorse(BAUD_RATE);
CompositeMorse *composite = new CompositeMorse();
MorseEncoder encoder(composite);

void setup() {
  Serial.begin(BAUD_RATE);
  composite->addMorse(led);
  composite->addMorse(speaker);
  composite->addMorse(serial);
  encoder.encodeMessage(new String("K"));
}

void loop() {
  if (Serial.available() > 0) {
    String *message = new String(Serial.readString());
    Serial.println(*message);
    encoder.encodeMessage(message);
    Serial.flush();
  }
}
