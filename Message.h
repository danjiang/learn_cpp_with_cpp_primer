//
// Created by Dan Jiang on 2020/9/26.
//

#ifndef LEARN_CPP_WITH_CPP_PRIMER__MESSAGE_H_
#define LEARN_CPP_WITH_CPP_PRIMER__MESSAGE_H_

#include <string>
#include <set>

#include "Folder.h"

class Message {
  friend class Folder;
  friend void swap(Message&, Message&);
 public:
  explicit Message(const std::string &str = ""):
  contents(str) {}
  Message(const Message&);
  Message& operator=(const Message&);
  ~Message();
  void save(Folder&);
  void remove(Folder&);
 private:
  std::string contents;
  std::set<Folder *> folders;
  void add_to_Folders(const Message&);
  void remove_from_Folders();
};

void swap(Message&, Message&);

#endif //LEARN_CPP_WITH_CPP_PRIMER__MESSAGE_H_
