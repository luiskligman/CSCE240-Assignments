// Copyright 2025 Luis Kligman

// Implementation of StreamingTrack class

#include<string>
using std::string;

#include "StreamingTrack.h"
#include "SongRecording.h"

namespace csce240_programming_assignment_5 {

StreamingTrack::StreamingTrack(string title, string artist,
int trackLength, int numArtists, string genre, int numStreams)
: SongRecording(title, artist, trackLength, numArtists),
genre_(nullptr),
num_streams_(0),
num_genres_(0) {
    AddGenre(genre);
    AddStreams(numStreams);
}

StreamingTrack::StreamingTrack(const SongRecording& songRecording, string genre,
int numStreams)
: SongRecording(songRecording),
genre_(nullptr),
num_streams_(0),
num_genres_(0) {
  AddGenre(genre);
  AddStreams(numStreams);
}

StreamingTrack::StreamingTrack(const StreamingTrack& toCopy) :
SongRecording(toCopy),
num_streams_(toCopy.num_streams_),
num_genres_(toCopy.num_genres_) {
  genre_ = new string[num_genres_];
  for (int i = 0; i < num_genres_; i++)
    genre_[i] = toCopy.genre_[i];
}

StreamingTrack& StreamingTrack::operator=(const StreamingTrack& toCopy) {
  if (this != &toCopy) {
      SongRecording::operator=(toCopy);
      num_streams_ = toCopy.num_streams_;
      num_genres_ = toCopy.num_genres_;
      delete[] genre_;
      genre_ = new string[num_genres_];
      for (int i = 0; i < num_genres_; i++)
        genre_[i] = toCopy.genre_[i];
  }
  return *this;
}

void StreamingTrack::SetStreams(int numStreams) {
  if (numStreams >= 0)
    num_streams_ = numStreams;
}

void StreamingTrack::AddStreams(int numStreams) {
  if (numStreams >= 0)
    num_streams_ += numStreams;
}

bool StreamingTrack::IsGenre(string genre) const {
  if (genre_ == nullptr)
    return false;
  for (int i = 0; i < num_genres_; i++) {
    if (genre_[i] == genre)
      return true;
  }
  return false;
}

string StreamingTrack::GetGenre(int genreIndex) const {
  if (genreIndex >= 1 && genreIndex <= num_genres_)
    return genre_[genreIndex - 1];
  return "out of bounds";
}

void StreamingTrack::AddGenre(string genre) {
  if (IsGenre(genre))
    return;  // genre is already in list of genres
  string* new_genres = new string[num_genres_ + 1];
  for (int i = 0; i < num_genres_; i++)
    new_genres[i] = genre_[i];
  new_genres[num_genres_] = genre;
  delete[] genre_;
  genre_ = new_genres;
  num_genres_++;
}

void StreamingTrack::RemoveGenre(string genre) {
  if (!IsGenre(genre))
    return;
  int index = 0;
  string* new_genres = new string[num_genres_ -1];
  for (int i = 0; i < num_genres_; i++) {
    if (genre_[i] != genre) {
      new_genres[index] = genre_[i];
      index++;
    }
  }
  delete[] genre_;
  genre_ = new_genres;
  num_genres_--;
}

}  // namespace csce240_programming_assignment_5
