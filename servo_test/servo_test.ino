#include <Servo.h>

#define PIN 9
#define ANGLE 10 // degree
#define FREQ 500 // ms

Servo s;

void setup() {
  s.attach(PIN);
}

void loop() {
  for(int i = 0; i <=180; i += ANGLE){
    s.write(i);
    delay(FREQ);
  }
}
