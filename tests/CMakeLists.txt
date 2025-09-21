enable_testing()

add_executable(test_audio test_audio.cpp)
target_link_libraries(test_audio PRIVATE audio)

add_test(NAME AudioTests COMMAND test_audio)
