#pragma once
#include "MotorDriver.h"

class Motor {
public:
    void stop();
    void start();
    void setSpeed(float spd);
    void setDirectionForward();
    void setDirectionReverse();

private:
    MotorDriver *driver;
    float speedPercent; // Speed in percentage between 0-100 %
    bool isForwardDirection;
    bool isRunning;

};
