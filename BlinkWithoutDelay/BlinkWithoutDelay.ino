int systemOn=0;
int ledState=LOW;
unsigned long previous = 0;        // will store last time LED was updated
const long interval = 1000; 
 
int redLedPin  = 12 ;  //The red LED is connected pin 12 of the Arduino.
int blueLedPin = 13 ;  //The blue LED is connected pin 13 of the Arduino.
int button1Pin = 2;    //The SW1 button is connect to pin 2 of the Arduino.
int button2Pin = 3;    //The SW2 button is connect to pin 3 of the Arduino.
 
void setup() { //The Setup function runs once.
  pinMode(redLedPin, OUTPUT);  //Setup red LED pin as an output pin.
  pinMode(blueLedPin, OUTPUT);  //Setup blue LED pin as an output pin.
  pinMode(button1Pin, INPUT);  //Setup button1 pin as an input pin.
  pinMode(button2Pin, INPUT);  //Setup button2 pin as an input pin.
}
 
void loop() { //The loop function runs forever.
  if (digitalRead(button1Pin) == LOW) { //Check to see if button1 is pressed.
    systemOn=1;
  }
 
  if (digitalRead(button2Pin) == LOW) { //Check to see if button1 is pressed.
    digitalWrite(redLedPin, HIGH); //Turn on the red LED.
    systemOn=0;
  } else {
    digitalWrite(redLedPin, LOW);  //Turn off the red LED.
  }
  unsigned long current = millis();
 
 if (current - previous >= interval && systemOn >0) {
    previous = current;
    systemOn++;
     if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }
    if(systemOn ==10){
      systemOn=0;
    }
    digitalWrite(blueLedPin, ledState); 
 
 }
}
