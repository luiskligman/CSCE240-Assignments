// Copyright 2025 bhipp
// Initial CovertUnits tests for the Weight class
#include<iostream>
using std::cout;
using std::endl;
#include"weight.h"

int main() {
  const Weight kWeight1(2, "pounds"), kWeight2(40, "ounces"), kWeight3(32, "ounces");

  if ( kWeight1 <= kWeight2 ) {
    cout << "Passed <= test 1" << endl;
  } else {
    cout << "Failed <= test 1." 
         << "Read code in testweight3.cc to view the comparison." << endl;
  }

  if ( !(kWeight2 <= kWeight1) ) {
    cout << "Passed <= test 2" << endl;
  } else {
    cout << "Failed <= test 2." 
         << "Read code in testweight3.cc to view the comparison." << endl;
  }

  if ( kWeight1 <= kWeight3 ) {
    cout << "Passed <= test 3" << endl;
  } else {
    cout << "Failed <= test 3." 
         << "Read code in testweight3.cc to view the comparison." << endl;
  }

  if ( kWeight3 <= kWeight1 ) {
    cout << "Passed <= test 4" << endl;
  } else {
    cout << "Failed <= test 4." 
         << "Read code in testweight3.cc to view the comparison." << endl;
  }

  const Weight kWeight4(3000, "grams"), kWeight5(5, "kilograms"), kWeight6(3, "kilograms");

  if ( kWeight4 <= kWeight5 ) {
    cout << "Passed <= test 5" << endl;
  } else {
    cout << "Failed <= test 5." 
         << "Read code in testweight3.cc to view the comparison." << endl;
  }

  if ( !(kWeight5 <= kWeight4) ) {
    cout << "Passed <= test 6" << endl;
  } else {
    cout << "Failed <= test 6." 
         << "Read code in testweight3.cc to view the comparison." << endl;
  }

  if ( kWeight4 <= kWeight6 ) {
    cout << "Passed <= test 7" << endl;
  } else {
    cout << "Failed <= test 7." 
         << "Read code in testweight3.cc to view the comparison." << endl;
  }

  if ( kWeight6 <= kWeight4 ) {
    cout << "Passed <= test 8" << endl;
  } else {
    cout << "Failed <= test 8." 
         << "Read code in testweight3.cc to view the comparison." << endl;
  }

  return 0;
}

