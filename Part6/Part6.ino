  #include <Servo.h>
  
  // the setup function runs once when you press reset or power the board
  
  Servo myservo;
  int a = 0;
  int i = 0;
  
  void setup() {
    // initialize digital pin 13 as an output.
  
    myservo.attach(3);
    myservo.write(40);  // set servo to mid-point
    
  } 
  
  
  
  // the loop function runs over and over again forever
  void loop() {
    a = 0;
    while(a < 500){
    digitalWrite(9, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(1.3);              // wait for a second
    digitalWrite(9, LOW);    // turn the LED off by making the voltage LOW
    delay(20);    // wait for a second
    a += 25;
    }
    i = 0;
    myservo.write(130);
    while(i < 500){
    digitalWrite(9, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(1.3);              // wait for a second
    digitalWrite(9, LOW);    // turn the LED off by making the voltage LOW
    delay(20);              // wait for a second
    i += 25;
    }
    myservo.write(40);
  }
