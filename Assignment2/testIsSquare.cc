// Copyright 2025 bhipp
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include"program2functions.h"

int main() {
  if ( IsSquare(0) ) {
    cout << "Passed IsSquare(0) test" << endl;
  } else {
    cout << "Failed IsSquare(0) test" << endl;
  }

  if ( IsSquare(25) ) {
    cout << "Passed IsSquare(25) test" << endl;
  } else {
    cout << "Failed IsSquare(25) test" << endl;
  }

  if ( IsSquare(121) ) {
    cout << "Passed IsSquare(121) test" << endl;
  } else {
    cout << "Failed IsSquare(121) test" << endl;
  }

  if ( !IsSquare(30) ) {
    cout << "Passed IsSquare(30) test" << endl;
  } else {
    cout << "Failed IsSquare(30) test" << endl;
  }

  if ( !IsSquare(200) ) {
    cout << "Passed IsSquare(200) test" << endl;
  } else {
    cout << "Failed IsSquare(200) test" << endl;
  }

  return 0;
}
