//MTE Lab -Simple Robotic Arm Tutorial 

#include <Servo.h>  // add servo library
 
Servo myservo;  // create servo object to control a servo
Servo myservo1; // create servo object to control a servo
 
int potpin = A1;  // analog pin used to connect the potentiometer
int potpin1 = A2; // analog pin used to connect the potentiometer

int val;    // variable to read the value from the analog pin
int val1;  // variable to read the value from the analog pin
 
void setup() {
  myservo.attach(8);  // attaches the servo on pin 8 to the servo object
  myservo1.attach(9); // // attaches the servo on pin 9 to the servo object
  
}
 
void loop() {
  val = analogRead(potpin);            // reads the value of the potentiometer (value between 0 and 1023)
  val = map(val, 0, 1023, 10, 170);    // scale it to use it with the servo (value between 10 and 170)
  myservo.write(val);                  // sets the servo position according to the scaled value
  
  delay(15);                            // waits for the servo to get there
  val1 = analogRead(potpin1);            // reads the value of the potentiometer (value between 0 and 1023)
       
  val1 = map(val1, 0, 1023, 10, 170);     // scale it to use it with the servo (value between 10 and 170)
  myservo1.write(val1);                  // sets the servo position according to the scaled value
  delay(15);                           // waits for the servo to get there
}
