#include "seq_container_test.h"

TYPED_TEST(SeqContainerInsertTest, Size0I0) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      SeqContainerInsertTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_0_;
  const typename SeqContainerInsertTestInitLists<
      typename TypeParam::value_type>::InsertData& insert_data =
      SeqContainerInsertTestInitLists<
          typename TypeParam::value_type>::data_size_0_insert_0;

  TypeParam cont(init_list);
  auto iter = cont.begin();
  for (int i = 0; i < insert_data.pos_; ++i) ++iter;

  cont.insert(iter, insert_data.value_);

  ASSERT_TRUE(ContEqInitlist(cont, insert_data.data_res_));
}

TYPED_TEST(SeqContainerInsertTest, Size1I0) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      SeqContainerInsertTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_1_;
  const typename SeqContainerInsertTestInitLists<
      typename TypeParam::value_type>::InsertData& insert_data =
      SeqContainerInsertTestInitLists<
          typename TypeParam::value_type>::data_size_1_insert_0;

  TypeParam cont(init_list);
  auto iter = cont.begin();
  for (int i = 0; i < insert_data.pos_; ++i) ++iter;

  cont.insert(iter, insert_data.value_);

  ASSERT_TRUE(ContEqInitlist(cont, insert_data.data_res_));
}

TYPED_TEST(SeqContainerInsertTest, Size1I1) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      SeqContainerInsertTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_1_;
  const typename SeqContainerInsertTestInitLists<
      typename TypeParam::value_type>::InsertData& insert_data =
      SeqContainerInsertTestInitLists<
          typename TypeParam::value_type>::data_size_1_insert_1;

  TypeParam cont(init_list);
  auto iter = cont.begin();
  for (int i = 0; i < insert_data.pos_; ++i) ++iter;

  cont.insert(iter, insert_data.value_);

  ASSERT_TRUE(ContEqInitlist(cont, insert_data.data_res_));
}

TYPED_TEST(SeqContainerInsertTest, Size2I0) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      SeqContainerInsertTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_2_;
  const typename SeqContainerInsertTestInitLists<
      typename TypeParam::value_type>::InsertData& insert_data =
      SeqContainerInsertTestInitLists<
          typename TypeParam::value_type>::data_size_2_insert_0;

  TypeParam cont(init_list);
  auto iter = cont.begin();
  for (int i = 0; i < insert_data.pos_; ++i) ++iter;

  cont.insert(iter, insert_data.value_);

  ASSERT_TRUE(ContEqInitlist(cont, insert_data.data_res_));
}

TYPED_TEST(SeqContainerInsertTest, Size2I1) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      SeqContainerInsertTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_2_;
  const typename SeqContainerInsertTestInitLists<
      typename TypeParam::value_type>::InsertData& insert_data =
      SeqContainerInsertTestInitLists<
          typename TypeParam::value_type>::data_size_2_insert_1;

  TypeParam cont(init_list);
  auto iter = cont.begin();
  for (int i = 0; i < insert_data.pos_; ++i) ++iter;

  cont.insert(iter, insert_data.value_);

  ASSERT_TRUE(ContEqInitlist(cont, insert_data.data_res_));
}

TYPED_TEST(SeqContainerInsertTest, Size2I2) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      SeqContainerInsertTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_2_;
  const typename SeqContainerInsertTestInitLists<
      typename TypeParam::value_type>::InsertData& insert_data =
      SeqContainerInsertTestInitLists<
          typename TypeParam::value_type>::data_size_2_insert_2;

  TypeParam cont(init_list);
  auto iter = cont.begin();
  for (int i = 0; i < insert_data.pos_; ++i) ++iter;

  cont.insert(iter, insert_data.value_);

  ASSERT_TRUE(ContEqInitlist(cont, insert_data.data_res_));
}

TYPED_TEST(SeqContainerInsertTest, Size4I0) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      SeqContainerInsertTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;
  const typename SeqContainerInsertTestInitLists<
      typename TypeParam::value_type>::InsertData& insert_data =
      SeqContainerInsertTestInitLists<
          typename TypeParam::value_type>::data_size_4_insert_0;

  TypeParam cont(init_list);
  auto iter = cont.begin();
  for (int i = 0; i < insert_data.pos_; ++i) ++iter;

  cont.insert(iter, insert_data.value_);

  ASSERT_TRUE(ContEqInitlist(cont, insert_data.data_res_));
}

TYPED_TEST(SeqContainerInsertTest, Size4I2) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      SeqContainerInsertTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;
  const typename SeqContainerInsertTestInitLists<
      typename TypeParam::value_type>::InsertData& insert_data =
      SeqContainerInsertTestInitLists<
          typename TypeParam::value_type>::data_size_4_insert_2;

  TypeParam cont(init_list);
  auto iter = cont.begin();
  for (int i = 0; i < insert_data.pos_; ++i) ++iter;

  cont.insert(iter, insert_data.value_);

  ASSERT_TRUE(ContEqInitlist(cont, insert_data.data_res_));
}

TYPED_TEST(SeqContainerInsertTest, Size4I4) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      SeqContainerInsertTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;
  const typename SeqContainerInsertTestInitLists<
      typename TypeParam::value_type>::InsertData& insert_data =
      SeqContainerInsertTestInitLists<
          typename TypeParam::value_type>::data_size_4_insert_4;

  TypeParam cont(init_list);
  auto iter = cont.begin();
  for (int i = 0; i < insert_data.pos_; ++i) ++iter;

  cont.insert(iter, insert_data.value_);

  ASSERT_TRUE(ContEqInitlist(cont, insert_data.data_res_));
}

TYPED_TEST(SeqContainerInsertTest, Size8I0) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      SeqContainerInsertTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_8_;
  const typename SeqContainerInsertTestInitLists<
      typename TypeParam::value_type>::InsertData& insert_data =
      SeqContainerInsertTestInitLists<
          typename TypeParam::value_type>::data_size_8_insert_0;

  TypeParam cont(init_list);
  auto iter = cont.begin();
  for (int i = 0; i < insert_data.pos_; ++i) ++iter;

  cont.insert(iter, insert_data.value_);

  ASSERT_TRUE(ContEqInitlist(cont, insert_data.data_res_));
}

TYPED_TEST(SeqContainerInsertTest, Size8I6) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      SeqContainerInsertTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_8_;
  const typename SeqContainerInsertTestInitLists<
      typename TypeParam::value_type>::InsertData& insert_data =
      SeqContainerInsertTestInitLists<
          typename TypeParam::value_type>::data_size_8_insert_6;

  TypeParam cont(init_list);
  auto iter = cont.begin();
  for (int i = 0; i < insert_data.pos_; ++i) ++iter;

  cont.insert(iter, insert_data.value_);

  ASSERT_TRUE(ContEqInitlist(cont, insert_data.data_res_));
}

TYPED_TEST(SeqContainerInsertTest, Size8I8) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      SeqContainerInsertTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_8_;
  const typename SeqContainerInsertTestInitLists<
      typename TypeParam::value_type>::InsertData& insert_data =
      SeqContainerInsertTestInitLists<
          typename TypeParam::value_type>::data_size_8_insert_8;

  TypeParam cont(init_list);
  auto iter = cont.begin();
  for (int i = 0; i < insert_data.pos_; ++i) ++iter;

  cont.insert(iter, insert_data.value_);

  ASSERT_TRUE(ContEqInitlist(cont, insert_data.data_res_));
}
