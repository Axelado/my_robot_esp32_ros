#include <Arduino.h>
#include "Motor.h"

#define leftMotorIN1 13 // Motor A
#define leftMotorIN2 12

#define rightMotorIN1 14 // Motor B
#define rightMotorIN2 27

#define MAX_PWM_SPEED 150

Motor leftMotor(leftMotorIN1, leftMotorIN2, MAX_PWM_SPEED);
Motor rightMotor(rightMotorIN1, rightMotorIN2, MAX_PWM_SPEED);

void setup()
{
  Serial.begin(115200);
  leftMotor.init();
  rightMotor.init();
  delay(1000);

  leftMotor.moveBackward(100);
  rightMotor.moveBackward(100);
  Serial.println("Backward");
  delay(3000);

  leftMotor.stop();
  rightMotor.stop();
  Serial.println("Stop");
  delay(2000);

  leftMotor.moveForward(100);
  rightMotor.moveForward(100);
  Serial.println("Forward");
  delay(3000);

  leftMotor.stop();
  rightMotor.stop();
  Serial.println("Stop");
}

void loop()
{
}
