//
// Created by Dan Jiang on 2020/9/26.
//

#ifndef LEARN_CPP_WITH_CPP_PRIMER__HASPTRVALUE_H_
#define LEARN_CPP_WITH_CPP_PRIMER__HASPTRVALUE_H_

#include <string>

class HasPtrValue {
 public:
  HasPtrValue(const std::string &s = std::string()):
  ps(new std::string(s)), i(0) {}
  HasPtrValue(const HasPtrValue &p):
  ps(new std::string(*p.ps)), i(p.i) {}
  HasPtrValue& operator=(const HasPtrValue &);
  ~HasPtrValue() { delete ps; }
 private:
  std::string *ps;
  int i;
};

#endif //LEARN_CPP_WITH_CPP_PRIMER__HASPTRVALUE_H_
