int redLED = 8;
float pi = 3.14;  //variable declaration 
int time=1000; 
int PinThurteen = 13;
string myname = "George Burin";

void setup() {
  // put your setup code here, to run once:
  pinMode(PinThurteen,OUTPUT); //working with pin 13, in output mode. 
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(PinThurteen,HIGH); //write to pin 13, HIGH means turn on. 5 volts
  delay(1000);  //this is a delay comand. takes in milliseconds. 1000 ms = 1 second
  digitalWrite(13, LOW); //there is an LED on the Arduino itslef.
  //to the left of the name of it 
  delay(1000);
}
