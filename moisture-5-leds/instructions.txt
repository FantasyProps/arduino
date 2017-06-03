## instructions

5 leds

1 moisture sensor with vcc/gnd/a0

Moisture sensor we'll use a0 to judge how wet the moisture sensor is

5 digital pins on the arduino to the leds to turn on/off each by how much moisture is detected.

### wiring

digital 6 to red led (short leg)
digital 5 to yellow led (short leg)
digital 4 to green led (short leg)
digital 3 to green led (short leg)
digital 2 to green led (short leg)

long legs connected to + on the bread board.

moisture sensor has 4 connections, vcc/gnd/d0/a0.

connect + or 5v to vcc
connect gnd to gnd
connect a0 on arduino to a0 on moisture sensor

### breadboard

use the + and - rails on each side of the breadboard to send 5v and gnd to where it's needed.

photos attached.

note: not every moisture sensor is the same so the tolerance value coming off of the moisture sensor (800 dry, 0 wet) might not be totally accurate but you should be able to get most of the lights turn on.

adjust the sensorValue in the code used to work with your sensor or try turning the pot on the moisture sensor itself (little blue box with a kind of grey pot in it).

Good luck!
