// Copyright 2025 bhipp
#include<fstream>
using std::ifstream;
#include<iostream>
using std::cout;
using std::endl;
using std::cin;
#include<string>
using std::string;
#include<cctype>

int main(int argc, char *argv[]) {
  // executable must be called with a test number 0-5
  if ( argc != 2  || argv[1][0] < '0' || argv[1][0] > '5' ) {
    cout << "Invalid test" << endl;
    return 1;
  }
  // convert the character to an integer
  int which = argv[1][0] - '0';
  string correct[6] = { "expected-output1.txt", "expected-output2.txt",
                        "expected-output3.txt", "expected-output4.txt",
                        "expected-output5.txt", "expected-output6.txt" };
  string student[6] = { "student-output1.txt", "student-output2.txt",
                        "student-output3.txt", "student-output4.txt",
                        "student-output5.txt", "student-output6.txt"};
  ifstream correctfile(correct[which]);
  ifstream studentfile(student[which]);
  bool match = true;
  char correctchar, stuchar;
  int i = 0;
  cout << "Your output:" << endl;
  correctchar = correctfile.get();
  stuchar = studentfile.get();
  while ( correctfile.good() && studentfile.good() && match ) {
    match = correctchar == stuchar;
    cout << stuchar;
    if ( !match )
      cout << "<- this character "
           << (isspace(stuchar) ? "(a white-space character) " : "")
           << "should be " << correctchar
           << (correctchar == ' ' ? "(a space)" :
                  (correctchar == '\t' ? "(a tab)" :
                    (correctchar == '\n' ? "(a newline)" : ""))) << endl;
    ++i;
    correctchar = correctfile.get();
    stuchar = studentfile.get();
  }

  cout << "\n";
  if ( !match ) {
    cout << "output error at character " << i
         << "\n\nOpen " << student[which] << " to view your full output and "
         << "compare it to the expected ouput in " << correct[which] << endl;
  } else if ( !correctfile.eof() ) {
    cout << "student file ended too soon"
         << "\n\nOpen " << student[which] << " to view your full output and "
         << "compare it to the expected ouput in " << correct[which] << endl;
  } else if ( !studentfile.eof() ) {
    cout << "extra output in student file"
         << "\n\nOpen " << student[which] << " to view your full output and "
         << "compare it to the expected ouput in " << correct[which] << endl;
  } else {
    cout << "match!" << endl;
    cout << "1 point for test " << (which + 1) << endl;
  }
  return 0;
}
