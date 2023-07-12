//https://www.youtube.com/watch?v=n3qmQHzcgto&ab_channel=PaulMcWhorter   - this is how you wire it
//https://www.youtube.com/watch?v=FwiKHHUbuLI&ab_channel=PaulMcWhorter

//https://www.youtube.com/watch?v=Ys2fu4NINrA&ab_channel=DroneBotWorkshop  -- good explanation

//74HC595 (serial in parallel out)  is used to expand the number of digital outputs in the arduino.

int latchPin=11; //pins we use to write things to
int clockPin=9;
int dataPin=12;
int dt=250; //delay time
 
byte LED1s=0b10101010;
byte LED2s=0b01010101;
 
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(latchPin,OUTPUT); //we are writing to these pins
  pinMode(dataPin,OUTPUT);
  pinMode(clockPin,OUTPUT);
}
 
void loop() {
  digitalWrite(latchPin,LOW);  //latch pin low means data incoming to the chip
  shiftOut(dataPin,clockPin,LSBFIRST,LED1s);//sending data to the chip. dataPin-from what pin on arduino we are writing 
//to the chip. clockPin - just specify what pin on arduino is doing the clocking. Dont worry about it that much.
// LSBFIRST - here we specify if we are writing to the LSBFIRST first, then we provide the binary we are sending.
  digitalWrite(latchPin,HIGH); //lathch pin high means no data incoming to the chip.
  delay(dt);


//repeat the process, but specify a different binary number. 
  digitalWrite(latchPin,LOW);
  shiftOut(dataPin,clockPin,LSBFIRST,LED2s);
  digitalWrite(latchPin,HIGH);
  delay(dt);
}

//as we can see the the 8 bit numbers we supplied to the chip it then outputs to each LED.
//So we have 8 LED's connected in a line to a chip. We supply 11111111 to the chip. this means that each LED is going to light up
//we can also supply this number in hexadecimal 0xff is 0b11111111

//how to do binary counter?
//do all code about but in the end add this line:
//LED1+=1;

/*
https://www.youtube.com/watch?v=3JDgL9rgVb0&ab_channel=PaulMcWhorter
logical shift right is simply take a binary number and divide it by 2
LSB is lost and we get a zero in the front of the number
so you get:
1010101
0101010
0010101
0001010
0000101
0000010
0000001
0000000
if we implement this in code and hardware then LED's would turn off from left to right
given that the starting number was 11111111

samilar thing for logical left shift. But this time we multiply the binary number by 2
if we implement this in code and hardware then LED's would turn off from right to left
*/

/*
how to do circular shift left - https://www.youtube.com/watch?v=-WDO4mi2I68&ab_channel=PaulMcWhorter
insted of just dividing the binary number by 2 we do the following
myByte=myByte/128+myByte*2;

divide by 128 because we want to shift MSB to LSB and myByte*2 is because we want to shift the rest to the left
*/

/*
how to invert a binary number?
myByteFlipped=255-myByte
*/
