// Copyright 2025 bhipp
// Initial constructor, mutator, and accessor tests for the Weight class
#include<iostream>
using std::cout;
using std::endl;
#include<string>
using std::string;
#include"weight.h"

int main() {
  Weight w1;
  if ( w1.GetValue() != 0 || w1.GetUnits() != "pounds" )
    cout << "Failed default constructor / accessor function test.";
  else
    cout << "Passed default constructor / accessor function test.";
  cout << endl;

  const Weight w2(3);
  if ( w2.GetValue() != 3 || w2.GetUnits() != "pounds" )
    cout << "Failed constructor one good argument / accessor function test.";
  else
    cout << "Passed constructor one good argument / accessor function test.";
  cout << endl;

  Weight w3(-7);
  if ( w3.GetValue() != 0 || w3.GetUnits() != "pounds" )
    cout << "Failed constructor one bad argument / accessor function test.";
  else
    cout << "Passed constructor one bad argument / accessor function test.";
  cout << endl;

  Weight w4(25, "kilograms");
  if ( w4.GetValue() != 25 || w4.GetUnits() != "kilograms" )
    cout << "Failed constructor two good arguments / accessor function test.";
  else
    cout << "Passed constructor two good arguments / accessor function test.";
  cout << endl;

  Weight w5(100, "feathers");
  if ( w5.GetValue() != 100 || w5.GetUnits() != "pounds" )
    cout << "Failed constructor bad units / accessor function test.";
  else
    cout << "Passed constructor bad units / accessor function test.";
  cout << endl;

  Weight w6;
  string initial_units = w6.GetUnits();
  w6.SetValue(148.9);
  if ( w6.GetValue() != 148.9 || w6.GetUnits() != initial_units )
    cout << "Failed SetValue with valid argument test.";
  else
    cout << "Passed SetValue with valid argument test.";
  cout << endl;

  Weight w7;
  initial_units = w7.GetUnits();
  double initial_value = w7.GetValue();
  w7.SetValue(-75);
  if ( w7.GetValue() != initial_value || w7.GetUnits() != initial_units )
    cout << "Failed SetValue with invalid argument test.";
  else
    cout << "Passed SetValue with invalid argument test.";
  cout << endl;

  Weight w8;
  initial_units = w8.GetUnits();
  initial_value = w8.GetValue();
  w8.SetUnits("ounces");
  if ( w8.GetValue() != initial_value || w8.GetUnits() != "ounces" )
    cout << "Failed SetUnits with valid argument test.";
  else
    cout << "Passed SetUnits with valid argument test.";
  cout << endl;

  Weight w9;
  initial_units = w9.GetUnits();
  initial_value = w9.GetValue();
  w9.SetUnits("#%$@!");
  if ( w9.GetValue() != initial_value || w9.GetUnits() != initial_units )
    cout << "Failed SetUnits with invalid argument test.";
  else
    cout << "Passed SetUnits with invalid argument test.";
  cout << endl;
  return 0;
}

