add_library(camera STATIC
    src/Camera.cpp
    src/CameraDriver.cpp
)

# Make include folder publicly available
target_include_directories(camera PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)