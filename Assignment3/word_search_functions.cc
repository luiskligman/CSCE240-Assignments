// Copyright 2025 Luis Kligman
#include<stdio.h>

#include<string.h>
#include<string>
using std::string;

#include<fstream>
using std::ifstream;
using std::ofstream;

#include<iostream>
using std::cout;
using std::endl;

#include"word_search_functions.h"

bool ReadWordSearch(string file_name, char word_search[][kSize]) {
    ifstream file(file_name);
    if (!file)  // file was unable to open
      return false;

    int count = 0;  // will use to compare iterations to the value of kSize^2
    char ch;

    // read characters from file and populate array
    for (int i = 0; i < kSize; i++) {
       for (int j = 0; j < kSize; j++) {
         do {
           file.get(ch);  // Read one character from the file
           if (file.eof())
             return false;  // If end of file is reached, return false
         } while (isspace(ch));  // Repeat if the character is whitespace

         word_search[i][j] = std::tolower(ch);  // add character to array
         // make all characters lowercase
         count++;  // signify a character has been added to word_search[][]
       }
    }
    file.close();
    return count == kSize * kSize;  // confirm kSize^2 characters
                                    // have been added
}

void PrintWordSearch(const char word_search[][kSize]) {
  for (int i = 0; i < kSize; i++) {
    for (int j = 0; j < kSize; j++) {
      cout << word_search[i][j] << " ";
    }
    cout << endl;
  }
}

bool FindWordRight(const char word_search[][kSize], string to_find, int& row,
                   int& col) {
  int length = to_find.length();

  // convert each character to lowercase to prevent possible issues
  for (int i = 0; i < length; i++) {
    to_find[i] = std::tolower(to_find[i]);
  }

  if ( length > kSize )  // if to_find larger than kSize,
                         // word can not fit in array
    return false;

  for (int i = 0; i < kSize; i++) {  // iterate through rows
    for (int j = 0; j <= kSize - length; j++) {  // iterate through columns if
                                        // it is still possible word could fit
      int k;
      for (k = 0; k < length; k++) {  // iterate through length spaces to check
                                      // correctness
        if (to_find[k] != word_search[i][j + k])  // char does not match
          break;
      }
      if (k == length) {  // went full length and all characters matched
        row = i;
        col = j;
        return true;
      }
    }
  }
  return false;
}

bool FindWordLeft(const char word_search[][kSize], string to_find, int& row,
                  int& col) {
  int length = to_find.length();

  // convert each character to lowercase to prevent possible issues
  for (int i = 0; i < length; i++) {
    to_find[i] = std::tolower(to_find[i]);
  }

  if ( length > kSize )  // to_find cannot possibly fit in array
    return false;

  for (int i = 0; i < kSize; i++) {  // iterate through each row
    for (int j = kSize - 1; j >= length -1; j--) {  // start at end of row,
                                                    // work your way back
      int k;
      for (k = 0; k < length; k++) {  // interate backwords through length #
                                       // spaces to check correctness
        if (to_find[k] != word_search[i][j - k])  // char does not match
                                                  // at index
          break;
      }

      if (k == length) {  // went full length and all characters matched
        row = i;
        col = j;
        return true;
      }
    }
  }
  return false;
}

bool FindWordDown(const char word_search[][kSize], string to_find, int& row,
                  int& col) {
  int length = to_find.length();

  // convert each character to lowercase to prevent possible issues
  for (int i = 0; i < length; i++) {
    to_find[i] = std::tolower(to_find[i]);
  }

  if ( length > kSize )  // to_find cannot possibly fit in array
    return false;

  for (int i = 0; i < kSize; i++) {  // i iterates through columns
    for (int j = 0; j <= kSize - length; j++) {  // j iterates through rows
      int k;
      for (k = 0; k < length; k++) {
        if (to_find[k] != word_search[j + k][i])
          break;
      }
      if (k == length) {
        row = j;
        col = i;
        return true;
      }
    }
  }
  return false;
}

bool FindWordUp(const char word_search[][kSize], string to_find, int& row,
                int& col) {
  int length = to_find.length();

  // convert each character to lowercase to prevent possible issues
  for (int i = 0; i < length; i++) {
    to_find[i] = std::tolower(to_find[i]);
  }

  if ( length > kSize )  // to_find cannot possibly fit in array
    return false;

  for (int i = 0; i < kSize; i++) {  // i iterates through each column
    for (int j = kSize -1; j >= length - 1; j--) {  // j iterates through
                                                    // each row
      int k;
      for (k = 0; k < length; k++) {
        if (to_find[k] != word_search[j - k][i])
          break;
      }
      if (k == length) {
            row = j;
            col = i;
            return true;
      }
    }
  }
  return false;
}

bool FindWordDiagonal(const char word_search[][kSize], string to_find,
                      int& row, int& col) {
  int length = to_find.length();

  // convert each character to lowercase to prevent possible issues
  for (int i = 0; i < length; i++) {
    to_find[i] = std::tolower(to_find[i]);
  }

  if ( length > kSize )  // to_find cnanot possibly fit in array
    return false;

  for (int i = 0; i <= kSize - length; i++) {  // i iterates through each row
    for (int j = 0; j <= kSize - length; j++) {  // j iterates through each row
      int k;
      for (k = 0; k < length; k++) {
        if (to_find[k] != word_search[i + k][ j + k ])
          break;
      }
      if (k == length) {
        row = i;
        col = j;
        return true;
      }
    }
  }
  return false;
}
