#ifndef STLC_TESTS_ADAPTOR_CONTAINERS_ADAPTOR_CONTAINERS_TEST_H_
#define STLC_TESTS_ADAPTOR_CONTAINERS_ADAPTOR_CONTAINERS_TEST_H_

#include <gtest/gtest.h>

#include "../tests.h"

template <typename T>
class AdaptorContainersConstructorTestInitLists {
 public:
  static std::initializer_list<T> data_init_list_size_4_;
};

template <typename T>
class AdaptorContainersConstructorTest : public ContainersTest<T> {};

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

using queue_int = containers::queue<int>;
using queue_bool = containers::queue<bool>;
using queue_string = containers::queue<string>;
using queue_ndc = containers::queue<ndc>;
using queue_sof = containers::queue<sof>;

using AdaptorContainersConstructorTestTypes =
    testing::Types<stack_int, stack_bool, stack_string, stack_ndc, stack_sof,
                   stack_list_bool, stack_list_ndc, stack_list_sof, queue_int,
                   queue_bool, queue_string, queue_ndc, queue_sof>;

TYPED_TEST_SUITE(AdaptorContainersConstructorTest,
                 AdaptorContainersConstructorTestTypes);

#endif  // STLC_TESTS_ADAPTOR_CONTAINERS_ADAPTOR_CONTAINERS_TEST_H_
