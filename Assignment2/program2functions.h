// Copyright 2025 lkligman
// header guards - purpose is to avoid multiple definitions of the code
// between the ifndef and endif

// NOTE: ignore cpplint error about using path in the preprocessor
// directives below
#ifndef _PROGRAM2FUNCTIONS_H_
#define _PROGRAM2FUNCTIONS_H_

bool IsSquare(int val);

bool IsPerfect(int val);

bool IsVowel(char letter, bool yVowel = true);

bool IsConsonant(char letter, bool yVowel = true);

int ToDigit(char val);

int Range(int &x, int &y);

int DigitInPosition(double number, int position);

#endif
