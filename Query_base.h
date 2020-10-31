//
// Created by Dan Jiang on 2020/10/24.
//

#ifndef LEARN_CPP_WITH_CPP_PRIMER__QUERY_BASE_H_
#define LEARN_CPP_WITH_CPP_PRIMER__QUERY_BASE_H_

#include "TextQuery.h"

class Query_base {
  friend class Query;
 protected:
  using line_no = std::vector<std::string>::size_type;
  virtual ~Query_base() = default;
 private:
  virtual QueryResult eval(const TextQuery&) const = 0;
  virtual std::string rep() const = 0;
};

#endif //LEARN_CPP_WITH_CPP_PRIMER__QUERY_BASE_H_
