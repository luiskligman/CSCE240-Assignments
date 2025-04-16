// Copyright 2025 bhipp
#include<iostream>
using std::cout;
using std::endl;
#include<string>
using std::string;
#include"StreamingTrack.h"
using namespace csce240_programming_assignment_5;

int main() {
  const StreamingTrack k;

  if ( k.IsGenre("pop") ) {
    cout << "Passed IsGenre with value in list test 1" << endl;
  } else {
    cout << "Failed IsGenre with value in list test 1" << endl;
  }

  if ( !k.IsGenre("reggae") ) {
    cout << "Passed IsGenre with value not in list test 1" << endl;
  } else {
    cout << "Failed IsGenre with value not in list test 1" << endl;
  }

  StreamingTrack x1;
  x1.RemoveGenre("pop");
  if ( !x1.IsGenre("pop") ) {
    cout << "Passed IsGenre with empty list" << endl;
  } else {
    cout << "Failed IsGenre with empty list" << endl;
  }

  x1.AddGenre("funk");
  x1.AddGenre("rock");
  x1.AddGenre("soul");
  x1.AddGenre("rap");
  x1.AddGenre("pop");
  x1.AddGenre("country");
  x1.AddGenre("rap");
  x1.AddGenre("blues");

  if ( x1.IsGenre("pop") ) {
    cout << "Passed IsGenre with value in list test 2" << endl;
  } else {
    cout << "Failed IsGenre with value in list test 2" << endl;
  }

  if ( x1.IsGenre("funk") ) {
    cout << "Passed IsGenre with value in list test 3" << endl;
  } else {
    cout << "Failed IsGenre with value in list test 3" << endl;
  }

  if ( x1.IsGenre("blues") ) {
    cout << "Passed IsGenre with value in list test 4" << endl;
  } else {
    cout << "Failed IsGenre with value in list test 4" << endl;
  }

  if ( !x1.IsGenre("classical") ) {
    cout << "Passed IsGenre with value not in list test 2" << endl;
  } else {
    cout << "Failed IsGenre with value not in list test 2" << endl;
  }

  return 0;
}
