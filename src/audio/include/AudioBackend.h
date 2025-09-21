#pragma once
#include "AudioDriver.h"
#include <vector>


class AudioBackend {
public:
    void playStream(const std::vector<int>& samples);
    void stop();
    void setVolume(float volume);
private:
    AudioDriver driver;
};
