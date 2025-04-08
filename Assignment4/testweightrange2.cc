// Copyright 2025 bhipp
// Initial constructor and accessor tests for the WeightRange class
#include<iostream>
using std::cout;
using std::endl;
#include"weightrange.h"
#include"weight.h"

int main() {
  WeightRange range1;
  range1.SetLargest(Weight(7, "ounces"));
  if ( range1.GetSmallest().GetValue() == 0 &&
       range1.GetSmallest().GetUnits() == "pounds" &&
       range1.GetLargest().GetValue() == 7 &&
       range1.GetLargest().GetUnits() == "ounces" )
    cout << "Passed good SetLargest test" << endl;
  else
    cout << "Failed good SetLargest test" << endl;

  WeightRange range2(Weight(8, "ounces"), Weight(1, "pound"));
  range2.SetSmallest(Weight(4, "grams"));
  if ( range2.GetSmallest().GetValue() == 4 &&
       range2.GetSmallest().GetUnits() == "grams" &&
       range2.GetLargest().GetValue() == 1 &&
       range2.GetLargest().GetUnits() == "pounds" )
    cout << "Passed good SetSmallest test" << endl;
  else
    cout << "Failed good SetSmallest test" << endl;

  WeightRange range3(Weight(8, "kilograms"), Weight(10, "grams"));
  range3.SetLargest(Weight(7, "grams"));
  if ( range3.GetSmallest().GetValue() == 10 &&
       range3.GetSmallest().GetUnits() == "grams" &&
       range3.GetLargest().GetValue() == 8 &&
       range3.GetLargest().GetUnits() == "kilograms" )
    cout << "Passed bad SetLargest test" << endl;
  else
    cout << "Failed bad SetLargest test" << endl;

  WeightRange range4(Weight(2, "kilograms"), Weight(5, "pounds"));
  range4.SetSmallest(Weight(100, "ounces"));
  if ( range4.GetSmallest().GetValue() == 2 &&
       range4.GetSmallest().GetUnits() == "kilograms" &&
       range4.GetLargest().GetValue() == 5 &&
       range4.GetLargest().GetUnits() == "pounds" )
    cout << "Passed bad SetSmallest test" << endl;
  else
    cout << "Failed bad SetSmallest test" << endl;
  return 0;
}
