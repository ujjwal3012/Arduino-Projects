/* The code executes temperature and humidity on LCD
 * Ujjwal Bhasin - 200389272
 * 26th April, 2018
 * 1:00 p.m. 
 */
#include "DHT.h"
int DHT11Pin = 4;        //The DHT11 sensor  is connected to pin 4 of the Arduino. 
int waitTime = 5000;     //The amount of time to wait between sensor reads.
DHT dht(DHT11Pin, DHT11);//Initialize the sensor. 
//Load libraries
#include <LCD.h>
#include <LiquidCrystal_I2C.h>

//Define address for the Serial LCD display.
#define I2C_ADDR  0x3f //If 0x3f doesn't work change this to 0x27
#define BACKLIGHT_PIN  3 

//Initialise the Serial LCD.
LiquidCrystal_I2C lcd(I2C_ADDR, 2,1,0,4,5,6,7); //These pin numbers are hard coded in on the serial backpack board.


void setup(){
  lcd.begin (16,2);     //Initalize the LCD.
  lcd.setBacklightPin(3,POSITIVE);//Setup the backlight.
  lcd.setBacklight(HIGH); //Switch on the backlight.
  lcd.clear();
  dht.begin();  //Start the sensor. 
}

void loop()
{
  delay(waitTime);
  float humidity   = dht.readHumidity();  //Read the humidity value from the sensor.
  float celsius    = dht.readTemperature(); //Read the temperature (c) value from the sensor.
  
  lcd.setCursor(0,0);
  lcd.print("Temperature:");
  lcd.println(celsius);          //Display the temperature in celsius.
  lcd.setCursor(0,1);
  lcd.print("Humidity:"); 
  lcd.println(humidity);        //Display the humidity precentage.
  

}
