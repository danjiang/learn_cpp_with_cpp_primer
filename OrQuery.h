//
// Created by Dan Jiang on 2020/10/25.
//

#ifndef LEARN_CPP_WITH_CPP_PRIMER__ORQUERY_H_
#define LEARN_CPP_WITH_CPP_PRIMER__ORQUERY_H_

#include "BinaryQuery.h"

class OrQuery: public BinaryQuery {
  friend Query operator|(const Query&, const Query&);
  OrQuery(const Query &left, const Query &right): BinaryQuery(left, right, "|") { }
  QueryResult eval(const TextQuery&) const;
};

inline Query operator|(const Query &lhs, const Query &rhs) {
  return std::shared_ptr<Query_base>(new OrQuery(lhs, rhs));
}

#endif //LEARN_CPP_WITH_CPP_PRIMER__ORQUERY_H_
