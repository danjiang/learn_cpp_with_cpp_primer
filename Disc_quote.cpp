//
// Created by Dan Jiang on 2020/10/17.
//

#include "Disc_quote.h"

Disc_quote::Disc_quote(const std::string &book, double price, std::size_t qty, double disc):
Quote(book, price),
quantity(qty),
discount(disc) {
}
