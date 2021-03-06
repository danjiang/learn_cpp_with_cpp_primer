//
// Created by Dan Jiang on 2020/10/17.
//

#include "Bulk_quote.h"

Bulk_quote::Bulk_quote(const std::string &book, double price, std::size_t qty, double disc) :
  Disc_quote(book, price, qty, disc) {
}

double Bulk_quote::net_price(std::size_t cnt) const {
  if (cnt >= quantity) {
    return cnt * (1 - discount) * price;
  } else {
    return cnt * price;
  }
}