#include <Servo.h>

Servo servoRight;
Servo servoLeft;

void setup() {
  // put your setup code here, to run once:
  servoLeft.attach(13); //pin number 13 and 12
  servoRight.attach(12);
  servoLeft.writeMicroseconds(1300); //number between 1000-2000 
  servoRight.writeMicroseconds(1700); //1500 is rest and 1300 is turn left while 1700 is turn right (can go all the way to 1000 or 2000)
  delay(5000);
  servoLeft.writeMicroseconds(1300);
  servoRight.writeMicroseconds(1300);
  delay(1000);
  servoLeft.writeMicroseconds(1300); 
  servoRight.writeMicroseconds(1700);

  servoLeft.writeMicroseconds(1500);
  servoRight.writeMicroseconds(1500);
}

void stopServos(){
  servoLeft.writeMicroseconds(1500);
  servoRight.writeMicroseconds(1500);
}

void loop() {
  // put your main code here, to run repeatedly:

}



