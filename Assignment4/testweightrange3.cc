// Copyright 2025 bhipp
// Initial constructor and accessor tests for the WeightRange class
#include<iostream>
using std::cout;
using std::endl;
#include"weightrange.h"
#include"weight.h"

int main() {
  WeightRange range1;
  if ( range1.InRange(Weight(0, "pounds") ) )
    cout << "Passed true, inclusive InRange test" << endl;
  else
    cout << "Failed true, inclusive InRange test" << endl;

  WeightRange range2(Weight(8, "ounces"), Weight(1, "pound"));
  if ( range2.InRange(Weight(250, "grams") ) )
    cout << "Passed true, inclusive InRange test 2" << endl;
  else
    cout << "Failed true, inclusive InRange test 2" << endl;

  if ( !range2.InRange(Weight(0.1, "kilograms") ) )
    cout << "Passed false, inclusive InRange test" << endl;
  else
    cout << "Failed false, inclusive InRange test" << endl;

  WeightRange range3(Weight(8, "kilograms"), Weight(10, "grams"));
  if ( range3.InRange(Weight(2, "pounds"), false) )
    cout << "Passed true, exclusive InRange test" << endl;
  else
    cout << "Failed true, exclusive InRange test" << endl;

  WeightRange range4(Weight(2, "kilograms"), Weight(5, "pounds"));
  if ( !range4.InRange(Weight(4, "pounds"), false) )
    cout << "Passed false, exclusive InRange test" << endl;
  else
    cout << "Failed false, exclusive InRange test" << endl;

  if ( !range4.InRange(Weight(15, "grams"), false) )
    cout << "Passed false, exclusive InRange test 2" << endl;
  else
    cout << "Failed false, exclusive InRange test 2" << endl;
  return 0;
}
