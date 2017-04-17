/*

Innovativetom.com
Flower Pot Soil Mosture Sensor

A0 - Soil Mosture Sensor
D6 - LED 5

LED5 - RED

Connect the Soil Mosture Sensor to anolog input pin 0,
and your led to pin 6

article:
http://www.instructables.com/id/Soil-Moisture-Sensor/

note:
didn't use a 1k resistor like the instructibles article

leds, long legs in the 5v rail, short legs
connected to the wires going back to the digital pins.

*/
int led5 = 6;

int mostureSensor = 0;

void setup() {
  // Serial Begin so we can see the data from the mosture sensor in our serial input window.
  Serial.begin(9600);
  // setting the led pins to outputs
  pinMode(led5, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(mostureSensor);
  // print out the value you read:

  Serial.println(sensorValue);

 // red only
 if (sensorValue >= 820)
 {
 digitalWrite(led5, LOW);
}
// red and orange
else if (sensorValue >= 615  && sensorValue < 820)
 {
 digitalWrite(led5, HIGH);
}
// red, orange, green
else if (sensorValue >= 410 && sensorValue < 615)
 {
   digitalWrite(led5, HIGH);
}
// red, orange, green, green
else if (sensorValue >= 250 && sensorValue < 410)
 {
   digitalWrite(led5, HIGH);
}
// all on
else if (sensorValue >= 0 && sensorValue < 250)
 {
   digitalWrite(led5, HIGH);
}
  delay(1000);        // delay 1 second between reads
}
