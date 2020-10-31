//
// Created by Dan Jiang on 2020/10/17.
//

#include <iostream>
#include "Quote.h"
#include "Bulk_quote.h"
#include "ch15_oop.h"

double print_total(std::ostream &os, const Quote &item, size_t n);

void exercise_15_1() {
  Quote base("0-201-82470-1", 50);
  print_total(std::cout, base, 10);
  Bulk_quote derived("0-201-82470-1", 50, 5, .19);
  print_total(std::cout, derived, 10);
}

double print_total(std::ostream &os, const Quote &item, size_t n) {
  double ret = item.net_price(n);
  os << "ISBN: " << item.isbn() << " # sold: " << n << " total due: " << ret << std::endl;
  return ret;
}