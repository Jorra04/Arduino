#include <Servo.h>

Servo servo;
int servo_pin = 13;
int i;
void setup() {
  // put your setup code here, to run once:
  servo.attach(servo_pin);
  servo.write(0);
  i = 0;
}

void loop() {
  // put your main code here, to run repeatedly:
  for(i=10; i <= 180; i+=10){
    servo.write(i);
    delay(100);
  }

  for(i=180; i >=0; i-=10){
    servo.write(i);
    delay(100);
  }
}
