cmake_minimum_required(VERSION 3.15)
project(AplusB)

set(CMAKE_CXX_STANDARD 14)
set(GOOGLETEST_VERSION 1.10.0) # from googletest-master/CML.txt


add_subdirectory(
        external/googletest)
include_directories(
        src
        external/googletest/include)


add_executable(main
        main.cpp
        src/APlusB.cpp)

add_executable(test_main
        test/test.cpp
        src/APlusB.cpp
        external/googletest)
target_link_libraries(test_main gtest_main)