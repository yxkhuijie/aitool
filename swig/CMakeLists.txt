CMAKE_MINIMUM_REQUIRED(VERSION 3.5.1)

PROJECT(swig_test)

include_directories(swig_test_SOURCE_DIR)

add_executable(swig_test main.cc swig_test.cc)

