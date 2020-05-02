//
// Created by Dan Jiang on 2020/4/11.
//

#ifndef LEARN_CPP_WITH_CPP_PRIMER_SALES_DATA_H
#define LEARN_CPP_WITH_CPP_PRIMER_SALES_DATA_H

#include <iostream>
#include <string>

class Sales_data {
  friend std::istream& read(std::istream &is, Sales_data &item);
  friend std::ostream& print(std::ostream &os, const Sales_data &item);

 public:
  Sales_data() = default;
  Sales_data(const std::string &s): bookNo(s) {}
  Sales_data(const std::string &s, unsigned n, double p):
      bookNo(s), units_sold(n), revenue(p * n) {}
  Sales_data(std::istream &);

  std::string isbn() const { return bookNo; };
  Sales_data& combine(const Sales_data&);

 private:
  double avg_price() const;
  std::string bookNo;
  unsigned units_sold = 0;
  double revenue = 00;
};

std::istream& read(std::istream &is, Sales_data &item);
std::ostream& print(std::ostream &os, const Sales_data &item);
Sales_data add(const Sales_data &lhs, const Sales_data &rhs);

#endif //LEARN_CPP_WITH_CPP_PRIMER_SALES_DATA_H
