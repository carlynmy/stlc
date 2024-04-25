
#include "list_test.h"

TYPED_TEST(ListSortTest, Size0) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ListSortTestInitLists<typename TypeParam::value_type>::data_list_size_0_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      ListSortTestInitLists<
          typename TypeParam::value_type>::data_list_size_0_sorted_;

  TypeParam list(init_list);
  TypeParam res_list(res_init_list);

  list.sort();
  ASSERT_TRUE(ContainersEq(list, res_list));
}

TYPED_TEST(ListSortTest, Size0IteratorsSaved) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ListSortTestInitLists<typename TypeParam::value_type>::data_list_size_0_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      ListSortTestInitLists<
          typename TypeParam::value_type>::data_list_size_0_sorted_;

  TypeParam list(init_list);
  TypeParam res_list(res_init_list);

  const IteratorIdxs& iterator_idxs = ListSortTestInitLists<
      typename TypeParam::value_type>::data_list_size_0_sorted_element_idxes_;
  Iterators<TypeParam> iterators_res =
      TranslateIterators<TypeParam>(GetIterators(list), iterator_idxs);

  list.sort();
  Iterators<TypeParam> iterators = GetIterators(list);

  ASSERT_TRUE(ContainersEq(list, res_list));
  ASSERT_TRUE(IteratorsEq<TypeParam>(iterators, iterators_res));
}

TYPED_TEST(ListSortTest, Size1) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ListSortTestInitLists<typename TypeParam::value_type>::data_list_size_1_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      ListSortTestInitLists<
          typename TypeParam::value_type>::data_list_size_1_sorted_;

  TypeParam list(init_list);
  TypeParam res_list(res_init_list);

  list.sort();
  ASSERT_TRUE(ContainersEq(list, res_list));
}

TYPED_TEST(ListSortTest, Size1IteratorsSaved) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ListSortTestInitLists<typename TypeParam::value_type>::data_list_size_1_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      ListSortTestInitLists<
          typename TypeParam::value_type>::data_list_size_1_sorted_;

  TypeParam list(init_list);
  TypeParam res_list(res_init_list);

  const IteratorIdxs& iterator_idxs = ListSortTestInitLists<
      typename TypeParam::value_type>::data_list_size_1_sorted_element_idxes_;
  Iterators<TypeParam> iterators_res =
      TranslateIterators<TypeParam>(GetIterators(list), iterator_idxs);

  list.sort();
  Iterators<TypeParam> iterators = GetIterators(list);

  ASSERT_TRUE(ContainersEq(list, res_list));
  ASSERT_TRUE(IteratorsEq<TypeParam>(iterators, iterators_res));
}

TYPED_TEST(ListSortTest, Size4) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ListSortTestInitLists<typename TypeParam::value_type>::data_list_size_4_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      ListSortTestInitLists<
          typename TypeParam::value_type>::data_list_size_4_sorted_;

  TypeParam list(init_list);
  TypeParam res_list(res_init_list);

  list.sort();
  ASSERT_TRUE(ContainersEq(list, res_list));
}

TYPED_TEST(ListSortTest, Size4IteratorsSaved) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ListSortTestInitLists<typename TypeParam::value_type>::data_list_size_4_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      ListSortTestInitLists<
          typename TypeParam::value_type>::data_list_size_4_sorted_;

  TypeParam list(init_list);
  TypeParam res_list(res_init_list);

  const IteratorIdxs& iterator_idxs = ListSortTestInitLists<
      typename TypeParam::value_type>::data_list_size_4_sorted_element_idxes_;
  Iterators<TypeParam> iterators_res =
      TranslateIterators<TypeParam>(GetIterators(list), iterator_idxs);

  list.sort();
  Iterators<TypeParam> iterators = GetIterators(list);

  ASSERT_TRUE(ContainersEq(list, res_list));
  ASSERT_TRUE(IteratorsEq<TypeParam>(iterators, iterators_res));
}

TYPED_TEST(ListSortTest, Size8) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ListSortTestInitLists<typename TypeParam::value_type>::data_list_size_8_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      ListSortTestInitLists<
          typename TypeParam::value_type>::data_list_size_8_sorted_;

  TypeParam list(init_list);
  TypeParam res_list(res_init_list);

  list.sort();
  ASSERT_TRUE(ContainersEq(list, res_list));
}

TYPED_TEST(ListSortTest, Size8IteratorsSaved) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ListSortTestInitLists<typename TypeParam::value_type>::data_list_size_8_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      ListSortTestInitLists<
          typename TypeParam::value_type>::data_list_size_8_sorted_;

  TypeParam list(init_list);
  TypeParam res_list(res_init_list);

  const IteratorIdxs& iterator_idxs = ListSortTestInitLists<
      typename TypeParam::value_type>::data_list_size_8_sorted_element_idxes_;
  Iterators<TypeParam> iterators_res =
      TranslateIterators<TypeParam>(GetIterators(list), iterator_idxs);

  list.sort();
  Iterators<TypeParam> iterators = GetIterators(list);

  ASSERT_TRUE(ContainersEq(list, res_list));
  ASSERT_TRUE(IteratorsEq<TypeParam>(iterators, iterators_res));
}

TYPED_TEST(ListSortTest, AlreadySorted) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ListSortTestInitLists<
          typename TypeParam::value_type>::data_list_size_4_sorted_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      ListSortTestInitLists<
          typename TypeParam::value_type>::data_list_size_4_sorted_;

  TypeParam list(init_list);
  TypeParam res_list(res_init_list);

  list.sort();
  ASSERT_TRUE(ContainersEq(list, res_list));
}

TYPED_TEST(ListSortTest, AlreadySortedIteratorsSaved) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ListSortTestInitLists<
          typename TypeParam::value_type>::data_list_size_4_sorted_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      ListSortTestInitLists<
          typename TypeParam::value_type>::data_list_size_4_sorted_;

  TypeParam list(init_list);
  TypeParam res_list(res_init_list);

  Iterators<TypeParam> iterators_res = GetIterators(list);
  list.sort();
  Iterators<TypeParam> iterators = GetIterators(list);

  ASSERT_TRUE(ContainersEq(list, res_list));
  ASSERT_TRUE(IteratorsEq<TypeParam>(iterators, iterators_res));
}
