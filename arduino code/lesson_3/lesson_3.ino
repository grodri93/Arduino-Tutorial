#define BUTTON  2
#define LED     3

void setup() {
  pinMode(BUTTON, INPUT);
  pinMode(LED, OUTPUT);

}

void loop() {
  int button_state = digitalRead(BUTTON);
  if(button_state) {
    digitalWrite(LED, HIGH);
  }
  else {
    digitalWrite(LED, LOW);
  }
} 
