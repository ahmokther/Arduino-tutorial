// arduino digital pin 6,5,4
int redled = 6; 
int yellowled = 5;
int greenled = 4;
void setup() {
  pinMode(redled, OUTPUT);
  pinMode(yellowled, OUTPUT);
  pinMode(greenled, OUTPUT);

}

void loop() {
  digitalWrite(redled, HIGH);
  digitalWrite(yellowled, LOW);
  digitalWrite(greenled, LOW);
  delay(8000); // 8 sec delay
  digitalWrite(redled, LOW);
  digitalWrite(yellowled, HIGH);
  digitalWrite(greenled, LOW);
  delay(3000); // 3 sec delay
  digitalWrite(redled, LOW);
  digitalWrite(yellowled, LOW);
  digitalWrite(greenled, HIGH);
  delay(5000); // 5 sec delay

}
