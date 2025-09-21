cmake_minimum_required(VERSION 3.20)
project(RobotWars VERSION 1.0)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Enable folders in IDEs
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

# Add subdirectories
add_subdirectory(src/audio)
add_subdirectory(tests)

# Main executable
add_executable(RobotWars src/main.cpp src/core/Application.cpp)

# Include common and external headers
target_include_directories(RobotWars PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_include_directories(RobotWars PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/external)

# Link audio library
target_link_libraries(RobotWars PRIVATE audio)
