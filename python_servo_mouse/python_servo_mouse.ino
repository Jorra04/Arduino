#define s_pin 13
#define s1_pin 12
#include <Servo.h>
String serialData;

Servo servoX;
Servo servoY;

void setup() {
  // put your setup code here, to run once:
  servoX.attach(s_pin);
  Serial.begin(9600);
  servoX.write(0);
  Serial.setTimeout(10);
  servoY.attach(s1_pin);
  servoY.write(0);
}

void loop() {

  while (!Serial.available()) {} // wait for data to arrive
  // serial read section
  while (Serial.available())
  {
    serialData = Serial.readString();
  }

  Serial.println(serialData);

  servoX.write(parseServoX(serialData));
  servoY.write(parseServoY(serialData));
  
}


int parseServoX(String x){
  x.remove(x.indexOf("Y"));
  x.remove(x.indexOf("X"),1);
  return x.toInt();
}
int parseServoY(String y){
  y.remove(0,y.indexOf("Y") +1);

  return y.toInt();
}
