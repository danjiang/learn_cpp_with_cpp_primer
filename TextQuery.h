//
// Created by Dan Jiang on 2020/9/2.
//

#ifndef LEARN_CPP_WITH_CPP_PRIMER__TEXTQUERY_H_
#define LEARN_CPP_WITH_CPP_PRIMER__TEXTQUERY_H_

#include "QueryResult.h"

class TextQuery {
 public:
  TextQuery(std::ifstream &);
  QueryResult query(const std::string &) const;
 private:
  std::shared_ptr<std::vector<std::string>> file;
  std::map<std::string, std::shared_ptr<std::set<line_no>>> wm;
};

#endif //LEARN_CPP_WITH_CPP_PRIMER__TEXTQUERY_H_
