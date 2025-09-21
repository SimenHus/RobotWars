#pragma once
#include "AudioDriver.h"
#include <iostream>

class Speaker {
public:
    void playFile(const std::string& path);
    void playTone(float frequency, float duration);
    void setVolume(float volume);
    void stop();
private:
    AudioDriver driver;
};
