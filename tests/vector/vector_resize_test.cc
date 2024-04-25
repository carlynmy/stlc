#include "vector_test.h"

TYPED_TEST(VectorResizeHasDCTest, Size0NewBtCapBtResCapBt) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorResizeHasDCTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_0_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      VectorResizeHasDCTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_0_resized_1_;

  TypeParam vec(init_list);
  vec.reserve(4);
  vec.resize(1);

  ASSERT_EQ(vec.size(), 1);
  ASSERT_EQ(vec.capacity(), 4);
  ASSERT_TRUE(ContEqInitlist(vec, res_init_list));
}

TYPED_TEST(VectorResizeHasDCTest, Size0NewBtCapBiResCapEq) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorResizeHasDCTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_0_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      VectorResizeHasDCTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_0_resized_1_;

  TypeParam vec(init_list);
  vec.reserve(1);
  vec.resize(1);

  ASSERT_EQ(vec.size(), 1);
  ASSERT_EQ(vec.capacity(), 1);
  ASSERT_TRUE(ContEqInitlist(vec, res_init_list));
}

TYPED_TEST(VectorResizeHasDCTest, Size0NewBtCapEq) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorResizeHasDCTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_0_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      VectorResizeHasDCTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_0_resized_1_;

  TypeParam vec(init_list);
  vec.resize(1);

  ASSERT_EQ(vec.size(), 1);
  ASSERT_EQ(vec.capacity(), 1);
  ASSERT_TRUE(ContEqInitlist(vec, res_init_list));
}

TYPED_TEST(VectorResizeHasDCTest, Size0NewEqCapBt) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorResizeHasDCTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_0_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      VectorResizeHasDCTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_0_;

  TypeParam vec(init_list);
  vec.reserve(1);
  vec.resize(0);

  ASSERT_EQ(vec.size(), 0);
  ASSERT_EQ(vec.capacity(), 1);
  ASSERT_TRUE(ContEqInitlist(vec, res_init_list));
}

TYPED_TEST(VectorResizeHasDCTest, Size0NewEqCapEq) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorResizeHasDCTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_0_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      VectorResizeHasDCTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_0_;

  TypeParam vec(init_list);
  vec.resize(0);

  ASSERT_EQ(vec.size(), 0);
  ASSERT_EQ(vec.capacity(), 0);
  ASSERT_TRUE(ContEqInitlist(vec, res_init_list));
}

TYPED_TEST(VectorResizeHasDCTest, Size1NewBtCapBtResCapBt) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorResizeHasDCTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_1_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      VectorResizeHasDCTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_1_resized_4_;

  TypeParam vec(init_list);
  vec.reserve(8);
  vec.resize(4);

  ASSERT_EQ(vec.size(), 4);
  ASSERT_EQ(vec.capacity(), 8);
  ASSERT_TRUE(ContEqInitlist(vec, res_init_list));
}

TYPED_TEST(VectorResizeHasDCTest, Size1NewBtCapBiResCapEq) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorResizeHasDCTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_1_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      VectorResizeHasDCTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_1_resized_4_;

  TypeParam vec(init_list);
  vec.reserve(4);
  vec.resize(4);

  ASSERT_EQ(vec.size(), 4);
  ASSERT_EQ(vec.capacity(), 4);
  ASSERT_TRUE(ContEqInitlist(vec, res_init_list));
}

TYPED_TEST(VectorResizeHasDCTest, Size1NewBtCapEq) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorResizeHasDCTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_1_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      VectorResizeHasDCTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_1_resized_4_;

  TypeParam vec(init_list);
  vec.resize(4);

  ASSERT_EQ(vec.size(), 4);
  ASSERT_EQ(vec.capacity(), 4);
  ASSERT_TRUE(ContEqInitlist(vec, res_init_list));
}

TYPED_TEST(VectorResizeHasDCTest, Size1NewEqCapBt) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorResizeHasDCTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_1_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      VectorResizeHasDCTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_1_;

  TypeParam vec(init_list);
  vec.reserve(4);
  vec.resize(1);

  ASSERT_EQ(vec.size(), 1);
  ASSERT_EQ(vec.capacity(), 4);
  ASSERT_TRUE(ContEqInitlist(vec, res_init_list));
}

TYPED_TEST(VectorResizeHasDCTest, Size1NewEqCapEq) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorResizeHasDCTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_1_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      VectorResizeHasDCTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_1_;

  TypeParam vec(init_list);
  vec.resize(1);

  ASSERT_EQ(vec.size(), 1);
  ASSERT_EQ(vec.capacity(), 1);
  ASSERT_TRUE(ContEqInitlist(vec, res_init_list));
}

TYPED_TEST(VectorResizeHasDCTest, Size1NewLessCapEq) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorResizeHasDCTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_1_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      VectorResizeHasDCTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_0_;

  TypeParam vec(init_list);
  vec.resize(0);

  ASSERT_EQ(vec.size(), 0);
  ASSERT_EQ(vec.capacity(), 1);
  ASSERT_TRUE(ContEqInitlist(vec, res_init_list));
}

TYPED_TEST(VectorResizeHasDCTest, Size1NewLessCapBt) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorResizeHasDCTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_1_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      VectorResizeHasDCTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_0_;

  TypeParam vec(init_list);
  vec.reserve(4);
  vec.resize(0);

  ASSERT_EQ(vec.size(), 0);
  ASSERT_EQ(vec.capacity(), 4);
  ASSERT_TRUE(ContEqInitlist(vec, res_init_list));
}

TYPED_TEST(VectorResizeHasDCTest, Size4NewBtCapBtResCapBt) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorResizeHasDCTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      VectorResizeHasDCTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_resized_8_;

  TypeParam vec(init_list);
  vec.reserve(16);
  vec.resize(8);

  ASSERT_EQ(vec.size(), 8);
  ASSERT_EQ(vec.capacity(), 16);
  ASSERT_TRUE(ContEqInitlist(vec, res_init_list));
}

TYPED_TEST(VectorResizeHasDCTest, Size4NewBtCapBiResCapEq) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorResizeHasDCTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      VectorResizeHasDCTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_resized_8_;

  TypeParam vec(init_list);
  vec.reserve(8);
  vec.resize(8);

  ASSERT_EQ(vec.size(), 8);
  ASSERT_EQ(vec.capacity(), 8);
  ASSERT_TRUE(ContEqInitlist(vec, res_init_list));
}

TYPED_TEST(VectorResizeHasDCTest, Size4NewBtCapEq) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorResizeHasDCTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      VectorResizeHasDCTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_resized_8_;

  TypeParam vec(init_list);
  vec.resize(8);

  ASSERT_EQ(vec.size(), 8);
  ASSERT_EQ(vec.capacity(), 8);
  ASSERT_TRUE(ContEqInitlist(vec, res_init_list));
}

TYPED_TEST(VectorResizeHasDCTest, Size4NewEqCapBt) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorResizeHasDCTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      VectorResizeHasDCTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;

  TypeParam vec(init_list);
  vec.reserve(8);
  vec.resize(4);

  ASSERT_EQ(vec.size(), 4);
  ASSERT_EQ(vec.capacity(), 8);
  ASSERT_TRUE(ContEqInitlist(vec, res_init_list));
}

TYPED_TEST(VectorResizeHasDCTest, Size4NewEqCapEq) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorResizeHasDCTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      VectorResizeHasDCTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;

  TypeParam vec(init_list);
  vec.resize(4);

  ASSERT_EQ(vec.size(), 4);
  ASSERT_EQ(vec.capacity(), 4);
  ASSERT_TRUE(ContEqInitlist(vec, res_init_list));
}

TYPED_TEST(VectorResizeHasDCTest, Size4NewLessCapEq) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorResizeHasDCTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      VectorResizeHasDCTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_2_;

  TypeParam vec(init_list);
  vec.resize(2);

  ASSERT_EQ(vec.size(), 2);
  ASSERT_EQ(vec.capacity(), 4);
  ASSERT_TRUE(ContEqInitlist(vec, res_init_list));
}

TYPED_TEST(VectorResizeHasDCTest, Size4NewLessCapBt) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorResizeHasDCTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      VectorResizeHasDCTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_2_;

  TypeParam vec(init_list);
  vec.reserve(8);
  vec.resize(2);

  ASSERT_EQ(vec.size(), 2);
  ASSERT_EQ(vec.capacity(), 8);
  ASSERT_TRUE(ContEqInitlist(vec, res_init_list));
}

TYPED_TEST(VectorResizeTest, Size0NewBtCapBtResCapBt) {
  const typename TypeParam::value_type& value =
      VectorResizeTestInitLists<typename TypeParam::value_type>::fill_value_;
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorResizeTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_0_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      VectorResizeTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_0_resized_1_;

  TypeParam vec(init_list);
  vec.reserve(4);
  vec.resize(1, value);

  ASSERT_EQ(vec.size(), 1);
  ASSERT_EQ(vec.capacity(), 4);
  ASSERT_TRUE(ContEqInitlist(vec, res_init_list));
}

TYPED_TEST(VectorResizeTest, Size0NewBtCapBiResCapEq) {
  const typename TypeParam::value_type& value =
      VectorResizeTestInitLists<typename TypeParam::value_type>::fill_value_;
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorResizeTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_0_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      VectorResizeTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_0_resized_1_;

  TypeParam vec(init_list);
  vec.reserve(1);
  vec.resize(1, value);

  ASSERT_EQ(vec.size(), 1);
  ASSERT_EQ(vec.capacity(), 1);
  ASSERT_TRUE(ContEqInitlist(vec, res_init_list));
}

TYPED_TEST(VectorResizeTest, Size0NewBtCapEq) {
  const typename TypeParam::value_type& value =
      VectorResizeTestInitLists<typename TypeParam::value_type>::fill_value_;
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorResizeTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_0_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      VectorResizeTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_0_resized_1_;

  TypeParam vec(init_list);
  vec.resize(1, value);

  ASSERT_EQ(vec.size(), 1);
  ASSERT_EQ(vec.capacity(), 1);
  ASSERT_TRUE(ContEqInitlist(vec, res_init_list));
}

TYPED_TEST(VectorResizeTest, Size0NewEqCapBt) {
  const typename TypeParam::value_type& value =
      VectorResizeTestInitLists<typename TypeParam::value_type>::fill_value_;
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorResizeTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_0_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      VectorResizeTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_0_;

  TypeParam vec(init_list);
  vec.reserve(1);
  vec.resize(0, value);

  ASSERT_EQ(vec.size(), 0);
  ASSERT_EQ(vec.capacity(), 1);
  ASSERT_TRUE(ContEqInitlist(vec, res_init_list));
}

TYPED_TEST(VectorResizeTest, Size0NewEqCapEq) {
  const typename TypeParam::value_type& value =
      VectorResizeTestInitLists<typename TypeParam::value_type>::fill_value_;
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorResizeTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_0_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      VectorResizeTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_0_;

  TypeParam vec(init_list);
  vec.resize(0, value);

  ASSERT_EQ(vec.size(), 0);
  ASSERT_EQ(vec.capacity(), 0);
  ASSERT_TRUE(ContEqInitlist(vec, res_init_list));
}

TYPED_TEST(VectorResizeTest, Size1NewBtCapBtResCapBt) {
  const typename TypeParam::value_type& value =
      VectorResizeTestInitLists<typename TypeParam::value_type>::fill_value_;
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorResizeTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_1_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      VectorResizeTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_1_resized_4_;

  TypeParam vec(init_list);
  vec.reserve(8);
  vec.resize(4, value);

  ASSERT_EQ(vec.size(), 4);
  ASSERT_EQ(vec.capacity(), 8);
  ASSERT_TRUE(ContEqInitlist(vec, res_init_list));
}

TYPED_TEST(VectorResizeTest, Size1NewBtCapBiResCapEq) {
  const typename TypeParam::value_type& value =
      VectorResizeTestInitLists<typename TypeParam::value_type>::fill_value_;
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorResizeTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_1_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      VectorResizeTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_1_resized_4_;

  TypeParam vec(init_list);
  vec.reserve(4);
  vec.resize(4, value);

  ASSERT_EQ(vec.size(), 4);
  ASSERT_EQ(vec.capacity(), 4);
  ASSERT_TRUE(ContEqInitlist(vec, res_init_list));
}

TYPED_TEST(VectorResizeTest, Size1NewBtCapEq) {
  const typename TypeParam::value_type& value =
      VectorResizeTestInitLists<typename TypeParam::value_type>::fill_value_;
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorResizeTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_1_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      VectorResizeTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_1_resized_4_;

  TypeParam vec(init_list);
  vec.resize(4, value);

  ASSERT_EQ(vec.size(), 4);
  ASSERT_EQ(vec.capacity(), 4);
  ASSERT_TRUE(ContEqInitlist(vec, res_init_list));
}

TYPED_TEST(VectorResizeTest, Size1NewEqCapBt) {
  const typename TypeParam::value_type& value =
      VectorResizeTestInitLists<typename TypeParam::value_type>::fill_value_;
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorResizeTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_1_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      VectorResizeTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_1_;

  TypeParam vec(init_list);
  vec.reserve(4);
  vec.resize(1, value);

  ASSERT_EQ(vec.size(), 1);
  ASSERT_EQ(vec.capacity(), 4);
  ASSERT_TRUE(ContEqInitlist(vec, res_init_list));
}

TYPED_TEST(VectorResizeTest, Size1NewEqCapEq) {
  const typename TypeParam::value_type& value =
      VectorResizeTestInitLists<typename TypeParam::value_type>::fill_value_;
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorResizeTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_1_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      VectorResizeTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_1_;

  TypeParam vec(init_list);
  vec.resize(1, value);

  ASSERT_EQ(vec.size(), 1);
  ASSERT_EQ(vec.capacity(), 1);
  ASSERT_TRUE(ContEqInitlist(vec, res_init_list));
}

TYPED_TEST(VectorResizeTest, Size1NewLessCapEq) {
  const typename TypeParam::value_type& value =
      VectorResizeTestInitLists<typename TypeParam::value_type>::fill_value_;
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorResizeTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_1_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      VectorResizeTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_0_;

  TypeParam vec(init_list);
  vec.resize(0, value);

  ASSERT_EQ(vec.size(), 0);
  ASSERT_EQ(vec.capacity(), 1);
  ASSERT_TRUE(ContEqInitlist(vec, res_init_list));
}

TYPED_TEST(VectorResizeTest, Size1NewLessCapBt) {
  const typename TypeParam::value_type& value =
      VectorResizeTestInitLists<typename TypeParam::value_type>::fill_value_;
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorResizeTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_1_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      VectorResizeTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_0_;

  TypeParam vec(init_list);
  vec.reserve(4);
  vec.resize(0, value);

  ASSERT_EQ(vec.size(), 0);
  ASSERT_EQ(vec.capacity(), 4);
  ASSERT_TRUE(ContEqInitlist(vec, res_init_list));
}

TYPED_TEST(VectorResizeTest, Size4NewBtCapBtResCapBt) {
  const typename TypeParam::value_type& value =
      VectorResizeTestInitLists<typename TypeParam::value_type>::fill_value_;
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorResizeTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      VectorResizeTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_resized_8_;

  TypeParam vec(init_list);
  vec.reserve(16);
  vec.resize(8, value);

  ASSERT_EQ(vec.size(), 8);
  ASSERT_EQ(vec.capacity(), 16);
  ASSERT_TRUE(ContEqInitlist(vec, res_init_list));
}

TYPED_TEST(VectorResizeTest, Size4NewBtCapBiResCapEq) {
  const typename TypeParam::value_type& value =
      VectorResizeTestInitLists<typename TypeParam::value_type>::fill_value_;
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorResizeTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      VectorResizeTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_resized_8_;

  TypeParam vec(init_list);
  vec.reserve(8);
  vec.resize(8, value);

  ASSERT_EQ(vec.size(), 8);
  ASSERT_EQ(vec.capacity(), 8);
  ASSERT_TRUE(ContEqInitlist(vec, res_init_list));
}

TYPED_TEST(VectorResizeTest, Size4NewBtCapEq) {
  const typename TypeParam::value_type& value =
      VectorResizeTestInitLists<typename TypeParam::value_type>::fill_value_;
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorResizeTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      VectorResizeTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_resized_8_;

  TypeParam vec(init_list);
  vec.resize(8, value);

  ASSERT_EQ(vec.size(), 8);
  ASSERT_EQ(vec.capacity(), 8);
  ASSERT_TRUE(ContEqInitlist(vec, res_init_list));
}

TYPED_TEST(VectorResizeTest, Size4NewEqCapBt) {
  const typename TypeParam::value_type& value =
      VectorResizeTestInitLists<typename TypeParam::value_type>::fill_value_;
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorResizeTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      VectorResizeTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;

  TypeParam vec(init_list);
  vec.reserve(8);
  vec.resize(4, value);

  ASSERT_EQ(vec.size(), 4);
  ASSERT_EQ(vec.capacity(), 8);
  ASSERT_TRUE(ContEqInitlist(vec, res_init_list));
}

TYPED_TEST(VectorResizeTest, Size4NewEqCapEq) {
  const typename TypeParam::value_type& value =
      VectorResizeTestInitLists<typename TypeParam::value_type>::fill_value_;
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorResizeTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      VectorResizeTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;

  TypeParam vec(init_list);
  vec.resize(4, value);

  ASSERT_EQ(vec.size(), 4);
  ASSERT_EQ(vec.capacity(), 4);
  ASSERT_TRUE(ContEqInitlist(vec, res_init_list));
}

TYPED_TEST(VectorResizeTest, Size4NewLessCapEq) {
  const typename TypeParam::value_type& value =
      VectorResizeTestInitLists<typename TypeParam::value_type>::fill_value_;
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorResizeTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      VectorResizeTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_2_;

  TypeParam vec(init_list);
  vec.resize(2, value);

  ASSERT_EQ(vec.size(), 2);
  ASSERT_EQ(vec.capacity(), 4);
  ASSERT_TRUE(ContEqInitlist(vec, res_init_list));
}

TYPED_TEST(VectorResizeTest, Size4NewLessCapBt) {
  const typename TypeParam::value_type& value =
      VectorResizeTestInitLists<typename TypeParam::value_type>::fill_value_;
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorResizeTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      VectorResizeTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_2_;

  TypeParam vec(init_list);
  vec.reserve(8);
  vec.resize(2, value);

  ASSERT_EQ(vec.size(), 2);
  ASSERT_EQ(vec.capacity(), 8);
  ASSERT_TRUE(ContEqInitlist(vec, res_init_list));
}
