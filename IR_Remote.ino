#include <IRremote.h>
int IRpin=9;
IRrecv IR(IRpin);
decode_results result;//this is old. it has depreciated. 
int long cmd;
int led=6;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  IR.enableIRIn();
  pinMode(led,OUTPUT);
}

void loop() {
  //this one works
  if (IR.decode()){
    cmd=IR.decodedIRData.decodedRawData;
    Serial.println(cmd,HEX);
    delay(1500);
    IR.resume();

    if (cmd == 0xE916FF00){
      digitalWrite(led,HIGH);
    }
    if (cmd == 0xF30CFF00){
      digitalWrite(led,LOW);
    }
  }  
}
