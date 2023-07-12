int j=1;
int waitTime = 750;
String mystring = "j = ";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);//9600 baud is where serial monitor prints things.
  //we can choose 115200
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print(mystring);//print in one line
  Serial.print(j);//print in one line then go to another one
  Serial.println(" I love code");
  j+=1;
  delay(waitTime);
}
