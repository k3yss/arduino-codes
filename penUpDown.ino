#include <Servo.h>

Servo penServo;

void setup() {
  // Attach the servo to pin 9
  penServo.attach(9);
}

void loop() {
  // Move the servo to the down position
  penServo.write(0);
  delay(1000); // Wait for 1 second

  // Move the servo to the up position
  penServo.write(90);
  delay(1000); // Wait for 1 second
}

