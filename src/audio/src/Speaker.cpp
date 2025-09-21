#include "Speaker.h"

void Speaker::playFile(const std::string& filename) {
    driver.playSoundFile(filename);
}

void Speaker::playTone(float frequency, float duration) {
    std::cout << "[Speaker] Playing tone: " << frequency << " Hz for " << duration << " s" << std::endl;
}


void Speaker::stop() {
    driver.stop();
}