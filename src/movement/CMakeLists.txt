add_library(movement STATIC
    src/Motor.cpp
    src/MotorDriver.cpp
)

# Make include folder publicly available
target_include_directories(movement PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)