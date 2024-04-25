#include "vector_test.h"

TYPED_TEST(VectorEraseTest, Size1E0) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorEraseTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_1_;
  const typename VectorEraseTestInitLists<
      typename TypeParam::value_type>::EraseData& erase_data =
      VectorEraseTestInitLists<
          typename TypeParam::value_type>::data_size_1_erase_0;

  TypeParam cont(init_list);
  auto iter = cont.begin();
  for (int i = 0; i < erase_data.pos_; ++i) ++iter;

  Iterators<TypeParam> old_iters = GetIterators(cont);

  cont.erase(iter);

  Iterators<TypeParam> iters = GetIterators(cont);
  Iterators<TypeParam> res_iters = GetIterators(cont);

  for (int i = 0; i != erase_data.pos_; ++i) iters[i] = old_iters[i];

  ASSERT_TRUE(IteratorsEq<TypeParam>(iters, res_iters));
}

TYPED_TEST(VectorEraseTest, Size2E0) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorEraseTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_2_;
  const typename VectorEraseTestInitLists<
      typename TypeParam::value_type>::EraseData& erase_data =
      VectorEraseTestInitLists<
          typename TypeParam::value_type>::data_size_2_erase_0;

  TypeParam cont(init_list);
  auto iter = cont.begin();
  for (int i = 0; i < erase_data.pos_; ++i) ++iter;

  Iterators<TypeParam> old_iters = GetIterators(cont);

  cont.erase(iter);

  Iterators<TypeParam> iters = GetIterators(cont);
  Iterators<TypeParam> res_iters = GetIterators(cont);

  for (int i = 0; i != erase_data.pos_; ++i) iters[i] = old_iters[i];

  ASSERT_TRUE(IteratorsEq<TypeParam>(iters, res_iters));
}

TYPED_TEST(VectorEraseTest, Size2E1) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorEraseTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_2_;
  const typename VectorEraseTestInitLists<
      typename TypeParam::value_type>::EraseData& erase_data =
      VectorEraseTestInitLists<
          typename TypeParam::value_type>::data_size_2_erase_1;

  TypeParam cont(init_list);
  auto iter = cont.begin();
  for (int i = 0; i < erase_data.pos_; ++i) ++iter;

  Iterators<TypeParam> old_iters = GetIterators(cont);

  cont.erase(iter);

  Iterators<TypeParam> iters = GetIterators(cont);
  Iterators<TypeParam> res_iters = GetIterators(cont);

  for (int i = 0; i != erase_data.pos_; ++i) iters[i] = old_iters[i];

  ASSERT_TRUE(IteratorsEq<TypeParam>(iters, res_iters));
}

TYPED_TEST(VectorEraseTest, Size4E0) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorEraseTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;
  const typename VectorEraseTestInitLists<
      typename TypeParam::value_type>::EraseData& erase_data =
      VectorEraseTestInitLists<
          typename TypeParam::value_type>::data_size_4_erase_0;

  TypeParam cont(init_list);
  auto iter = cont.begin();
  for (int i = 0; i < erase_data.pos_; ++i) ++iter;

  Iterators<TypeParam> old_iters = GetIterators(cont);

  cont.erase(iter);

  Iterators<TypeParam> iters = GetIterators(cont);
  Iterators<TypeParam> res_iters = GetIterators(cont);

  for (int i = 0; i < erase_data.pos_; ++i) iters[i] = old_iters[i];

  ASSERT_TRUE(IteratorsEq<TypeParam>(iters, res_iters));
}

TYPED_TEST(VectorEraseTest, Size4E1) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorEraseTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;
  const typename VectorEraseTestInitLists<
      typename TypeParam::value_type>::EraseData& erase_data =
      VectorEraseTestInitLists<
          typename TypeParam::value_type>::data_size_4_erase_1;

  TypeParam cont(init_list);
  auto iter = cont.begin();
  for (int i = 0; i < erase_data.pos_; ++i) ++iter;

  Iterators<TypeParam> old_iters = GetIterators(cont);

  cont.erase(iter);

  Iterators<TypeParam> iters = GetIterators(cont);
  Iterators<TypeParam> res_iters = GetIterators(cont);

  for (int i = 0; i != erase_data.pos_; ++i) iters[i] = old_iters[i];

  ASSERT_TRUE(IteratorsEq<TypeParam>(iters, res_iters));
}

TYPED_TEST(VectorEraseTest, Size4E3) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorEraseTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;
  const typename VectorEraseTestInitLists<
      typename TypeParam::value_type>::EraseData& erase_data =
      VectorEraseTestInitLists<
          typename TypeParam::value_type>::data_size_4_erase_3;

  TypeParam cont(init_list);
  auto iter = cont.begin();
  for (int i = 0; i < erase_data.pos_; ++i) ++iter;

  Iterators<TypeParam> old_iters = GetIterators(cont);

  cont.erase(iter);

  Iterators<TypeParam> iters = GetIterators(cont);
  Iterators<TypeParam> res_iters = GetIterators(cont);

  for (int i = 0; i != erase_data.pos_; ++i) iters[i] = old_iters[i];

  ASSERT_TRUE(IteratorsEq<TypeParam>(iters, res_iters));
}

TYPED_TEST(VectorEraseTest, Size8E0) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorEraseTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_8_;
  const typename VectorEraseTestInitLists<
      typename TypeParam::value_type>::EraseData& erase_data =
      VectorEraseTestInitLists<
          typename TypeParam::value_type>::data_size_8_erase_0;

  TypeParam cont(init_list);
  auto iter = cont.begin();
  for (int i = 0; i < erase_data.pos_; ++i) ++iter;

  Iterators<TypeParam> old_iters = GetIterators(cont);

  cont.erase(iter);

  Iterators<TypeParam> iters = GetIterators(cont);
  Iterators<TypeParam> res_iters = GetIterators(cont);

  for (int i = 0; i != erase_data.pos_; ++i) iters[i] = old_iters[i];

  ASSERT_TRUE(IteratorsEq<TypeParam>(iters, res_iters));
}

TYPED_TEST(VectorEraseTest, Size8E5) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorEraseTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_8_;
  const typename VectorEraseTestInitLists<
      typename TypeParam::value_type>::EraseData& erase_data =
      VectorEraseTestInitLists<
          typename TypeParam::value_type>::data_size_8_erase_5;

  TypeParam cont(init_list);
  auto iter = cont.begin();
  for (int i = 0; i < erase_data.pos_; ++i) ++iter;

  Iterators<TypeParam> old_iters = GetIterators(cont);

  cont.erase(iter);

  Iterators<TypeParam> iters = GetIterators(cont);
  Iterators<TypeParam> res_iters = GetIterators(cont);

  for (int i = 0; i != erase_data.pos_; ++i) iters[i] = old_iters[i];

  ASSERT_TRUE(IteratorsEq<TypeParam>(iters, res_iters));
}
