#include<Servo.h> // add servo library.
Servo myservo;  //set servo name.

void setup() {
  myservo.attach(9); // servo connect arduino pin 9.
  
}

void loop() {
  int angle; 
  for(angle = 0; angle <=180; angle+=1){
    
    myservo.write(angle); // servo rotate 0 to 180 degree 
    delay(10); // delay 10mil sec
    }
  for(angle = 180; angle>=0; angle-=1){
    myservo.write(angle); // servo rotate 180 to 0 degree
    delay(10); // delay 10mil sec
    }

}
