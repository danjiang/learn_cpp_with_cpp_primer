//
// Created by Dan Jiang on 2020/4/18.
//

#include "ch3_strings_vectors_and_arrays.h"
#include <iostream>
#include <string>
#include <cctype>
#include <vector>

void exercise_3_2() {
    std::string string;
//    while (std::cin >> string) {
    while (getline(std::cin, string)) {
        std::cout << string << std::endl;
    }
}

void exercise_3_4() {
    std::string s1, s2;
    std::cin >> s1 >> s2;
//    if (s1 == s2) {
//        std::cout << s1 << " is equal to " << s2 << std::endl;
//    } else if (s1 > s2) {
//        std::cout << s1 << " is great than " << s2 << std::endl;
//    } else if (s2 > s1) {
//        std::cout << s2 << " is great than " << s1 << std::endl;
//    }
    if (s1.size() == s2.size()) {
        std::cout << s1 << " is same size as " << s2 << std::endl;
    } else if (s1.size() > s2.size()) {
        std::cout << s1 << " is longer than " << s2 << std::endl;
    } else if (s2.size() > s1.size()) {
        std::cout << s2 << " is longer than " << s1 << std::endl;
    }
}

void exercise_3_5() {
    std::string sum, each;
    while (std::cin >> each) {
//        sum += each;
        sum += each + " ";
    }
    std::cout << sum;
}

void exercise_3_6() {
    std::string string;
    std::cin >> string;
    for (auto &c : string) {
        c = 'X';
    }
//    for (decltype(string.size()) i = 0; i < string.size(); ++i) {
//        string[i] = 'X';
//    }
//    decltype(string.size()) i = 0;
//    while (i < string.size()) {
//        string[i] = 'X';
//        i++;
//    }
    std::cout << string;
}

void exercise_3_10() {
    std::string string, result;
    std::cin >> string;
    for (auto &c : string) {
        if (!ispunct(c)) {
            result += c;
        }
    }
    std::cout << result;
}

void exercise_3_14() {
    std::vector<std::string> v;
    std::string a;
    while (std::cin >> a) {
        v.push_back(a);
    }
    for (std::string b: v) {
       std::cout << b << " ";
    }
    std::cout << std::endl;
}

void exercise_3_17() {
    std::vector<std::string> v;
    std::string s;
    while (std::cin >> s) {
        v.push_back(s);
    }
    for (std::string &str : v) {
        for (auto &c : str) {
            c = toupper(c);
        }
    }
    for (decltype(v.size()) i = 0; i < v.size(); i++) {
        std::cout << v[i] << " ";
        if ((i + 1) % 8 == 0) {
           std::cout << std::endl;
        }
    }
}

void exercise_3_23() {
    std::vector<int> v = { 11, 22, 2, 4, 5, 7, 8, 12 };
    for (auto it = v.begin(); it != v.end(); ++it) {
        *it = (*it) * 2;
    }
    for (auto it = v.begin(); it != v.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

void exercise_3_41() {
    int array[] = { 3, 4, 5, 6, 7 };
    int *p = array;
    // std::vector<int> v (std::begin(array), std::end(array));
    std::vector<int> v (p, p + 5);
    for (int i : array) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    int *pInt = v.data();
    int size = int(v.size());
    for (int i = 0; i < size; ++i) {
       printf("%d ", *(pInt + i));
    }
}
