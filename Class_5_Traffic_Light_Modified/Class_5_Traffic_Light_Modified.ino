int RYGRedPin = 11; 
int RYGYellowPin = 10;
int RYGGreenPin = 9;    
int RYGGndPin = 8;
int RYGRed1Pin = 7; 
int RYGYellow1Pin = 6;
int RYGGreen1Pin = 5;    
int RYGGnd1Pin = 4;

int waitTime = 2000;

void setup() { 
  pinMode(RYGRedPin, OUTPUT);   
  pinMode(RYGYellowPin, OUTPUT);
  pinMode(RYGGreenPin, OUTPUT);  
  pinMode(RYGGndPin, OUTPUT); 
  digitalWrite(RYGGndPin,LOW); 

  pinMode(RYGRed1Pin, OUTPUT);   
  pinMode(RYGYellow1Pin, OUTPUT);
  pinMode(RYGGreen1Pin, OUTPUT);  
  pinMode(RYGGnd1Pin, OUTPUT); 
  digitalWrite(RYGGnd1Pin,LOW); 
  
  
}

void loop() {
  

digitalWrite(RYGRedPin, HIGH); 
digitalWrite(RYGRed1Pin, HIGH);
delay(waitTime);               
digitalWrite(RYGRedPin, LOW); 
digitalWrite(RYGRed1Pin, LOW);

digitalWrite(RYGGreenPin, HIGH);
digitalWrite(RYGRed1Pin, HIGH);
delay(waitTime);
digitalWrite(RYGGreenPin, LOW);
digitalWrite(RYGRed1Pin, LOW);

digitalWrite(RYGYellowPin, HIGH);  
digitalWrite(RYGRed1Pin, HIGH);
delay(waitTime);
digitalWrite(RYGYellowPin, LOW);
digitalWrite(RYGRed1Pin, LOW);

digitalWrite(RYGRedPin, HIGH); 
digitalWrite(RYGRed1Pin, HIGH);
delay(waitTime);               
digitalWrite(RYGRedPin, LOW); 
digitalWrite(RYGRed1Pin, LOW);

digitalWrite(RYGRedPin, HIGH);
digitalWrite(RYGGreen1Pin, HIGH);
delay(waitTime);
digitalWrite(RYGRedPin, LOW);
digitalWrite(RYGGreen1Pin, LOW);

digitalWrite(RYGRedPin, HIGH);
digitalWrite(RYGYellow1Pin, HIGH);
delay(waitTime);
digitalWrite(RYGRedPin, LOW);
digitalWrite(RYGYellow1Pin, LOW);



}
