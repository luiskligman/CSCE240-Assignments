// Copyright 2025 bhipp
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include"program2functions.h"

int main() {
  int x, y, returned;

  x = 1;
  y = 4;
  returned = Range(x, y);
  if ( x == 1 && y == 4 && returned == 3 ) {
    cout << "Passed Range test 1" << endl;
  } else {
    cout << "Failed Range test 1. x = " << x << " (expected 1), y = " << y
         << " (expected 4), and value returned = " << returned
         << " (expected 3)" << endl;
  }

  x = 1;
  y = -4;
  returned = Range(x, y);
  if ( x == -4 && y == 1 && returned == 5 ) {
    cout << "Passed Range test 2" << endl;
  } else {
    cout << "Failed Range test 2. x = " << x << " (expected -4), y = " << y
         << " (expected 1), and value returned = " << returned
         << " (expected 5)" << endl;
  }

  x = -8;
  y = -1;
  returned = Range(x, y);
  if ( x == -8 && y == -1 && returned == 7 ) {
    cout << "Passed Range test 3" << endl;
  } else {
    cout << "Failed Range test 3. x = " << x << " (expected -8), y = " << y
         << " (expected -1), and value returned = " << returned
         << " (expected 7)" << endl;
  }

  x = 13;
  y = 9;
  returned = Range(x, y);
  if ( x == 9 && y == 13 && returned == 4 ) {
    cout << "Passed Range test 4" << endl;
  } else {
    cout << "Failed Range test 4. x = " << x << " (expected 9), y = " << y
         << " (expected 13), and value returned = " << returned
         << " (expected 4)" << endl;
  }

  x = -10;
  y = -22;
  returned = Range(x, y);
  if ( x == -22 && y == -10 && returned == 12 ) {
    cout << "Passed Range test 5" << endl;
  } else {
    cout << "Failed Range test 5. x = " << x << " (expected -22), y = " << y
         << " (expected -10), and value returned = " << returned
         << " (expected 12)" << endl;
  }

  return 0;
}
