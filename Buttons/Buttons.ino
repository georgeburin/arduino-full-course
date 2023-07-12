int LEDpin = 8;
int buttonRead;
int buttonPin = 12;
//the definitions above are for the first part of the project

int LEDstate=0;//turned off when we start
int buttonNew;
int buttonOld=1; //when we start the button is 1



void setup() {
  Serial.begin(9600);
  pinMode(LEDpin, OUTPUT);
  pinMode(buttonPin, INPUT);

}

//Serial monitor would print 1 by default. WHen we press the button 
//the serial monitor would print 0
//when you release the button its 1 again which is not pushed

void loop() {

  /*

  buttonRead=digitalRead(buttonPin);
  Serial.println(buttonRead);
  //delay(100);

  if (buttonRead == 1){
    digitalWrite(LEDpin, LOW);
  } else {
    digitalWrite(LEDpin, HIGH);
  }

  */

  //the code above will turn LED on as soon as you press the button
  //but the LED would turn off as soon as you release the button.

  buttonNew=digitalRead(buttonPin);
  Serial.println(buttonNew);
  if (buttonOld == 0 && buttonNew == 1){ //button is on, which is 0,
  //which is pressed. but then 
  //we encounter a 1 which is off which is button was released.

  //so when we release the button we check if the led was off or on before and 
  //make the LED switch its state
    if (LEDstate==0){
      digitalWrite(LEDpin, HIGH);
      LEDstate=1;
    }else {
    digitalWrite(LEDpin, LOW);
    LEDstate=0;
    }
  } 
  buttonOld=buttonNew;
  delay(100);

}


//using this logic we can connect two buttons to an arduino and an LED
//we can make a dimmable LED using analogWrite(pin,lightAmount)
//press one button and make lightAmount+=5;
//press another and make -= 5.
//in the end of the loop do analog write and that
//would make led brighter or dimmer 

//next we can connect the buzzer to the system
//if we are already at max brightness and still trying to press the button
//to increase brightness then we can make buzzer buzz to make a warning 
//that we are already at max or min brightness



//the code above was using resistors because our supply was 5 volts pin.
//we used pull up or pull down resistor to prevent output of the button to be 0 and 1 alternating
/*     google what pull up and pull down resistors are
here is what we can do without resistors in arduino:
pinMode(pin,INPUT);
digitalWrite(pin,HIGH);
then do Serial.print(); and other things to see the button working correctly

https://www.youtube.com/watch?v=ChHNI8yt69g&ab_channel=PaulMcWhorter



https://www.youtube.com/watch?v=wxjerCHCEMg&ab_channel=AddOhms
this guy explains well. 



*/



