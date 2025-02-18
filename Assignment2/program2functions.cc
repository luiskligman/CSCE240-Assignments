// Copyright 2025 Luis Kligman
#include <iostream>
#include<cmath>
#include "program2functions.h"
using std::cin;
using std::cout;
using std::endl;

bool IsSquare(int val) {
  if (val < 0)
    return false;
  int root = sqrt(val);
  return root * root == val;
}

bool IsPerfect(int val) {
  if (val <= 1 )  // Perfect numbers are positive integers greater than 1
    return false;
  int sum = 1;  // Every number is divisible by 1
  for (int i = 2; i * i <= val; i++) {  // iterates through every square number
    if (val % i == 0) {  // val is dividable by i with no remainder
      sum += i;  // add these divisor to the sum
      if ( i != val / i )
        sum += val / i;  // add the corresponding divisor if it is different
    }
  }
  return sum == val;
}

bool IsVowel(char letter, bool yVowel) {
  letter = tolower(letter);  // convert to lowercase for simplicity
  if (yVowel && letter == 'y') {
    return true;
  } else if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o'
           || letter == 'u') {
    return true;
  }
  return false;
}

// TRUE means y is treated like a consonant
bool IsConsonant(char letter, bool yVowel) {
  letter = tolower(letter);  // convert to lowercase for simplicity
  if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o'
      || letter == 'u')
    return false;
  else if (!yVowel && letter == 'y')
    return false;
  else if (!isalpha(letter))
    return false;
  return true;
}

int ToDigit(char val) {
  if ( val >= '0' && val <= '9' )
    return val - '0';
  return 0;
}

int Range(int &x, int &y) {
  int range = 0;
  int temp = 0;
  if ( x > y ) {  // x is greater than y
    range = x - y;
    // SWAP
    temp = x;
    x = y;
    y = temp;
  } else {  // y is greater than x
    range = y - x;
  }
  return range;
}

int DigitInPosition(double number, int position) {
  int digit;
  number = abs(number);  // make positive to prevent errors
  // Handle position to the right of decimal; POSITION < 0
  if (position < 0) {
    digit = static_cast<int>(number / pow(10, abs(position)));
    // 431 / 10^0=1 = 431 % 10 = 1
    return digit % 10;
  }
  // Handle position to the left of the decimal; POSITION >= 0
  digit = static_cast<int>(number * pow(10, position));
  return digit % 10;
}
