//Photoresistors. when light goes off the resistance goes up.
int lightPin=A0;
int lightVal;


void setup() {
  pinMode(lightPin,INPUT);
  Serial.begin(9600);
  pinMode(8,OUTPUT);
}

void loop() {
  lightVal=analogRead(lightPin);//this pin is connected between the resistor and photoresistor
  Serial.println(lightVal);
  delay(250);

  if (lightVal >1000){
    digitalWrite(8,HIGH);
  }
  else {
    digitalWrite(8,LOW);
  }

}
