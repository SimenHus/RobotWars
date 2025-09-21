#include "Application.h"
#include <thread>
#include <chrono>

void Application::run() {
    speaker.playTone(440.0f, 1.0f); // A4 for 1s
    std::this_thread::sleep_for(std::chrono::seconds(2));
    speaker.playFile("assets/soundfile.wav");
}
