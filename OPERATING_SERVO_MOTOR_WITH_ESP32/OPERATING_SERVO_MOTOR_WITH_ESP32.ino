#include <ESP32Servo.h>

Servo myservo;

int servoPin = 12; // Your chosen GPIO pin for signal

void setup() {
  Serial.begin(115200);
  myservo.attach(servoPin); // Attach the servo to GPIO 12
  Serial.println("Servo initialized on GPIO 12");
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
