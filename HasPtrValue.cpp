//
// Created by Dan Jiang on 2020/9/26.
//

#include "HasPtrValue.h"

HasPtrValue& HasPtrValue::operator=(const HasPtrValue &rhs) {
  auto newp = new std::string(*rhs.ps);
  delete ps;
  ps = newp;
  i = rhs.i;
  return *this;
}
