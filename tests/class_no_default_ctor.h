#ifndef STLC_TESTS_CLASS_NO_DEFAULT_CTOR_H_
#define STLC_TESTS_CLASS_NO_DEFAULT_CTOR_H_

class NoDefaultCtor {
 public:
  NoDefaultCtor() = delete;
  NoDefaultCtor(int value);
  NoDefaultCtor(const NoDefaultCtor& other) = default;
  NoDefaultCtor(NoDefaultCtor&& other) noexcept = default;
  NoDefaultCtor& operator=(const NoDefaultCtor& other) = default;
  NoDefaultCtor& operator=(NoDefaultCtor&& other) noexcept = default;
  virtual ~NoDefaultCtor();

  void SetValue(int value);
  int GetValue() const;

  bool operator==(const NoDefaultCtor& other) const;
  bool operator!=(const NoDefaultCtor& other) const;
  bool operator<(const NoDefaultCtor& other) const;
  bool operator>(const NoDefaultCtor& other) const;
  bool operator<=(const NoDefaultCtor& other) const;
  bool operator>=(const NoDefaultCtor& other) const;

 private:
  int value_;
};

#endif  // STLC_TESTS_CLASS_NO_DEFAULT_CTOR_H_
