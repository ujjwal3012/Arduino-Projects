/*
 * IRremote: IRrecvDemo - demonstrates receiving IR codes with IRrecv
 * An IR detector/demodulator must be connected to the input RECV_PIN.
 * Version 0.1 July, 2009
 * Copyright 2009 Ken Shirriff
 * http://arcfn.com
 */

#include <IRremote.h>

int RECV_PIN = 6;
int RGBRedPin = 11;  
int RGBGreenPin = 10;
int RGBBluePin = 9;


IRrecv irrecv(RECV_PIN);

decode_results results;

void setup()
{
  pinMode(RGBRedPin, OUTPUT);    
  pinMode(RGBGreenPin, OUTPUT); 
  pinMode(RGBBluePin, OUTPUT); 
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver
}

void loop() {
  if (irrecv.decode(&results)) {
    Serial.println(results.value, HEX);
    
  if(results.value == 0xFF30CF){
   digitalWrite(RGBBluePin, HIGH); 

    }
  if(results.value == 0xFF08F7){
    digitalWrite(RGBBluePin,LOW);
    } 
  if(results.value == 0xFFB04F){
    digitalWrite(RGBGreenPin, HIGH);
    
    }
  if(results.value == 0xFF8877){
    digitalWrite(RGBGreenPin, LOW); 
    }   
    if(results.value == 0xFF708F){
    digitalWrite(RGBRedPin, HIGH);
    
    }
  if(results.value == 0xFF48B7){
    digitalWrite(RGBRedPin, LOW); 
    }   
     
    
    
    irrecv.resume(); // Receive the next value
  }
  delay(100);
}
