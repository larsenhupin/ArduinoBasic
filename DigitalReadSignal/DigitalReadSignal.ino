/*
  DigitalReadSerial

  Reads a digital input on pin 2, prints the result to the Serial Monitor
*/


int pushButton = 4; // digital pin 2 has a pushbutton attached to it 

void setup() {
  
  Serial.begin(9600); // initialize serial communication at 9600 bits per second
  pinMode(pushButton, INPUT);  // make the pushbutton's pin an input

}

void loop() {
  
  int buttonState = digitalRead(pushButton);
  Serial.println(buttonState);
  delay(1);
}
