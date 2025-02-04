// Copyright 2025 Luis Kligman
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

bool checkbase(int);
bool checknum(int64_t, int);
int64_t convbase10(int64_t, int);

int main() {
    int64_t numeric_value;
    int base;
    char another = 'y';
    int valuesentered = 0;
    int64_t largestvalue = 0;
    int64_t largestvalueindex = 1;
    int64_t base10value;

    while (another == 'y') {
        // Initial prompt for numeric_value & base
        // cout << "Please enter a numeric value: " << endl;
        cin >> numeric_value;
        // cout << "Please enter a base: " << endl;
        cin >> base;
        // cout << "Input 'y' if you plan to add more values, 'n' otherwise"
        // << endl;
        cin >> another;

        valuesentered++;

        // Check if base is within proper range
        if (checkbase(base) == false) {
            cout << "Base Not Accepted" << endl;
            exit(0);
        }
        // Check if each digit is within the limitations set due to the
        // base value
        if (checknum(numeric_value, base) == false) {
            cout << "Invalid Digit(s) in Number" << endl;
            exit(0);
        }

        // cout << "numeric_value " << numeric_value << " base: "
        // << base << endl;
        base10value = convbase10(numeric_value, base);
        cout << base10value << endl;

        if (valuesentered == 1) {
            largestvalue = base10value;
            largestvalueindex = 1;
        } else if (base10value > largestvalue) {
            largestvalue = base10value;
            largestvalueindex = valuesentered;
        }
    }

    cout << "Of the " << valuesentered << " values input, the "
    << largestvalueindex
    << (largestvalueindex == 1 ? "st " : largestvalueindex == 2 ? "nd "
    : largestvalueindex == 3   ? "rd " : "th ")
    << "value entered (" << largestvalue << ") was the largest" << endl;
    return 0;
}

// Returns TRUE if base lies within permissible range (inclusive 2 through 9),
// returns FALSE otherwise
bool checkbase(int base) {
    // if the base is between digits 2-9 return true
    if (base > 1 && base < 10)
        return true;
    // else return false; base value is not within permissible range
    else
        return false;
}

// Returns TRUE if no values within the integer are greater than or equal to
// the base value, returns FALSE otherwise
bool checknum(int64_t num, int base) {
    if (num == 0) {
        return false;
    }
    while (num > 0) {
        // For example an integer such as 341120 is in base 5, the computer
        // does not recognize this, thinks it is in base 10, modulo 10 will
        // in this example give 0

        // 0 is less than base, we can now shift the decimal forward one place
        // by dividing by 10, now preform modulo 10 again and will get 2, 2 is
        // greater than 5, This will continue until the decimal is shifted so
        // far forward that there will only be leading zeros, therefore
        // stopping the while loop
        int64_t comp = num % 10;
        if (comp >= base)
            return false;
        else
            num /= 10;
    }
    return true;
}

// Convert the given number based on its given base into base 10, as long
// as the initial value given is not 0
int64_t convbase10(int64_t num, int base) {
    // basepowI is forexample 4 to the power of 3, iterates from
    // 4^0 to 4^1 to 4^2 to 4^3
    int64_t basepowI = 1;  // start at base^0 = 1
    int64_t sum = 0;
    // 32120, base 4 --> 3 * 4^4 + 2 * 4^3 + 1 * 4^2 + 2 * 4^1 + 0 * 4^0
    // num % 10, to get the least significant digit, multiply this number by
    // the base raised to the power of i which starts are zero and increases by
    // one after use

    // result from the multiplication will be added to a long called sum

    // exit program if given 0, as not meant to handle this input,
    // should be impossible
    if (num == 0) {
        cout << "0 given as numeric_value :: error_convbase10" << endl;
        exit(0);
    }
    while (num != 0) {
        int64_t lsdigit = num % 10;    // Get the least significant digit
        sum += lsdigit * basepowI;  // convert to base 10
        basepowI *= base;   // Increase base power
        num /= 10;  // Remove last digit
    }
    return sum;
}
