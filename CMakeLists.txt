cmake_minimum_required(VERSION 3.10)
project(RobotWars VERSION 1.0)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add include directory
include_directories(include)

# List source files
set(SOURCES
    src/main.cpp
    src/hello.cpp
)

# Create executable
add_executable(run ${SOURCES})
