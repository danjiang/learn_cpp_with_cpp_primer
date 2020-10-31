//
// Created by Dan Jiang on 2020/10/24.
//

#ifndef LEARN_CPP_WITH_CPP_PRIMER__QUERY_H_
#define LEARN_CPP_WITH_CPP_PRIMER__QUERY_H_

#include <string>
#include "QueryResult.h"
#include "TextQuery.h"
#include "Query_base.h"

class Query {
  friend Query operator~(const Query&);
  friend Query operator|(const Query&, const Query&);
  friend Query operator&(const Query&, const Query&);

 public:
  Query(const std::string&);
  QueryResult eval(const TextQuery &t) const {
    return q->eval(t);
  }
  std::string rep() const { return q->rep(); }
 private:
  Query(std::shared_ptr<Query_base> query): q(query) { }
  std::shared_ptr<Query_base> q;
};

std::ostream & operator<<(std::ostream &os, const Query &query);

#endif //LEARN_CPP_WITH_CPP_PRIMER__QUERY_H_
