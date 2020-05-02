//
// Created by Dan Jiang on 2020/5/2.
//

#include "Screen.h"

char Screen::get(pos r, pos c) const {
  pos row = r * width;
  return contents[row + c];
}

inline Screen& Screen::move(pos r, pos c) {
  pos row = r * width;
  cursor = row + c;
  return *this;
}

inline Screen& Screen::set(char c) {
  contents[cursor] = c;
  return *this;
}

inline Screen& Screen::set(pos r, pos col, char ch) {
  contents[r * width + col] = ch;
  return *this;
}

void Window_mgr::clear(ScreenIndex i) {
  Screen &s = screens[i];
  s.contents = std::string(s.height * s.width, ' ');
}