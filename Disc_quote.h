//
// Created by Dan Jiang on 2020/10/17.
//

#ifndef LEARN_CPP_WITH_CPP_PRIMER__DISC_QUOTE_H_
#define LEARN_CPP_WITH_CPP_PRIMER__DISC_QUOTE_H_

#include "Quote.h"

class Disc_quote : public Quote {
 public:
  Disc_quote() = default;
  Disc_quote(const std::string &book, double price, std::size_t qty, double disc);
  double net_price(std::size_t n) const override = 0;
 protected:
  std::size_t quantity = 0;
  double discount = 0.0;
};

#endif //LEARN_CPP_WITH_CPP_PRIMER__DISC_QUOTE_H_
