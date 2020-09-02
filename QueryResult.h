//
// Created by Dan Jiang on 2020/9/2.
//

#ifndef LEARN_CPP_WITH_CPP_PRIMER__QUERYRESULT_H_
#define LEARN_CPP_WITH_CPP_PRIMER__QUERYRESULT_H_

#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <set>

using line_no = std::vector<std::string>::size_type;

class QueryResult {
  friend std::ostream & printResult(std::ostream &, const QueryResult &);

 public:
  QueryResult(const std::string s,
              const std::shared_ptr<std::set<line_no>> p,
              const std::shared_ptr<std::vector<std::string>> f) :
              sought(s), lines(p), file(f) {}
 private:
  std::string sought;
  std::shared_ptr<std::set<line_no>> lines;
  std::shared_ptr<std::vector<std::string>> file;
};

#endif //LEARN_CPP_WITH_CPP_PRIMER__QUERYRESULT_H_
