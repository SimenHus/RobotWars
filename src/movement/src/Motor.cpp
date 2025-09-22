#include "Motor.h"


void Motor::stop() {
    isRunning = false;
}

void Motor::start() {
    isRunning = true;
}

void Motor::setSpeed(const int spd) {
    speed = spd;
}


void Motor::setDirectionForward() {
    isForwardDirection = true;
}

void Motor::setDirectionReverse() {
    isForwardDirection = false;
}
