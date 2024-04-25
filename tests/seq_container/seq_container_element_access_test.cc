#include "seq_container_test.h"

TYPED_TEST(SeqContainerElementAccessTest, Size1) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      SeqContainerElementAccessTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_1_;

  const typename TypeParam::value_type& value =
      SeqContainerElementAccessTestInitLists<
          typename TypeParam::value_type>::value_1;

  auto it = init_list.end();
  --it;
  typename TypeParam::value_type bc = *it;
  typename TypeParam::value_type fr = *init_list.begin();

  TypeParam cont(init_list);
  const TypeParam& ccont = cont;

  ASSERT_EQ(cont.front(), fr);
  ASSERT_EQ(cont.back(), bc);
  ASSERT_EQ(ccont.front(), fr);
  ASSERT_EQ(ccont.back(), bc);

  cont.front() = value;
  cont.back() = value;

  ASSERT_EQ(cont.front(), value);
  ASSERT_EQ(cont.back(), value);
  ASSERT_EQ(ccont.front(), value);
  ASSERT_EQ(ccont.back(), value);
}

TYPED_TEST(SeqContainerElementAccessTest, Size2) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      SeqContainerElementAccessTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_2_;

  const typename TypeParam::value_type& value =
      SeqContainerElementAccessTestInitLists<
          typename TypeParam::value_type>::value_1;

  auto it = init_list.end();
  --it;
  typename TypeParam::value_type bc = *it;
  typename TypeParam::value_type fr = *init_list.begin();

  TypeParam cont(init_list);
  const TypeParam& ccont = cont;

  ASSERT_EQ(cont.front(), fr);
  ASSERT_EQ(cont.back(), bc);
  ASSERT_EQ(ccont.front(), fr);
  ASSERT_EQ(ccont.back(), bc);

  cont.front() = value;
  cont.back() = value;

  ASSERT_EQ(cont.front(), value);
  ASSERT_EQ(cont.back(), value);
  ASSERT_EQ(ccont.front(), value);
  ASSERT_EQ(ccont.back(), value);
}

TYPED_TEST(SeqContainerElementAccessTest, Size4) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      SeqContainerElementAccessTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;

  const typename TypeParam::value_type& value =
      SeqContainerElementAccessTestInitLists<
          typename TypeParam::value_type>::value_1;

  auto it = init_list.end();
  --it;
  typename TypeParam::value_type bc = *it;
  typename TypeParam::value_type fr = *init_list.begin();

  TypeParam cont(init_list);
  const TypeParam& ccont = cont;

  ASSERT_EQ(cont.front(), fr);
  ASSERT_EQ(cont.back(), bc);
  ASSERT_EQ(ccont.front(), fr);
  ASSERT_EQ(ccont.back(), bc);

  cont.front() = value;
  cont.back() = value;

  ASSERT_EQ(cont.front(), value);
  ASSERT_EQ(cont.back(), value);
  ASSERT_EQ(ccont.front(), value);
  ASSERT_EQ(ccont.back(), value);
}
