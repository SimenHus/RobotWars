#pragma once

class MotorDriver {
public:
    void setRunningStatus(bool status);

private:
    bool isRunning;
};