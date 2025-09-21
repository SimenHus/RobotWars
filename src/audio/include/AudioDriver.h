


class AudioDriver {
public:
    void init(int sampleRate, int channels);
    void writeSamples(const int16_t* data, size_t count);
    bool isReady() const;
};
