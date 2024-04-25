#include "vector_test.h"

TYPED_TEST(VectorPopBackTest, Size1) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorPopBackTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_1_;

  TypeParam cont(init_list);
  int siz = (int)cont.size();

  Iterators<TypeParam> old_iters = GetIterators(cont);

  cont.pop_back();

  Iterators<TypeParam> iters = GetIterators(cont);
  Iterators<TypeParam> res_iters = GetIterators(cont);

  for (int i = 0; i != siz; ++i) iters[i] = old_iters[i];

  ASSERT_TRUE(IteratorsEq<TypeParam>(iters, res_iters));
}

TYPED_TEST(VectorPopBackTest, Size2) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorPopBackTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_2_;

  TypeParam cont(init_list);
  int siz = (int)cont.size();

  Iterators<TypeParam> old_iters = GetIterators(cont);

  cont.pop_back();

  Iterators<TypeParam> iters = GetIterators(cont);
  Iterators<TypeParam> res_iters = GetIterators(cont);

  for (int i = 0; i != siz; ++i) iters[i] = old_iters[i];

  ASSERT_TRUE(IteratorsEq<TypeParam>(iters, res_iters));
}

TYPED_TEST(VectorPopBackTest, Size4) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorPopBackTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;

  TypeParam cont(init_list);
  int siz = (int)cont.size();

  Iterators<TypeParam> old_iters = GetIterators(cont);

  cont.pop_back();

  Iterators<TypeParam> iters = GetIterators(cont);
  Iterators<TypeParam> res_iters = GetIterators(cont);

  for (int i = 0; i != siz; ++i) iters[i] = old_iters[i];

  ASSERT_TRUE(IteratorsEq<TypeParam>(iters, res_iters));
}

TYPED_TEST(VectorPopBackTest, Size8) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorPopBackTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_8_;

  TypeParam cont(init_list);
  int siz = (int)cont.size();

  Iterators<TypeParam> old_iters = GetIterators(cont);

  cont.pop_back();

  Iterators<TypeParam> iters = GetIterators(cont);
  Iterators<TypeParam> res_iters = GetIterators(cont);

  for (int i = 0; i != siz; ++i) iters[i] = old_iters[i];

  ASSERT_TRUE(IteratorsEq<TypeParam>(iters, res_iters));
}
