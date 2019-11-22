#ifndef SWIG_TEST_H_
#define SWIG_TEST_H_

#include <string>

class SwigTest {
 public:
  SwigTest();
  SwigTest(int val);
  ~SwigTest();

  void Print(const std::string& message);

 private:
  int value_;
};

#endif

