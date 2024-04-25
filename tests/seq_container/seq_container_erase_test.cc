#include "seq_container_test.h"

TYPED_TEST(SeqContainerEraseTest, Size1E0) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      SeqContainerEraseTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_1_;
  const typename SeqContainerEraseTestInitLists<
      typename TypeParam::value_type>::EraseData& erase_data =
      SeqContainerEraseTestInitLists<
          typename TypeParam::value_type>::data_size_1_erase_0;

  TypeParam cont(init_list);
  auto iter = cont.begin();
  for (int i = 0; i < erase_data.pos_; ++i) ++iter;

  cont.erase(iter);

  ASSERT_TRUE(ContEqInitlist(cont, erase_data.data_res_));
}

TYPED_TEST(SeqContainerEraseTest, Size2E0) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      SeqContainerEraseTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_2_;
  const typename SeqContainerEraseTestInitLists<
      typename TypeParam::value_type>::EraseData& erase_data =
      SeqContainerEraseTestInitLists<
          typename TypeParam::value_type>::data_size_2_erase_0;

  TypeParam cont(init_list);
  auto iter = cont.begin();
  for (int i = 0; i < erase_data.pos_; ++i) ++iter;

  cont.erase(iter);

  ASSERT_TRUE(ContEqInitlist(cont, erase_data.data_res_));
}

TYPED_TEST(SeqContainerEraseTest, Size2E1) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      SeqContainerEraseTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_2_;
  const typename SeqContainerEraseTestInitLists<
      typename TypeParam::value_type>::EraseData& erase_data =
      SeqContainerEraseTestInitLists<
          typename TypeParam::value_type>::data_size_2_erase_1;

  TypeParam cont(init_list);
  auto iter = cont.begin();
  for (int i = 0; i < erase_data.pos_; ++i) ++iter;

  cont.erase(iter);

  ASSERT_TRUE(ContEqInitlist(cont, erase_data.data_res_));
}

TYPED_TEST(SeqContainerEraseTest, Size4E0) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      SeqContainerEraseTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;
  const typename SeqContainerEraseTestInitLists<
      typename TypeParam::value_type>::EraseData& erase_data =
      SeqContainerEraseTestInitLists<
          typename TypeParam::value_type>::data_size_4_erase_0;

  TypeParam cont(init_list);
  auto iter = cont.begin();
  for (int i = 0; i < erase_data.pos_; ++i) ++iter;

  cont.erase(iter);

  ASSERT_TRUE(ContEqInitlist(cont, erase_data.data_res_));
}

TYPED_TEST(SeqContainerEraseTest, Size4E1) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      SeqContainerEraseTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;
  const typename SeqContainerEraseTestInitLists<
      typename TypeParam::value_type>::EraseData& erase_data =
      SeqContainerEraseTestInitLists<
          typename TypeParam::value_type>::data_size_4_erase_1;

  TypeParam cont(init_list);
  auto iter = cont.begin();
  for (int i = 0; i < erase_data.pos_; ++i) ++iter;

  cont.erase(iter);

  ASSERT_TRUE(ContEqInitlist(cont, erase_data.data_res_));
}

TYPED_TEST(SeqContainerEraseTest, Size4E3) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      SeqContainerEraseTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;
  const typename SeqContainerEraseTestInitLists<
      typename TypeParam::value_type>::EraseData& erase_data =
      SeqContainerEraseTestInitLists<
          typename TypeParam::value_type>::data_size_4_erase_3;

  TypeParam cont(init_list);
  auto iter = cont.begin();
  for (int i = 0; i < erase_data.pos_; ++i) ++iter;

  cont.erase(iter);

  ASSERT_TRUE(ContEqInitlist(cont, erase_data.data_res_));
}

TYPED_TEST(SeqContainerEraseTest, Size8E0) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      SeqContainerEraseTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_8_;
  const typename SeqContainerEraseTestInitLists<
      typename TypeParam::value_type>::EraseData& erase_data =
      SeqContainerEraseTestInitLists<
          typename TypeParam::value_type>::data_size_8_erase_0;

  TypeParam cont(init_list);
  auto iter = cont.begin();
  for (int i = 0; i < erase_data.pos_; ++i) ++iter;

  cont.erase(iter);

  ASSERT_TRUE(ContEqInitlist(cont, erase_data.data_res_));
}

TYPED_TEST(SeqContainerEraseTest, Size8E5) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      SeqContainerEraseTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_8_;
  const typename SeqContainerEraseTestInitLists<
      typename TypeParam::value_type>::EraseData& erase_data =
      SeqContainerEraseTestInitLists<
          typename TypeParam::value_type>::data_size_8_erase_5;

  TypeParam cont(init_list);
  auto iter = cont.begin();
  for (int i = 0; i < erase_data.pos_; ++i) ++iter;

  cont.erase(iter);

  ASSERT_TRUE(ContEqInitlist(cont, erase_data.data_res_));
}

TYPED_TEST(SeqContainerEraseTest, Size8E7) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      SeqContainerEraseTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_8_;
  const typename SeqContainerEraseTestInitLists<
      typename TypeParam::value_type>::EraseData& erase_data =
      SeqContainerEraseTestInitLists<
          typename TypeParam::value_type>::data_size_8_erase_7;

  TypeParam cont(init_list);
  auto iter = cont.begin();
  for (int i = 0; i < erase_data.pos_; ++i) ++iter;

  cont.erase(iter);

  ASSERT_TRUE(ContEqInitlist(cont, erase_data.data_res_));
}
