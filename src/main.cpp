#include <Arduino.h>
#define LED_PIN 8

unsigned long time_1 = 1;
unsigned long time_2 = 0;


void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  time_1 = millis();
  digitalWrite(LED_PIN, LOW);

  while(time_2 < time_1 + 100)
  {
    time_2 = millis();
  }

  digitalWrite(LED_PIN, HIGH);
  time_1 = millis();
  while(time_2 < time_1 + 100)
  {
    time_2 = millis();
  }  
}