#include "swig_test.h"

#include <stdio.h>

SwigTest::SwigTest() {}

SwigTest::SwigTest(int val) : value_(val) {}

SwigTest::~SwigTest() {}

void SwigTest::Print(const std::string& message) {
  printf("%s\n", message.data());
}

