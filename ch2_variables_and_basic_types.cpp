//
// Created by Dan Jiang on 2020/4/11.
//

#include "ch2_variables_and_basic_types.h"
#include <iostream>

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
