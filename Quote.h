//
// Created by Dan Jiang on 2020/10/17.
//

#ifndef LEARN_CPP_WITH_CPP_PRIMER__QUOTE_H_
#define LEARN_CPP_WITH_CPP_PRIMER__QUOTE_H_

#include <string>

class Quote {
 public:
  Quote() = default;
  Quote(const std::string &book, double sales_price): bookNo(book), price(sales_price) {
  }
  std::string isbn() const { return bookNo; }
  virtual double net_price(std::size_t n) const;
  virtual ~Quote() =  default;
 private:
  std::string bookNo;
 protected:
  double price = 0.0;
};

#endif //LEARN_CPP_WITH_CPP_PRIMER__QUOTE_H_
