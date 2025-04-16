// Copyright 2025 Luis Kligman

// Implementation of SongRecording Class

#include <iostream>
#include <string>

#include "SongRecording.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

namespace csce240_programming_assignment_5 {

SongRecording::SongRecording(string title, string artist,
int trackLength, int numArtists) :
song_title_("untitled"),
artists_(nullptr),
num_artists_(1),
track_length_(0) {
  SetTitle(title);
  SetNumArtists(numArtists);
  SetArtist(artist);
  SetTrackLength(trackLength);
}

SongRecording::SongRecording(const SongRecording& toCopy) :
song_title_(toCopy.song_title_),
num_artists_(toCopy.num_artists_),
track_length_(toCopy.track_length_) {
  artists_ = new string[num_artists_];
  for (int i = 0; i < num_artists_; ++i)
    artists_[i] = toCopy.artists_[i];
}

SongRecording& SongRecording::operator=(const SongRecording& toCopy) {
  if (this != &toCopy) {
    song_title_ = toCopy.song_title_;
    num_artists_ = toCopy.num_artists_;
    track_length_ = toCopy.track_length_;
    delete[] artists_;
    artists_ = new string[num_artists_];
    for (int i = 0; i < num_artists_; ++i)
      artists_[i] = toCopy.artists_[i];
  }
  return *this;
}

void SongRecording::SetTitle(string title) {
  if (title.length() >= 1)
    song_title_ = title;
}

void SongRecording::SetArtist(string artist, int artistIndex) {
  if (artist.length() >= 1 && artistIndex >= 1 && artistIndex <= num_artists_) {
    artists_[artistIndex - 1] = artist;
  }
}

void SongRecording::SetNumArtists(int numArtists) {
  if (numArtists < 1)
    num_artists_ = 1;
  else
    num_artists_ = numArtists;

  delete[] artists_;  // Free old memory
  artists_ = new string[num_artists_];
  for (int i = 0; i < num_artists_; ++i)
    artists_[i] = "unknown";
}

string SongRecording::GetArtist(int artistIndex) const {
  if (artistIndex >= 1 && artistIndex <= num_artists_)
    return artists_[artistIndex - 1];
  return "out of bounds";
}

void SongRecording::SetTrackLength(int trackLength) {
  if (trackLength >= 0)
    track_length_ = trackLength;
}

}  // namespace csce240_programming_assignment_5
