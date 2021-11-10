void setup() {
  pinMode(7,OUTPUT); // buzzer pin 7
  pinMode(6,INPUT); // push button pin 6

}

void loop() {
  int val = digitalRead(6); // read value HIGH OR LOW
  if(val == HIGH){
    digitalWrite(7,HIGH); // buzzer on
    delay(2000); // buzzer on 2sec 
    }
  else{
    digitalWrite(7,LOW); // buzzer off
    }
   

}
