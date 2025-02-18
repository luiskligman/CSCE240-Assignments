// Copyright 2025 bhipp
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include"program2functions.h"

int main() {
  double example_num = 54321.8076;
  int digit;
  int expected[10] = {0, 5, 4, 3, 2, 1, 8, 0, 7, 6};

  for ( int position = -5; position < 5; ++position ) {
    digit = DigitInPosition(example_num, position);
    if ( digit == expected[position + 5] ) {
      cout << "Passed DigitInPosition test " << position + 6 << endl;
    } else {
      cout << "Failed DigitInPosition test " << position + 6
           << ": DigitInPosition(" << example_num << ", " << position
           << ") returned = " << digit << ", expected "
           << expected[position + 5] << endl;
    }
  }

  return 0;
}
