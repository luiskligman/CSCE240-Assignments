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

  int num = x1.GetNumArtists();
  x1.SetNumArtists(0);
  if ( x1.GetNumArtists() == num ) {
    cout << "Passed bad SetNumArtists test" << endl;
  } else {
    cout << "Failed bad SetNumArtists test" << endl;
  }

  x1.SetNumArtists(2);
  if ( x1.GetNumArtists() == 2 ) {
    cout << "Passed good SetNumArtists test" << endl;
  } else {
    cout << "Failed good SetNumArtists test" << endl;
  }

  x1.SetArtist("Beyonce");
  if ( x1.GetArtist() == "Beyonce" ) {
    cout << "Passed SetArtist one good argument test" << endl;
  } else {
    cout << "Failed SetArtist one good argument test" << endl;
  }

  string s = x1.GetArtist();
  x1.SetArtist("");
  if ( x1.GetArtist() == s ) {
    cout << "Passed SetArtist one bad argument test" << endl;
  } else {
    cout << "Failed SetArtist one bad argument test" << endl;
  }

  x1.SetArtist("Gary Clark, Jr.", 2);
  if ( x1.GetArtist() == s && x1.GetArtist(2) == "Gary Clark, Jr." ) {
    cout << "Passed SetArtist two good arguments test" << endl;
  } else {
    cout << "Failed SetArtist two good arguments test" << endl;
  }

  string s2 = x1.GetArtist(2);
  x1.SetArtist("Another Artist", 3);
  if ( x1.GetNumArtists() == 2 && x1.GetArtist() == s
       && x1.GetArtist(2) == s2 ) {
    cout << "Passed SetArtist bad second argument test" << endl;
  } else {
    cout << "Failed SetArtist bad second argument test" << endl;
  }

  if ( x1.GetArtist(5) == "out of bounds" ) {
    cout << "Passed GetArtist out of bounds test" << endl;
  } else {
    cout << "Failed GetArtist out of bounds test" << endl;
  }

  return 0;
}
