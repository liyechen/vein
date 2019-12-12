cmake_minimum_required(VERSION 3.16)
project(Vein)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp)

add_executable(Vein main.cpp ${SOURCE_FILES})

add_subdirectory(core)
add_subdirectory(core_tests)
