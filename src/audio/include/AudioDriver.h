#pragma once
#include <iostream>

class AudioDriver {
public:
    void playSoundFile(const std::string &filepath);
    void stop();
};
