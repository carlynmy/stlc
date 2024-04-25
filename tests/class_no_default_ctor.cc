
#include "class_no_default_ctor.h"

NoDefaultCtor::NoDefaultCtor(int value) : value_(value) {}

NoDefaultCtor::~NoDefaultCtor() {}

void NoDefaultCtor::SetValue(int value) { value_ = value; }

int NoDefaultCtor::GetValue() const { return value_; }

bool NoDefaultCtor::operator==(const NoDefaultCtor& other) const {
  return value_ == other.value_;
}

bool NoDefaultCtor::operator!=(const NoDefaultCtor& other) const {
  return value_ != other.value_;
}

bool NoDefaultCtor::operator<(const NoDefaultCtor& other) const {
  return value_ < other.value_;
}

bool NoDefaultCtor::operator>(const NoDefaultCtor& other) const {
  return value_ > other.value_;
}

bool NoDefaultCtor::operator<=(const NoDefaultCtor& other) const {
  return value_ <= other.value_;
}

bool NoDefaultCtor::operator>=(const NoDefaultCtor& other) const {
  return value_ >= other.value_;
}
