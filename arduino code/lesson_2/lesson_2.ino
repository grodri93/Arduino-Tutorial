#define LED 3
#define BAUD_RATE 9600
int prev_time = 0;
int previousMillis = 0;
const long interval = 1000;

void setup() {
  
  Serial.begin(BAUD_RATE);
  pinMode(LED, OUTPUT);
}

void loop() {
  if(timePassed(prev_time, 1000)) {
    toggle(LED);
  }

}

void blinkDelay(int pin, int interval) {
  digitalWrite(pin, HIGH);
  delay(interval);
  digitalWrite(pin, LOW);
  delay(interval);
  
}

void toggle(int pin) {
  int state = digitalRead(pin);
  digitalWrite(pin, !state);
  
}

int timePassed(int previous_millis, int max_time) {
   int time_passed = millis() - previous_millis;
  // Serial.println(time_passed);
   if(time_passed >= max_time) {
     prev_time = millis();
     return 1;
   }

   else {
     return 0;
   }
}
