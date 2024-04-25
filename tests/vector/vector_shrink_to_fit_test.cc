#include "vector_test.h"

TYPED_TEST(VectorShrinkToFitTest, Size0CapBtNewCapEq) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorInsertTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_0_;

  TypeParam vec(init_list);
  vec.reserve(100);
  vec.shrink_to_fit();

  ASSERT_EQ(vec.size(), 0);
  ASSERT_EQ(vec.capacity(), 0);
  ASSERT_TRUE(ContEqInitlist(vec, init_list));
}

TYPED_TEST(VectorShrinkToFitTest, Size0CapEqNewCapEq) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorInsertTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_0_;

  TypeParam vec(init_list);
  vec.shrink_to_fit();

  ASSERT_EQ(vec.size(), 0);
  ASSERT_EQ(vec.capacity(), 0);
  ASSERT_TRUE(ContEqInitlist(vec, init_list));
}

TYPED_TEST(VectorShrinkToFitTest, Size1CapBtNewCapEq) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorInsertTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_1_;

  TypeParam vec(init_list);
  vec.reserve(100);
  vec.shrink_to_fit();

  ASSERT_EQ(vec.size(), 1);
  ASSERT_EQ(vec.capacity(), 1);
  ASSERT_TRUE(ContEqInitlist(vec, init_list));
}

TYPED_TEST(VectorShrinkToFitTest, Size1CapEqNewCapEq) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorInsertTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_1_;

  TypeParam vec(init_list);
  vec.shrink_to_fit();

  ASSERT_EQ(vec.size(), 1);
  ASSERT_EQ(vec.capacity(), 1);
  ASSERT_TRUE(ContEqInitlist(vec, init_list));
}

TYPED_TEST(VectorShrinkToFitTest, Size4CapBtNewCapEq) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorInsertTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;

  TypeParam vec(init_list);
  vec.reserve(100);
  vec.shrink_to_fit();

  ASSERT_EQ(vec.size(), 4);
  ASSERT_EQ(vec.capacity(), 4);
  ASSERT_TRUE(ContEqInitlist(vec, init_list));
}

TYPED_TEST(VectorShrinkToFitTest, Size4CapEqNewCapEq) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorInsertTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;

  TypeParam vec(init_list);
  vec.shrink_to_fit();

  ASSERT_EQ(vec.size(), 4);
  ASSERT_EQ(vec.capacity(), 4);
  ASSERT_TRUE(ContEqInitlist(vec, init_list));
}