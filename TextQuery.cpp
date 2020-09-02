//
// Created by Dan Jiang on 2020/9/2.
//

#include <memory>
#include <sstream>
#include "TextQuery.h"

TextQuery::TextQuery(std::ifstream &is): file(new std::vector<std::string>()) {
  std::string text;
  while (std::getline(is, text)) {
    file->push_back(text);
    int n = file->size() - 1;
    std::istringstream line(text);
    std::string word;
    while (line >> word) {
      auto &lines = wm[word];
      if (!lines) {
        lines = std::make_shared<std::set<line_no>>();
      }
      lines->insert(n);
    }
  }
}

std::ostream & printResult(std::ostream &os, const QueryResult &qr) {
  os << qr.sought << " occurs " << qr.lines->size() << " times" << std::endl;
  for (auto num : *qr.lines) {
    os << "\t(line " << num + 1 << ") " << *(qr.file->begin() + num) << std::endl;
  }
  return os;
}

QueryResult TextQuery::query(const std::string &sought) const {
  static std::shared_ptr<std::set<line_no>> nodata(new std::set<line_no>);
  auto loc = wm.find(sought);
  if (loc == wm.end()) {
    return QueryResult(sought, nodata, file);
  } else {
    return QueryResult(sought, loc->second, file);
  }
}
