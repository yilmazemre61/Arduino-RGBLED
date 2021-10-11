// C++ code
// Emre YILMAZ
int RGBRedPin = 9;    //The red RGB LED is connected pin 9 of the Arduino.
int RGBGreenPin = 10; //The green RGB LED is connected pin 10 of the Arduino.
int RGBBluePin = 11;  //The blue RGB LED is connected pin 11 of the Arduino.
int waitTime = 143; //Sets the amount of time to wait between color changes.
void setup() { //The Setup function runs once.
  pinMode(RGBRedPin, OUTPUT);    //Setup red RGB LED pin as an output pin.
  pinMode(RGBGreenPin, OUTPUT);  //Setup green RGB LED pin as an output pin.
  pinMode(RGBBluePin, OUTPUT);   //Setup blue RGB LED pin as an output pin.
}

void loop()
{
  for(int i=1; i<11; i++){
    // In each loop "waitTime" will be multiplied by "i"
    // So the first cirle will be complited in 1000 millisecond
    // Second circle in 2000 millisecond
    // Third circle in 3000 millisecond
    // Fourth circle in 4000 millisecond
    // Fifth circle in 5000 millisecond
    // Sixth circle in 6000 millisecond
    // Seventh circle in 7000 millisecond
    // Eighth circle in 8000 millisecond
    // Ninth circle in 9000 millisecond
    // Tenth circle in 10000 millisecond
    // In the "Yellow" colour I subrtacted the "waitTime" by 1 to make the each loop exactly 1 sec, 2 sec, 3 sec, so on.
    // Display Red
    digitalWrite(RGBRedPin, HIGH);// Red on
    delay(waitTime * i);
    digitalWrite(RGBRedPin, LOW);// Red off
    // Display Green
    digitalWrite(RGBGreenPin, HIGH);// Green on
    delay(waitTime * i);
    digitalWrite(RGBGreenPin, LOW);// Green off
    // Display Blue
    digitalWrite(RGBBluePin, HIGH);// Blue on
    delay(waitTime * i);
    digitalWrite(RGBBluePin, LOW);// Blue off
    // Display Cyan (Green + Blue)
    digitalWrite(RGBGreenPin, HIGH);// Green on
    digitalWrite(RGBBluePin, HIGH);// Blue on
    delay(waitTime * i);
    digitalWrite(RGBGreenPin, LOW);// Green off
    digitalWrite(RGBBluePin, LOW);// Blue off
    //Display Magneta (Red + Blue)
    digitalWrite(RGBRedPin, HIGH);// Red on
    digitalWrite(RGBBluePin, HIGH);// Blue on
    delay(waitTime * i);
    digitalWrite(RGBRedPin, LOW);// Red off
    digitalWrite(RGBBluePin, LOW);// Blue off
    //Display White  (Red + Blue + Green)
    digitalWrite(RGBRedPin, HIGH);// Red on
    digitalWrite(RGBBluePin, HIGH);// Blue on
    digitalWrite(RGBGreenPin, HIGH);// Green 
    delay(waitTime * i);               
    digitalWrite(RGBRedPin, LOW);// Red off  
    digitalWrite(RGBBluePin, LOW);// Blue off
    digitalWrite(RGBGreenPin, LOW);// Green off
    //Display  Yellow (Red + Green)
    digitalWrite(RGBRedPin, HIGH);// Red on
    digitalWrite(RGBGreenPin, HIGH);// Green on
    delay((waitTime - 1) * i);               
    digitalWrite(RGBRedPin, LOW);// Red off 
    digitalWrite(RGBGreenPin, LOW);// Green off
  }
  delay(5000);
}


