cmake_minimum_required(VERSION 3.5.1)

project(gcov_test)

set(CMAKE_CXX_FLAGS "-fprofile-arcs -ftest-coverage")

message("${CMAKE_CXX_FLAGS}")
include_directories(gcov_test_SOURCE_DIR)

add_executable(gcov_test main.cc gcov_test.cc)



