//HC-SR04 Sensor is the depth sensor https://www.youtube.com/watch?v=M-UKXCUI0rE&ab_channel=PaulMcWhorter
int trigpin=12;
int echopin=11;
int pingtraveltime;

void setup() {
  // put your setup code here, to run once:
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigpin,LOW);
  delayMicroseconds(10);
  digitalWrite(trigpin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin,LOW);
  pingtraveltime=pulseIn(echopin,HIGH);
  delay(250);
  Serial.println(pingtraveltime);
  //using this data. use a slope. get the actual distance. 
}
