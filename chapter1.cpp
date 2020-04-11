//
// Created by Dan Jiang on 2020/4/11.
//

#include "chapter1.h"

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
