#include "list_test.h"

TYPED_TEST(ListUniqueTest, Size0) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ListUniqueTestInitLists<
          typename TypeParam::value_type>::data_list_size_0_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      ListUniqueTestInitLists<
          typename TypeParam::value_type>::data_list_size_0_unique_;

  TypeParam list(init_list);
  TypeParam res_list(res_init_list);

  list.unique();

  ASSERT_TRUE(ContainersEq(list, res_list));
}

TYPED_TEST(ListUniqueTest, Size0IteratorsSaved) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ListUniqueTestInitLists<
          typename TypeParam::value_type>::data_list_size_0_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      ListUniqueTestInitLists<
          typename TypeParam::value_type>::data_list_size_0_unique_;

  TypeParam list(init_list);
  TypeParam res_list(res_init_list);

  const IteratorIdxs& removed_idxs = ListUniqueTestInitLists<
      typename TypeParam::value_type>::data_list_size_0_unique_removed_idxes_;
  Iterators<TypeParam> iterators_res =
      RemoveIterators<TypeParam>(GetIterators(list), removed_idxs);

  list.unique();
  Iterators<TypeParam> iterators = GetIterators(list);

  ASSERT_TRUE(ContainersEq(list, res_list));
  ASSERT_TRUE(IteratorsEq<TypeParam>(iterators, iterators_res));
}

TYPED_TEST(ListUniqueTest, Size1) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ListUniqueTestInitLists<
          typename TypeParam::value_type>::data_list_size_1_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      ListUniqueTestInitLists<
          typename TypeParam::value_type>::data_list_size_1_unique_;

  TypeParam list(init_list);
  TypeParam res_list(res_init_list);

  list.unique();

  ASSERT_TRUE(ContainersEq(list, res_list));
}

TYPED_TEST(ListUniqueTest, Size1IteratorsSaved) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ListUniqueTestInitLists<
          typename TypeParam::value_type>::data_list_size_1_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      ListUniqueTestInitLists<
          typename TypeParam::value_type>::data_list_size_1_unique_;

  TypeParam list(init_list);
  TypeParam res_list(res_init_list);

  const IteratorIdxs& removed_idxs = ListUniqueTestInitLists<
      typename TypeParam::value_type>::data_list_size_1_unique_removed_idxes_;
  Iterators<TypeParam> iterators_res =
      RemoveIterators<TypeParam>(GetIterators(list), removed_idxs);

  list.unique();
  Iterators<TypeParam> iterators = GetIterators(list);

  ASSERT_TRUE(ContainersEq(list, res_list));
  ASSERT_TRUE(IteratorsEq<TypeParam>(iterators, iterators_res));
}

TYPED_TEST(ListUniqueTest, Size4) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ListUniqueTestInitLists<
          typename TypeParam::value_type>::data_list_size_4_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      ListUniqueTestInitLists<
          typename TypeParam::value_type>::data_list_size_4_unique_;

  TypeParam list(init_list);
  TypeParam res_list(res_init_list);

  list.unique();

  ASSERT_TRUE(ContainersEq(list, res_list));
}

TYPED_TEST(ListUniqueTest, Size4IteratorsSaved) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ListUniqueTestInitLists<
          typename TypeParam::value_type>::data_list_size_4_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      ListUniqueTestInitLists<
          typename TypeParam::value_type>::data_list_size_4_unique_;

  TypeParam list(init_list);
  TypeParam res_list(res_init_list);

  const IteratorIdxs& removed_idxs = ListUniqueTestInitLists<
      typename TypeParam::value_type>::data_list_size_4_unique_removed_idxes_;
  Iterators<TypeParam> iterators_res =
      RemoveIterators<TypeParam>(GetIterators(list), removed_idxs);

  list.unique();
  Iterators<TypeParam> iterators = GetIterators(list);

  ASSERT_TRUE(ContainersEq(list, res_list));
  ASSERT_TRUE(IteratorsEq<TypeParam>(iterators, iterators_res));
}

TYPED_TEST(ListUniqueTest, Size8) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ListUniqueTestInitLists<
          typename TypeParam::value_type>::data_list_size_8_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      ListUniqueTestInitLists<
          typename TypeParam::value_type>::data_list_size_8_unique_;

  TypeParam list(init_list);
  TypeParam res_list(res_init_list);

  list.unique();

  ASSERT_TRUE(ContainersEq(list, res_list));
}

TYPED_TEST(ListUniqueTest, Size8IteratorsSaved) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ListUniqueTestInitLists<
          typename TypeParam::value_type>::data_list_size_8_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      ListUniqueTestInitLists<
          typename TypeParam::value_type>::data_list_size_8_unique_;

  TypeParam list(init_list);
  TypeParam res_list(res_init_list);

  const IteratorIdxs& removed_idxs = ListUniqueTestInitLists<
      typename TypeParam::value_type>::data_list_size_8_unique_removed_idxes_;
  Iterators<TypeParam> iterators_res =
      RemoveIterators<TypeParam>(GetIterators(list), removed_idxs);

  list.unique();
  Iterators<TypeParam> iterators = GetIterators(list);

  ASSERT_TRUE(ContainersEq(list, res_list));
  ASSERT_TRUE(IteratorsEq<TypeParam>(iterators, iterators_res));
}

TYPED_TEST(ListUniqueTest, AlredyUnique) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ListUniqueTestInitLists<
          typename TypeParam::value_type>::data_list_size_4_unique_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      ListUniqueTestInitLists<
          typename TypeParam::value_type>::data_list_size_4_unique_;

  TypeParam list(init_list);
  TypeParam res_list(res_init_list);

  list.unique();

  ASSERT_TRUE(ContainersEq(list, res_list));
}

TYPED_TEST(ListUniqueTest, AlredyUniqueIteratorsSaved) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ListUniqueTestInitLists<
          typename TypeParam::value_type>::data_list_size_4_unique_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      ListUniqueTestInitLists<
          typename TypeParam::value_type>::data_list_size_4_unique_;

  TypeParam list(init_list);
  TypeParam res_list(res_init_list);
  Iterators<TypeParam> iterators_res = GetIterators(list);

  list.unique();
  Iterators<TypeParam> iterators = GetIterators(list);

  ASSERT_TRUE(ContainersEq(list, res_list));
  ASSERT_TRUE(IteratorsEq<TypeParam>(iterators, iterators_res));
}
