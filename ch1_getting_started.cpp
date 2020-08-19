//
// Created by Dan Jiang on 2020/4/11.
//

#include "ch1_getting_started.h"
#include <iostream>
#include "Sales_item.h"

void exercise_1_3() {
    std::cout << "Hello, World" << std::endl;
}

void exercise_1_4() {
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "v1 * v2 = " << v1 * v2 << std::endl;
}

void exercise_1_5() {
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The sum of ";
    std::cout << v1;
    std::cout << " and ";
    std::cout << v2;
    std::cout << " is ";
    std::cout << v1 + v2;
    std::cout << std::endl;
}

void exercise_1_9() {
    int i = 50;
    int sum = 0;
    while (i <= 100) {
       sum += i;
       i++;
    }
    std::cout << "50 + ... + 100 = " << sum << std::endl;
}

void exercise_1_10() {
    int i = 10;
    while (i >= 0) {
        std::cout << i << " ";
        i--;
    }
    std::cout << std::endl;
}

void exercise_1_11() {
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    if (v1 > v2) {
        std::cout << "First number should be great than second number." << std::endl;
    }
    while (v1 <= v2) {
        std::cout << v1 << " ";
        v1++;
    }
    std::cout << std::endl;
}

void exercise_1_12() {
    int sum = 0;
    for (int i = -100; i <= 100; ++i) {
       sum += i;
    }
    std::cout << sum << std::endl;
}

void exercise_1_16() {
    int sum = 0, value = 0;
    while (std::cin >> value) {
        sum += value;
    }
    std::cout << "Sum is: " << sum << std::endl;
}

void exercise_1_17() {
    int currVal = 0, val = 0;
    if (std::cin >> currVal) {
        int cnt = 1;
        while (std::cin >> val) {
            if (val == currVal) {
                ++cnt;
            } else {
                std::cout << currVal << " occurs " << cnt << " times" << std::endl;
                currVal = val;
                cnt = 1;
            }
        }
        std::cout << currVal << " occurs " << cnt << " times" << std::endl;
    }
}

void exercise_1_20() {
    Sales_item book;
    while (std::cin >> book) {
        std::cout << book << std::endl;
    }
}

void exercise_1_21() {
    Sales_item book1, book2;
    std::cin >> book1 >> book2;
    std::cout << book1 + book2 << std::endl;
}

void exercise_1_22() {
    Sales_item book;
    Sales_item sum;
    while (std::cin >> book) {
        sum += book;
    }
    std::cout << sum << std::endl;
}

void exercise_1_23() {
    Sales_item oldBook;
    Sales_item book;
    int count = 1;
    if (std::cin >> oldBook) {
        while (std::cin >> book) {
            if (book.isbn() == oldBook.isbn()) {
                count++;
            } else {
                std::cout << oldBook.isbn() << " : " << count << std::endl;
                oldBook = book;
                count = 1;
            }
        }
        std::cout << oldBook.isbn() << " : " << count << std::endl;
    }
}

void exercise_1_25() {
    Sales_item total;
    if (std::cin >> total) {
        Sales_item trans;
        while (std::cin >> trans) {
            if (total.isbn() == trans.isbn()) {
                total += trans;
            } else {
                std::cout << total << std::endl;
                total = trans;
            }
        }
        std::cout << total << std::endl;
    } else {
        std::cerr << "No data?!" << std::endl;
    }
}
