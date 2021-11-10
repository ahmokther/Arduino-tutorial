int pot = A0; // set pot pin ardunio A0 pin
void setup() {
 Serial.begin(9600);
 pinMode(pot,INPUT); // pot is input.
 Serial.println("MTE Lab Tuitorial"); // mte lab tuitorial show serial monitor.

}

void loop() {
  int val = analogRead(pot); // val read pot analog value.
  Serial.println(val); // Serial monitor show pot value.
  delay(1000); // delay 1 sec

}
