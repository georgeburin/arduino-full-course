int myVoltPin = A3;
int readVal;
float V2;
int redPin = 9;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
  pinMode(myVoltPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  readVal=analogRead(myVoltPin);
  V2=(5./1023.)*readVal; //convert to actual voltage
  //Serial.print("Voltage of the potentiometer is ");
  //Serial.println(V2);
  if (V2>2.5){
    digitalWrite(redPin,HIGH);
    Serial.println("ты пидр");
  } else {
    digitalWrite(redPin,LOW);
    Serial.println("ты сука");
  }
  delay(1000);

//  || means or, && menas and. use it in the conditional statement
}
