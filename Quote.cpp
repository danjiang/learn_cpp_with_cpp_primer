//
// Created by Dan Jiang on 2020/10/17.
//

#include "Quote.h"

double Quote::net_price(std::size_t n) const {
  return n * price;
}