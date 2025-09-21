#include "AudioBackend.h"

class Speaker {
public:
    void playFile(const std::string& path);
    void playTone(float frequency, float duration);
    void stop();
private:
    AudioBackend backend;
};
