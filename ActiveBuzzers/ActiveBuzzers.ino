//active buzzers are easy just apply 5 volts to them and it buzzes
//active buzzers are the once with black bottoms
//passive buzzers are different
//passive buzzers are the one with green bottoms

int myNumb;
int buzzPin = 8;

void setup() {
  Serial.begin(9600);
  pinMode(buzzPin,OUTPUT);
  
}

void loop() {
  Serial.println("Input your number");
  while (Serial.available() == 0){
    //wait until there is data from the user
  }

  myNumb = Serial.parseInt();
  
  if (myNumb >10) {
    digitalWrite(buzzPin, HIGH);
    delay(2000);
    digitalWrite(buzzPin, LOW);
  }

  //you can also get some sort of a tone from an active buzzer by
  //making it buzz but then doing a delay of 1 ms
  //another tone can be done with a delay of 2 ms
  //al of this doesnt provice a clear tone so we have to use passive buzzer

}
