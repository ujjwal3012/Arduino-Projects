int systemOn=0;
int ledState=LOW;
unsigned long previous = 0;
const long interval= 1000;

int RGBRedPin  = 9 ;  //The red LED is connected pin 12 of the Arduino.
int RGBGreenPin = 10 ;//The blue LED is connected pin 13 of the Arduino.
int RGBBluePin =11; 
int button1Pin = 2;    //The SW1 button is connect to pin 2 of the Arduino.


void setup() { //The Setup function runs once.
  pinMode(RGBRedPin, OUTPUT);  //Setup red LED pin as an output pin.
  pinMode(RGBGreenPin, OUTPUT);  //Setup blue LED pin as an output pin.
  pinMode(button1Pin, INPUT);  //Setup button1 pin as an input pin.
  pinMode(RGBBluePin, OUTPUT);  //Setup button2 pin as an input pin.
}

void loop() { //The loop function runs forever.

  if (digitalRead(button1Pin) == LOW) { //Check to see if button1 is pressed.
  
  digitalWrite(RGBRedPin, HIGH);
  delay(1000);
  digitalWrite(RGBRedPin, LOW);
   digitalWrite(RGBGreenPin, HIGH);
  delay(1000);
   digitalWrite(RGBGreenPin, LOW);
   digitalWrite(RGBBluePin, HIGH);
  delay(1000);
  digitalWrite(RGBBluePin, LOW);

  } else {
digitalWrite(RGBRedPin, LOW);
digitalWrite(RGBGreenPin, LOW);
digitalWrite(RGBBluePin, LOW);
  }
}
  
