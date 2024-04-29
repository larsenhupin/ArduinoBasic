
int led = 9;
int brightness = 0;
int fadeness = 255;
int fadAmount = 5;
int fadAmount2 = 5;
int direction = 1;
char like[] = "I like coffee and cake"; // create a string

void setup() {
  
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  Serial.println( F("setup finished") );
  
  Serial.println(like);

}

void loop() {
  
  analogWrite(led, brightness);


  int delayUp = 50;
  int delayDown = 8;


  if (brightness <= 0) {
    direction = 1;
  }
  else if (brightness >= 255) {
    direction = 0;
  }


  if (direction == 1) {
    brightness += 1; 
  }

  if (direction == 0) {
    brightness -= 1;
  }


  if (brightness < 40) {
    delay(delayUp);
  }
  else {
    delay(delayDown);
  }

  // Serial.println( brightness );

  // brightness += 1;

  // brightness = brightness + fadAmount;

  // if (brightness <= 0) {
  //   fadAmount = +fadAmount;
  // }
  // else if (brightness >= 255) {
  //   fadAmount = -fadAmount;
  // }


  // fadeness = fadeness - fadAmount2;

  // if (fadeness <= 0 || fadeness >= 255) {
  //   fadAmount2 = +fadAmount2;
  // }

  //   delay(30);
}
