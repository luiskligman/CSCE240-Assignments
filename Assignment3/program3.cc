// Copyright 2025 CSCE240 bhipp
// Program 3 test driver
#include<iostream>
using std::cout;
using std::endl;
using std::cin;
#include<string>
using std::string;
#include"word_search_functions.h"

int main() {
  int start_x, start_y;
  string file_name = "grid.txt";
  char the_grid[kSize][kSize];
  if ( ReadWordSearch(file_name, the_grid) ) {
    PrintWordSearch(the_grid);
  } else {
    cout << "Couldn't open " << file_name << "\nExiting program." << endl;
    return 0;
  }
  string find_it;
  bool found;

  do {
    found = false;
    cin >> find_it;
    if ( FindWordRight(the_grid, find_it, start_x, start_y) ) {
      found = true;
      cout << "found " << find_it << " at " << start_x << ", " << start_y
           << " written from left to right" << endl;
    }

    if ( FindWordLeft(the_grid, find_it, start_x, start_y) ) {
      found = true;
      cout << "found " << find_it << " at " << start_x << ", " << start_y
           << " written from right to left" << endl;
    }

    if ( FindWordDown(the_grid, find_it, start_x, start_y) ) {
      found = true;
      cout << "found " << find_it << " at " << start_x << ", " << start_y
           << " written down" << endl;
    }

    if ( FindWordUp(the_grid, find_it, start_x, start_y) ) {
      found = true;
      cout << "found " << find_it << " at " << start_x << ", " << start_y
           << " written up" << endl;
    }

    if ( FindWordDiagonal(the_grid, find_it, start_x, start_y) ) {
      found = true;
      cout << "found " << find_it << " at " << start_x << ", " << start_y
           << " written diagonally down" << endl;
    }

    if ( !found )
      cout << "could not find " << find_it << endl;
  } while ( find_it != "quit" );
  return 0;
}
