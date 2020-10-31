//
// Created by Dan Jiang on 2020/9/26.
//

#include "HasPtrPointer.h"

HasPtrPointer &HasPtrPointer::operator=(const HasPtrPointer &rhs) {
  ++*rhs.use;
  if (--*use == 0) {
    delete ps;
    delete use;
  }
  ps = rhs.ps;
  i = rhs.i;
  use = rhs.use;
  return *this;
}

HasPtrPointer::~HasPtrPointer() {
  if (--*use == 0) {
    delete ps;
    delete use;
  }
}
