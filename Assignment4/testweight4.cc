// Copyright 2025 bhipp
// Initial output tests for the Weight class
#include<fstream>
using std::ofstream;
using std::ifstream;
#include<iostream>
using std::cout;
using std::endl;
#include<cstring>
#include"weight.h"

int main() {
  ofstream sout;
  sout.open("studentoutput.txt");
  Weight w1, w2(2, "ounces"), w3(9, "grams");
  const Weight kTon(2000, "pounds");
  sout << "w1 = " << w1 << "\nw2 = " << w2 << "\nw3 = " << w3 << "\nkTon = "
       << kTon << endl;
  sout.close();
  ifstream sin("studentoutput.txt");
  char next_line[100] = "";
  const char * correct_lines[4] = {"w1 = 0 pounds", "w2 = 2 ounces",
                                   "w3 = 9 grams", "kTon = 2000 pounds"};

  for ( int i = 0; i < 4; ++i ) {
    if ( sin.good() )
      sin.getline(next_line, 100);
    if ( sin.good() ) {
      if ( strncmp(next_line, correct_lines[i], 100) == 0 ) {
        cout << "student line " << (i + 1) << " is correct!" << endl;
      } else {
        cout << "student line " << (i + 1) << ": " << next_line
             << "\ncorrect line " << (i + 1) << ": " << correct_lines[i]
             << endl;
      }
    } else {
      cout << "student line missing\ncorrect line: " << correct_lines[i]
           << endl;
    }
  }
  return 0;
}

