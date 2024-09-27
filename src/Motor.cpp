#include "Motor.h"

Motor::Motor(unsigned controlPin1,
             unsigned controlPin2,
             unsigned maxPwmSpeed) : controlPin1(controlPin1),
                                     controlPin2(controlPin2),
                                     maxPwmSpeed(maxPwmSpeed)
{
}

void Motor::init()
{
    pinMode(controlPin1, OUTPUT);
    pinMode(controlPin2, OUTPUT);
}

// init before use the fol0ing methods
void Motor::moveForward(unsigned pwmSpeed)
{
    if (pwmSpeed >= 0 && pwmSpeed <= maxPwmSpeed)
    {
        analogWrite(controlPin2, 0);
        analogWrite(controlPin1, pwmSpeed);
    }
    else if (pwmSpeed > maxPwmSpeed) 
    {
        analogWrite(controlPin2, 0);
        analogWrite(controlPin1, maxPwmSpeed);
    }
    else //pwmSpeed < 0
    {
        Motor::stop();
    }
}

void Motor::moveBackward(unsigned pwmSpeed)
{
    if (pwmSpeed >= 0 && pwmSpeed <= maxPwmSpeed)
    {
        analogWrite(controlPin1, 0);
        analogWrite(controlPin2, pwmSpeed);
    }
    else if (pwmSpeed > maxPwmSpeed) 
    {
        analogWrite(controlPin1, 0);
        analogWrite(controlPin2, maxPwmSpeed);
    }
    else //pwmSpeed < 0
    {
        Motor::stop();
    }
}

void Motor::stop()
{
    analogWrite(controlPin1, 0);
    analogWrite(controlPin2, 0);
}