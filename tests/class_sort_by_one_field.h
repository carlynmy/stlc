#ifndef STLC_TESTS_CLASS_SORT_BY_ONE_FIELD_H_
#define STLC_TESTS_CLASS_SORT_BY_ONE_FIELD_H_

class SortByOneField {
 public:
  SortByOneField();
  SortByOneField(int a, int b);
  SortByOneField(const SortByOneField& other) = default;
  SortByOneField(SortByOneField&& other) noexcept = default;
  SortByOneField& operator=(const SortByOneField& other) = default;
  SortByOneField& operator=(SortByOneField&& other) noexcept = default;
  virtual ~SortByOneField();

  void SetA(int a);
  void SetB(int a);
  int GetA() const;
  int GetB() const;

  bool operator==(const SortByOneField& other) const;
  bool operator!=(const SortByOneField& other) const;
  bool operator<(const SortByOneField& other) const;
  bool operator>(const SortByOneField& other) const;
  bool operator<=(const SortByOneField& other) const;
  bool operator>=(const SortByOneField& other) const;

 private:
  int a_;
  int b_;
};

#endif  // STLC_TESTS_CLASS_SORT_BY_ONE_FIELD_H_
