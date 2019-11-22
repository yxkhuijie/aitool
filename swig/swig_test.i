%module swig_test
%{
include "swig_test.h"
%}

class SwigTest {
 public:
  SwigTest();
  SwigTest(int);

  void Print();
};

