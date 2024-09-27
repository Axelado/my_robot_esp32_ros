#include <Arduino.h>
/* Motor control with DBH-12 H-BRIDGE */
class Motor
{
private:
    unsigned controlPin1;
    unsigned controlPin2;
    unsigned maxPwmSpeed;

public:
    Motor() = default;
    Motor(unsigned controlPin1,
          unsigned controlPin2,
          unsigned maxPwmSpeed);
    void init();
    void moveForward(unsigned pwmSpeed);
    void moveBackward(unsigned pwmSpeed);
    void stop();
};