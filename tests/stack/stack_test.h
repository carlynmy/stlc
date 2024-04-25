#ifndef STLC_TESTS_STACK_STACK_TEST_H_
#define STLC_TESTS_STACK_STACK_TEST_H_

#include <gtest/gtest.h>

#include "../tests.h"

template <typename T>
class StackCommonTestValues {
 public:
  static T value_1_;
  static T value_2_;
  static T value_3_;
  static T value_4_;
};

template <typename T>
class StackCommonTest : public ContainersTest<T> {};

using string = std::string;
using ndc = NoDefaultCtor;
using sof = SortByOneField;

using list_int = containers::list<int>;
using list_bool = containers::list<bool>;
using list_string = containers::list<string>;
using list_ndc = containers::list<ndc>;
using list_sof = containers::list<sof>;

using stack_int = containers::stack<int>;
using stack_bool = containers::stack<bool>;
using stack_string = containers::stack<string>;
using stack_ndc = containers::stack<ndc>;
using stack_sof = containers::stack<sof>;
using stack_list_bool = containers::stack<bool, list_bool>;
using stack_list_ndc = containers::stack<ndc, list_ndc>;
using stack_list_sof = containers::stack<sof, list_sof>;

using StackCommonTestTypes =
    testing::Types<stack_int, stack_bool, stack_string, stack_ndc, stack_sof,
                   stack_list_bool, stack_list_ndc, stack_list_sof>;

TYPED_TEST_SUITE(StackCommonTest, StackCommonTestTypes);

#endif  // STLC_TESTS_STACK_STACK_TEST_H_
