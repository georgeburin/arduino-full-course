int i=0;
int j=7;

void setup() {
  // put your setup code here, to run once:
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (i=0;i<j;i++){
    digitalWrite(5, HIGH);
    Serial.println("doing first loop");
    delay(750);
    digitalWrite(5, LOW);
  }
  for (i=0;i<j;i++){
    digitalWrite(6, HIGH);
    Serial.println("doing second loop");
    delay(750);
    digitalWrite(6, LOW);    
  }
}
