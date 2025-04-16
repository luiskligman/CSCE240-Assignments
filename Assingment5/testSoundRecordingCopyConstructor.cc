// Copyright 2025 bhipp
#include<iostream>
using std::cout;
using std::endl;
#include<string>
using std::string;
#include"SongRecording.h"
using namespace csce240_programming_assignment_5;

int main() {
  SongRecording s1("Colors", "Black Pumas", 269, 2);
  s1.SetArtist("Hypnotic Brass Ensemble", 2);

  SongRecording s2(s1);
  s2.SetNumArtists(1);
  s2.SetArtist("Amos Lee");
  s2.SetTrackLength(280);

  if ( s1.GetTitle() == "Colors" && s1.GetNumArtists() == 2 &&
       s1.GetArtist(1) == "Black Pumas" &&
       s1.GetArtist(2) == "Hypnotic Brass Ensemble" &&
       s1.GetTrackLength() == 269 &&
       s2.GetTitle() == "Colors" && s2.GetNumArtists() == 1 &&
       s2.GetArtist(1) == "Amos Lee" &&
       s2.GetTrackLength() == 280 ) {
    cout << "Passed SoundRecording copy constructor test" << endl;
  } else {
    cout << "Failed SoundRecording copy constructor test\n s1\n\tTitle: "
         << s1.GetTitle() << " (expected Colors)\n\tNum Artists: "
         << s1.GetNumArtists() << " (expected 2)\n\tArtist 1: "
         << s1.GetArtist(1) << " (expected Black Pumas)\n\tArtist 2: "
         << s1.GetArtist(2) << " (expected Hypnotic Brass Ensemble)\n\t"
         << "Track Length: " << s1.GetTrackLength() << " (expected 269)"
         << "\n s2\n\tTitle: "
         << s2.GetTitle() << " (expected Colors)\n\tNum Artists: "
         << s2.GetNumArtists() << " (expected 1)\n\tArtist 1: "
         << s2.GetArtist(1) << " (expected Amos Lee)\n\t"
         << "Track Length: " << s2.GetTrackLength() << " (expected 280)"
         << endl;
  }

  return 0;
}
