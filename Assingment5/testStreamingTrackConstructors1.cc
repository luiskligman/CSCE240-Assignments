// Copyright 2025 bhipp
#include<iostream>
using std::cout;
using std::endl;
#include<string>
using std::string;
#include"StreamingTrack.h"
using namespace csce240_programming_assignment_5;

int main() {
  const StreamingTrack k1, k2("Eggs and Sausage"), k3("Queen Bee", "Taj Mahal"),
                k4("1612", "Vulfpeck", 199),
                k5("Feel The Vibe", "BJ The Chicago Kid", 240, 2),
                k6("Can't You Hear Me Knocking", "The Rolling Stones", 436, 1,
                   "rock"),
                k7("Talkin' Bout a Revolution", "Tracy Chapman", 161, 1,
                   "indie", 193617018) ;

  if ( k1.GetTitle() == "untitled" && k1.GetArtist() == "unknown" &&
       k1.GetNumArtists() == 1 && k1.GetTrackLength() == 0 &&
       k1.GetGenre() == "pop" && k1.GetNumGenres() == 1 &&
       k1.GetStreams() == 0 ) {
    cout << "Passed default constructor test" << endl;
  } else {
    cout << "Failed default constructor test\n\tTitle: "
         << k1.GetTitle() << " (expected untitled)\n\tNum Artists: "
         << k1.GetNumArtists() << " (expected 1)\n\tArtist 1: "
         << k1.GetArtist() << " (expected unknown)\n\tTrack Length: "
         << k1.GetTrackLength() << " (expected 0)\n\tNum Genres: "
         << k1.GetNumGenres() << " (expected 1)\n\tGenre 1: "
         << k1.GetGenre() << " (expected pop)\n\tNum Streams: "
         << k1.GetStreams() << " (expected 0)" << endl;
  }

  if ( k2.GetTitle() == "Eggs and Sausage" && k2.GetArtist() == "unknown" &&
       k2.GetNumArtists() == 1 && k2.GetTrackLength() == 0 &&
       k2.GetGenre() == "pop" && k2.GetNumGenres() == 1 &&
       k2.GetStreams() == 0 ) {
    cout << "Passed one string argument constructor test" << endl;
  } else {
    cout << "Failed one string constructor test\n\tTitle: "
         << k2.GetTitle() << " (expected Eggs and Sausage)\n\tNum Artists: "
         << k2.GetNumArtists() << " (expected 1)\n\tArtist 1: "
         << k2.GetArtist() << " (expected unknown)\n\tTrack Length: "
         << k2.GetTrackLength() << " (expected 0)\n\tNum Genres: "
         << k2.GetNumGenres() << " (expected 1)\n\tGenre 1: "
         << k2.GetGenre() << " (expected pop)\n\tNum Streams: "
         << k2.GetStreams() << " (expected 0)" << endl;
  }

  if ( k3.GetTitle() == "Queen Bee" && k3.GetArtist() == "Taj Mahal" &&
       k3.GetNumArtists() == 1 && k3.GetTrackLength() == 0 &&
       k3.GetGenre() == "pop" && k3.GetNumGenres() == 1 &&
       k3.GetStreams() == 0 ) {
    cout << "Passed two string argument constructor test" << endl;
  } else  {
    cout << "Failed two string constructor test\n\tTitle: "
         << k3.GetTitle() << " (expected Queen Bee)\n\tNum Artists: "
         << k3.GetNumArtists() << " (expected 1)\n\tArtist 1: "
         << k3.GetArtist() << " (expected Taj Mahal)\n\tTrack Length: "
         << k3.GetTrackLength() << " (expected 0)\n\tNum Genres: "
         << k3.GetNumGenres() << " (expected 1)\n\tGenre 1: "
         << k3.GetGenre() << " (expected pop)\n\tNum Streams: "
         << k3.GetStreams() << " (expected 0)" << endl;
  }

  if ( k4.GetTitle() == "1612" && k4.GetArtist() == "Vulfpeck" &&
       k4.GetNumArtists() == 1 && k4.GetTrackLength() == 199 &&
       k4.GetGenre() == "pop" && k4.GetNumGenres() == 1 &&
       k4.GetStreams() == 0 ) {
    cout << "Passed three argument constructor test" << endl;
  } else  {
    cout << "Failed three constructor test\n\tTitle: "
         << k4.GetTitle() << " (expected 1612)\n\tNum Artists: "
         << k4.GetNumArtists() << " (expected 1)\n\tArtist 1: "
         << k4.GetArtist() << " (expected Vulfpeck)\n\tTrack Length: "
         << k4.GetTrackLength() << " (expected 199)\n\tNum Genres: "
         << k4.GetNumGenres() << " (expected 1)\n\tGenre 1: "
         << k4.GetGenre() << " (expected pop)\n\tNum Streams: "
         << k4.GetStreams() << " (expected 0)" << endl;
  }

  if ( k5.GetTitle() == "Feel The Vibe" &&
       k5.GetArtist() == "BJ The Chicago Kid" &&
       k5.GetNumArtists() == 2 && k5.GetTrackLength() == 240 &&
       k5.GetGenre() == "pop" && k5.GetNumGenres() == 1 &&
       k5.GetStreams() == 0 ) {
    cout << "Passed four argument constructor test" << endl;
  } else  {
    cout << "Failed four argument constructor test\n\tTitle: "
         << k5.GetTitle() << " (expected Feel The Vibe)\n\tNum Artists: "
         << k5.GetNumArtists() << " (expected 2)\n\tArtist 1: "
         << k5.GetArtist() << " (expected BJ The Chicago Kid)\n\tTrack Length: "
         << k5.GetTrackLength() << " (expected 240)\n\tNum Genres: "
         << k5.GetNumGenres() << " (expected 1)\n\tGenre 1: "
         << k5.GetGenre() << " (expected pop)\n\tNum Streams: "
         << k5.GetStreams() << " (expected 0)" << endl;
  }

  if ( k6.GetTitle() == "Can't You Hear Me Knocking" &&
       k6.GetArtist() == "The Rolling Stones" &&
       k6.GetNumArtists() == 1 && k6.GetTrackLength() == 436 &&
       k6.GetGenre() == "rock" && k6.GetNumGenres() == 1 &&
       k6.GetStreams() == 0 ) {
    cout << "Passed five argument constructor test" << endl;
  } else {
    cout << "Failed five argument constructor test\n\tTitle: "
         << k6.GetTitle()
         << " (expected Can't You Hear Me Knocking)\n\tNum Artists: "
         << k6.GetNumArtists() << " (expected 1)\n\tArtist 1: "
         << k6.GetArtist() << " (expected The Rolling Stones)\n\tTrack Length: "
         << k6.GetTrackLength() << " (expected 436)\n\tNum Genres: "
         << k6.GetNumGenres() << " (expected 1)\n\tGenre 1: "
         << k6.GetGenre() << " (expected rock)\n\tNum Streams: "
         << k6.GetStreams() << " (expected 0)" << endl;
  }

  if ( k7.GetTitle() == "Talkin' Bout a Revolution" &&
       k7.GetArtist() == "Tracy Chapman" &&
       k7.GetNumArtists() == 1 && k7.GetTrackLength() == 161 &&
       k7.GetGenre() == "indie" && k7.GetNumGenres() == 1 &&
       k7.GetStreams() == 193617018 ) {
    cout << "Passed six argument constructor test" << endl;
  } else {
    cout << "Failed six argument constructor test\n\tTitle: "
         << k7.GetTitle()
         << " (expected Talkin' Bout a Revolution)\n\tNum Artists: "
         << k7.GetNumArtists() << " (expected 1)\n\tArtist 1: "
         << k7.GetArtist() << " (expected Tracy Chapman)\n\tTrack Length: "
         << k7.GetTrackLength() << " (expected 161)\n\tNum Genres: "
         << k7.GetNumGenres() << " (expected 1)\n\tGenre 1: "
         << k7.GetGenre() << " (expected indie)\n\tNum Streams: "
         << k7.GetStreams() << " (expected 193617018)" << endl;
  }

  return 0;
}
