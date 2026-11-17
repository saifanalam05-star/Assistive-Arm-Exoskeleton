// TETRA TMU kit demonstration: Arduino servo sweep
// Reproduced from the provided kit's Wokwi example for documentation.
// Original simulation: https://wokwi.com/projects/444032132243994625
#include <Servo.h>

Servo myservo;
int pos = 0;

void setup() {
  myservo.attach(9);
}

void loop() {
  for (pos = 0; pos <= 90; pos += 1) {
    myservo.write(pos);
    delay(20);
  }
  for (pos = 90; pos >= 0; pos -= 1) {
    myservo.write(pos);
    delay(20);
  }
}
