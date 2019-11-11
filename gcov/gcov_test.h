#ifndef GCOV_TEST_H_
#define GCOV_TEST_H_

#include <string>

class GcovTest {
 public:
  GcovTest();
  ~GcovTest();

 public:
  void Print(const std::string& message);
};

#endif

