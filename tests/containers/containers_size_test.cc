
#include "containers_test.h"

TYPED_TEST(ContainersSizeTest, Size0) {
  TypeParam cont;
  ASSERT_TRUE(cont.empty());
  ASSERT_EQ(cont.size(), typename TypeParam::size_type(0));
}

TYPED_TEST(ContainersSizeTest, Size2) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ContainersSizeTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_2_;
  TypeParam cont(init_list);
  ASSERT_TRUE(!cont.empty());
  ASSERT_EQ(cont.size(), typename TypeParam::size_type(2));
}
