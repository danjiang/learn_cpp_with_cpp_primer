//
// Created by Dan Jiang on 2020/8/25.
//

#include "ch11_associative_containers.h"

#include <iostream>
#include <map>
#include <set>
#include <fstream>
#include <exception>
#include <sstream>

void exercise_11_1() {
  std::map<std::string, size_t> word_count;
  std::set<std::string> exclude = { "The", "But", "And", "Or", "An", "A",
                                    "the", "but", "and", "or", "an", "a" };
  std::string word;
  while (std::cin >> word) {
    if (exclude.find(word) == exclude.end()) {
      ++word_count[word];
    }
  }
  for (const auto &w: word_count) {
    std::cout << w.first << " occurs " << w.second << ((w.second > 1) ? " times" : " time") << std::endl;
  }
}

void exercise_11_2() {
  std::multimap<std::string, std::string> authors;
  authors.insert({"Barth, John", "Sot-Weed Factor"});
  authors.insert({"Andrew S.Tanenbaum", "Modern Operating Systems"});
  authors.insert({"Barth, John", "Lost in the Funhouse"});
  authors.insert({"Randal E.Bryant", "Computer Systems: A Programmer‘ Perspective"});

  std::string search_item("Barth, John");

  auto entries = authors.count(search_item);
  auto it = authors.find(search_item);
  while (entries) {
    std::cout << it->second << std::endl;
    ++it;
    --entries;
  }

  auto beg = authors.lower_bound(search_item);
  auto end = authors.upper_bound(search_item);
  for (; beg != end; beg++) {
    std::cout << beg->second << std::endl;
  }

  for (auto pos = authors.equal_range(search_item); pos.first != pos.second; ++pos.first) {
    std::cout << pos.first->second << std::endl;
  }
}

std::map<std::string, std::string> buildMap(std::ifstream &map_file) {
  std::map<std::string, std::string> trans_map;
  std::string key;
  std::string value;
  while (map_file >> key && std::getline(map_file, value)) {
    if (value.size() > 1) {
      trans_map[key] = value.substr(1);
    } else {
      throw std::runtime_error("no rule for " + key);
    }
  }
  return trans_map;
}

const std::string & transform(const std::string &s, const std::map<std::string, std::string> &m) {
  auto map_it = m.find(s);
  if (map_it != m.cend()) {
    return map_it->second;
  } else {
    return s;
  }
}

void word_transform(std::ifstream &map_file, std::ifstream &input) {
  auto trans_map = buildMap(map_file);
  std::string text;
  while (std::getline(input, text)) {
    std::istringstream stream(text);
    std::string word;
    bool first_word = true;
    while (stream >> word) {
      if (first_word) {
        first_word = false;
      } else {
        std::cout << " ";
      }
      std::cout << transform(word, trans_map);
    }
    std::cout << std::endl;
  }
}

void exercise_11_3() {
  std::ifstream map_file("/Users/danjiang/CrossPlatform/learn_cpp_with_cpp_primer/rules");
  std::ifstream input("/Users/danjiang/CrossPlatform/learn_cpp_with_cpp_primer/text");
  word_transform(map_file, input);
}