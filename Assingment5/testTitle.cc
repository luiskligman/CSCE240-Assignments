// Copyright 2025 bhipp
#include<iostream>
using std::cout;
using std::endl;
#include<string>
using std::string;
#include"SongRecording.h"
using namespace csce240_programming_assignment_5;

int main() {
  SongRecording x1;

  x1.SetTitle("Happy Birthday");
  if ( x1.GetTitle() == "Happy Birthday" ) {
    cout << "Passed good SetTitle test" << endl;
  } else {
    cout << "Failed good SetTitle test" << endl;
  }

  string s = x1.GetTitle();
  x1.SetTitle("");
  if ( x1.GetTitle() == s ) {
    cout << "Passed bad SetTitle test" << endl;
  } else {
    cout << "Failed bad SetTitle test" << endl;
  }

  return 0;
}
