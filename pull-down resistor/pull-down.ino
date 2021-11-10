void setup() {
  pinMode(8,OUTPUT); // pin 8 is led 
  pinMode(4,INPUT);  // pin 4 is push buttom

}

void loop() {
  int val = digitalRead(4);
  if(val == HIGH){
    digitalWrite(8,HIGH);
    }
  else{
    digitalWrite(8,LOW);
    }
  

}
