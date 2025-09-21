#include "Speaker.h"
#include <cassert>

int main() {
    Speaker sp;
    sp.playTone(440.0f, 0.5f);
    // A real test framework could check buffer states or mocks
    return 0;
}
