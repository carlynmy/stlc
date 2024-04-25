#ifndef STLC_TESTS_QUEUE_QUEUE_TEST_H_
#define STLC_TESTS_QUEUE_QUEUE_TEST_H_

#include <gtest/gtest.h>

#include "../tests.h"

template <typename T>
class QueueCommonTestValues {
 public:
  static T value_1_;
  static T value_2_;
  static T value_3_;
  static T value_4_;
};

template <typename T>
class QueueCommonTest : public ContainersTest<T> {};

using string = std::string;
using ndc = NoDefaultCtor;
using sof = SortByOneField;

using queue_int = containers::queue<int>;
using queue_bool = containers::queue<bool>;
using queue_string = containers::queue<string>;
using queue_ndc = containers::queue<ndc>;
using queue_sof = containers::queue<sof>;

using QueueCommonTestTypes =
    testing::Types<queue_int, queue_bool, queue_string, queue_ndc, queue_sof>;

TYPED_TEST_SUITE(QueueCommonTest, QueueCommonTestTypes);

#endif  // STLC_TESTS_QUEUE_QUEUE_TEST_H_
