#ifndef STLC_TESTS_SEQ_CONTAINER_TEST_H_
#define STLC_TESTS_SEQ_CONTAINER_TEST_H_

#include <gtest/gtest.h>

#include "../tests.h"

template <typename T>
class SeqContainerTestInitLists {
 public:
  static std::initializer_list<T> data_init_list_size_0_;
  static std::initializer_list<T> data_init_list_size_1_;
  static std::initializer_list<T> data_init_list_size_2_;
  static std::initializer_list<T> data_init_list_size_4_;
  static std::initializer_list<T> data_init_list_size_8_;
};

template <typename T>
class SeqContainerConstructorNdcTestInitLists
    : public SeqContainerTestInitLists<T> {
 public:
  static T value_1;
};

template <typename T>
class SeqContainerElementAccessTestInitLists
    : public SeqContainerConstructorNdcTestInitLists<T> {};

template <typename T>
class SeqContainerPushFrontTestInitLists
    : public SeqContainerConstructorNdcTestInitLists<T> {
 public:
  static std::initializer_list<T> data_init_list_size_0_pushed_front_;
  static std::initializer_list<T> data_init_list_size_1_pushed_front_;
  static std::initializer_list<T> data_init_list_size_2_pushed_front_;
  static std::initializer_list<T> data_init_list_size_4_pushed_front_;
  static std::initializer_list<T> data_init_list_size_8_pushed_front_;
};

template <typename T>
class SeqContainerPushBackTestInitLists
    : public SeqContainerConstructorNdcTestInitLists<T> {
 public:
  static std::initializer_list<T> data_init_list_size_0_pushed_back_;
  static std::initializer_list<T> data_init_list_size_1_pushed_back_;
  static std::initializer_list<T> data_init_list_size_2_pushed_back_;
  static std::initializer_list<T> data_init_list_size_4_pushed_back_;
  static std::initializer_list<T> data_init_list_size_8_pushed_back_;
};

template <typename T>
class SeqContainerPopFrontTestInitLists
    : public SeqContainerConstructorNdcTestInitLists<T> {
 public:
  static std::initializer_list<T> data_init_list_size_1_poped_front_;
  static std::initializer_list<T> data_init_list_size_2_poped_front_;
  static std::initializer_list<T> data_init_list_size_4_poped_front_;
  static std::initializer_list<T> data_init_list_size_8_poped_front_;
};

template <typename T>
class SeqContainerPopBackTestInitLists
    : public SeqContainerConstructorNdcTestInitLists<T> {
 public:
  static std::initializer_list<T> data_init_list_size_1_poped_back_;
  static std::initializer_list<T> data_init_list_size_2_poped_back_;
  static std::initializer_list<T> data_init_list_size_4_poped_back_;
  static std::initializer_list<T> data_init_list_size_8_poped_back_;
};

template <typename T>
class SeqContainerInsertTestInitLists
    : public SeqContainerConstructorNdcTestInitLists<T> {
 public:
  struct InsertData {
    T value_;
    int pos_;
    std::initializer_list<T> data_res_;
  };

  static InsertData data_size_0_insert_0;
  static InsertData data_size_1_insert_0;
  static InsertData data_size_1_insert_1;
  static InsertData data_size_2_insert_0;
  static InsertData data_size_2_insert_1;
  static InsertData data_size_2_insert_2;
  static InsertData data_size_4_insert_0;
  static InsertData data_size_4_insert_2;
  static InsertData data_size_4_insert_4;
  static InsertData data_size_8_insert_0;
  static InsertData data_size_8_insert_6;
  static InsertData data_size_8_insert_8;
};

template <typename T>
class SeqContainerEraseTestInitLists
    : public SeqContainerConstructorNdcTestInitLists<T> {
 public:
  struct EraseData {
    int pos_;
    std::initializer_list<T> data_res_;
  };

  static EraseData data_size_1_erase_0;
  static EraseData data_size_2_erase_0;
  static EraseData data_size_2_erase_1;
  static EraseData data_size_4_erase_0;
  static EraseData data_size_4_erase_1;
  static EraseData data_size_4_erase_3;
  static EraseData data_size_8_erase_0;
  static EraseData data_size_8_erase_5;
  static EraseData data_size_8_erase_7;
};

template <typename T>
class SeqContainerTest : public ContainersTest<T> {};
template <typename T>
class SeqContainerConstructorTest : public SeqContainerTest<T> {};
template <typename T>
class SeqContainerConstructorNdcTest : public SeqContainerConstructorTest<T> {};
template <typename T>
class SeqContainerElementAccessTest : public SeqContainerTest<T> {};
template <typename T>
class SeqContainerPushFrontTest : public SeqContainerTest<T> {};
template <typename T>
class SeqContainerPushBackTest : public SeqContainerTest<T> {};
template <typename T>
class SeqContainerPopFrontTest : public SeqContainerTest<T> {};
template <typename T>
class SeqContainerPopBackTest : public SeqContainerTest<T> {};
template <typename T>
class SeqContainerInsertTest : public SeqContainerTest<T> {};
template <typename T>
class SeqContainerEraseTest : public SeqContainerTest<T> {};

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

using SeqContainerConstructorTestTypes =
    testing::Types<list_int, list_bool, list_string, list_sof, vector_int,
                   vector_bool, vector_string, vector_sof>;
using SeqContainerConstructorNdcTestTypes =
    testing::Types<list_int, list_bool, list_string, list_ndc, list_sof,
                   vector_int, vector_bool, vector_string, vector_ndc,
                   vector_sof>;
using SeqContainerElementAccessTestTypes =
    testing::Types<list_int, list_bool, list_string, list_ndc, list_sof,
                   vector_int, vector_bool, vector_string, vector_ndc,
                   vector_sof>;
using SeqContainerPushFrontTestTypes =
    testing::Types<list_int, list_bool, list_string, list_ndc, list_sof>;
using SeqContainerPushBackTestTypes =
    testing::Types<list_int, list_bool, list_string, list_ndc, list_sof,
                   vector_int, vector_bool, vector_string, vector_ndc,
                   vector_sof>;
using SeqContainerPopFrontTestTypes =
    testing::Types<list_int, list_bool, list_string, list_ndc, list_sof>;
using SeqContainerPopBackTestTypes =
    testing::Types<list_int, list_bool, list_string, list_ndc, list_sof,
                   vector_int, vector_bool, vector_string, vector_ndc,
                   vector_sof>;
using SeqContainerInsertTestTypes =
    testing::Types<list_int, list_bool, list_string, list_ndc, list_sof,
                   vector_int, vector_bool, vector_string, vector_ndc,
                   vector_sof>;
using SeqContainerEraseTestTypes =
    testing::Types<list_int, list_bool, list_string, list_ndc, list_sof,
                   vector_int, vector_bool, vector_string, vector_ndc,
                   vector_sof>;

TYPED_TEST_SUITE(SeqContainerConstructorTest, SeqContainerConstructorTestTypes);
TYPED_TEST_SUITE(SeqContainerConstructorNdcTest,
                 SeqContainerConstructorNdcTestTypes);
TYPED_TEST_SUITE(SeqContainerElementAccessTest,
                 SeqContainerElementAccessTestTypes);
TYPED_TEST_SUITE(SeqContainerPushFrontTest, SeqContainerPushFrontTestTypes);
TYPED_TEST_SUITE(SeqContainerPushBackTest, SeqContainerPushBackTestTypes);
TYPED_TEST_SUITE(SeqContainerPopFrontTest, SeqContainerPopFrontTestTypes);
TYPED_TEST_SUITE(SeqContainerPopBackTest, SeqContainerPopBackTestTypes);
TYPED_TEST_SUITE(SeqContainerInsertTest, SeqContainerInsertTestTypes);
TYPED_TEST_SUITE(SeqContainerEraseTest, SeqContainerEraseTestTypes);

#endif  // STLC_TESTS_SEQ_CONTAINER_TEST_H_
