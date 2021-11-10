int ldr = A0; // ldr set analog pin A0
void setup() {
  Serial.begin(9600);
  pinMode(ldr, INPUT); // idr is input
  Serial.println("MTE Lab Tuitorial"); // show serial monitor
 

}

void loop() {
  int val = analogRead(ldr); // val read analog value of LDR
  Serial.println(val); // ldr value show serial Monitor.
  delay(1000); // delay 1 sec

}
