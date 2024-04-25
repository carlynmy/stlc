#include "seq_container_test.h"

TYPED_TEST(SeqContainerPopBackTest, Size1) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      SeqContainerPopBackTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_1_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      SeqContainerPopBackTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_1_poped_back_;

  TypeParam cont(init_list);
  cont.pop_back();

  ASSERT_TRUE(ContEqInitlist(cont, res_init_list));
}

TYPED_TEST(SeqContainerPopBackTest, Size2) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      SeqContainerPopBackTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_2_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      SeqContainerPopBackTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_2_poped_back_;

  TypeParam cont(init_list);
  cont.pop_back();

  ASSERT_TRUE(ContEqInitlist(cont, res_init_list));
}

TYPED_TEST(SeqContainerPopBackTest, Size4) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      SeqContainerPopBackTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      SeqContainerPopBackTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_poped_back_;

  TypeParam cont(init_list);
  cont.pop_back();

  ASSERT_TRUE(ContEqInitlist(cont, res_init_list));
}

TYPED_TEST(SeqContainerPopBackTest, Size8) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      SeqContainerPopBackTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_8_;
  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      SeqContainerPopBackTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_8_poped_back_;

  TypeParam cont(init_list);
  cont.pop_back();

  ASSERT_TRUE(ContEqInitlist(cont, res_init_list));
}
