#include "vector_test.h"

TYPED_TEST(VectorPushBackTest, Size0) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorPushBackTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_0_;

  TypeParam cont(init_list);
  int siz = (int)cont.size();
  cont.reserve(cont.size() + 1);

  Iterators<TypeParam> old_iters = GetIterators(cont);

  cont.push_back(
      VectorPushBackTestInitLists<typename TypeParam::value_type>::value_1);

  Iterators<TypeParam> iters = GetIterators(cont);
  for (int i = 0; i != siz; ++i) iters[i] = old_iters[i];

  Iterators<TypeParam> res_iters = GetIterators(cont);

  ASSERT_TRUE(IteratorsEq<TypeParam>(iters, res_iters));
}

TYPED_TEST(VectorPushBackTest, Size1) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorPushBackTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_1_;

  TypeParam cont(init_list);
  int siz = (int)cont.size();
  cont.reserve(cont.size() + 1);

  Iterators<TypeParam> old_iters = GetIterators(cont);

  cont.push_back(
      VectorPushBackTestInitLists<typename TypeParam::value_type>::value_1);

  Iterators<TypeParam> iters = GetIterators(cont);
  for (int i = 0; i != siz; ++i) iters[i] = old_iters[i];

  Iterators<TypeParam> res_iters = GetIterators(cont);

  ASSERT_TRUE(IteratorsEq<TypeParam>(iters, res_iters));
}

TYPED_TEST(VectorPushBackTest, Size2) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorPushBackTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_2_;

  TypeParam cont(init_list);
  int siz = (int)cont.size();
  cont.reserve(cont.size() + 1);

  Iterators<TypeParam> old_iters = GetIterators(cont);

  cont.push_back(
      VectorPushBackTestInitLists<typename TypeParam::value_type>::value_1);

  Iterators<TypeParam> iters = GetIterators(cont);
  for (int i = 0; i != siz; ++i) iters[i] = old_iters[i];

  Iterators<TypeParam> res_iters = GetIterators(cont);

  ASSERT_TRUE(IteratorsEq<TypeParam>(iters, res_iters));
}

TYPED_TEST(VectorPushBackTest, Size4) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorPushBackTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;

  TypeParam cont(init_list);
  int siz = (int)cont.size();
  cont.reserve(cont.size() + 1);

  Iterators<TypeParam> old_iters = GetIterators(cont);

  cont.push_back(
      VectorPushBackTestInitLists<typename TypeParam::value_type>::value_1);

  Iterators<TypeParam> iters = GetIterators(cont);
  for (int i = 0; i != siz; ++i) iters[i] = old_iters[i];

  Iterators<TypeParam> res_iters = GetIterators(cont);

  ASSERT_TRUE(IteratorsEq<TypeParam>(iters, res_iters));
}

TYPED_TEST(VectorPushBackTest, Size8) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorPushBackTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_8_;

  TypeParam cont(init_list);
  int siz = (int)cont.size();
  cont.reserve(cont.size() + 1);

  Iterators<TypeParam> old_iters = GetIterators(cont);

  cont.push_back(
      VectorPushBackTestInitLists<typename TypeParam::value_type>::value_1);

  Iterators<TypeParam> iters = GetIterators(cont);
  for (int i = 0; i != siz; ++i) iters[i] = old_iters[i];

  Iterators<TypeParam> res_iters = GetIterators(cont);

  ASSERT_TRUE(IteratorsEq<TypeParam>(iters, res_iters));
}