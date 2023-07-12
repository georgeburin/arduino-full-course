int redPin = 9;


void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(redPin,128);   //now we can put values in between HIGH and LOW
//Second parameter is a number from 0 to 255. 0=0volts, 255=5volts
// this is 8 bits. numbers from 0 to 255. 256 numbers. 2^8.
// analogWrite(); outputs Direct Current. We can use osciloscope to check it out
// when we do 255 the osciliscope would just give straight line of 5v
//but when we do 127 then arduiono would use PWM - Pulse with modulation
//half the time its 5 volts, another half its 0 volts. on average is 2.5 volts 
//which is 127 that we specified in the alanlogWrite();

//if we do a low value then most of the time its 0 volts and just a little of 5 volts
  delay(1000);
  analogWrite(redPin,255);
  delay(1000);
}
