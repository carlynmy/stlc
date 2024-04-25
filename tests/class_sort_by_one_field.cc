#include "class_sort_by_one_field.h"

SortByOneField::SortByOneField() : SortByOneField(0, 0) {}

SortByOneField::SortByOneField(int a, int b) : a_(a), b_(b) {}

SortByOneField::~SortByOneField() {}

void SortByOneField::SetA(int a) { a_ = a; }

void SortByOneField::SetB(int b) { b_ = b; }

int SortByOneField::GetA() const { return a_; }

int SortByOneField::GetB() const { return b_; }

bool SortByOneField::operator==(const SortByOneField& other) const {
  return a_ == other.a_ && b_ == other.b_;
}

bool SortByOneField::operator!=(const SortByOneField& other) const {
  return !(*this == other);
}

bool SortByOneField::operator<(const SortByOneField& other) const {
  return a_ < other.a_;
}

bool SortByOneField::operator>(const SortByOneField& other) const {
  return a_ > other.a_;
}

bool SortByOneField::operator<=(const SortByOneField& other) const {
  return a_ <= other.a_;
}

bool SortByOneField::operator>=(const SortByOneField& other) const {
  return a_ >= other.a_;
}
