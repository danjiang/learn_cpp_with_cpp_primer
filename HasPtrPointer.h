//
// Created by Dan Jiang on 2020/9/26.
//

#ifndef LEARN_CPP_WITH_CPP_PRIMER__HASPTRPOINTER_H_
#define LEARN_CPP_WITH_CPP_PRIMER__HASPTRPOINTER_H_

#include <string>

class HasPtrPointer {
 public:
  HasPtrPointer(const std::string &s = std::string()):
  ps(new std::string(s)), i(0), use(new std::size_t(1)) {}
  HasPtrPointer(const HasPtrPointer &p):
  ps(p.ps), i(p.i), use(p.use) { ++*use; }
  HasPtrPointer& operator=(const  HasPtrPointer&);
  ~HasPtrPointer();
 private:
  std::string *ps;
  int i;
  std::size_t *use;
};

#endif //LEARN_CPP_WITH_CPP_PRIMER__HASPTRPOINTER_H_
