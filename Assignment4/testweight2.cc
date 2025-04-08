// Copyright 2025 bhipp
// Initial CovertUnits tests for the Weight class
#include<iostream>
using std::cout;
using std::endl;
#include<iomanip>
#include"weight.h"

int main() {
  cout << std::setprecision(4);
  cout << std::setiosflags(std::ios::fixed | std::ios::showpoint);
  Weight w1(2, "pounds");
  w1.ConvertUnits("ounces");
  if ( w1.GetValue() != 32 || w1.GetUnits() != "ounces" )
    cout << "Failed convert 2lbs to ounces test. Value = " << w1.GetValue()
         << " (expected 32). Units = " << w1.GetUnits() << " (expected ounces)"
         << endl;
  else
    cout << "Passed convert 2lbs to ounces test.";
  cout << endl;

  Weight w2(8, "ounces");
  w2.ConvertUnits("pounds");
  if ( w2.GetValue() != 0.5 || w2.GetUnits() != "pounds" )
    cout << "Failed convert 8oz to pounds test. Value = " << w2.GetValue()
         << " (expected 0.5). Units = " << w2.GetUnits() << " (expected pounds)"
         << endl;
  else
    cout << "Passed convert 8oz to pounds test.";
  cout << endl;

  Weight w3(4, "pounds");
  w3.ConvertUnits("grams");
  double expected = 1814.36948;
  double errorOk = 0.001;
  if ( w3.GetValue() < expected - errorOk || w3.GetValue() > expected + errorOk
       || w3.GetUnits() != "grams" )
    cout << "Failed convert 4lbs to grams test. Value = " << w3.GetValue()
         << " (expected " << expected << "). Units = " << w3.GetUnits()
         << " (expected grams)" << endl;
  else
    cout << "Passed convert 4lbs to grams test.";
  cout << endl;

  Weight w4(1814.36948, "grams");
  w4.ConvertUnits("pounds");
  expected = 4;
  if ( w4.GetValue() < expected - errorOk || w4.GetValue() > expected + errorOk
       || w4.GetUnits() != "pounds" )
    cout << "Failed convert 1814.36948 grams to pounds test. Value = "
         << w4.GetValue() << " (expected " << expected << "). Units = "
         << w4.GetUnits() << " (expected pounds)" << endl;
  else
    cout << "Passed convert 1814.36948 grams to pounds test.";
  cout << endl;

  Weight w5(50, "pounds");
  w5.ConvertUnits("kilograms");
  expected = 22.6796185;
  if ( w5.GetValue() < expected - errorOk || w5.GetValue() > expected + errorOk
       || w5.GetUnits() != "kilograms" )
    cout << "Failed convert 50lbs to kilograms test. Value = " << w5.GetValue()
         << " (expected " << expected << "). Units = " << w5.GetUnits()
         << " (expected kilograms)" << endl;
  else
    cout << "Passed convert 50lbs to kilograms test.";
  cout << endl;

  Weight w6(22.6796185, "kilograms");
  w6.ConvertUnits("pounds");
  expected = 50;
  if ( w6.GetValue() < expected - errorOk || w6.GetValue() > expected + errorOk
       || w6.GetUnits() != "pounds" )
    cout << "Failed convert 22.6796185 kilograms to pounds test. Value = "
         << w6.GetValue() << " (expected " << expected << "). Units = "
         << w6.GetUnits() << " (expected pounds)" << endl;
  else
    cout << "Passed convert 22.6796185 kilograms to pounds test.";
  cout << endl;

  Weight w7(10, "kilograms");
  w7.ConvertUnits("ounces");
  expected = 352.739619496;
  if ( w7.GetValue() < expected - errorOk || w7.GetValue() > expected + errorOk
       || w7.GetUnits() != "ounces" )
    cout << "Failed convert 10 kilograms to ounces test. Value = "
         << w7.GetValue() << " (expected " << expected << "). Units = "
         << w7.GetUnits() << " (expected grams)" << endl;
  else
    cout << "Passed convert 10 kilograms to ounces test.";
  cout << endl;

  Weight w8(352.739619496, "ounces");
  w8.ConvertUnits("kilograms");
  expected = 10;
  if ( w8.GetValue() < expected - errorOk || w8.GetValue() > expected + errorOk
       || w8.GetUnits() != "kilograms" )
    cout << "Failed convert 352.739619496 ounces to kilograms test. Value = "
         << w8.GetValue() << " (expected " << expected << "). Units = "
         << w8.GetUnits() << " (expected grams)" << endl;
  else
    cout << "Passed convert 352.739619496 ounces to kilograms test.";
  cout << endl;

  Weight w9(100, "grams");
  w9.ConvertUnits("ounces");
  expected = 3.527396195;
  if ( w9.GetValue() < expected - errorOk || w9.GetValue() > expected + errorOk
       || w9.GetUnits() != "ounces" )
    cout << "Failed convert 100 grams to ounces test. Value = "
         << w9.GetValue() << " (expected " << expected << "). Units = "
         << w9.GetUnits() << " (expected ounces)" << endl;
  else
    cout << "Passed convert 100 grams to ounces test.";
  cout << endl;

  Weight w10(3.527396195, "ounces");
  w10.ConvertUnits("grams");
  expected = 100;
  if ( w10.GetValue() < expected - errorOk
       || w10.GetValue() > expected + errorOk
       || w10.GetUnits() != "grams" )
    cout << "Failed convert 3.527396195 ounces to grams test. Value = "
         << w10.GetValue() << " (expected " << expected << "). Units = "
         << w10.GetUnits() << " (expected grams)" << endl;
  else
    cout << "Passed convert 35.27396195 ounces to grams test.";
  cout << endl;

  Weight w11(1.3, "kilograms");
  w11.ConvertUnits("grams");
  expected = 1300;
  if ( w11.GetValue() < expected - errorOk
       || w11.GetValue() > expected + errorOk
       || w11.GetUnits() != "grams" )
    cout << "Failed convert 1.3 kilograms to grams test. Value = "
         << w11.GetValue() << " (expected " << expected << "). Units = "
         << w11.GetUnits() << " (expected grams)" << endl;
  else
    cout << "Passed convert 1.3 kilograms to grams test.";
  cout << endl;

  Weight w12(275, "grams");
  w12.ConvertUnits("kilograms");
  expected = 0.275;
  if ( w12.GetValue() < expected - errorOk
       || w12.GetValue() > expected + errorOk
       || w12.GetUnits() != "kilograms" )
    cout << "Failed convert 275 grams to kilograms test. Value = "
         << w12.GetValue() << " (expected " << expected << "). Units = "
         << w12.GetUnits() << " (expected kilograms)" << endl;
  else
    cout << "Passed convert 275 grams to kilograms test.";
  cout << endl;

  Weight w13(275, "grams");
  w13.ConvertUnits("centimeters");
  if ( w13.GetValue() < 275 || w13.GetUnits() != "grams" )
    cout << "Failed convert to bad units test." << endl;
  else
    cout << "Passed convert to bad units test." << endl;
  cout << endl;
  return 0;
}

