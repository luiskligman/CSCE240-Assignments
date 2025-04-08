// Copyright 2025 bhipp
// Initial constructor and accessor tests for the WeightRange class
#include<iostream>
using std::cout;
using std::endl;
#include"weightrange.h"
#include"weight.h"

int main() {
  WeightRange range1;
  if ( range1.Width().GetValue() == 0 &&
       range1.Width().GetUnits() == "pounds" )
    cout << "Passed Width test 1" << endl;
  else
    cout << "Failed Width test 1" << endl;

  WeightRange range2(Weight(8, "ounces"), Weight(1, "pound"));
  if ( range2.Width().GetValue() == 0.5 &&
       range2.Width().GetUnits() == "pounds" )
    cout << "Passed Width test 2" << endl;
  else
    cout << "Failed Width test 2" << endl;

  WeightRange range3(Weight(1, "kilograms"), Weight(1062, "grams"));
  if ( range3.Width().GetValue() == 62 &&
       range3.Width().GetUnits() == "grams" )
    cout << "Passed Width test 3" << endl;
  else
    cout << "Failed Width test 3" << endl;

  return 0;
}
