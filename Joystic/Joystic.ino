//Joysctic is two potentiometers combined together one in x directions one for y directions
//in the start it is 512 in the center for both x and y axis. because potentiometer gives 10 bin number

int Xpin = A0;
int Ypin = A1;
int Spin = A2; //this is a switch on the joystic  
int Xval;
int Yval;
int Sval;

int servoPin = 9;
int servoPosition=0;

#include <Servo.h>

Servo myServo;

void setup() {
  Serial.begin(9600);
  pinMode(Xpin,INPUT);
  pinMode(Ypin,INPUT);
  pinMode(Spin, INPUT);

  digitalWrite(Spin,HIGH);

  myServo.attach(servoPin);

}

void loop() {
  Xval = analogRead(Xpin);
  Yval = analogRead(Ypin);
  Sval = digitalRead(Spin); //because it is a 1 or 0 digit output
  //delay(200);
  Serial.print("X Value =");
  Serial.print(Xval);
  Serial.print(" Y value =");
  Serial.print(Yval);
  Serial.print(" Switch value=");
  Serial.println(Sval);

//can connect a servo and control it with a joystic
  servoPosition=(90./523.)*Xval;
  myServo.write(servoPosition);
}
