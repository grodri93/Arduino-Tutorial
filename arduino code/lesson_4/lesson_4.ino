#define PWM 3

void setup() {
  pinMode(PWM, OUTPUT)l
}

void loop() {
  digitalWrite(PWM, HIGH);
  delayMicroseconds(1000);
  digitalWrite(PWM, LOW);
  delayMicroseconds(1000);
}
