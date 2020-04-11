//
// Created by Dan Jiang on 2020/4/11.
//

#ifndef LEARN_CPP_WITH_CPP_PRIMER_SALES_DATA_H
#define LEARN_CPP_WITH_CPP_PRIMER_SALES_DATA_H

#include <string>

struct Sales_data {
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

#endif //LEARN_CPP_WITH_CPP_PRIMER_SALES_DATA_H
