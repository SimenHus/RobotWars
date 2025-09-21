add_library(audio STATIC
    src/AudioDriver.cpp
    src/AudioBackend.cpp
    src/Speaker.cpp
)

# Make include folder publicly available
target_include_directories(audio PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)