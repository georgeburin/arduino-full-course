int i;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  i=1;
  while(i<=10){
    Serial.println("it is an infinite loop");
    //can do cool code here
  }
}
