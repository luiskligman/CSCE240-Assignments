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

  if ( x1.GetGenre() == "pop" && x1.GetNumGenres() == 1 ) {
    cout << "Passed initial genre test" << endl;
  } else {
    cout << "Failed initial genre test" << endl;
  }

  x1.AddGenre("pop");
  if ( x1.GetGenre() == "pop" && x1.GetNumGenres() == 1 ) {
    cout << "Passed add existing genre test" << endl;
  } else {
    cout << "Failed add existing genre test" << endl;
  }

  x1.AddGenre("rock");
  if ( x1.GetGenre() == "pop" && x1.GetNumGenres() == 2 &&
       x1.GetGenre(2) == "rock" ) {
    cout << "Passed add new genre test" << endl;
  } else {
    cout << "Failed add new genre test" << endl;
  }

  x1.AddGenre("soul");
  if ( x1.GetGenre() == "pop" && x1.GetNumGenres() == 3 &&
       x1.GetGenre(2) == "rock" && x1.GetGenre(3) == "soul" ) {
    cout << "Passed add new genre test 2" << endl;
  } else {
    cout << "Failed add new genre test 2" << endl;
  }

  x1.AddGenre("soul");
  x1.AddGenre("pop");
  x1.AddGenre("rock");
  if ( x1.GetGenre() == "pop" && x1.GetNumGenres() == 3 &&
       x1.GetGenre(2) == "rock" && x1.GetGenre(3) == "soul" ) {
    cout << "Passed add existing genres test 2" << endl;
  } else {
    cout << "Failed add existing genres test 2" << endl;
  }

  return 0;
}
