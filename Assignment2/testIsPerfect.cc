// Copyright 2025 bhipp
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include"program2functions.h"

int main() {
  if ( IsPerfect(6) ) {
    cout << "Passed IsPerfect(6) test" << endl;
  } else {
    cout << "Failed IsPerfect(6) test" << endl;
  }

  if ( !IsPerfect(8) ) {
    cout << "Passed IsPerfect(8) test" << endl;
  } else {
    cout << "Failed IsPerfect(8) test" << endl;
  }

  if ( !IsPerfect(25) ) {
    cout << "Passed IsPerfect(25) test" << endl;
  } else {
    cout << "Failed IsPerfect(25) test" << endl;
  }

  if ( !IsPerfect(100) ) {
    cout << "Passed IsPerfect(100) test" << endl;
  } else {
    cout << "Failed IsPerfect(100) test" << endl;
  }

  if ( IsPerfect(8128) ) {
    cout << "Passed IsPerfect(8128) test" << endl;
  } else {
    cout << "Failed IsPerfect(8128) test" << endl;
  }

  return 0;
}
