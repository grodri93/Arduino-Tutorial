#define SERVO 5

Servo myservo;

void setup() {
  myservo.attach(SERVO);
  myservo.write(0);
}

void loop() {
  for (int pos = 0; pos <= 180; pos += 1) {
    myservo.write(pos); 
    delay(15);
  }
  for (int pos = 180; pos >= 0; pos -= 1) { 
    myservo.write(pos);              
    delay(15);                       
  }
}
