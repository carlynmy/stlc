#include "list_test.h"

TYPED_TEST(ListConstructorTest, MoveSavingEndIterator) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ListConstructorTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;

  TypeParam list(init_list);
  typename TypeParam::iterator end_iter = list.end();

  TypeParam list_2(std::move(list));

  ASSERT_EQ(end_iter, list.end());
}

TYPED_TEST(ListConstructorTest, MoveAssignSavingEndIterator) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ListConstructorTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;

  TypeParam list(init_list);
  typename TypeParam::iterator end_iter = list.end();

  TypeParam list_2;
  list_2 = std::move(list);

  ASSERT_EQ(end_iter, list.end());
}
