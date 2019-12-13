project(math_tests)

include_directories(../../core/math)

set(SRC
        ../../core/math/vector2.cpp
        ../../core/math/vector3.cpp
        vector2_check.cpp
        vector3_check.cpp rect2_check.cpp)

add_executable(runMathCheck ${SRC})

target_link_libraries(runMathCheck gtest gtest_main)
