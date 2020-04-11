//
// Created by Dan Jiang on 2020/4/11.
//

#include "chapter2.h"
#include <iostream>
#include "Sales_data.h"

void exercise_2_3() {
    unsigned u = 10, u2 = 42;
    std::cout << u2 - u << std::endl;
    std::cout << u - u2 << std::endl;
    int i = 10, i2 = 42;
    std::cout << i2 - i << std::endl;
    std::cout << i - i2 << std::endl;
    std::cout << i - u << std::endl;
    std::cout << u - i << std::endl;
}

void exercise_2_24() {
    Sales_data data1, data2;

    double price = 0;
    std::cin >> data1.bookNo >> data1.units_sold >> price;
    data1.revenue = data1.units_sold * price;

    std::cin >> data2.bookNo >> data2.units_sold >> price;
    data2.revenue = data2.units_sold * price;

    if (data1.bookNo == data2.bookNo) {
        unsigned totalCnt = data1.units_sold + data2.units_sold;
        double totalRevenue = data1.revenue + data2.revenue;
        std::cout << data1.bookNo << " " << totalCnt << " " << totalRevenue << " ";
        if (totalCnt != 0) {
            std::cout << totalRevenue / totalCnt << std::endl;
        } else {
            std::cout << "(no sales)" << std::endl;
        }
    } else {
        std::cerr << "Data must refer to the same ISBN" << std::endl;
    }
}