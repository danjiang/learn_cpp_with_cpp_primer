//
// Created by Dan Jiang on 2020/10/24.
//

#include "Query.h"
#include "WordQuery.h"

inline Query::Query(const std::string &s) : q(new WordQuery(s)) {}

std::ostream & operator<<(std::ostream &os, const Query &query) {
  return os << query.rep();
}