// One line comment
    /* Multi
       line
       comment
     */
#define BAUD_RATE 9600

String message = "hi";
char a = 'a';
int num = 1;
float number = 1.0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(BAUD_RATE);
  while (!Serial);           // only needed for this arduino type
  Serial.println("Hello World! (from setup)");
}

void loop() {
  // put your main code here, to run repeatedly:
  int val_read; 

  if(Serial.available()) {

    val_read = Serial.read() - '0';   // Serial.read() returns a char, converts char to int type
    
    if(val_read == 1) {
      Serial.println("You pressed 1");
    }

    else {
      Serial.println("You did not press 1");
    }
   }
}

void printStuff() {
  Serial.println("Hello World! (from loop)");

  Serial.println(message);
  Serial.println(a);
  Serial.println(num);
  Serial.println(number);
  Serial.println("hi");
  Serial.println(1 + 2);
}

