#ifndef STLC_TESTS_CONTAINERS_CONTAINERS_H_
#define STLC_TESTS_CONTAINERS_CONTAINERS_H_

#include <gtest/gtest.h>

#include "../tests.h"

template <typename T>
class ContainersSizeTestInitLists {
 public:
  static std::initializer_list<T> data_init_list_size_2_;
};

template <typename T>
class ContainersSizeTest : public ContainersTest<T> {};

template <typename T>
class ContainersConstIteratorTestInitLists {
 public:
  static std::initializer_list<T> data_init_list_size_0_;
  static std::initializer_list<T> data_init_list_size_1_;
  static std::initializer_list<T> data_init_list_size_4_;
  static std::initializer_list<T> data_init_list_size_8_;
};

template <typename T>
class ContainersIteratorTestInitLists
    : public ContainersConstIteratorTestInitLists<T> {
 public:
  static std::initializer_list<T> data_init_list_size_1_2_;
  static std::initializer_list<T> data_init_list_size_4_2_;
  static std::initializer_list<T> data_init_list_size_8_2_;
};

template <typename T>
class ContainersIteratorTest : public ContainersTest<T> {};

template <typename T>
class ContainersConstIteratorTest : public ContainersTest<T> {};

template <typename T>
class ContainersConstructorTestInitLists
    : public ContainersConstIteratorTestInitLists<T> {};

template <typename T>
class ContainersConstructorTest : public ContainersTest<T> {};

template <typename T>
class ContainersConstructorMoveSaveItersTestInitLists
    : public ContainersConstIteratorTestInitLists<T> {};

template <typename T>
class ContainersConstructorMoveSaveItersTest
    : public ContainersConstructorTest<T> {};

template <typename T>
class ContainersSwapTestInitLists
    : public ContainersConstIteratorTestInitLists<T> {};

template <typename T>
class ContainersSwapTest : public ContainersTest<T> {};

template <typename T>
class ContainersSwapSaveItersTesttInitLists
    : public ContainersSwapTestInitLists<T> {};

template <typename T>
class ContainersSwapSaveItersTest : public ContainersSwapTest<T> {};

template <typename T>
class ContainersClearTestInitLists
    : public ContainersConstIteratorTestInitLists<T> {};

template <typename T>
class ContainersClearTest : public ContainersTest<T> {};

using string = std::string;
using ndc = NoDefaultCtor;
using sof = SortByOneField;

using list_int = containers::list<int>;
using list_bool = containers::list<bool>;
using list_string = containers::list<string>;
using list_ndc = containers::list<ndc>;
using list_sof = containers::list<sof>;

using vector_int = containers::vector<int>;
using vector_bool = containers::vector<bool>;
using vector_string = containers::vector<string>;
using vector_ndc = containers::vector<ndc>;
using vector_sof = containers::vector<sof>;

using map_int_string = containers::map<int, string>;
using map_int_bool = containers::map<int, bool>;
using map_string_int = containers::map<string, int>;
using map_ndc_ndc = containers::map<ndc, ndc>;
using map_sof_sof = containers::map<sof, sof>;

using set_int = containers::set<int>;
using set_bool = containers::set<bool>;
using set_string = containers::set<string>;
using set_ndc = containers::set<ndc>;
using set_sof = containers::set<sof>;

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

using ListMergeTestTypes =
    testing::Types<list_int, list_bool, list_string, list_ndc, list_sof>;
using ListSpliceTestTypes =
    testing::Types<list_int, list_bool, list_string, list_ndc>;
using ListReverseTestTypes =
    testing::Types<list_int, list_bool, list_string, list_ndc>;
using ListUniqueTestTypes =
    testing::Types<list_int, list_bool, list_string, list_ndc>;
using ListSortTestTypes =
    testing::Types<list_int, list_bool, list_string, list_ndc, list_sof>;

using ContainersSizeTestTypes =
    testing::Types<list_int, list_bool, list_string, list_ndc, list_sof,
                   vector_int, vector_bool, vector_string, vector_ndc,
                   vector_sof, stack_int, stack_bool, stack_string, stack_ndc,
                   stack_sof, stack_list_bool, stack_list_ndc, stack_list_sof,
                   queue_int, queue_bool, queue_string, queue_ndc, queue_sof>;

using ContainersIteratorTestTypes =
    testing::Types<list_int, list_bool, list_string, list_ndc, list_sof,
                   vector_int, vector_bool, vector_string, vector_ndc,
                   vector_sof>;

using ContainersConstIteratorTestTypes =
    testing::Types<list_int, list_bool, list_string, list_ndc, list_sof,
                   vector_int, vector_bool, vector_string, vector_ndc,
                   vector_sof>;

using ContainersConstructorTestTypes =
    testing::Types<list_int, list_bool, list_string, list_ndc, list_sof,
                   vector_int, vector_bool, vector_string, vector_ndc,
                   vector_sof, stack_int, stack_bool, stack_string, stack_ndc,
                   stack_sof, stack_list_bool, stack_list_ndc, stack_list_sof,
                   queue_int, queue_bool, queue_string, queue_ndc, queue_sof>;

using ContainersConstructorMoveSaveItersTestTypes =
    testing::Types<list_int, list_bool, list_string, list_ndc, list_sof,
                   vector_int, vector_bool, vector_string, vector_ndc,
                   vector_sof>;

using ContainersSwapTestTypes =
    testing::Types<list_int, list_bool, list_string, list_ndc, list_sof,
                   vector_int, vector_bool, vector_string, vector_ndc,
                   vector_sof, stack_int, stack_bool, stack_string, stack_ndc,
                   stack_sof, stack_list_bool, stack_list_ndc, stack_list_sof,
                   queue_int, queue_bool, queue_string, queue_ndc, queue_sof>;

using ContainersSwapSaveItersTestTypes =
    testing::Types<list_int, list_bool, list_string, list_ndc, list_sof,
                   vector_int, vector_bool, vector_string, vector_ndc,
                   vector_sof>;

using ContainersClearTestTypes =
    testing::Types<list_int, list_bool, list_string, list_ndc, list_sof,
                   vector_int, vector_bool, vector_string, vector_ndc,
                   vector_sof>;

TYPED_TEST_SUITE(ContainersSizeTest, ContainersSizeTestTypes);
TYPED_TEST_SUITE(ContainersIteratorTest, ContainersIteratorTestTypes);
TYPED_TEST_SUITE(ContainersConstIteratorTest, ContainersConstIteratorTestTypes);
TYPED_TEST_SUITE(ContainersConstructorTest, ContainersConstructorTestTypes);
TYPED_TEST_SUITE(ContainersConstructorMoveSaveItersTest,
                 ContainersConstructorMoveSaveItersTestTypes);
TYPED_TEST_SUITE(ContainersSwapTest, ContainersSwapTestTypes);
TYPED_TEST_SUITE(ContainersSwapSaveItersTest, ContainersSwapSaveItersTestTypes);
TYPED_TEST_SUITE(ContainersClearTest, ContainersClearTestTypes);

#endif  // STLC_TESTS_CONTAINERS_CONTAINERS_H_
