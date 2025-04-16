// Copyright 2025 bhipp
#include<iostream>
using std::cout;
using std::endl;
#include<string>
using std::string;
#include"StreamingTrack.h"
using namespace csce240_programming_assignment_5;

int main() {
  StreamingTrack x1;

  int stream = x1.GetStreams();
  x1.SetStreams(-7);
  if ( x1.GetStreams() == stream ) {
    cout << "Passed bad SetStreams test" << endl;
  } else {
    cout << "Failed bad SetTrackLength test" << endl;
  }

  x1.SetStreams(1000);
  if ( x1.GetStreams() == 1000 ) {
    cout << "Passed good SetStreams test" << endl;
  } else {
    cout << "Failed good SetStreams test" << endl;
  }

  stream = x1.GetStreams();
  x1.AddStreams(366);
  if ( x1.GetStreams() == stream + 366 ) {
    cout << "Passed good AddStreams test" << endl;
  } else {
    cout << "Failed good AddStreams test" << endl;
  }

  stream = x1.GetStreams();
  x1.AddStreams(-72);
  if ( x1.GetStreams() == stream ) {
    cout << "Passed bad AddStreams test" << endl;
  } else {
    cout << "Failed bad AddStreams test" << endl;
  }

  return 0;
}
