//
// Created by Dan Jiang on 2020/9/26.
//

#ifndef LEARN_CPP_WITH_CPP_PRIMER__FOLDER_H_
#define LEARN_CPP_WITH_CPP_PRIMER__FOLDER_H_

#include <set>

class Message;

class Folder {
 public:
  void addMsg(Message *m);
  void remMsg(Message *m);
 private:
  std::set<Message *> messages;
};

#endif //LEARN_CPP_WITH_CPP_PRIMER__FOLDER_H_
