#define s_pin 13
#include <Servo.h>
String serialData;
int angle;
int i;
Servo servo;
void setup() {
  // put your setup code here, to run once:
  servo.attach(s_pin);
  Serial.begin(9600);
  servo.write(0);
  Serial.setTimeout(10);
}

void loop() {
  // put your main code here, to run repeatedly:
  while (!Serial.available()) {} // wait for data to arrive
  // serial read section
  while (Serial.available())
  {
    serialData = Serial.readString();
  }


  if(serialData == "Hello"){
    survey();
  }
  Serial.println(serialData);
}

void survey(){
  for(i=0; i <= 180; i+=10){
    servo.write(i);
    delay(100);
  }

  for(i=180; i >=0; i-=10){
    servo.write(i);
    delay(100);
  }
}
