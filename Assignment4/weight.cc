// Copyright 2025 Luis Kligman

// create a Weight class that holds the value and units of a weight in private
// double and string data members, respectively. The class should allow for
// the units to be ounces, pounds, grams, or kilograms. The class will contain
// a constructor, a ConvertUnits member function, and accessor and mutator
// functions for the private data members. You will also need to overload
// the <= operator and the stream insertion operator (<<) for the Weight class.

#include "weight.h"

#include<string>
using std::string;

#include<cmath>

#include<iostream>
using std::ostream;

// Constructor for weight class
// Initializes weight_ = 0.0 & units_ = "pounds" using initializer list
// Then validates & sets the weight and units using the set functions
Weight::Weight(double weight, string units) : weight_(0.0), unit_("pounds") {
    SetValue(weight);
    SetUnits(units);
}

// Mutator function to set weight
// Return TRUE if weight was valid (non-negative), FALSE otherwise
bool Weight::SetValue(double weight) {
    if (weight < 0 )
      weight_ = 0;
    else
      weight_ = weight;
    return weight_ == weight;
}

// Mutator function to set units
// Returns reference to current object (*this) for chaining
Weight& Weight::SetUnits(string unit) {
  // Check if units is one of valid unit options
  if (unit == "pounds" || unit == "ounces" || unit == "grams"
      || unit == "kilograms")
    unit_ = unit;
  else
    unit_ = "pounds";
  // return reference to current object
  return *this;
}

// Convert current value to new value based on unit conversion factor
void Weight::ConvertUnits(string new_unit) {
  if (unit_ == new_unit)  // unit_ is already desired unit
    return;

  if (new_unit != "pounds" && new_unit != "ounces" &&
    new_unit != "grams" && new_unit != "kilograms")
  return;  // do nothing if it's not valid

  if (unit_ == "pounds") {
    if (new_unit == "ounces") {
      weight_ = weight_ * 16;
      unit_ = new_unit;
    } else if (new_unit == "grams") {
      weight_ = weight_ * 453.59237;
      unit_ = new_unit;
    } else if (new_unit == "kilograms") {
      weight_ = weight_ * .453592;
      unit_ = new_unit;
    }
  } else if (unit_ == "ounces") {
    if (new_unit == "pounds") {
      weight_ = weight_ / 16;
      unit_ = new_unit;
    } else if (new_unit == "grams") {
      weight_ = weight_ * 28.3495231;
      unit_ = new_unit;
    } else if (new_unit == "kilograms") {
      weight_ = weight_ * .0283495;
      unit_ = new_unit;
    }
  } else if (unit_ == "grams") {
    if (new_unit == "pounds") {
      weight_ = weight_ * .00220462;
      unit_ = new_unit;
    } else if (new_unit == "ounces") {
      weight_ = weight_ * .035274;
      unit_ = new_unit;
    } else if (new_unit == "kilograms") {
      weight_ = weight_ * .001;
      unit_ = new_unit;
    }
  } else if (unit_ == "kilograms") {
    if (new_unit == "pounds") {
      weight_ = weight_ * 2.20462;
      unit_ = new_unit;
    } else if (new_unit == "ounces") {
      weight_ = weight_ * 35.274;
      unit_ = new_unit;
    } else if (new_unit == "grams") {
      weight_ = weight_ * 1000;
      unit_ = new_unit;
    }
  }
}

// Overload the less-than-or-equal-to operator for Weight objects.
// This operator compares two Weight objects by ensuring both weights are in
// the same unit. It converts the 'right' Weight object to the unit of the
// current object before comparing.
bool Weight::operator <= (Weight right) const {
  // Convert the left side of the operator to the same units to prevent
  // unwanted issue
  Weight left = *this;
  left.ConvertUnits("grams");

  // Convert the 'right' Weight object to the current object's unit.
  // This ensures that the comparison is made between weights in the same unit.
  right.ConvertUnits("grams");


  // Return TRUE if the current object's weight is less than or equal to the
  // 'right' object's weight.
//  return (left.weight_ <= right.weight_);

  // accounts for small floating point rounding issues
  const double kEpsilon = 0.001;
  return left.weight_ < right.weight_ || std::fabs(left.weight_ -
                                                   right.weight_) < kEpsilon;
}

// Overload the stream insertion operator for Weight objects.
// This allows a Weight object to be output using an ostream (like cout) in a
// user-friendly format.
ostream& operator << (ostream& whereto, const Weight& weight) {
  // Output the weight value followed by a space and then the unit.
  whereto << weight.weight_ << " " << weight.unit_;
  // Return the stream to allow chaining (e.g., cout << w1 << w2;).
  return whereto;
}
