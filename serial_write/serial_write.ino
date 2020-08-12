#define LED_pin 13
char serialData;
void setup() {
  // put your setup code here, to run once:
  pinMode(LED_pin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() > 0) {
    serialData = Serial.read();
    Serial.print(serialData);
  }

  if(serialData == '1'){
    digitalWrite(LED_pin, HIGH);
  }
  else if(serialData == '0'){
    digitalWrite(LED_pin, LOW);
  }
  
}
