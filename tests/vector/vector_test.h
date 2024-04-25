#ifndef STLC_TESTS_VECTOR_VECTOR_TEST_H_
#define STLC_TESTS_VECTOR_VECTOR_TEST_H_

#include <gtest/gtest.h>

#include "../seq_container/seq_container_test.h"

template <typename T>
class VectorElementAccessTestInitLists : public SeqContainerTestInitLists<T> {
 public:
  static std::initializer_list<T> data_init_list_size_1_2_;
  static std::initializer_list<T> data_init_list_size_4_2_;
};

template <typename T>
class VectorElementAccessHasDataTestInitLists
    : public VectorElementAccessTestInitLists<T> {};

template <typename T>
class VectorInsertTestInitLists : public SeqContainerInsertTestInitLists<T> {};
template <typename T>
class VectorInsertCapacityTestInitLists
    : public SeqContainerInsertTestInitLists<T> {};
template <typename T>
class VectorPushBackTestInitLists
    : public SeqContainerPushBackTestInitLists<T> {};
template <typename T>
class VectorEraseTestInitLists : public SeqContainerEraseTestInitLists<T> {};
template <typename T>
class VectorPopBackTestInitLists : public SeqContainerPopBackTestInitLists<T> {
};

template <typename T>
class VectorResizeTestInitLists
    : public SeqContainerConstructorNdcTestInitLists<T> {
 public:
  static T fill_value_;
  static std::initializer_list<T> data_init_list_size_0_resized_1_;
  static std::initializer_list<T> data_init_list_size_1_resized_4_;
  static std::initializer_list<T> data_init_list_size_4_resized_8_;
};

template <typename T>
class VectorResizeHasDCTestInitLists
    : public SeqContainerConstructorNdcTestInitLists<T> {
 public:
  static std::initializer_list<T> data_init_list_size_0_resized_1_;
  static std::initializer_list<T> data_init_list_size_1_resized_4_;
  static std::initializer_list<T> data_init_list_size_4_resized_8_;
};

template <typename T>
class VectorReserveTestInitLists
    : public SeqContainerConstructorNdcTestInitLists<T> {};
template <typename T>
class VectorShrinkToFitTestInitLists
    : public SeqContainerConstructorNdcTestInitLists<T> {};

template <typename T>
class VectorTest : public SeqContainerTest<T> {};
template <typename T>
class VectorElementAccessTest : public VectorTest<T> {};
template <typename T>
class VectorElementAccessHasDataTest : public VectorTest<T> {};
template <typename T>
class VectorInsertTest : public VectorTest<T> {};
template <typename T>
class VectorInsertCapacityTest : public VectorTest<T> {};
template <typename T>
class VectorPushBackTest : public VectorTest<T> {};
template <typename T>
class VectorEraseTest : public VectorTest<T> {};
template <typename T>
class VectorPopBackTest : public VectorTest<T> {};
template <typename T>
class VectorResizeTest : public VectorTest<T> {};
template <typename T>
class VectorResizeHasDCTest : public VectorTest<T> {};
template <typename T>
class VectorReserveTest : public VectorTest<T> {};
template <typename T>
class VectorShrinkToFitTest : public VectorTest<T> {};

using VectorElementAccessTestTypes =
    testing::Types<vector_int, vector_bool, vector_string, vector_ndc,
                   vector_sof>;
using VectorElementAccessHasDataTestTypes =
    testing::Types<vector_int, vector_string, vector_ndc, vector_sof>;
using VectorInsertTestTypes =
    testing::Types<vector_int, vector_bool, vector_string, vector_ndc,
                   vector_sof>;
using VectorInsertCapacityTestTypes =
    testing::Types<vector_int, vector_string, vector_ndc, vector_sof>;
using VectorPushBackTestTypes =
    testing::Types<vector_int, vector_bool, vector_string, vector_ndc,
                   vector_sof>;
using VectorEraseTestTypes =
    testing::Types<vector_int, vector_bool, vector_string, vector_ndc,
                   vector_sof>;
using VectorPopBackTestTypes =
    testing::Types<vector_int, vector_bool, vector_string, vector_ndc,
                   vector_sof>;
using VectorResizeTestTypes =
    testing::Types<vector_int, vector_string, vector_ndc, vector_sof>;
using VectorResizeHasDCTestTypes =
    testing::Types<vector_int, vector_string, vector_sof>;
using VectorReserveTestTypes =
    testing::Types<vector_int, vector_string, vector_ndc, vector_sof>;
using VectorShrinkToFitTestTypes =
    testing::Types<vector_int, vector_string, vector_ndc, vector_sof>;

TYPED_TEST_SUITE(VectorElementAccessTest, VectorElementAccessTestTypes);
TYPED_TEST_SUITE(VectorElementAccessHasDataTest,
                 VectorElementAccessHasDataTestTypes);
TYPED_TEST_SUITE(VectorInsertTest, VectorInsertTestTypes);
TYPED_TEST_SUITE(VectorInsertCapacityTest, VectorInsertCapacityTestTypes);
TYPED_TEST_SUITE(VectorPushBackTest, VectorPushBackTestTypes);
TYPED_TEST_SUITE(VectorEraseTest, VectorEraseTestTypes);
TYPED_TEST_SUITE(VectorPopBackTest, VectorPopBackTestTypes);
TYPED_TEST_SUITE(VectorResizeTest, VectorResizeTestTypes);
TYPED_TEST_SUITE(VectorResizeHasDCTest, VectorResizeHasDCTestTypes);
TYPED_TEST_SUITE(VectorReserveTest, VectorReserveTestTypes);
TYPED_TEST_SUITE(VectorShrinkToFitTest, VectorShrinkToFitTestTypes);

#endif  // STLC_TESTS_VECTOR_VECTOR_TEST_H_
