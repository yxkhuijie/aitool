#include "gcov_test.h"

#include <stdio.h>

GcovTest::GcovTest() {}

GcovTest::~GcovTest() {}

void GcovTest::Print(const std::string& message) {
  printf("%s", message.c_str());
}

