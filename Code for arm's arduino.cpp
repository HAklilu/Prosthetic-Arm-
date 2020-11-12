Servo myServo1;

const int buttonPin = 6; // variable to store the number of the pushbutton pin
int buttonState = 0; // variable for reading the pushbutton status

void setup() {

pinMode(buttonPin, INPUT); // initialize the pushbutton pin as an input:
digitalWrite(6, LOW); // enable pullups to make pin high

myServo1.attach(SERVO1PIN);

}
void loop() {

buttonState = digitalRead(buttonPin);
if (buttonState == HIGH) {

myServo1.write(170); // tell servo to go to position in variable 'pos'

}