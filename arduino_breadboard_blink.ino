// Do not remove the include below
#include "arduino_breadboard_blink.h"

const int ledPin =  13;

//The setup function is called once at startup of the sketch
void setup() {
  Serial.begin(9600);
  Serial.print("Start");
  pinMode(ledPin, OUTPUT);
  pinMode(12, INPUT);
}

// The loop function is called in an endless loop
void loop() {
  digitalWrite(ledPin, HIGH); // turn the LED on (HIGH is the voltage level)
  delay(1000);                 // wait for a second
  digitalWrite(ledPin, LOW);  // turn the LED off by making the voltage LOW
  delay(1000);                 // wait for a second
  Serial.println(digitalRead(12));
}
