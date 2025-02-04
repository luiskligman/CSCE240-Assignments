// Copyright 2025 bhipp
#include<iostream>
using std::cout;
using std::endl;
#include<fstream>
using std::ifstream;
#include<cstring>

int main(int argc, char * argv[] ) {
  if ( argc != 2 ) {
    cout << "Must be run with the name of a file to check" << endl;
    return 2;
  }
  ifstream student(argv[1]);
  const char * ok = "#include<iostream>";
  char student_include[30] = "", line[101] = "";
  char next_char;
  while ( student.good() ) {
    student >> next_char;
    if ( next_char == '/' ) {
      student >> next_char;
      if ( next_char == '/' ) {
        student.getline(line, 100);
      }
      if ( next_char == '*' ) {
        char prev;
        student >> next_char;
        do {
          prev = next_char;
          student >> next_char;
        } while ( !(prev == '*' && next_char == '/') && student.good() );
      }
    }
    if ( next_char == '#' ) {
      int i = 0;
      while ( next_char != '>' && student.good() && i < 28 ) {
        student_include[i++] = next_char;
        student >> next_char;
      }
      student_include[i++] = next_char;
      student_include[i] = '\0';
      if ( strcmp(student_include, ok) != 0 ) {
        cout << "Unallowed include: " << student_include
             << "\nStudent grade = 0." << endl;
        return 1;  // exit the program, the student fails
      }
    }
  }
  cout << "automated test found no unallowed includes." << endl;
  return 0;
}
