#ifndef STLC_TESTS_LIST_TEST_H_
#define STLC_TESTS_LIST_TEST_H_

#include <gtest/gtest.h>

#include "../seq_container/seq_container_test.h"

template <typename T>
class ListTestInitLists : public SeqContainerTestInitLists<T> {};

template <typename T>
class ListTest : public SeqContainerTest<T> {};

template <typename T>
class ListConstructorTestInitLists : public SeqContainerTestInitLists<T> {};

template <typename T>
class ListInsertTestInitLists : public SeqContainerInsertTestInitLists<T> {};

template <typename T>
class ListEraseTestInitLists : public SeqContainerEraseTestInitLists<T> {};

template <typename T>
class ListMergeTestInitLists : public SeqContainerTestInitLists<T> {
 public:
  struct MergeData {
    std::initializer_list<T> data_list_1_;
    std::initializer_list<T> data_list_2_;
    std::initializer_list<T> data_list_res_;
    IteratorIdxs data_list_res_idxs_;
  };

  static MergeData merge_data_1_;
  static MergeData merge_data_2_;
  static MergeData merge_data_3_;
  static MergeData merge_data_4_;
  static MergeData merge_data_5_;
};

template <typename T>
class ListSpliceTestInitLists : public SeqContainerTestInitLists<T> {
 public:
  struct SpliceData {
    std::initializer_list<T> data_list_1_;
    std::initializer_list<T> data_list_2_;
    int pos_;
    std::initializer_list<T> data_list_res_;
    IteratorIdxs data_list_res_idxs_;
  };

  static SpliceData splice_data_1_;
  static SpliceData splice_data_2_;
  static SpliceData splice_data_3_;
  static SpliceData splice_data_4_;
  static SpliceData splice_data_5_;
};

template <typename T>
class ListReverseTestInitLists : public SeqContainerTestInitLists<T> {
 public:
  static std::initializer_list<T> data_list_size_0_;
  static std::initializer_list<T> data_list_size_0_reversed_;
  static IteratorIdxs data_list_size_0_reversed_element_idxes_;

  static std::initializer_list<T> data_list_size_1_;
  static std::initializer_list<T> data_list_size_1_reversed_;
  static IteratorIdxs data_list_size_1_reversed_element_idxes_;

  static std::initializer_list<T> data_list_size_4_;
  static std::initializer_list<T> data_list_size_4_reversed_;
  static IteratorIdxs data_list_size_4_reversed_element_idxes_;

  static std::initializer_list<T> data_list_size_8_;
  static std::initializer_list<T> data_list_size_8_reversed_;
  static IteratorIdxs data_list_size_8_reversed_element_idxes_;
};

template <typename T>
class ListUniqueTestInitLists : public SeqContainerTestInitLists<T> {
 public:
  static std::initializer_list<T> data_list_size_0_;
  static std::initializer_list<T> data_list_size_0_unique_;
  static IteratorIdxs data_list_size_0_unique_removed_idxes_;

  static std::initializer_list<T> data_list_size_1_;
  static std::initializer_list<T> data_list_size_1_unique_;
  static IteratorIdxs data_list_size_1_unique_removed_idxes_;

  static std::initializer_list<T> data_list_size_4_;
  static std::initializer_list<T> data_list_size_4_unique_;
  static IteratorIdxs data_list_size_4_unique_removed_idxes_;

  static std::initializer_list<T> data_list_size_8_;
  static std::initializer_list<T> data_list_size_8_unique_;
  static IteratorIdxs data_list_size_8_unique_removed_idxes_;
};

template <typename T>
class ListSortTestInitLists : public SeqContainerTestInitLists<T> {
 public:
  static std::initializer_list<T> data_list_size_0_;
  static std::initializer_list<T> data_list_size_0_sorted_;
  static IteratorIdxs data_list_size_0_sorted_element_idxes_;

  static std::initializer_list<T> data_list_size_1_;
  static std::initializer_list<T> data_list_size_1_sorted_;
  static IteratorIdxs data_list_size_1_sorted_element_idxes_;

  static std::initializer_list<T> data_list_size_4_;
  static std::initializer_list<T> data_list_size_4_sorted_;
  static IteratorIdxs data_list_size_4_sorted_element_idxes_;

  static std::initializer_list<T> data_list_size_8_;
  static std::initializer_list<T> data_list_size_8_sorted_;
  static IteratorIdxs data_list_size_8_sorted_element_idxes_;

  static std::initializer_list<T> data_list_size_9_;
  static std::initializer_list<T> data_list_size_9_sorted_;
  static IteratorIdxs data_list_size_9_sorted_element_idxes_;
};

template <typename T>
class ListConstructorTest : public ListTest<T> {};
template <typename T>
class ListInsertTest : public ListTest<T> {};
template <typename T>
class ListEraseTest : public ListTest<T> {};
template <typename T>
class ListMergeTest : public ListTest<T> {};
template <typename T>
class ListSpliceTest : public ListTest<T> {};
template <typename T>
class ListReverseTest : public ListTest<T> {};
template <typename T>
class ListUniqueTest : public ListTest<T> {};
template <typename T>
class ListSortTest : public ListTest<T> {};

using ListConstructorTestTypes =
    testing::Types<list_int, list_bool, list_string, list_ndc, list_sof>;
using ListInsertTestTypes =
    testing::Types<list_int, list_bool, list_string, list_ndc, list_sof>;
using ListEraseTestTypes =
    testing::Types<list_int, list_bool, list_string, list_ndc, list_sof>;
using ListMergeTestTypes =
    testing::Types<list_int, list_string, list_ndc, list_sof>;
using ListSpliceTestTypes =
    testing::Types<list_int, list_bool, list_string, list_ndc>;
using ListReverseTestTypes =
    testing::Types<list_int, list_bool, list_string, list_ndc>;
using ListUniqueTestTypes =
    testing::Types<list_int, list_bool, list_string, list_ndc>;
using ListSortTestTypes = testing::Types<list_int>;

TYPED_TEST_SUITE(ListConstructorTest, ListConstructorTestTypes);
TYPED_TEST_SUITE(ListInsertTest, ListInsertTestTypes);
TYPED_TEST_SUITE(ListEraseTest, ListEraseTestTypes);
TYPED_TEST_SUITE(ListMergeTest, ListMergeTestTypes);
TYPED_TEST_SUITE(ListSpliceTest, ListSpliceTestTypes);
TYPED_TEST_SUITE(ListReverseTest, ListReverseTestTypes);
TYPED_TEST_SUITE(ListUniqueTest, ListUniqueTestTypes);
TYPED_TEST_SUITE(ListSortTest, ListSortTestTypes);

#endif  // STLC_TESTS_LIST_TEST_H_
