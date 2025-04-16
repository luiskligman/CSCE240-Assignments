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

  x1.SetTrackLength(264);
  if ( x1.GetTrackLength() == 264 ) {
    cout << "Passed good SetTrackLength test" << endl;
  } else {
    cout << "Failed good SetTrackLength test" << endl;
  }

  int l = x1.GetTrackLength();
  x1.SetTrackLength(-5);
  if ( x1.GetTrackLength() == l ) {
    cout << "Passed bad SetTrackLength test" << endl;
  } else {
    cout << "Failed bad SetTrackLength test" << endl;
  }

  return 0;
}
