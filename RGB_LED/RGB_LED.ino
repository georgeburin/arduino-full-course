  //RGB LED is the LED with 4 legs. Longest - ground. Now look at how
  //much legs are to the left and right of this long leg
  //if the only one below is single short then it is RED
  //now two remains on top.
  //the one closest to the long one that is not RED is GREEN
  //the furhest one on the side whese you see two short is BLUE 

  //connect current limiting resistors to each leg that is not ground


/*
    ARDUINO RGB LED TUTORIAL: RAINBOW COLOR
    By: TheGeekPub.com
    More Arduino Tutorials: https://www.thegeekpub.com/arduino-tutorials/
*/
 
const int PIN_RED   = 8; //Red LED on pin 9
const int PIN_GREEN = 9; //Green LED on pin 10
const int PIN_BLUE  = 10; //Blue LED on Pin 11
 
//variables to hold our color intensities and direction
//and define some initial "random" values to seed it
int red             = 254;
int green           = 1;
int blue            = 127;
int red_direction   = -1;
int green_direction = 1;
int blue_direction  = -1;
 
/* This function "Set Color" will set the color of the LED
   rather than doing it over and over in the loop above. */
void setColor(int R, int G, int B) {
  analogWrite(PIN_RED,   R);
  analogWrite(PIN_GREEN, G);
  analogWrite(PIN_BLUE,  B);
}
 
void setup() {
  //set all three pins to output mode
  pinMode(PIN_RED,   OUTPUT);
  pinMode(PIN_GREEN, OUTPUT);
  pinMode(PIN_BLUE,  OUTPUT);
}
 
 
void loop() {
  red = red + red_direction;   //changing values of LEDs
  green = green + green_direction;
  blue = blue + blue_direction;
 
  //now change direction for each color if it reaches 255
  if (red >= 255 || red <= 0)
  {
    red_direction = red_direction * -1;
  }
  if (green >= 255 || green <= 0)
  {
    green_direction = green_direction * -1;
  }
  if (blue >= 255 || blue <= 0)
  {
    blue_direction = blue_direction * -1;
  }
  setColor(red, green, blue);
  delay(5);    //a little delay is needed so you can see the change
}
























