#include "adaptor_containers_test.h"

TYPED_TEST(AdaptorContainersConstructorTest, Size0) {
  typename TypeParam::container_type cont;
  TypeParam adaptor(cont);
  ASSERT_EQ(adaptor.size(), 0);
}

TYPED_TEST(AdaptorContainersConstructorTest, Size4) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      AdaptorContainersConstructorTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;

  typename TypeParam::container_type cont(init_list);
  TypeParam adaptor(cont);

  ASSERT_TRUE(ContEqInitlist(adaptor, init_list));
}

TYPED_TEST(AdaptorContainersConstructorTest, Size0Move) {
  typename TypeParam::container_type cont;
  TypeParam adaptor(std::move(cont));
  ASSERT_EQ(adaptor.size(), 0);
}

TYPED_TEST(AdaptorContainersConstructorTest, Size4Move) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      AdaptorContainersConstructorTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;

  typename TypeParam::container_type cont(init_list);
  TypeParam adaptor(std::move(cont));

  ASSERT_TRUE(ContEqInitlist(adaptor, init_list));
}
