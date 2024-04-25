
#include "list_test.h"

TYPED_TEST(ListReverseTest, Size0) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ListReverseTestInitLists<
          typename TypeParam::value_type>::data_list_size_0_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      ListReverseTestInitLists<
          typename TypeParam::value_type>::data_list_size_0_reversed_;

  TypeParam list(init_list);
  TypeParam res_list(res_init_list);

  list.reverse();

  ASSERT_TRUE(ContainersEq(list, res_list));
}

TYPED_TEST(ListReverseTest, Size0IteratorsSaved) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ListReverseTestInitLists<
          typename TypeParam::value_type>::data_list_size_0_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      ListReverseTestInitLists<
          typename TypeParam::value_type>::data_list_size_0_reversed_;

  TypeParam list(init_list);
  TypeParam res_list(res_init_list);

  const IteratorIdxs& iterator_idxs = ListReverseTestInitLists<
      typename TypeParam::value_type>::data_list_size_0_reversed_element_idxes_;
  Iterators<TypeParam> iterators_res =
      TranslateIterators<TypeParam>(GetIterators(list), iterator_idxs);

  list.reverse();
  Iterators<TypeParam> iterators = GetIterators(list);

  ASSERT_TRUE(ContainersEq(list, res_list));
  ASSERT_TRUE(IteratorsEq<TypeParam>(iterators, iterators_res));
}

TYPED_TEST(ListReverseTest, Size1) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ListReverseTestInitLists<
          typename TypeParam::value_type>::data_list_size_1_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      ListReverseTestInitLists<
          typename TypeParam::value_type>::data_list_size_1_reversed_;

  TypeParam list(init_list);
  TypeParam res_list(res_init_list);

  list.reverse();

  ASSERT_TRUE(ContainersEq(list, res_list));
}

TYPED_TEST(ListReverseTest, Size1IteratorsSaved) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ListReverseTestInitLists<
          typename TypeParam::value_type>::data_list_size_1_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      ListReverseTestInitLists<
          typename TypeParam::value_type>::data_list_size_1_reversed_;

  TypeParam list(init_list);
  TypeParam res_list(res_init_list);

  const IteratorIdxs& iterator_idxs = ListReverseTestInitLists<
      typename TypeParam::value_type>::data_list_size_1_reversed_element_idxes_;
  Iterators<TypeParam> iterators_res =
      TranslateIterators<TypeParam>(GetIterators(list), iterator_idxs);

  list.reverse();
  Iterators<TypeParam> iterators = GetIterators(list);

  ASSERT_TRUE(ContainersEq(list, res_list));
  ASSERT_TRUE(IteratorsEq<TypeParam>(iterators, iterators_res));
}

TYPED_TEST(ListReverseTest, Size4) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ListReverseTestInitLists<
          typename TypeParam::value_type>::data_list_size_4_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      ListReverseTestInitLists<
          typename TypeParam::value_type>::data_list_size_4_reversed_;

  TypeParam list(init_list);
  TypeParam res_list(res_init_list);

  list.reverse();

  ASSERT_TRUE(ContainersEq(list, res_list));
}

TYPED_TEST(ListReverseTest, Size4IteratorsSaved) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ListReverseTestInitLists<
          typename TypeParam::value_type>::data_list_size_4_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      ListReverseTestInitLists<
          typename TypeParam::value_type>::data_list_size_4_reversed_;

  TypeParam list(init_list);
  TypeParam res_list(res_init_list);

  const IteratorIdxs& iterator_idxs = ListReverseTestInitLists<
      typename TypeParam::value_type>::data_list_size_4_reversed_element_idxes_;
  Iterators<TypeParam> iterators_res =
      TranslateIterators<TypeParam>(GetIterators(list), iterator_idxs);

  list.reverse();
  Iterators<TypeParam> iterators = GetIterators(list);

  ASSERT_TRUE(ContainersEq(list, res_list));
  ASSERT_TRUE(IteratorsEq<TypeParam>(iterators, iterators_res));
}

TYPED_TEST(ListReverseTest, Size8) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ListReverseTestInitLists<
          typename TypeParam::value_type>::data_list_size_8_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      ListReverseTestInitLists<
          typename TypeParam::value_type>::data_list_size_8_reversed_;

  TypeParam list(init_list);
  TypeParam res_list(res_init_list);

  list.reverse();

  ASSERT_TRUE(ContainersEq(list, res_list));
}

TYPED_TEST(ListReverseTest, Size8IteratorsSaved) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ListReverseTestInitLists<
          typename TypeParam::value_type>::data_list_size_8_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      ListReverseTestInitLists<
          typename TypeParam::value_type>::data_list_size_8_reversed_;

  TypeParam list(init_list);
  TypeParam res_list(res_init_list);

  const IteratorIdxs& iterator_idxs = ListReverseTestInitLists<
      typename TypeParam::value_type>::data_list_size_8_reversed_element_idxes_;
  Iterators<TypeParam> iterators_res =
      TranslateIterators<TypeParam>(GetIterators(list), iterator_idxs);

  list.reverse();
  Iterators<TypeParam> iterators = GetIterators(list);

  ASSERT_TRUE(ContainersEq(list, res_list));
  ASSERT_TRUE(IteratorsEq<TypeParam>(iterators, iterators_res));
}
