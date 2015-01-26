/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the Uno and
  Leonardo, it is attached to digital pin 13. If you're unsure what
  pin the on-board LED is connected to on your Arduino model, check
  the documentation at http://arduino.cc

  This example code is in the public domain.

  modified 8 May 2014
  by Scott Fitzgerald
 */
int ledPin = 3; 
int ledPin_2= 5;
int pot= A3;
int phot= A4;
int val = 0;           // variable to store the value read
int pr=0;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(ledPin, OUTPUT);   // sets the pin as output
  pinMode(ledPin_2, OUTPUT);
  Serial.begin(9600); 
}

// the loop function runs over and over again forever
void loop() {
    val = analogRead(pot);    // read the input pin
    pr= analogRead(phot);
    analogWrite(ledPin, val / 4);
    Serial.println(val);
    analogWrite(ledPin_2, pr/4);
}

