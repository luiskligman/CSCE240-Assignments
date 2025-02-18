// Copyright 2025 bhipp
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include"program2functions.h"

int main() {
  if ( IsVowel('a') ) {
    cout << "Passed IsVowel('a') test" << endl;
  } else {
    cout << "Failed IsVowel('a') test" << endl;
  }

  if ( !IsVowel('b') ) {
    cout << "Passed IsVowel('b') test" << endl;
  } else {
    cout << "Failed IsVowel('b') test" << endl;
  }

  if ( !IsVowel('?') ) {
    cout << "Passed IsVowel('?') test" << endl;
  } else {
    cout << "Failed IsVowel('?') test" << endl;
  }

  if ( IsVowel('y') ) {
    cout << "Passed IsVowel('y') test" << endl;
  } else {
    cout << "Failed IsVowel('y') test" << endl;
  }

  if ( !IsVowel('y', false) ) {
    cout << "Passed IsVowel('y', false) test" << endl;
  } else {
    cout << "Failed IsVowel('y', false) test" << endl;
  }

  return 0;
}
