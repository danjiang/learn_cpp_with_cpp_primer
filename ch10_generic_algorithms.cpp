//
// Created by Dan Jiang on 2020/8/19.
//

#include "ch10_generic_algorithms.h"

#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <list>

void exercise_10_1() {
  std::vector<int> vec { 42, 47, 83 };
  int val = 42;
  auto result = std::find(vec.cbegin(), vec.cend(), val);
  std::cout << "The value " << val << (result == vec.cend() ? " is not present" : " is present") << std::endl;

  std::cout << std::count(vec.cbegin(), vec.cend(), val) << std::endl;

  std::list<std::string> strings { "the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle" };
  std::cout << std::count(strings.cbegin(), strings.cend(), "red") << std::endl;

  std::cout << std::accumulate(vec.cbegin(), vec.cend(), 0) << std::endl;

  std::vector<int> new_vec;
  auto it = std::back_inserter(new_vec);
  *it = 12;
  *it = 22;

  for (int i : new_vec) {
    std::cout << i << " ";
  }
  std::cout << std::endl;

  std::vector<std::string> unsorted_vec { "the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle" };
  std::sort(unsorted_vec.begin(), unsorted_vec.end());
  auto end_unique = std::unique(unsorted_vec.begin(), unsorted_vec.end());
  unsorted_vec.erase(end_unique, unsorted_vec.end());

  for (const std::string& string : unsorted_vec) {
    std::cout << string << " ";
  }
  std::cout << std::endl;
}