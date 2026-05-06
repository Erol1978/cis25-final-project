cmake_minimum_required(VERSION 3.10)
project(Project)

add_library(core src/Player.cpp)

add_executable(main src/main.cpp)
target_link_libraries(main core)

add_executable(tests tests/test_main.cpp)
target_link_libraries(tests core)

enable_testing()
add_test(NAME Tests COMMAND tests)
