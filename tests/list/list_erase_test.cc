#include "list_test.h"

TYPED_TEST(ListEraseTest, Size1E0IteratorsSaving) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ListEraseTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_1_;
  const typename ListEraseTestInitLists<
      typename TypeParam::value_type>::EraseData& erase_data =
      ListEraseTestInitLists<
          typename TypeParam::value_type>::data_size_1_erase_0;

  TypeParam cont(init_list);
  auto iter = cont.begin();
  for (int i = 0; i < erase_data.pos_; ++i) ++iter;

  Iterators<TypeParam> res_iters = GetIterators(cont);
  res_iters.erase(res_iters.begin() + erase_data.pos_);

  cont.erase(iter);

  Iterators<TypeParam> iters = GetIterators(cont);

  ASSERT_TRUE(IteratorsEq<TypeParam>(iters, res_iters));
  ASSERT_TRUE(ContEqInitlist(cont, erase_data.data_res_));
}

TYPED_TEST(ListEraseTest, Size2E0IteratorsSaving) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ListEraseTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_2_;
  const typename ListEraseTestInitLists<
      typename TypeParam::value_type>::EraseData& erase_data =
      ListEraseTestInitLists<
          typename TypeParam::value_type>::data_size_2_erase_0;

  TypeParam cont(init_list);
  auto iter = cont.begin();
  for (int i = 0; i < erase_data.pos_; ++i) ++iter;

  Iterators<TypeParam> res_iters = GetIterators(cont);
  res_iters.erase(res_iters.begin() + erase_data.pos_);

  cont.erase(iter);

  Iterators<TypeParam> iters = GetIterators(cont);

  ASSERT_TRUE(IteratorsEq<TypeParam>(iters, res_iters));

  ASSERT_TRUE(ContEqInitlist(cont, erase_data.data_res_));
}

TYPED_TEST(ListEraseTest, Size2E1IteratorsSaving) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ListEraseTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_2_;
  const typename ListEraseTestInitLists<
      typename TypeParam::value_type>::EraseData& erase_data =
      ListEraseTestInitLists<
          typename TypeParam::value_type>::data_size_2_erase_1;

  TypeParam cont(init_list);
  auto iter = cont.begin();
  for (int i = 0; i < erase_data.pos_; ++i) ++iter;

  Iterators<TypeParam> res_iters = GetIterators(cont);
  res_iters.erase(res_iters.begin() + erase_data.pos_);

  cont.erase(iter);

  Iterators<TypeParam> iters = GetIterators(cont);

  ASSERT_TRUE(IteratorsEq<TypeParam>(iters, res_iters));

  ASSERT_TRUE(ContEqInitlist(cont, erase_data.data_res_));
}

TYPED_TEST(ListEraseTest, Size4E0IteratorsSaving) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ListEraseTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;
  const typename ListEraseTestInitLists<
      typename TypeParam::value_type>::EraseData& erase_data =
      ListEraseTestInitLists<
          typename TypeParam::value_type>::data_size_4_erase_0;

  TypeParam cont(init_list);
  auto iter = cont.begin();
  for (int i = 0; i < erase_data.pos_; ++i) ++iter;

  Iterators<TypeParam> res_iters = GetIterators(cont);
  res_iters.erase(res_iters.begin() + erase_data.pos_);

  cont.erase(iter);

  Iterators<TypeParam> iters = GetIterators(cont);

  ASSERT_TRUE(IteratorsEq<TypeParam>(iters, res_iters));

  ASSERT_TRUE(ContEqInitlist(cont, erase_data.data_res_));
}

TYPED_TEST(ListEraseTest, Size4E1IteratorsSaving) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ListEraseTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;
  const typename ListEraseTestInitLists<
      typename TypeParam::value_type>::EraseData& erase_data =
      ListEraseTestInitLists<
          typename TypeParam::value_type>::data_size_4_erase_1;

  TypeParam cont(init_list);
  auto iter = cont.begin();
  for (int i = 0; i < erase_data.pos_; ++i) ++iter;

  Iterators<TypeParam> res_iters = GetIterators(cont);
  res_iters.erase(res_iters.begin() + erase_data.pos_);

  cont.erase(iter);

  Iterators<TypeParam> iters = GetIterators(cont);

  ASSERT_TRUE(IteratorsEq<TypeParam>(iters, res_iters));

  ASSERT_TRUE(ContEqInitlist(cont, erase_data.data_res_));
}

TYPED_TEST(ListEraseTest, Size4E3IteratorsSaving) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ListEraseTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;
  const typename ListEraseTestInitLists<
      typename TypeParam::value_type>::EraseData& erase_data =
      ListEraseTestInitLists<
          typename TypeParam::value_type>::data_size_4_erase_3;

  TypeParam cont(init_list);
  auto iter = cont.begin();
  for (int i = 0; i < erase_data.pos_; ++i) ++iter;

  Iterators<TypeParam> res_iters = GetIterators(cont);
  res_iters.erase(res_iters.begin() + erase_data.pos_);

  cont.erase(iter);

  Iterators<TypeParam> iters = GetIterators(cont);

  ASSERT_TRUE(IteratorsEq<TypeParam>(iters, res_iters));

  ASSERT_TRUE(ContEqInitlist(cont, erase_data.data_res_));
}

TYPED_TEST(ListEraseTest, Size8E0IteratorsSaving) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ListEraseTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_8_;
  const typename ListEraseTestInitLists<
      typename TypeParam::value_type>::EraseData& erase_data =
      ListEraseTestInitLists<
          typename TypeParam::value_type>::data_size_8_erase_0;

  TypeParam cont(init_list);
  auto iter = cont.begin();
  for (int i = 0; i < erase_data.pos_; ++i) ++iter;

  Iterators<TypeParam> res_iters = GetIterators(cont);
  res_iters.erase(res_iters.begin() + erase_data.pos_);

  cont.erase(iter);

  Iterators<TypeParam> iters = GetIterators(cont);

  ASSERT_TRUE(IteratorsEq<TypeParam>(iters, res_iters));

  ASSERT_TRUE(ContEqInitlist(cont, erase_data.data_res_));
}

TYPED_TEST(ListEraseTest, Size8E5IteratorsSaving) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ListEraseTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_8_;
  const typename ListEraseTestInitLists<
      typename TypeParam::value_type>::EraseData& erase_data =
      ListEraseTestInitLists<
          typename TypeParam::value_type>::data_size_8_erase_5;

  TypeParam cont(init_list);
  auto iter = cont.begin();
  for (int i = 0; i < erase_data.pos_; ++i) ++iter;

  Iterators<TypeParam> res_iters = GetIterators(cont);
  res_iters.erase(res_iters.begin() + erase_data.pos_);

  cont.erase(iter);

  Iterators<TypeParam> iters = GetIterators(cont);

  ASSERT_TRUE(IteratorsEq<TypeParam>(iters, res_iters));

  ASSERT_TRUE(ContEqInitlist(cont, erase_data.data_res_));
}

TYPED_TEST(ListEraseTest, Size8E7IteratorsSaving) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ListEraseTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_8_;
  const typename ListEraseTestInitLists<
      typename TypeParam::value_type>::EraseData& erase_data =
      ListEraseTestInitLists<
          typename TypeParam::value_type>::data_size_8_erase_7;

  TypeParam cont(init_list);
  auto iter = cont.begin();
  for (int i = 0; i < erase_data.pos_; ++i) ++iter;

  Iterators<TypeParam> res_iters = GetIterators(cont);
  res_iters.erase(res_iters.begin() + erase_data.pos_);

  cont.erase(iter);

  Iterators<TypeParam> iters = GetIterators(cont);

  ASSERT_TRUE(IteratorsEq<TypeParam>(iters, res_iters));

  ASSERT_TRUE(ContEqInitlist(cont, erase_data.data_res_));
}
