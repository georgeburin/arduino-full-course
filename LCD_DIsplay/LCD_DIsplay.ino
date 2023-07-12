//connect LCD like this - https://www.youtube.com/watch?v=4BaDaGTUgIY&ab_channel=PaulMcWhorter

#include <LiquidCrystal.h>
int rs=7;//set up the pins
int en=8;
int d4=9;
int d5=10;
int d6=11;
int d7=12;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7); //create lcd object using the lcd library. lcd is the name we give

void setup() {
  lcd.begin(16,2); //16-columns and 2 rows. 

}

void loop() {
  lcd.setCursor(0,0);
  lcd.print("hello dimon ");
  delay(1000);
  //lcd.clear(); //clears the lcd display

  lcd.setCursor(0,0);
  lcd.print("you are cool");
  delay(1000);
  lcd.setCursor(0,1);//second row
  lcd.print("you are cool");
  delay(1000);

  //you can make a calculator. ask for first number, second, operator
  // if (operator) then do operation and output it on the screen.


}
