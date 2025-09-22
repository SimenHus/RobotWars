# Define minimum CMAKE version and set current project version
cmake_minimum_required(VERSION 3.20)
project(RobotWars VERSION 1.0)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)



# Add subdirectories. Needed to include libraries
add_subdirectory(src/audio)
add_subdirectory(src/camera)
add_subdirectory(src/movement)
add_subdirectory(tests)

# Generate executable named RobotWars and link main.cpp and Application.cpp
add_executable(RobotWars src/main.cpp src/core/Application.cpp)

# Include common and external header files
target_include_directories(RobotWars PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_include_directories(RobotWars PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/external)

# Link libraries to RobotWars
target_link_libraries(RobotWars PRIVATE audio)
target_link_libraries(RobotWars PRIVATE camera)
target_link_libraries(RobotWars PRIVATE movement)

# Copy all assets to the build folder for easier development
file(COPY ${CMAKE_SOURCE_DIR}/assets DESTINATION ${CMAKE_BINARY_DIR})
