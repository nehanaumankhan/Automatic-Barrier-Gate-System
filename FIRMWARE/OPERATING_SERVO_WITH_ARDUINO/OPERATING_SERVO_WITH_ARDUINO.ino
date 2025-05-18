#include <Servo.h>

Servo myservo;

int servoPin = 12; // GPIO 12 on Arduino Uno

void setup() {
  Serial.begin(9600);
  myservo.attach(servoPin); // Attach the servo to pin 12
  Serial.println("Servo initialized on pin 12");
}

void loop() {
  // Move from 0 to 180 degrees
  for (int pos = 0; pos <= 180; pos++) {
    myservo.write(pos);
    delay(15);
  }

  delay(1000); // Pause at 180°

  // Move from 180 to 0 degrees
  for (int pos = 180; pos >= 0; pos--) {
    myservo.write(pos);
    delay(15);
  }

  delay(1000); // Pause at 0°
}
