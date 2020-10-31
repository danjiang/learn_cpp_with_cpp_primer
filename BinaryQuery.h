//
// Created by Dan Jiang on 2020/10/25.
//

#ifndef LEARN_CPP_WITH_CPP_PRIMER__BINARYQUERY_H_
#define LEARN_CPP_WITH_CPP_PRIMER__BINARYQUERY_H_

#include "Query.h"

class BinaryQuery: public Query_base {
 protected:
  BinaryQuery(const Query &l, const Query &r, std::string s) : lhs(l), rhs(r), opSym(s) { }
  std::string rep() const {
    return "(" + lhs.rep() + " "
        + opSym + " "
        + rhs.rep() + ")";
  }
  Query lhs, rhs;
  std::string opSym;
};

#endif //LEARN_CPP_WITH_CPP_PRIMER__BINARYQUERY_H_
