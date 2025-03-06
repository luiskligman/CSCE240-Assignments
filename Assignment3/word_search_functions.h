// Copyright 2025 CSCE240 bhipp
// Prototypes for word search functions to be implemented in
// wordsearchfunctions.cc
#ifndef _WORD_SEARCH_FUNCTIONS_H_
#define _WORD_SEARCH_FUNCTIONS_H_

#include<string>
using std::string;

// kSize is the size of the square word search grid that the functions
// listed below will work with
const int kSize = 10;


// preconditions: file_name is the name of a text file that is located
//                in the directory that the program is being run from.
//                word_search is a two dimensional array of characters
//                with kSize rows and kSize columns.
// postcondition: If the file exists and contains at least kSize * kSize
//                non-whitespace characters, the first kSize * kSize
//                characters in the file will be written one at a time,
//                row by row, into word_search, and the function will
//                return true.
//                If the file doesn't exist or has too few characters,
//                the word_search array will remain unchanged and the
//                function will return false.
bool ReadWordSearch(string file_name, char word_search[][kSize]);

// preconditions: The function will be sent a two dimensional array of
//                characters with kSize rows and kSize columns.
// postconditions: The character array will not be changed by the function.
//                 The characters will be output to the standard output
//                 device on kSize rows with a single space between characters
void PrintWordSearch(const char[][kSize]);

// preconditions: The function will be sent a two dimensional array of
//                characters with kSize rows and kSize columns, a string
//                to find in the array, and two integer references to hold
//                the starting coordinates of the found string.
// postcondition: If the string exists in a row in the array, written from
//                left-to-right, the function will update the fourth and
//                fifth arguments to the position of the string in the array.
//                If the string appears multiple times, the fourth and fifth
//                arguments will hold the position of the first occurrence -
//                beginning from the top left corner, moving left-to-right,
//                top-to-bottom.
//                If the string is found, the function will return true.
//                If the string is not found in the array, the function will
//                return false.
bool FindWordRight(const char[][kSize], string to_find, int& row, int& col);

// preconditions: The function will be sent a two dimensional array of
//                characters with kSize rows and kSize columns, a string
//                to find in the array, and two integer references to hold
//                the starting coordinates of the found string.
// postcondition: If the string exists in a row in the array, written from
//                right-to-left, the function will update the fourth and
//                fifth arguments to the position of the string in the array.
//                If the string appears multiple times, the fourth and fifth
//                arguments will hold the position of the first occurrence -
//                beginning from the top left corner, moving left-to-right,
//                top-to-bottom.
//                If the string is found, the function will return true.
//                If the string is not found in the array, the function will
//                return false.
bool FindWordLeft(const char[][kSize], string to_find, int& row, int& col);

// preconditions: The function will be sent a two dimensional array of
//                characters with kSize rows and kSize columns, a string
//                to find in the array, and two integer references to hold
//                the starting coordinates of the found string.
// postcondition: If the string exists in a row in the array, written from
//                top-to-bottom, the function will update the fourth and
//                fifth arguments to the position of the string in the array.
//                If the string appears multiple times, the fourth and fifth
//                arguments will hold the position of the first occurrence -
//                beginning from the top left corner, moving left-to-right,
//                top-to-bottom.
//                If the string is found, the function returns true.
//                If the string is not found in the array, the function will
//                returns false
bool FindWordDown(const char[][kSize], string to_find, int& row, int& col);

// preconditions: The function will be sent a two dimensional array of
//                characters with kSize rows and kSize columns, a string
//                to find in the array, and two integer references to hold
//                the starting coordinates of the found string.
// postcondition: If the string exists in a row in the array, written from
//                bottom-to-top, the function will update the fourth and
//                fifth arguments to the position of the string in the array.
//                If the string appears multiple times, the fourth and fifth
//                arguments will hold the position of the first occurrence -
//                beginning from the top left corner, moving left-to-right,
//                top-to-bottom.
//                If the string is found, the function will return true.
//                If the string is not found in the array, the function will
//                return false.
bool FindWordUp(const char[][kSize], string to_find, int& row, int& col);

// preconditions: The function will be sent a two dimensional array of
//                characters with kSize rows and kSize columns, a string
//                to find in the array, and two integer references to hold
//                the starting coordinates of the found string.
// postcondition: If the string exists on a diagonal in the array, written
//                down diagonally from left-to-right, the function will update
//                the fourth and fifth arguments to the position of the string
//                in the array.
//                If the string appears multiple times, the fourth and fifth
//                arguments will hold the position of the first occurrence -
//                beginning from the top left corner, moving left-to-right,
//                top-to-bottom.
//                If the string is found, the function will return true.
//                If the string is not found in the array, the function will
//                return false.
bool FindWordDiagonal(const char[][kSize], string to_find, int& row, int& col);

#endif   // _WORD_SEARCH_FUNCTIONS_H_
