#include "AudioDriver.h"


void AudioDriver::playSoundFile(const std::string &filepath) {
    std::cout << "[Speaker] Playing file: " << filepath << std::endl;
}

void AudioDriver::stop() {
    std::cout << "[Speaker] Stopped";
}