//
// Created by Dan Jiang on 2020/9/1.
//

#include "ch12_dynamic_memory_and_smart_pointers.h"

#include <iostream>
#include <vector>
#include <string>
#include "StrBlob.h"
#include "TextQuery.h"

void exercise_12_1() {
  std::vector<std::string> v1;
  {
    std::vector<std::string> v2 = {"a", "an", "the"};
    v1 = v2; // copy elements
    v2.push_back("with");
  }
  while (!v1.empty()) {
    std::cout << v1.back() << " ";
    v1.pop_back();
  }
  std::cout << std::endl;

  StrBlob b1;
  {
    StrBlob b2 = {"a", "an", "the"};
    b1 = b2; // share the same elements
    b2.push_back("with");
  }
  while (!b1.empty()) {
    std::cout << b1.back() << " ";
    b1.pop_back();
  }
  std::cout << std::endl;
}

void runQueries(std::ifstream &infile) {
  TextQuery tq(infile);
  while (true) {
    std::cout << "enter word to look for, or q to quit: ";
    std::string s;
    if (!(std::cin >> s) || s == "q") {
      break;
    }
    printResult(std::cout, tq.query(s)) << std::endl;
  }
}

void exercise_12_2() {
  std::ifstream data_file("/Users/danjiang/CrossPlatform/learn_cpp_with_cpp_primer/storyDataFile");
  runQueries(data_file);
}
