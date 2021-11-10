int ldr = A0; // ldr sensor pin set A0
int led = 4; // led pin set 4 no digital pin
void setup() {
  pinMode(led, OUTPUT); // led is output
  pinMode(ldr, INPUT); // ldr is input

}

void loop() {
  int val = analogRead(ldr); // val read analog value from ldr
  if(val<=20){
    digitalWrite(led, HIGH); // led on
    }
  else{
    digitalWrite(led,LOW); // led off
    }

}
