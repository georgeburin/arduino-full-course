int myNumber;
String msg="Please enter your number";
String msg2 = "Your number is ";

String askUser="What is your string?";
String msg3;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  //pinMode();
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  while(Serial.available()== 0){ //this waits for the user to input data

  }
  myNumber = Serial.parseInt(); //we are getting an integer from the user
  //can also do .parseFloat();
  Serial.print(msg2);
  Serial.println(myNumber);
  delay(1000);
//this above is to get int from user. make sure "no line ending" in the serial monitor when you type in the string



//Now lets get string from the user 
  Serial.println(askUser);
  while(Serial.available()== 0){ //this waits for the user to input data
  //looping until data is available; doing nothing here
  }
  msg3 = Serial.readString();//this gets the string from the user
  Serial.println("your string is: "+msg3);


}

//we can ask the user what color LED does he want to light up
//Now we can implement this 
//ask user for string
//if (color == "red"){
//light up an LED
//}
//not going to do it though.
