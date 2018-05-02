# Cmake
cmake_minimum_required(VERSION 3.10)
project(sa)

# C++
set(CMAKE_CXX_STANDARD 11)

# Gtest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Library
add_library(sa SHARED sort_ascii.cpp)

# All tests
add_executable(runAsciiTests tests_main.cpp sort_ascii.cpp sort_ascii_tests.cpp)
target_link_libraries(runAsciiTests ${GTEST_LIBRARIES} pthread)
