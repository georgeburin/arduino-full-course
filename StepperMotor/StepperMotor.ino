//stepper motors are precise. they know where they are in space. used in 3d printer 

#include <Stepper.h>

int stepsPerRevolution=2048;
Stepper myStepper(stepsPerRevolution, 8,9,10,11); //those are the pins we conneting it to
int motSpeed = 10; //this number is in rpm

void setup() {
  Serial.begin(9600);
  myStepper.setSpeed(motSpeed);
}

void loop() {
  myStepper.step(stepsPerRevolution);//make 1 revolution in the positive direction  
  delay(500);
  myStepper.step(-stepsPerRevolution);
  delay(500);

}

// https://www.youtube.com/watch?v=CEz1EeDlpbs&ab_channel=PaulMcWhorter
