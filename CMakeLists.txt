cmake_minimum_required(VERSION 3.14)
project(MultiFileDemo)

include(FetchContent)

FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/heads/main.zip
)

FetchContent_MakeAvailable(googletest)

# App executable
add_executable(my_app
    main.cpp
    src/math_utils.cpp
    src/dummy_sensor.cpp
    src/sensor_manager.cpp
)
target_include_directories(my_app PRIVATE include)

# Test executable
add_executable(unit_tests
    test/test_math_utils.cpp
    src/math_utils.cpp
    src/sensor_manager.cpp
    test/test_sensor.cpp
    test/test_sensor_manager.cpp
)
target_include_directories(unit_tests PRIVATE include)

target_link_libraries(unit_tests gtest_main gmock_main)

enable_testing()
include(GoogleTest)
gtest_discover_tests(unit_tests)

