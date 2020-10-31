//
// Created by Dan Jiang on 2020/9/26.
//

#include "Folder.h"

void Folder::addMsg(Message *m) {
  messages.insert(m);
}

void Folder::remMsg(Message *m) {
  messages.erase(m);
}