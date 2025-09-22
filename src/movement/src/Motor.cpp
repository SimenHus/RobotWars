#include "Motor.h"


void Motor::stop() {
    isRunning = false;
    driver->setRunningStatus(false);
}

void Motor::start() {
    isRunning = true;
    driver->setRunningStatus(true);
}


void Motor::setSpeed(float spd) {
    // Clamp speed to be between 0-100 percent
    if (spd > 100) {spd = 100;}
    else if (spd < 0) {spd = 0;}
    
    speedPercent = spd;
}


void Motor::setDirectionForward() {
    isForwardDirection = true;
}

void Motor::setDirectionReverse() {
    isForwardDirection = false;
}
