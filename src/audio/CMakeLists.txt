add_library(audio STATIC
    include/AudioDriver.h
    include/AudioBackend.h
    include/Speaker.h
    src/AudioDriver.cpp
    src/AudioBackend.cpp
    src/Speaker.cpp
)

# Make include folder publicly available
target_include_directories(audio PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})