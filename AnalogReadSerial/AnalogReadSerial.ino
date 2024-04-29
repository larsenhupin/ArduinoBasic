void setup() {
  Serial.begin(9600); // Read 9600 bits per seconds
}

void loop() {
  
  int sensorValue = analogRead(A0); // Read the input of on analog pin 0
  Serial.println(sensorValue);
  delay(1000);
}
