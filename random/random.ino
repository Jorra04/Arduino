#include <Servo.h>

// initialize the library with the numbers of the interface pins
Servo servo;

void setup() {
  servo.attach(8);
  servo.write(0);
  delay(2000);
}

void loop() {
  run_servo();
}


void run_servo(){
  servo.write(60);
  delay(500);
  servo.write(120);
  delay(500);
  servo.write(180);
  delay(1000);
  servo.write(0);
  delay(500);
//  
}
