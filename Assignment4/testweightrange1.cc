// Copyright 2025 bhipp
// Initial constructor and accessor tests for the WeightRange class
#include<iostream>
using std::cout;
using std::endl;
#include"weightrange.h"
#include"weight.h"

int main() {
  WeightRange range1;
  if ( range1.GetSmallest().GetValue() == 0 &&
       range1.GetSmallest().GetUnits() == "pounds" &&
       range1.GetLargest().GetValue() == 0 &&
       range1.GetLargest().GetUnits() == "pounds" )
    cout << "Passed default constructor test" << endl;
  else
    cout << "Failed default constructor test" << endl;

  WeightRange range2(Weight(8, "ounces"), Weight(1, "pounds"));
  if ( range2.GetSmallest().GetValue() == 8 &&
       range2.GetSmallest().GetUnits() == "ounces" &&
       range2.GetLargest().GetValue() == 1 &&
       range2.GetLargest().GetUnits() == "pounds" )
    cout << "Passed ascending two Weight argument constructor test" << endl;
  else
    cout << "Failed ascending two Weight argument constructor test" << endl;

  WeightRange range3(Weight(8, "kilograms"), Weight(10, "grams"));
  if ( range3.GetSmallest().GetValue() == 10 &&
       range3.GetSmallest().GetUnits() == "grams" &&
       range3.GetLargest().GetValue() == 8 &&
       range3.GetLargest().GetUnits() == "kilograms" )
    cout << "Passed descending two Weight argument constructor test" << endl;
  else
    cout << "Failed descending two Weight argument constructor test" << endl;

  WeightRange range4(Weight(2, "kilograms"), Weight(5, "pounds"));
  if ( range4.GetSmallest().GetValue() == 2 &&
       range4.GetSmallest().GetUnits() == "kilograms" &&
       range4.GetLargest().GetValue() == 5 &&
       range4.GetLargest().GetUnits() == "pounds" )
    cout << "Passed ascending two Weight argument constructor test 2" << endl;
  else
    cout << "Failed ascending two Weight argument constructor test 2" << endl;
  return 0;
}
