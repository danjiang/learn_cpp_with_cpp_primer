//
// Created by Dan Jiang on 2020/10/17.
//

#ifndef LEARN_CPP_WITH_CPP_PRIMER__BULK_QUOTE_H_
#define LEARN_CPP_WITH_CPP_PRIMER__BULK_QUOTE_H_

#include "Disc_quote.h"

class Bulk_quote : public Disc_quote {
 public:
  Bulk_quote() = default;
  Bulk_quote(const std::string &book, double price, std::size_t qty, double disc);
  virtual double net_price(std::size_t n) const override;
};

#endif //LEARN_CPP_WITH_CPP_PRIMER__BULK_QUOTE_H_
