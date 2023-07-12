int tiltPin=2;
int tiltVal;

void setup() {
  pinMode(tiltPin,INPUT);
  digitalWrite(tiltPin,HIGH); //this is how we wake an internal pull up resistor
  Serial.begin(9600);


}

void loop() {
  tiltVal=digitalRead(tiltPin);
  Serial.println(tiltVal);
  //outputs 1 if it is being tilted. 0 if not tilted

}
