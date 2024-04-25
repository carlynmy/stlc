#include "list_test.h"

TYPED_TEST(ListMergeTest, Common1) {
  const typename ListMergeTestInitLists<
      typename TypeParam::value_type>::MergeData& merge_data =
      ListMergeTestInitLists<typename TypeParam::value_type>::merge_data_1_;

  TypeParam list_a(merge_data.data_list_1_);
  TypeParam list_b(merge_data.data_list_2_);

  Iterators<TypeParam> iters_a = GetIterators(list_a);
  Iterators<TypeParam> iters_b = GetIterators(list_b);

  Iterators<TypeParam> res_iters = TranslateIteratorsDouble<TypeParam>(
      iters_a, iters_b, merge_data.data_list_res_idxs_);

  list_a.merge(list_b);

  Iterators<TypeParam> iters = GetIterators(list_a);

  ASSERT_TRUE(ContEqInitlist(list_a, merge_data.data_list_res_));
  ASSERT_TRUE(IteratorsEq<TypeParam>(iters, res_iters));
}

TYPED_TEST(ListMergeTest, Common2) {
  const typename ListMergeTestInitLists<
      typename TypeParam::value_type>::MergeData& merge_data =
      ListMergeTestInitLists<typename TypeParam::value_type>::merge_data_2_;

  TypeParam list_a(merge_data.data_list_1_);
  TypeParam list_b(merge_data.data_list_2_);

  Iterators<TypeParam> iters_a = GetIterators(list_a);
  Iterators<TypeParam> iters_b = GetIterators(list_b);

  Iterators<TypeParam> res_iters = TranslateIteratorsDouble<TypeParam>(
      iters_a, iters_b, merge_data.data_list_res_idxs_);

  list_a.merge(list_b);

  Iterators<TypeParam> iters = GetIterators(list_a);

  ASSERT_TRUE(ContEqInitlist(list_a, merge_data.data_list_res_));
  ASSERT_TRUE(IteratorsEq<TypeParam>(iters, res_iters));
}

TYPED_TEST(ListMergeTest, Common3) {
  const typename ListMergeTestInitLists<
      typename TypeParam::value_type>::MergeData& merge_data =
      ListMergeTestInitLists<typename TypeParam::value_type>::merge_data_3_;

  TypeParam list_a(merge_data.data_list_1_);
  TypeParam list_b(merge_data.data_list_2_);

  Iterators<TypeParam> iters_a = GetIterators(list_a);
  Iterators<TypeParam> iters_b = GetIterators(list_b);

  Iterators<TypeParam> res_iters = TranslateIteratorsDouble<TypeParam>(
      iters_a, iters_b, merge_data.data_list_res_idxs_);

  list_a.merge(list_b);

  Iterators<TypeParam> iters = GetIterators(list_a);

  ASSERT_TRUE(ContEqInitlist(list_a, merge_data.data_list_res_));
  ASSERT_TRUE(IteratorsEq<TypeParam>(iters, res_iters));
}

TYPED_TEST(ListMergeTest, Common4) {
  const typename ListMergeTestInitLists<
      typename TypeParam::value_type>::MergeData& merge_data =
      ListMergeTestInitLists<typename TypeParam::value_type>::merge_data_4_;

  TypeParam list_a(merge_data.data_list_1_);
  TypeParam list_b(merge_data.data_list_2_);

  Iterators<TypeParam> iters_a = GetIterators(list_a);
  Iterators<TypeParam> iters_b = GetIterators(list_b);

  Iterators<TypeParam> res_iters = TranslateIteratorsDouble<TypeParam>(
      iters_a, iters_b, merge_data.data_list_res_idxs_);

  list_a.merge(list_b);

  Iterators<TypeParam> iters = GetIterators(list_a);

  ASSERT_TRUE(ContEqInitlist(list_a, merge_data.data_list_res_));
  ASSERT_TRUE(IteratorsEq<TypeParam>(iters, res_iters));
}

TYPED_TEST(ListMergeTest, Common5) {
  const typename ListMergeTestInitLists<
      typename TypeParam::value_type>::MergeData& merge_data =
      ListMergeTestInitLists<typename TypeParam::value_type>::merge_data_5_;

  TypeParam list_a(merge_data.data_list_1_);
  TypeParam list_b(merge_data.data_list_2_);

  Iterators<TypeParam> iters_a = GetIterators(list_a);
  Iterators<TypeParam> iters_b = GetIterators(list_b);

  Iterators<TypeParam> res_iters = TranslateIteratorsDouble<TypeParam>(
      iters_a, iters_b, merge_data.data_list_res_idxs_);

  list_a.merge(list_b);

  Iterators<TypeParam> iters = GetIterators(list_a);

  ASSERT_TRUE(ContEqInitlist(list_a, merge_data.data_list_res_));
  ASSERT_TRUE(IteratorsEq<TypeParam>(iters, res_iters));
}
