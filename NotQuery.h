//
// Created by Dan Jiang on 2020/10/25.
//

#ifndef LEARN_CPP_WITH_CPP_PRIMER__NOTQUERY_H_
#define LEARN_CPP_WITH_CPP_PRIMER__NOTQUERY_H_

#include "Query.h"

class NotQuery: public Query_base {
  friend Query operator~(const Query &);
  NotQuery(const Query &q): query(q) { }
  std::string rep() const { return "~(" + query.rep() + ")"; }
  QueryResult eval(const TextQuery &) const;
  Query query;
};

inline Query operator~(const Query &operand) {
  return std::shared_ptr<Query_base>(new NotQuery(operand));
}

#endif //LEARN_CPP_WITH_CPP_PRIMER__NOTQUERY_H_
