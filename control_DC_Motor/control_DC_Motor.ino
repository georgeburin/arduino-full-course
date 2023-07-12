//https://www.youtube.com/watch?v=fPLEncYrl4Q&ab_channel=PaulMcWhorter

//L293D chip controls speed and direction
//squigly lines on pins are PWM. we want them because we can analogwrite

int speedPin = 5; //5 is the pin we connected the controller to
int dir1=4; //4 is also we connected
int dir2=3;
int mSpeed = 255;//100 need help to start spinning. 
//set speed to 255.delay. then set to 100 or below in the void loop. 

void setup() {
  pinMode(speedPin, OUTPUT);
  pinMode(dir1,OUTPUT);
  pinMode(dir2,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  digitalWrite(dir1,LOW); // this is how we specify direction of the motor
  digitalWrite(dir2,HIGH);//also for direction
  analogWrite(speedPin,mSpeed); //set the speed for the motor

}

//control DC motor with joystick: https://www.youtube.com/watch?v=wSjZIHMDczk&ab_channel=PaulMcWhorter
//control DC motor with pushbuttons: https://www.youtube.com/watch?v=fxgcnJJlTd4&ab_channel=PaulMcWhorter
