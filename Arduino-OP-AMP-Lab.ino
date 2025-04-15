/*
  Analog Input

  Demonstrates analog input by reading an analog sensor on analog pin 4 & 5 and
  turning on and off a light emitting diode(LED) connected to digital pin 13.
  The Analog inputs are the +/- inputs on an Op-Amp.

  The circuit:
  - Minus input = Voltage divider 5.6K/4.3K on Analog input 4
  - Plus input = potentiometer
    center pin of the potentiometer to the analog input 5
    one side pin (either one) to ground
    the other side pin to +5V
  - LED
    anode (long leg) attached to digital output 13 through 220 ohm resistor
    cathode (short leg) attached to ground

  - Note: because most Arduinos have a built-in LED attached to pin 13 on the
    board, the LED is optional.

  created by David Cuartielles
  modified 30 Aug 2011
  By Tom Igoe
  modified 14 April 2025
  By STEAM Clown (aka Jim Burnham)

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/AnalogInput
*/

int sensorPlusPin = A5;    // select the input pin for the potentiometer
int sensorMinusPin = A4;    // select the input pin for the potentiometer
int ledPin = 13;      // select the pin for the LED
int sensorPlusValue = 0;  // variable to store the value coming from the sensor
int sensorMinusValue = 0;  // variable to store the value coming from the sensor

void setup() {
  Serial.begin(9600);
  // declare the ledPin as an OUTPUT:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // read the value from the sensor:
  sensorPlusValue = analogRead(sensorPlusPin);
  sensorMinusValue = analogRead(sensorMinusPin);
  Serial.println("---------------------------");
  Serial.print("AMP + input = ");
  Serial.println(sensorPlusValue);
  Serial.print("AMP - input = ");
  Serial.println(sensorMinusValue);
  if(sensorPlusValue > sensorMinusValue){
    Serial.println("Plus more than Minus");
    // turn the ledPin on
    digitalWrite(ledPin,1);
  }
  else {digitalWrite(ledPin,0);} // turn the ledPin off
  
 
  // stop the program for for <sensorValue> milliseconds:
  delay(500);
}
