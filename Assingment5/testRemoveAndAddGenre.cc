// Copyright 2025 bhipp
#include<iostream>
using std::cout;
using std::endl;
#include<string>
using std::string;
#include"StreamingTrack.h"
using namespace csce240_programming_assignment_5;

int main() {
  StreamingTrack x1;

  x1.AddGenre("funk");
  x1.AddGenre("rock");
  x1.AddGenre("soul");
  x1.AddGenre("rap");
  x1.AddGenre("pop");
  x1.AddGenre("country");
  x1.AddGenre("rap");
  x1.AddGenre("blues");

  if ( x1.GetGenre() == "pop" && x1.GetNumGenres() == 7 &&
       x1.GetGenre(2) == "funk" && x1.GetGenre(3) == "rock" &&
       x1.GetGenre(4) == "soul" && x1.GetGenre(5) == "rap" &&
       x1.GetGenre(6) == "country" && x1.GetGenre(7) == "blues" ) {
    cout << "Passed initial genres setup" << endl;
  } else {
    cout << "Failed intial genres setup" << endl;
  }

  x1.RemoveGenre("heavy metal");
  if ( x1.GetGenre() == "pop" && x1.GetNumGenres() == 7 &&
       x1.GetGenre(2) == "funk" && x1.GetGenre(3) == "rock" &&
       x1.GetGenre(4) == "soul" && x1.GetGenre(5) == "rap" &&
       x1.GetGenre(6) == "country" && x1.GetGenre(7) == "blues" ) {
    cout << "Passed remove unincluded genre test" << endl;
  } else {
    cout << "Failed remove unincluded genre test" << endl;
  }

  x1.RemoveGenre("pop");
  if ( x1.GetNumGenres() == 6 &&
       x1.GetGenre() == "funk" && x1.GetGenre(2) == "rock" &&
       x1.GetGenre(3) == "soul" && x1.GetGenre(4) == "rap" &&
       x1.GetGenre(5) == "country" && x1.GetGenre(6) == "blues" ) {
    cout << "Passed remove genre test 1" << endl;
  } else {
    cout << "Failed remove genre test 1" << endl;
  }

  x1.RemoveGenre("blues");
  if ( x1.GetNumGenres() == 5 &&
       x1.GetGenre() == "funk" && x1.GetGenre(2) == "rock" &&
       x1.GetGenre(3) == "soul" && x1.GetGenre(4) == "rap" &&
       x1.GetGenre(5) == "country" ) {
    cout << "Passed remove genre test 2" << endl;
  } else {
    cout << "Failed remove genre test 2" << endl;
  }

  x1.RemoveGenre("soul");
  if ( x1.GetNumGenres() == 4 &&
       x1.GetGenre() == "funk" && x1.GetGenre(2) == "rock" &&
       x1.GetGenre(3) == "rap" &&
       x1.GetGenre(4) == "country" ) {
    cout << "Passed remove genre test 3" << endl;
  } else {
    cout << "Failed remove genre test 3" << endl;
  }

  x1.RemoveGenre("rock");
  if ( x1.GetNumGenres() == 3 &&
       x1.GetGenre() == "funk" &&
       x1.GetGenre(2) == "rap" &&
       x1.GetGenre(3) == "country" ) {
    cout << "Passed remove genre test 4" << endl;
  } else {
    cout << "Failed remove genre test 4" << endl;
  }

  x1.RemoveGenre("country");
  if ( x1.GetNumGenres() == 2 &&
       x1.GetGenre() == "funk" &&
       x1.GetGenre(2) == "rap" ) {
    cout << "Passed remove genre test 5" << endl;
  } else {
    cout << "Failed remove genre test 5" << endl;
  }

  x1.RemoveGenre("funk");
  if ( x1.GetNumGenres() == 1 &&
       x1.GetGenre() == "rap" ) {
    cout << "Passed remove genre test 6" << endl;
  } else {
    cout << "Failed remove genre test 6" << endl;
  }

  x1.RemoveGenre("rap");
  if ( x1.GetNumGenres() == 0 ) {
    cout << "Passed remove genre test 7" << endl;
  } else {
    cout << "Failed remove genre test 7" << endl;
  }

  x1.RemoveGenre("rap");
  if ( x1.GetNumGenres() == 0 ) {
    cout << "Passed remove genre from empty list test" << endl;
  } else {
    cout << "Failed remove genre from empty list test" << endl;
  }

  x1.AddGenre("r&b");
  if ( x1.GetNumGenres() == 1 &&
       x1.GetGenre() == "r&b" ) {
    cout << "Passed add genre to empty list test" << endl;
  } else {
    cout << "Failed add genre to empty list test" << endl;
  }

  return 0;
}
