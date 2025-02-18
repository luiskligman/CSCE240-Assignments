// Copyright 2025 bhipp
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include"program2functions.h"

int main() {
  if ( !IsConsonant('a') ) {
    cout << "Passed IsConsonant('a') test" << endl;
  } else {
    cout << "Failed IsConsonant('a') test" << endl;
  }

  if ( IsConsonant('b') ) {
    cout << "Passed IsConsonant('b') test" << endl;
  } else {
    cout << "Failed IsConsonant('b') test" << endl;
  }

  if ( !IsConsonant('!') ) {
    cout << "Passed IsConsonant('!') test" << endl;
  } else {
    cout << "Failed IsConsonant('!') test" << endl;
  }

  if ( IsConsonant('y') ) {
    cout << "Passed IsConsonant('y') test" << endl;
  } else {
    cout << "Failed IsConsonant('y') test" << endl;
  }

  if ( !IsConsonant('y', false) ) {
    cout << "Passed IsConsonant('y', false) test" << endl;
  } else {
    cout << "Failed IsConsonant('y', false) test" << endl;
  }

  return 0;
}
