// C++ code
// Emre YILMAZ
int RGBRedPin = 9;    //The red RGB LED is connected pin 9 of the Arduino.
int RGBGreenPin = 10; //The green RGB LED is connected pin 10 of the Arduino.
int RGBBluePin = 11;  //The blue RGB LED is connected pin 11 of the Arduino.
int time1 = 600; // Set to 600 millisecond
int time2 = 700; // Set to 700 millisecond
int time3 = 800; // Set to 800 millisecond
int time4 = 900; // Set to 900 millisecond
void setup() { //The Setup function runs once.
  pinMode(RGBRedPin, OUTPUT);    //Setup red RGB LED pin as an output pin.
  pinMode(RGBGreenPin, OUTPUT);  //Setup green RGB LED pin as an output pin.
  pinMode(RGBBluePin, OUTPUT);   //Setup blue RGB LED pin as an output pin.
}
void loop() { //The loop function runs forever.
  //Display Red
  digitalWrite(RGBRedPin, HIGH); //Turn on Red
  delay(time1);               //Wait for 600 millisecond
  digitalWrite(RGBRedPin, LOW);  //Turn off Red
  //Display Green
  digitalWrite(RGBGreenPin, HIGH); //Turn on Green
  delay(time2);               //Wait for 700 millisecond
  digitalWrite(RGBGreenPin, LOW);  //Turn off Green
  //Display Blue
  digitalWrite(RGBBluePin, HIGH); //Turn on Blue
  delay(time3);               //Wait for 800 millisecond
  digitalWrite(RGBBluePin, LOW);  //Turn off Blue
  //Display Yellow
  digitalWrite(RGBRedPin, HIGH); //Turn on Red
  digitalWrite(RGBGreenPin, HIGH); // Turn on Green
  delay(time4);					// Wait for 900 millisecond
  digitalWrite(RGBRedPin, LOW); //Turn on Red
  digitalWrite(RGBGreenPin, LOW); // Turn on Green
  //Display Magenta
  digitalWrite(RGBRedPin, HIGH); //Turn on Red
  digitalWrite(RGBBluePin, HIGH); //Turn on Blue
  delay(time1);					 // Wait for 600 millisecond
  digitalWrite(RGBRedPin, LOW); // Turn off Red
  digitalWrite(RGBBluePin, LOW); // Turn off Blue
  //Display Cyan
  digitalWrite(RGBBluePin, HIGH); //Turn on Blue
  digitalWrite(RGBGreenPin, HIGH); //Turn on Green
  delay(time3);				   // Wait for 800 millisecond
  digitalWrite(RGBBluePin, LOW); //Turn off Blue
  digitalWrite(RGBGreenPin, LOW); //Turn off Green
  //Display White
  digitalWrite(RGBRedPin, HIGH); //Turn on Red
  digitalWrite(RGBBluePin, HIGH); //Turn on Blue
  digitalWrite(RGBGreenPin, HIGH); //Turn on Green
  delay(time1); 				//Wait for 600 millisecond -- 5 SECOND
  digitalWrite(RGBRedPin, LOW); //Turn off Red
  digitalWrite(RGBBluePin, LOW);// Turn off Blue
  digitalWrite(RGBGreenPin, LOW);// Turn off Green
  //Display Blue
  digitalWrite(RGBBluePin, HIGH); //Turn on Blue
  delay(time1);               //Wait for 600 millisecond
  digitalWrite(RGBBluePin, LOW);  //Turn off Blue
  //Display Magenta
  digitalWrite(RGBRedPin, HIGH); //Turn on Red
  digitalWrite(RGBBluePin, HIGH); //Turn on Blue
  delay(time2);					 // Wait for 700 millisecond
  digitalWrite(RGBRedPin, LOW); // Turn off Red
  digitalWrite(RGBBluePin, LOW); // Turn off Blue
  //Display Red
  digitalWrite(RGBRedPin, HIGH); //Turn on Red
  delay(time4);               //Wait for 900 millisecond
  digitalWrite(RGBRedPin, LOW);  //Turn off Red
  //Display Cyan
  digitalWrite(RGBBluePin, HIGH); //Turn on Blue
  digitalWrite(RGBGreenPin, HIGH); //Turn on Green
  delay(time3);				   // Wait for 800 millisecond
  digitalWrite(RGBBluePin, LOW); //Turn off Blue
  digitalWrite(RGBGreenPin, LOW); //Turn off Green
  //Display Green
  digitalWrite(RGBGreenPin, HIGH); //Turn on Green
  delay(time3);               //Wait for 800 millisecond
  digitalWrite(RGBGreenPin, LOW);  //Turn off Green
  //Display Yellow
  digitalWrite(RGBRedPin, HIGH); //Turn on Red
  digitalWrite(RGBGreenPin, HIGH); // Turn on Green
  delay(time1);					// Wait for 600 millisecond 
  digitalWrite(RGBRedPin, LOW); //Turn on Red
  digitalWrite(RGBGreenPin, LOW); // Turn on Green
  //Display White
  digitalWrite(RGBRedPin, HIGH); //Turn on Red
  digitalWrite(RGBBluePin, HIGH); //Turn on Blue
  digitalWrite(RGBGreenPin, HIGH); //Turn on Green
  delay(time1); 				//Wait for 600 millisecond -- 10 SECOND
  digitalWrite(RGBRedPin, LOW); //Turn off Red
  digitalWrite(RGBBluePin, LOW);// Turn off Blue
  digitalWrite(RGBGreenPin, LOW);// Turn off Green
  //Display Cyan
  digitalWrite(RGBBluePin, HIGH); //Turn on Blue
  digitalWrite(RGBGreenPin, HIGH); //Turn on Green
  delay(time3);				   // Wait for 800 millisecond
  digitalWrite(RGBBluePin, LOW); //Turn off Blue
  digitalWrite(RGBGreenPin, LOW); //Turn off Green
  //Display White
  digitalWrite(RGBRedPin, HIGH); //Turn on Red
  digitalWrite(RGBBluePin, HIGH); //Turn on Blue
  digitalWrite(RGBGreenPin, HIGH); //Turn on Green
  delay(time1); 				//Wait for 600 millisecond
  digitalWrite(RGBRedPin, LOW); //Turn off Red
  digitalWrite(RGBBluePin, LOW);// Turn off Blue
  digitalWrite(RGBGreenPin, LOW);// Turn off Green
  //Display Magenta
  digitalWrite(RGBRedPin, HIGH); //Turn on Red
  digitalWrite(RGBBluePin, HIGH); //Turn on Blue
  delay(time2);					 // Wait for 700 millisecond
  digitalWrite(RGBRedPin, LOW); // Turn off Red
  digitalWrite(RGBBluePin, LOW); // Turn off Blue
  //Display Yellow
  digitalWrite(RGBRedPin, HIGH); //Turn on Red
  digitalWrite(RGBGreenPin, HIGH); // Turn on Green
  delay(time4);					// Wait for 900 millisecond
  digitalWrite(RGBRedPin, LOW); //Turn on Red
  digitalWrite(RGBGreenPin, LOW); // Turn on Green
  //Display Green
  digitalWrite(RGBGreenPin, HIGH); //Turn on Green
  delay(time1);               //Wait for 600 millisecond
  digitalWrite(RGBGreenPin, LOW);  //Turn off Green
  //Display Red
  digitalWrite(RGBRedPin, HIGH); //Turn on Red
  delay(time3);               //Wait for 800 millisecond
  digitalWrite(RGBRedPin, LOW);  //Turn off Red
  //Display Blue
  digitalWrite(RGBBluePin, HIGH); //Turn on Blue
  delay(time1);               //Wait for 600 millisecond -- 15 SECOND
  digitalWrite(RGBBluePin, LOW);  //Turn off Blue
  delay(100000000);          // To stop the program
  
}