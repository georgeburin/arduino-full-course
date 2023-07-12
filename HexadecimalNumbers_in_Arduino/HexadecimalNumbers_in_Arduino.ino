byte myByte=0;//if you want to provide a binary number here then
// do B0000    this is 0 in binary
//if you want to specify hexadecimal then 0xAB
//AB in hex is 171 in decimal because A*16^1+B*16^0
//A-10,B-11,C-12,D-13,E-14,F-15

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(myByte,HEX);//can also do BIN to see output in binary
  myByte+=1;
  delay(500);
}
