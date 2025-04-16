// Copyright 2025 bhipp
#include<iostream>
using std::cout;
using std::endl;
#include<string>
using std::string;
#include"SongRecording.h"
using namespace csce240_programming_assignment_5;

int main() {
  const SongRecording k1, k2("Eggs and Sausage"), k3("Queen Bee", "Taj Mahal"),
                k4("1612", "Vulfpeck", 199),
                k5("Feel The Vibe", "BJ The Chicago Kid", 240, 2),
                k6("Happy Birthday To You", "", -6, 0);

  if ( k1.GetTitle() == "untitled" && k1.GetArtist() == "unknown" &&
       k1.GetNumArtists() == 1 && k1.GetTrackLength() == 0 ) {
    cout << "Passed default constructor test" << endl;
  } else {
    cout << "Failed default constructor test\n\tTitle: "
         << k1.GetTitle() << " (expected untitled)\n\tNum Artists: "
         << k1.GetNumArtists() << " (expected 1)\n\tArtist 1: "
         << k1.GetArtist() << " (expected unknown)\n\tTrack Length: "
         << k1.GetTrackLength() << " (expected 0)" << endl;
  }

  if ( k2.GetTitle() == "Eggs and Sausage" && k2.GetArtist() == "unknown" &&
       k2.GetNumArtists() == 1 && k2.GetTrackLength() == 0 ) {
    cout << "Passed one string argument constructor test" << endl;
  } else {
    cout << "Failed one string constructor test\n\tTitle: "
         << k2.GetTitle() << " (expected Eggs and Sausage)\n\tNum Artists: "
         << k2.GetNumArtists() << " (expected 1)\n\tArtist 1: "
         << k2.GetArtist() << " (expected unknown)\n\tTrack Length: "
         << k2.GetTrackLength() << " (expected 0)" << endl;
  }

  if ( k3.GetTitle() == "Queen Bee" && k3.GetArtist() == "Taj Mahal" &&
       k3.GetNumArtists() == 1 && k3.GetTrackLength() == 0 ) {
    cout << "Passed two string argument constructor test" << endl;
  } else  {
    cout << "Failed two string constructor test\n\tTitle: "
         << k3.GetTitle() << " (expected Queen Bee)\n\tNum Artists: "
         << k3.GetNumArtists() << " (expected 1)\n\tArtist 1: "
         << k3.GetArtist() << " (expected Taj Mahal)\n\tTrack Length: "
         << k3.GetTrackLength() << " (expected 0)" << endl;
  }

  if ( k4.GetTitle() == "1612" && k4.GetArtist() == "Vulfpeck" &&
       k4.GetNumArtists() == 1 && k4.GetTrackLength() == 199 ) {
    cout << "Passed three argument constructor test" << endl;
  } else  {
    cout << "Failed three constructor test\n\tTitle: "
         << k4.GetTitle() << " (expected 1612)\n\tNum Artists: "
         << k4.GetNumArtists() << " (expected 1)\n\tArtist 1: "
         << k4.GetArtist() << " (expected Vulfpeck)\n\tTrack Length: "
         << k4.GetTrackLength() << " (expected 199)" << endl;
  }

  if ( k5.GetTitle() == "Feel The Vibe" &&
       k5.GetArtist() == "BJ The Chicago Kid" &&
       k5.GetNumArtists() == 2 && k5.GetTrackLength() == 240 ) {
    cout << "Passed four argument constructor test" << endl;
  } else  {
    cout << "Failed four argument constructor test\n\tTitle: "
         << k5.GetTitle() << " (expected Feel The Vibe)\n\tNum Artists: "
         << k5.GetNumArtists() << " (expected 2)\n\tArtist 1: "
         << k5.GetArtist() << " (expected BJ The Chicago Kid)\n\tTrack Length: "
         << k5.GetTrackLength() << " (expected 240)" << endl;
  }
  if ( k6.GetTitle() == "Happy Birthday To You" &&
       k6.GetArtist() == "unknown" &&
       k6.GetNumArtists() == 1 && k6.GetTrackLength() == 0 ) {
    cout << "Passed bad argument constructor test" << endl;
  } else {
    cout << "Failed bad argument constructor test\n\tTitle: "
         << k6.GetTitle()
         << " (expected Happy Birthday To You)\n\tNum Artists: "
         << k6.GetNumArtists() << " (expected 1)\n\tArtist 1: "
         << k6.GetArtist() << " (expected unknown)\n\tTrack Length: "
         << k6.GetTrackLength() << " (expected 0)" << endl;
  }
  return 0;
}
