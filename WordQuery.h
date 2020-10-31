//
// Created by Dan Jiang on 2020/10/25.
//

#ifndef LEARN_CPP_WITH_CPP_PRIMER__WORDQUERY_H_
#define LEARN_CPP_WITH_CPP_PRIMER__WORDQUERY_H_

#include "Query_base.h"

class WordQuery: public Query_base {
  friend class Query;
  WordQuery(const std::string &s): query_word(s) { }
  QueryResult eval(const TextQuery &t) const { return t.query(query_word); }
  std::string rep() const { return query_word; }
  std::string query_word;
};

#endif //LEARN_CPP_WITH_CPP_PRIMER__WORDQUERY_H_
