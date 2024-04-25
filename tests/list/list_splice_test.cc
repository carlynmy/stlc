#include "list_test.h"

TYPED_TEST(ListSpliceTest, Common1) {
  const typename ListSpliceTestInitLists<
      typename TypeParam::value_type>::SpliceData& splice_data =
      ListSpliceTestInitLists<typename TypeParam::value_type>::splice_data_1_;

  TypeParam list_a(splice_data.data_list_1_);
  TypeParam list_b(splice_data.data_list_2_);

  Iterators<TypeParam> iters_a = GetIterators(list_a);
  Iterators<TypeParam> iters_b = GetIterators(list_b);

  Iterators<TypeParam> res_iters = TranslateIteratorsDouble<TypeParam>(
      iters_a, iters_b, splice_data.data_list_res_idxs_);

  auto iter = list_a.begin();
  for (int i = 0; i != splice_data.pos_; ++i) ++iter;
  list_a.splice(iter, list_b);

  Iterators<TypeParam> iters = GetIterators(list_a);

  ASSERT_TRUE(ContEqInitlist(list_a, splice_data.data_list_res_));
  ASSERT_TRUE(IteratorsEq<TypeParam>(iters, res_iters));
}

TYPED_TEST(ListSpliceTest, Common2) {
  const typename ListSpliceTestInitLists<
      typename TypeParam::value_type>::SpliceData& splice_data =
      ListSpliceTestInitLists<typename TypeParam::value_type>::splice_data_2_;

  TypeParam list_a(splice_data.data_list_1_);
  TypeParam list_b(splice_data.data_list_2_);

  Iterators<TypeParam> iters_a = GetIterators(list_a);
  Iterators<TypeParam> iters_b = GetIterators(list_b);

  Iterators<TypeParam> res_iters = TranslateIteratorsDouble<TypeParam>(
      iters_a, iters_b, splice_data.data_list_res_idxs_);

  auto iter = list_a.begin();
  for (int i = 0; i != splice_data.pos_; ++i) ++iter;
  list_a.splice(iter, list_b);

  Iterators<TypeParam> iters = GetIterators(list_a);

  ASSERT_TRUE(ContEqInitlist(list_a, splice_data.data_list_res_));
  ASSERT_TRUE(IteratorsEq<TypeParam>(iters, res_iters));
}

TYPED_TEST(ListSpliceTest, Common3) {
  const typename ListSpliceTestInitLists<
      typename TypeParam::value_type>::SpliceData& splice_data =
      ListSpliceTestInitLists<typename TypeParam::value_type>::splice_data_3_;

  TypeParam list_a(splice_data.data_list_1_);
  TypeParam list_b(splice_data.data_list_2_);

  Iterators<TypeParam> iters_a = GetIterators(list_a);
  Iterators<TypeParam> iters_b = GetIterators(list_b);

  Iterators<TypeParam> res_iters = TranslateIteratorsDouble<TypeParam>(
      iters_a, iters_b, splice_data.data_list_res_idxs_);

  auto iter = list_a.begin();
  for (int i = 0; i != splice_data.pos_; ++i) ++iter;
  list_a.splice(iter, list_b);

  Iterators<TypeParam> iters = GetIterators(list_a);

  ASSERT_TRUE(ContEqInitlist(list_a, splice_data.data_list_res_));
  ASSERT_TRUE(IteratorsEq<TypeParam>(iters, res_iters));
}

TYPED_TEST(ListSpliceTest, Common4) {
  const typename ListSpliceTestInitLists<
      typename TypeParam::value_type>::SpliceData& splice_data =
      ListSpliceTestInitLists<typename TypeParam::value_type>::splice_data_4_;

  TypeParam list_a(splice_data.data_list_1_);
  TypeParam list_b(splice_data.data_list_2_);

  Iterators<TypeParam> iters_a = GetIterators(list_a);
  Iterators<TypeParam> iters_b = GetIterators(list_b);

  Iterators<TypeParam> res_iters = TranslateIteratorsDouble<TypeParam>(
      iters_a, iters_b, splice_data.data_list_res_idxs_);

  auto iter = list_a.begin();
  for (int i = 0; i != splice_data.pos_; ++i) ++iter;
  list_a.splice(iter, list_b);

  Iterators<TypeParam> iters = GetIterators(list_a);

  ASSERT_TRUE(ContEqInitlist(list_a, splice_data.data_list_res_));
  ASSERT_TRUE(IteratorsEq<TypeParam>(iters, res_iters));
}

TYPED_TEST(ListSpliceTest, Common5) {
  const typename ListSpliceTestInitLists<
      typename TypeParam::value_type>::SpliceData& splice_data =
      ListSpliceTestInitLists<typename TypeParam::value_type>::splice_data_5_;

  TypeParam list_a(splice_data.data_list_1_);
  TypeParam list_b(splice_data.data_list_2_);

  Iterators<TypeParam> iters_a = GetIterators(list_a);
  Iterators<TypeParam> iters_b = GetIterators(list_b);

  Iterators<TypeParam> res_iters = TranslateIteratorsDouble<TypeParam>(
      iters_a, iters_b, splice_data.data_list_res_idxs_);

  auto iter = list_a.begin();
  for (int i = 0; i != splice_data.pos_; ++i) ++iter;
  list_a.splice(iter, list_b);

  Iterators<TypeParam> iters = GetIterators(list_a);

  ASSERT_TRUE(ContEqInitlist(list_a, splice_data.data_list_res_));
  ASSERT_TRUE(IteratorsEq<TypeParam>(iters, res_iters));
}
