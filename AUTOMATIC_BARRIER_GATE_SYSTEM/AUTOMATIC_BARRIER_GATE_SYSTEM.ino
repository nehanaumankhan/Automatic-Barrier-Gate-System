#include <Servo.h>

Servo myservo;
int servoPin = 12; // GPIO 12 on Arduino Uno
int pos = 0;
const int trigPin = 9;
const int echoPin = 10;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  myservo.attach(servoPin); // Attach the servo to pin 12
}

void loop() {
  // Send trigger pulse
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read echo pulse duration
  long duration = pulseIn(echoPin, HIGH);

  // Calculate distance
  float distance = (duration / 2.0) * 0.0343;

  if (distance > 0 && distance < 30) {
    Serial.print("OBJECT DETECTED: ");
    Serial.print(distance);
    Serial.println(" cm");

    // Open barrier
    for (pos = 0; pos <= 120; pos += 1) {
      myservo.write(pos);
      delay(10);
    }
    Serial.println("BARRIER OPENED");
    delay(500);//pause at 180

    // Close barrier
    for (pos = 130; pos >= 0; pos -= 1) {
      myservo.write(pos);
      delay(10);
    }
    Serial.println("BARRIER CLOSED");
    delay(500); // pause at 0
  }

  delay(500);
}
