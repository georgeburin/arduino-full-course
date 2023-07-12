/*
DHT11 is a temp and humidity sensor. need a library to use it. its not part of arduino software so cant do #include<library>
so we have to download it from the internet
*/

#include <DHT.h> //check error messages when compiling. It might be missing some dependencies. Download all of them.

#define Type DHT11 //define a constant
int sensePin = 2;
DHT HT(sensePin,Type); //create DHT object. supply what pin its connected and the type of the sensor
float temp;
float tempC;
float humidity;

#include <LiquidCrystal.h> //library for the LCD display. we can output the temperatures there
int rs=7;
int en=8;
int d4=9;
int d5=10;
int d6=11;
int d7=12;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

void setup() {
  Serial.begin(9600);
  delay(500);
  HT.begin(); //begin the sensor
  delay(500);

  lcd.begin(16,2);//begin the lcd. 16 columns, 2 rows.

}

void loop() {
  //read the temp and humidity
  humidity=HT.readHumidity();
  Serial.print("Humidity:");
  Serial.print(humidity);
  tempC=HT.readTemperature();
  Serial.print(" Temperature in Celsius:");
  Serial.print(temp);
  temp=HT.readTemperature(true); // true for Farenheight
  Serial.print(" Temperature in Farenheight:");
  Serial.println(temp);

  //output temp and humid
  lcd.setCursor(0,0);
  lcd.print("Temp C = ");
  lcd.print(tempC);
  lcd.setCursor(0,1);
  lcd.print("Humidity= ");
  lcd.print(humidity);
   lcd.print("%");



  delay(5000);

}
