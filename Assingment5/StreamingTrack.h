// Copyright 2025 Luis Kligman
// Define StreamTrack Class

#ifndef _STREAMINGTRACK_H_
#define _STREAMINGTRACK_H_

#include "SongRecording.h"

#include<string>
using std::string;

namespace csce240_programming_assignment_5 {
class StreamingTrack : public SongRecording {
 public:
     // A constructor that can take the title, primary artist, track length,
     // number of artists, primary genre, and number of streams as its six
     // parameters with default arguments of “untitled”, “unknown”, 0, 1,
     // “pop”, and 0 respectively
     explicit StreamingTrack(string title = "untitled",
                             string artist = "unknown",
                             int trackLength = 0, int numArtists = 1,
                             string genre = "pop", int numStreams = 0);

     // Copy Constructor
     StreamingTrack(const StreamingTrack& toCopy);

     // Conversion Constructor
     // A constructor that takes a constant reference to a SongRecording,
     // a primary genre (with a default argument of “pop”), and a number
     // streams (with a default argument of 0) as its three parameters
     explicit StreamingTrack(const SongRecording& recording,
                             string genre = "pop",
                             int numStreams = 0);

     // Overloaded assignment operator
     StreamingTrack& operator = (const StreamingTrack& toCopy);

     // Destructor
     ~StreamingTrack() {
       delete [] genre_;
       genre_ = nullptr; }

     // GetStreams() - Returns the number of streams
     int GetStreams() const { return num_streams_; }

     // SetStreams(int) – Sets the number of streams if non-negative
     void SetStreams(int numStreams);

     // AddStreams(int) – Increases the number of streams by the argument as
     // long as the argument is non-negative. If the argument is negative,
     // the data member should remain unchanged.
     void AddStreams(int numStreams);

     // GetGenre(int) – This function should have a default argument of 1.
     // It returns the name of the specified genre if the integer argument
     // is between 1 and the number of genres, inclusive. If the integer
     // argument is out of range, the function should return the
     // string “out of bounds”
     string GetGenre(int genreIndex = 1) const;

     // IsGenre(string) – Returns true if the string argument is one of the
     // StreamingTrack’s genres, and false otherwise
     bool IsGenre(string genre) const;

     // AddGenre(string) – Adds the string argument to the StreamingTrack’s
     // genres (updating the pointer data member and the number of genres
     // data member) if the argument is not already in the list of genres.
     // If the argument is already one of the track’s genres, the data
     // members should remain unchanged
     void AddGenre(string genre);

     // GetNumGenres() – Returns the number of genres
     int GetNumGenres() const { return num_genres_; }

     // RemoveGenre(string) – Removes the string argument from the
     // StreamingTrack’s genres (updating the pointer data member and the
     // number of genres data member) if the argument is in the list of
     // genres. If the argument is not one of the track’s genres, the data
     // members should remain unchanged
     void RemoveGenre(string genre);

 private:
     string* genre_;
     int num_streams_;
     int num_genres_;
};  // end StreamingTrack class

}  // namespace csce240_programming_assignment_5

#endif  // _STREAMINGTRACK_H_
