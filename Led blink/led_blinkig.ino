void setup() {
  pinMode(6,OUTPUT);

}

void loop() {
  digitalWrite(6, HIGH); // led on
  
  delay(1000); // 1000ms or 1 sec delay
  
  digitalWrite(6, LOW); // led off

  delay(1000);

}
