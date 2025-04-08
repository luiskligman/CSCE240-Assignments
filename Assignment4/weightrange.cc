// Copyright 2025 Luis Kligman

// create a Weight class that holds the value and units of a weight in private
// double and string data members, respectively. The class should allow for
// the units to be ounces, pounds, grams, or kilograms. The class will contain
// a constructor, a ConvertUnits member function, and accessor and mutator
// functions for the private data members. You will also need to overload the
// <= operator and the stream insertion operator (<<) for the Weight class.

#include "weightrange.h"

#include<string>
using std::string;

#include<ostream>
using std::ostream;

WeightRange::WeightRange(const Weight& w1, const Weight& w2) {
  if (w1 <= w2) {
     smallest_ = w1;
     largest_ = w2;
  } else {
     smallest_ = w2;
     largest_ = w1;
  }
}

void WeightRange::SetSmallest(const Weight& weight) {
  if (weight <= largest_)
    smallest_ = weight;
}

void WeightRange::SetLargest(const Weight& weight) {
  if (smallest_ <= weight)
    largest_ = weight;
}

bool WeightRange::InRange(const Weight& weight, bool endpoints) const {
  if (endpoints)
    return smallest_ <= weight && weight <= largest_;
  else
      return !(weight <= smallest_) && !(largest_ <= weight);
}

Weight WeightRange::Width() const {
  Weight small = smallest_;
  Weight large = largest_;

  small.ConvertUnits(largest_.GetUnits());
  double difference = large.GetValue() - small.GetValue();
  return Weight(difference, largest_.GetUnits());
}

ostream& operator << (ostream& output, const WeightRange& weightrange) {
  output << weightrange.GetSmallest() << " - " << weightrange.GetLargest();
  return output;
}
