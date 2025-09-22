#pragma once
#include "MotorDriver.h"

class Motor {
public:
    void stop();
    void start();
    void setSpeed(const int spd);
    void setDirectionForward();
    void setDirectionReverse();

private:
    MotorDriver driver;
    int speed;
    bool isForwardDirection;
    bool isRunning;

};
