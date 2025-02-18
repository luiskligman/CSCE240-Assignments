// Copyright 2025 bhipp
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include"program2functions.h"

int main() {
  int digit = -1;

  digit = ToDigit('0');
  if ( digit == 0 ) {
    cout << "Passed ToDigit('0') test" << endl;
  } else {
    cout << "Failed ToDigit('0') test" << endl;
  }

  digit = ToDigit('5');
  if ( digit == 5 ) {
    cout << "Passed ToDigit('5') test" << endl;
  } else {
    cout << "Failed ToDigit('5') test" << endl;
  }

  digit = ToDigit('.');
  if ( digit == 0 ) {
    cout << "Passed ToDigit('.') test" << endl;
  } else {
    cout << "Failed ToDigit('.') test" << endl;
  }

  digit = ToDigit('9');
  if ( digit == 9 ) {
    cout << "Passed ToDigit('9') test" << endl;
  } else {
    cout << "Failed ToDigit('9') test" << endl;
  }

  digit = ToDigit('q');
  if ( digit == 0 ) {
    cout << "Passed ToDigit('q') test" << endl;
  } else {
    cout << "Failed ToDigit('q') test" << endl;
  }

  return 0;
}
