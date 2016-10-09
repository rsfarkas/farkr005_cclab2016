
import processing.serial.*;

import cc.arduino.*;

Arduino arduino;

color off = color(4, 79, 111);
color on = color(84, 145, 158);

void setup() {
  size(470, 280);

  println(Arduino.list());


  arduino = new Arduino(this, Arduino.list()[1], 57600);

  for (int i = 0; i <= 13; i++)
    arduino.pinMode(i, Arduino.INPUT);
}

void draw() {
  background(off);
  stroke(on);


  noFill();
  for (int i = 0; i < 1; i++) {
    ellipse(arduino.analogRead(0)/2, arduino.analogRead(1)/2, 16, 16);
    println(arduino.analogRead(i) / 16);
  }
}

//Link to video: https://vimeo.com/186173903