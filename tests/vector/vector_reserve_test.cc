#include "vector_test.h"

TYPED_TEST(VectorReserveTest, Size0CapBtNewCapBt) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorInsertTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_0_;

  TypeParam vec(init_list);
  vec.reserve(8);
  vec.reserve(16);

  ASSERT_EQ(vec.size(), 0);
  ASSERT_EQ(vec.capacity(), 16);
  ASSERT_TRUE(ContEqInitlist(vec, init_list));
}

TYPED_TEST(VectorReserveTest, Size0CapBtNewCapEq) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorInsertTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_0_;

  TypeParam vec(init_list);
  vec.reserve(8);
  vec.reserve(8);

  ASSERT_EQ(vec.size(), 0);
  ASSERT_EQ(vec.capacity(), 8);
  ASSERT_TRUE(ContEqInitlist(vec, init_list));
}

TYPED_TEST(VectorReserveTest, Size0CapEqNewCapBt) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorInsertTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_0_;

  TypeParam vec(init_list);
  vec.reserve(8);

  ASSERT_EQ(vec.size(), 0);
  ASSERT_EQ(vec.capacity(), 8);
  ASSERT_TRUE(ContEqInitlist(vec, init_list));
}

TYPED_TEST(VectorReserveTest, Size0CapEqNewCapEq) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorInsertTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_0_;

  TypeParam vec(init_list);
  vec.reserve(0);

  ASSERT_EQ(vec.size(), 0);
  ASSERT_EQ(vec.capacity(), 0);
  ASSERT_TRUE(ContEqInitlist(vec, init_list));
}

TYPED_TEST(VectorReserveTest, Size1CapBtNewCapBt) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorInsertTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_1_;

  TypeParam vec(init_list);
  vec.reserve(8);
  vec.reserve(16);

  ASSERT_EQ(vec.size(), 1);
  ASSERT_EQ(vec.capacity(), 16);
  ASSERT_TRUE(ContEqInitlist(vec, init_list));
}

TYPED_TEST(VectorReserveTest, Size1CapBtNewCapEq) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorInsertTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_1_;

  TypeParam vec(init_list);
  vec.reserve(8);
  vec.reserve(8);

  ASSERT_EQ(vec.size(), 1);
  ASSERT_EQ(vec.capacity(), 8);
  ASSERT_TRUE(ContEqInitlist(vec, init_list));
}

TYPED_TEST(VectorReserveTest, Size1CapEqNewCapBt) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorInsertTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_1_;

  TypeParam vec(init_list);
  vec.reserve(8);

  ASSERT_EQ(vec.size(), 1);
  ASSERT_EQ(vec.capacity(), 8);
  ASSERT_TRUE(ContEqInitlist(vec, init_list));
}

TYPED_TEST(VectorReserveTest, Size1CapEqNewCapEq) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorInsertTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_1_;

  TypeParam vec(init_list);
  vec.reserve(1);

  ASSERT_EQ(vec.size(), 1);
  ASSERT_EQ(vec.capacity(), 1);
  ASSERT_TRUE(ContEqInitlist(vec, init_list));
}

TYPED_TEST(VectorReserveTest, Size4CapBtNewCapBt) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorInsertTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;

  TypeParam vec(init_list);
  vec.reserve(8);
  vec.reserve(16);

  ASSERT_EQ(vec.size(), 4);
  ASSERT_EQ(vec.capacity(), 16);
  ASSERT_TRUE(ContEqInitlist(vec, init_list));
}

TYPED_TEST(VectorReserveTest, Size4CapBtNewCapEq) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorInsertTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;

  TypeParam vec(init_list);
  vec.reserve(8);
  vec.reserve(8);

  ASSERT_EQ(vec.size(), 4);
  ASSERT_EQ(vec.capacity(), 8);
  ASSERT_TRUE(ContEqInitlist(vec, init_list));
}

TYPED_TEST(VectorReserveTest, Size4CapEqNewCapBt) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorInsertTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;

  TypeParam vec(init_list);
  vec.reserve(8);

  ASSERT_EQ(vec.size(), 4);
  ASSERT_EQ(vec.capacity(), 8);
  ASSERT_TRUE(ContEqInitlist(vec, init_list));
}

TYPED_TEST(VectorReserveTest, Size4CapEqNewCapEq) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorInsertTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;

  TypeParam vec(init_list);
  vec.reserve(4);

  ASSERT_EQ(vec.size(), 4);
  ASSERT_EQ(vec.capacity(), 4);
  ASSERT_TRUE(ContEqInitlist(vec, init_list));
}
