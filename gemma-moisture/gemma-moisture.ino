/*

Innovativetom.com
Flower Pot Soil Mosture Sensor

A1 - Soil Mosture Sensor
D1 - LED

LED - RED

Connect the Soil Mosture Sensor to anolog input pin 0,
and your led to pin 6

article:
http://www.instructables.com/id/Soil-Moisture-Sensor/

note:
didn't use a 1k resistor like the instructibles article

leds, long legs in the 5v rail, short legs
connected to the wires going back to the digital pins.

*/
int led = 1;

int mostureSensor = 1;

void setup() {
  // setting the led pins to outputs
  pinMode(led, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(mostureSensor);
  // print out the value you read:

 // red only
 if (sensorValue >= 820)
 {
 digitalWrite(led, LOW);
}
// red and orange
else if (sensorValue >= 615  && sensorValue < 820)
 {
 digitalWrite(led, HIGH);
}
// red, orange, green
else if (sensorValue >= 410 && sensorValue < 615)
 {
   digitalWrite(led, HIGH);
}
// red, orange, green, green
else if (sensorValue >= 250 && sensorValue < 410)
 {
   digitalWrite(led, HIGH);
}
// all on
else if (sensorValue >= 0 && sensorValue < 250)
 {
   digitalWrite(led, HIGH);
}
  delay(1000);        // delay 1 second between reads
}
