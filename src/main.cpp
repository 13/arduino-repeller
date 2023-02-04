#include <Arduino.h>

const int PIR_PIN = 2;     // Pin that the PIR sensor is connected to
const int SPEAKER_PIN = 9; // Pin that the piezo speaker is connected to
const int TONE_HZ = 10000; // 20000 - 40000
const int TONE_DURATION = 2000;

void setup()
{
  pinMode(PIR_PIN, INPUT);
  pinMode(SPEAKER_PIN, OUTPUT);
}

void loop()
{
  //if (digitalRead(PIR_PIN) == HIGH)
  //{                                 // If PIR sensor is triggered
    tone(SPEAKER_PIN, TONE_HZ, TONE_DURATION); // Play a 2kHz tone for 10,000 milliseconds (10 seconds)
    //noTone(SPEAKER_PIN);
  //}
  delay(10000);
}