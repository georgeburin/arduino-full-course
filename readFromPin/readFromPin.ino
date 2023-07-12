int readPin = A3;
float V2=0;
int readVal;
// this program reads analog voltage from pin A3 which is analog in pin. 
// it also converts it to actual voltage and outputs it
void setup() {
  // put your setup code here, to run once:
  pinMode(readPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  readVal=analogRead(readPin); //read the analog voltage in this pin
  V2=(5./1023.)*readVal; // convert 10bit number that we are getting from analogRead() to actual voltage
  Serial.println(V2);// outputting this number to the console screen
  delay(500); 
// 5 volts is 1023 which is a 10 bit number
// 0 volts is 0 in the analogRead(). We want to convert to actual voltage
// the slope is 5./1023. we do calculation like this because without dots these numbers are just integers. 
// You would get an integer in the end. we want decimal
// 
// now the console shows us real actual voltage.
}
