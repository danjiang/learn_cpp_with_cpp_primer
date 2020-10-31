//
// Created by Dan Jiang on 2020/10/31.
//

#include "ch16_templates_and_generic_programming.h"
#include "Blob.h"

#include <iostream>

template <typename T>
int compare(const T &v1, const T &v2) {
  if (v1 < v2) {
    return -1;
  }
  if (v2 < v1) {
    return 1;
  }
  return 0;
}

void exercise_16_1() {
  std::cout << compare(1, 0) << std::endl;
  std::cout << compare(-1.0, 2.0) << std::endl;
  std::cout << compare("abc", "cde") << std::endl;

  Blob<std::string> articles = { "a", "an", "the" };
  articles.push_back("another");
  auto size = articles.size();
  for (int i = 0; i < size; ++i) {
    std::cout << articles.back() << std::endl;
    articles.pop_back();
  }

  Blob<int> squares = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
  squares.push_back(10);
  while (!squares.empty()) {
    std::cout << squares.back() << std::endl;
    squares.pop_back();
  }
}