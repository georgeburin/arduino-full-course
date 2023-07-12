//passive buzzer is the one with green bottom
int buzzPin=8;
int buzzTime=1;
int buzzTime2=500;


void setup() {
  pinMode(buzzPin, OUTPUT);

}

void loop() {
  //the way it works is that we have to turn it on and off quickly 
  digitalWrite(buzzPin, HIGH);
  delayMicroseconds(buzzTime2);
  digitalWrite(buzzPin, LOW);
  delayMicroseconds(buzzTime2);

}
