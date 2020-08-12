



const int buttonPin = 2;     // the number of the pushbutton pin
const int LED_pin = 13;

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status
boolean is_on = false;
void setup() {
  // initialize the pushbutton pin as an input:
  Serial.begin(9600);
  
  pinMode(buttonPin, INPUT);
  pinMode(LED_pin, OUTPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    if(is_on){
      digitalWrite(LED_pin, LOW);
      is_on = false;
    }
    else {
      digitalWrite(LED_pin, HIGH);
      is_on = true;
    }
    
  }
  delay(100);
}
