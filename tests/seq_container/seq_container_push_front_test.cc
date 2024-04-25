#include "seq_container_test.h"

TYPED_TEST(SeqContainerPushFrontTest, Size0) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      SeqContainerPushFrontTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_0_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      SeqContainerPushFrontTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_0_pushed_front_;

  TypeParam cont(init_list);
  cont.push_front(SeqContainerPushFrontTestInitLists<
                  typename TypeParam::value_type>::value_1);

  ASSERT_TRUE(ContEqInitlist(cont, res_init_list));
}

TYPED_TEST(SeqContainerPushFrontTest, Size1) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      SeqContainerPushFrontTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_1_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      SeqContainerPushFrontTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_1_pushed_front_;

  TypeParam cont(init_list);
  cont.push_front(SeqContainerPushFrontTestInitLists<
                  typename TypeParam::value_type>::value_1);

  ASSERT_TRUE(ContEqInitlist(cont, res_init_list));
}

TYPED_TEST(SeqContainerPushFrontTest, Size2) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      SeqContainerPushFrontTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_2_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      SeqContainerPushFrontTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_2_pushed_front_;

  TypeParam cont(init_list);
  cont.push_front(SeqContainerPushFrontTestInitLists<
                  typename TypeParam::value_type>::value_1);

  ASSERT_TRUE(ContEqInitlist(cont, res_init_list));
}

TYPED_TEST(SeqContainerPushFrontTest, Size4) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      SeqContainerPushFrontTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      SeqContainerPushFrontTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_pushed_front_;

  TypeParam cont(init_list);
  cont.push_front(SeqContainerPushFrontTestInitLists<
                  typename TypeParam::value_type>::value_1);

  ASSERT_TRUE(ContEqInitlist(cont, res_init_list));
}

TYPED_TEST(SeqContainerPushFrontTest, Size8) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      SeqContainerPushFrontTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_8_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      SeqContainerPushFrontTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_8_pushed_front_;

  TypeParam cont(init_list);
  cont.push_front(SeqContainerPushFrontTestInitLists<
                  typename TypeParam::value_type>::value_1);

  ASSERT_TRUE(ContEqInitlist(cont, res_init_list));
}
