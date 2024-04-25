#include "containers_test.h"

TYPED_TEST(ContainersClearTest, Common) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ContainersClearTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;

  TypeParam cont;
  ASSERT_TRUE(cont.empty());
  cont.clear();
  ASSERT_TRUE(cont.empty());
  cont = TypeParam(init_list);
  ASSERT_TRUE(!cont.empty());
  cont.clear();
  ASSERT_TRUE(cont.empty());
}
