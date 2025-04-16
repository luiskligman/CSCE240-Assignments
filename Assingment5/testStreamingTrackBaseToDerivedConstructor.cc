// Copyright 2025 bhipp
#include<iostream>
using std::cout;
using std::endl;
#include<string>
using std::string;
#include"SongRecording.h"
#include"StreamingTrack.h"
using namespace csce240_programming_assignment_5;

int main() {
  const SongRecording k1("Waffles", "Lettuce", 380);
   
  StreamingTrack st1(k1, "funk");

  if ( st1.GetTitle() == "Waffles" && st1.GetArtist() == "Lettuce" &&
       st1.GetNumArtists() == 1 && st1.GetTrackLength() == 380 &&
       st1.GetGenre() == "funk" && st1.GetNumGenres() == 1 &&
       st1.GetStreams() == 0 ) {
    cout << "Passed base-to-derived constructor test 1" << endl;
  } else {
    cout << "Failed base-to-derived constructor test 1\n\tTitle: "
         << st1.GetTitle() << " (expected Waffles)\n\tNum Artists: "
         << st1.GetNumArtists() << " (expected 1)\n\tArtist 1: "
         << st1.GetArtist() << " (expected Lettuce)\n\tTrack Length: "
         << st1.GetTrackLength() << " (expected 380)\n\tNum Genres: "
         << st1.GetNumGenres() << " (expected 1)\n\tGenre 1: "
         << st1.GetGenre() << " (expected funk)\n\tNum Streams: "
         << st1.GetStreams() << " (expected 0)" << endl;
  }

  StreamingTrack st2(k1, "funk", 41324);

  if ( st2.GetTitle() == "Waffles" && st1.GetArtist() == "Lettuce" &&
       st2.GetNumArtists() == 1 && st1.GetTrackLength() == 380 &&
       st2.GetGenre() == "funk" && st1.GetNumGenres() == 1 &&
       st2.GetStreams() == 41324 ) {
    cout << "Passed base-to-derived constructor test 2" << endl;
  } else {
    cout << "Failed base-to-derived constructor test 2\n\tTitle: "
         << st2.GetTitle() << " (expected Waffles)\n\tNum Artists: "
         << st2.GetNumArtists() << " (expected 1)\n\tArtist 1: "
         << st2.GetArtist() << " (expected Lettuce)\n\tTrack Length: "
         << st2.GetTrackLength() << " (expected 380)\n\tNum Genres: "
         << st2.GetNumGenres() << " (expected 1)\n\tGenre 1: "
         << st2.GetGenre() << " (expected funk)\n\tNum Streams: "
         << st2.GetStreams() << " (expected 41324)" << endl;
  }

  return 0;
}
