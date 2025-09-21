#include "Speaker.h"

void Speaker::playFile(const std::string& filename) {
    std::cout << "[Speaker] Playing file: " << filename << std::endl;
}

void Speaker::playTone(float frequency, float duration) {
    std::cout << "[Speaker] Playing tone: " << frequency << " Hz for " << duration << " s" << std::endl;
}
