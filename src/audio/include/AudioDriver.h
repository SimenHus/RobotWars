#pragma once
#include <iostream>

class AudioDriver {
public:
    void init(int sampleRate, int channels);
    void writeSamples(const int* data, std::size_t count);
    bool isReady() const;
};
