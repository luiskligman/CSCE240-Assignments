// Copyright 2025 Luis Kligman
// Define SongRecording Class
#ifndef _SONGRECORDING_H_
#define _SONGRECORDING_H_

#include<string>
using std::string;

namespace csce240_programming_assignment_5 {
class SongRecording {
 public:
    explicit SongRecording(string title = "untitled",
    string artist = "unknown", int trackLength = 0, int numArtists = 1);

    // Copy Constructor
    SongRecording(const SongRecording &toCopy);

    // Overloading the assignment operator ( = )
    SongRecording &operator =(const SongRecording &toCopy);

    // Destructor
    ~SongRecording() { delete [] artists_; }

    // GetTitle() - Returns the title
    string GetTitle() const { return song_title_; }

    // SetTitle(string) – Sets the title to any string that is
    // at least 1 character long
    void SetTitle(string title);

    // GetNumArtists() – Returns the number of artists
    int GetNumArtists() const { return num_artists_; }

    // SetNumArtists(int) – Sets the number of artists to any positive
    // integer. Manages memory for the string pointer data member.
    void SetNumArtists(int numArtists);

    // SetArtist(string, int) – Sets the name of the artist if the string is
    // at least one character in length, and the integer argument is valid
    // (between 1 and the number of artists, inclusive). The int parameter
    // should have a default argument of 1.
    void SetArtist(string artist, int artists = 1);

    // GetArtist(int) – This function should have a default argument of 1.
    // It returns the name of the specified artist if the integer argument
    // is between 1 and the number of artists, inclusive. If the integer
    // argument is out of range, the function should return the string
    // “out of bounds”
    string GetArtist(int artistIndex = 1) const;

    // GetTrackLength() – Returns the track length
    int GetTrackLength() const { return track_length_; }

    // SetTrackLength(int) – Sets the value of the track length data member
    // to the functions argument as long as the argument is non-negative.
    // If the argument is negative the track length data member should
    // remain unchanged.
    void SetTrackLength(int trackLength);

 private:
    string song_title_;
    string *artists_;
    int num_artists_;
    int track_length_;
};  // end class SongRecording

}  // namespace csce240_programming_assignment_5

#endif  // _SONGRECORDING_H_
