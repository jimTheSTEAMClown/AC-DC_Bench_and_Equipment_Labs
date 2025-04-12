/*
  Oscilloscope Test - Servo PWM Min/Max

  Creating a few tests for a Arduino DUT for Oscilloscpe tests
  This design will show the PWM pulse width for the min and max of a servo pulse
*/
#include <Servo.h> 
Servo myservo;
int pos = 0;
// the setup function runs once when you press reset or power the board

void setup() {
  Serial.begin(115200);
  Serial.println("Starting Setup");
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  myservo.attach(9);    // attaches the servo on pin 9 to the servo object 
//  myservo.write(pos); // set the default start position
}

// the loop function runs over and over again forever
void loop() {
  pos = 0;
  
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(100);
  pos=180; 
  myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(500);  
  pos=0; 
  myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(500);      
  // wait for a second
}
