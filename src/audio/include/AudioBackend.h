#include "AudioDriver.h"


class AudioBackend {
public:
    void playStream(const std::vector<int16_t>& samples);
    void stop();
    void setVolume(float volume);
private:
    AudioDriver driver;
};
