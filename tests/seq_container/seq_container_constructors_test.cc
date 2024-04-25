#include "seq_container_test.h"

TYPED_TEST(SeqContainerConstructorTest, Size0) {
  typename TypeParam::value_type value = typename TypeParam::value_type();
  TypeParam cont(typename TypeParam::size_type(0));

  ASSERT_EQ(cont.size(), 0);
  for (auto i : cont) ASSERT_EQ(i, value);
}

TYPED_TEST(SeqContainerConstructorTest, Size4) {
  typename TypeParam::value_type value = typename TypeParam::value_type();
  TypeParam cont(typename TypeParam::size_type(4));

  ASSERT_EQ(cont.size(), 4);
  for (auto i : cont) ASSERT_EQ(i, value);
}

TYPED_TEST(SeqContainerConstructorNdcTest, Size0) {
  typename TypeParam::value_type value =
      SeqContainerConstructorNdcTestInitLists<
          typename TypeParam::value_type>::value_1;

  TypeParam cont(typename TypeParam::size_type(0), value);

  ASSERT_EQ(cont.size(), 0);
  for (auto i : cont) ASSERT_EQ(i, value);
}

TYPED_TEST(SeqContainerConstructorNdcTest, Size4) {
  typename TypeParam::value_type value =
      SeqContainerConstructorNdcTestInitLists<
          typename TypeParam::value_type>::value_1;

  TypeParam cont(typename TypeParam::size_type(4), value);

  ASSERT_EQ(cont.size(), 4);
  for (auto i : cont) ASSERT_EQ(i, value);
}
