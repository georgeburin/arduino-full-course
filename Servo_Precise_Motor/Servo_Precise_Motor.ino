//servo is a motor that lets us precisely place its wing if we conect to it
//used for precise control. can connect different attachments to achive this
//used in robotics, RC cars
//center pin is power, orange-control, brown - ground

int servoPin = 9; //servo is connected to pin 9
int servoPosition=170; // this is the position in degrees we can supply to servo

//we need a library to work with a servo because its not part of the arduino
#include <Servo.h>

//need to create a servo object here in arduino to interact with
Servo myServo; //myServo is the name we give it. we choose it

void setup() {
  Serial.begin(9600);
  myServo.attach(servoPin); //add myServo to pin

}

void loop() {
  myServo.write(servoPosition);//now we make myServo go to a specified position in degrees
  //we defined it above. we can go to 0 or 90 degrees or anything else


}

//we can use this logic and a photoresistor to make the servo move 
//for this we have to convert the 10bit signal that photoresistor makes to
//an angle from 0 to 180.
//o degrees can mean sunny while 180 can mean dark

//to convert value from photoresistor to angle 
//we plot light value on x-axis and angle on the y-axis
//we find the slope of this line in the point slope form
//we get angle=(slope)(lightvalue)+(y-intercept)
//this is how you convert light value to angle
