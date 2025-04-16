// Copyright 2025 bhipp
#include<iostream>
using std::cout;
using std::endl;
#include<string>
using std::string;
#include"StreamingTrack.h"
using namespace csce240_programming_assignment_5;

int main() {
  StreamingTrack k1("I Will Survive", "Gloria Gaynor", 198, 1,
                   "disco", 420905853);
  k1.AddGenre("funk");

  StreamingTrack k2(k1);
  k2.SetArtist("Cake");
  k2.RemoveGenre("funk");
  k2.RemoveGenre("disco");
  k2.AddGenre("alt rock");

  if ( k1.GetTitle() == "I Will Survive" && k1.GetArtist() == "Gloria Gaynor" &&
       k1.GetNumArtists() == 1 && k1.GetTrackLength() == 198 &&
       k1.IsGenre("disco") && k1.IsGenre("funk") && !k1.IsGenre("alt rock") &&
       k1.GetNumGenres() == 2 && k1.GetStreams() == 420905853 &&
       k2.GetTitle() == "I Will Survive" && k2.GetArtist() == "Cake" &&
       k2.GetNumArtists() == 1 && k2.GetTrackLength() == 198 &&
       !k2.IsGenre("disco") && !k2.IsGenre("funk") && k2.IsGenre("alt rock") &&
       k2.GetNumGenres() == 1 && k2.GetStreams() == 420905853 ) {
    cout << "Passed StreamingTrack copy constructor test" << endl;
  } else {
    cout << "Failed StreamingTrack copy constructor test\n Original:\n\tTitle: "
         << k1.GetTitle() << " (expected I Will Survive)\n\tNum Artists: "
         << k1.GetNumArtists() << " (expected 1)\n\tArtist 1: "
         << k1.GetArtist() << " (expected Gloria Gaynor)\n\tTrack Length: "
         << k1.GetTrackLength() << " (expected 198)\n\tNum Genres: "
         << k1.GetNumGenres() << " (expected 2)\n\tGenre 1: "
         << k1.GetGenre() << " (expected disco)\n\tGenre 2: "
         << k1.GetGenre() << " (expected funk)\n\tNum Streams: "
         << k1.GetStreams() << " (expected 420905853)" << endl;
    cout << " Copy:\n\tTitle: "
         << k2.GetTitle() << " (expected I Will Survive)\n\tNum Artists: "
         << k2.GetNumArtists() << " (expected 1)\n\tArtist 1: "
         << k2.GetArtist() << " (expected Cake)\n\tTrack Length: "
         << k2.GetTrackLength() << " (expected 198)\n\tNum Genres: "
         << k2.GetNumGenres() << " (expected 1)\n\tGenre 1: "
         << k2.GetGenre() << " (expected alt rock)\n\tNum Streams: "
         << k2.GetStreams() << " (expected 420905853)" << endl;
  }

  return 0;
}
