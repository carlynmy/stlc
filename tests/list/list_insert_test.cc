#include "list_test.h"

TYPED_TEST(ListInsertTest, Size0I0IteratorSaving) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ListInsertTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_0_;
  const typename ListInsertTestInitLists<
      typename TypeParam::value_type>::InsertData& insert_data =
      ListInsertTestInitLists<
          typename TypeParam::value_type>::data_size_0_insert_0;

  TypeParam cont(init_list);
  auto iter = cont.begin();
  for (int i = 0; i < insert_data.pos_; ++i) ++iter;

  Iterators<TypeParam> res_iters = GetIterators(cont);

  cont.insert(iter, insert_data.value_);

  Iterators<TypeParam> iters = GetIterators(cont);
  res_iters.insert(res_iters.begin() + insert_data.pos_,
                   iters[insert_data.pos_]);

  ASSERT_TRUE(IteratorsEq<TypeParam>(iters, res_iters));

  ASSERT_TRUE(ContEqInitlist(cont, insert_data.data_res_));
}

TYPED_TEST(ListInsertTest, Size1I0IteratorSaving) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ListInsertTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_1_;
  const typename ListInsertTestInitLists<
      typename TypeParam::value_type>::InsertData& insert_data =
      ListInsertTestInitLists<
          typename TypeParam::value_type>::data_size_1_insert_0;

  TypeParam cont(init_list);
  auto iter = cont.begin();
  for (int i = 0; i < insert_data.pos_; ++i) ++iter;

  Iterators<TypeParam> res_iters = GetIterators(cont);

  cont.insert(iter, insert_data.value_);

  Iterators<TypeParam> iters = GetIterators(cont);
  res_iters.insert(res_iters.begin() + insert_data.pos_,
                   iters[insert_data.pos_]);

  ASSERT_TRUE(IteratorsEq<TypeParam>(iters, res_iters));

  ASSERT_TRUE(ContEqInitlist(cont, insert_data.data_res_));
}

TYPED_TEST(ListInsertTest, Size1I1IteratorSaving) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ListInsertTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_1_;
  const typename ListInsertTestInitLists<
      typename TypeParam::value_type>::InsertData& insert_data =
      ListInsertTestInitLists<
          typename TypeParam::value_type>::data_size_1_insert_1;

  TypeParam cont(init_list);
  auto iter = cont.begin();
  for (int i = 0; i < insert_data.pos_; ++i) ++iter;

  Iterators<TypeParam> res_iters = GetIterators(cont);

  cont.insert(iter, insert_data.value_);

  Iterators<TypeParam> iters = GetIterators(cont);
  res_iters.insert(res_iters.begin() + insert_data.pos_,
                   iters[insert_data.pos_]);

  ASSERT_TRUE(IteratorsEq<TypeParam>(iters, res_iters));

  ASSERT_TRUE(ContEqInitlist(cont, insert_data.data_res_));
}

TYPED_TEST(ListInsertTest, Size2I0IteratorSaving) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ListInsertTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_2_;
  const typename ListInsertTestInitLists<
      typename TypeParam::value_type>::InsertData& insert_data =
      ListInsertTestInitLists<
          typename TypeParam::value_type>::data_size_2_insert_0;

  TypeParam cont(init_list);
  auto iter = cont.begin();
  for (int i = 0; i < insert_data.pos_; ++i) ++iter;

  Iterators<TypeParam> res_iters = GetIterators(cont);

  cont.insert(iter, insert_data.value_);

  Iterators<TypeParam> iters = GetIterators(cont);
  res_iters.insert(res_iters.begin() + insert_data.pos_,
                   iters[insert_data.pos_]);

  ASSERT_TRUE(IteratorsEq<TypeParam>(iters, res_iters));

  ASSERT_TRUE(ContEqInitlist(cont, insert_data.data_res_));
}

TYPED_TEST(ListInsertTest, Size2I1IteratorSaving) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ListInsertTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_2_;
  const typename ListInsertTestInitLists<
      typename TypeParam::value_type>::InsertData& insert_data =
      ListInsertTestInitLists<
          typename TypeParam::value_type>::data_size_2_insert_1;

  TypeParam cont(init_list);
  auto iter = cont.begin();
  for (int i = 0; i < insert_data.pos_; ++i) ++iter;

  Iterators<TypeParam> res_iters = GetIterators(cont);

  cont.insert(iter, insert_data.value_);

  Iterators<TypeParam> iters = GetIterators(cont);
  res_iters.insert(res_iters.begin() + insert_data.pos_,
                   iters[insert_data.pos_]);

  ASSERT_TRUE(IteratorsEq<TypeParam>(iters, res_iters));

  ASSERT_TRUE(ContEqInitlist(cont, insert_data.data_res_));
}

TYPED_TEST(ListInsertTest, Size2I2IteratorSaving) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ListInsertTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_2_;
  const typename ListInsertTestInitLists<
      typename TypeParam::value_type>::InsertData& insert_data =
      ListInsertTestInitLists<
          typename TypeParam::value_type>::data_size_2_insert_2;

  TypeParam cont(init_list);
  auto iter = cont.begin();
  for (int i = 0; i < insert_data.pos_; ++i) ++iter;

  Iterators<TypeParam> res_iters = GetIterators(cont);

  cont.insert(iter, insert_data.value_);

  Iterators<TypeParam> iters = GetIterators(cont);
  res_iters.insert(res_iters.begin() + insert_data.pos_,
                   iters[insert_data.pos_]);

  ASSERT_TRUE(IteratorsEq<TypeParam>(iters, res_iters));

  ASSERT_TRUE(ContEqInitlist(cont, insert_data.data_res_));
}

TYPED_TEST(ListInsertTest, Size4I0IteratorSaving) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ListInsertTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;
  const typename ListInsertTestInitLists<
      typename TypeParam::value_type>::InsertData& insert_data =
      ListInsertTestInitLists<
          typename TypeParam::value_type>::data_size_4_insert_0;

  TypeParam cont(init_list);
  auto iter = cont.begin();
  for (int i = 0; i < insert_data.pos_; ++i) ++iter;

  Iterators<TypeParam> res_iters = GetIterators(cont);

  cont.insert(iter, insert_data.value_);

  Iterators<TypeParam> iters = GetIterators(cont);
  res_iters.insert(res_iters.begin() + insert_data.pos_,
                   iters[insert_data.pos_]);

  ASSERT_TRUE(IteratorsEq<TypeParam>(iters, res_iters));

  ASSERT_TRUE(ContEqInitlist(cont, insert_data.data_res_));
}

TYPED_TEST(ListInsertTest, Size4I2IteratorSaving) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ListInsertTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;
  const typename ListInsertTestInitLists<
      typename TypeParam::value_type>::InsertData& insert_data =
      ListInsertTestInitLists<
          typename TypeParam::value_type>::data_size_4_insert_2;

  TypeParam cont(init_list);
  auto iter = cont.begin();
  for (int i = 0; i < insert_data.pos_; ++i) ++iter;

  Iterators<TypeParam> res_iters = GetIterators(cont);

  cont.insert(iter, insert_data.value_);

  Iterators<TypeParam> iters = GetIterators(cont);
  res_iters.insert(res_iters.begin() + insert_data.pos_,
                   iters[insert_data.pos_]);

  ASSERT_TRUE(IteratorsEq<TypeParam>(iters, res_iters));

  ASSERT_TRUE(ContEqInitlist(cont, insert_data.data_res_));
}

TYPED_TEST(ListInsertTest, Size4I4IteratorSaving) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ListInsertTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;
  const typename ListInsertTestInitLists<
      typename TypeParam::value_type>::InsertData& insert_data =
      ListInsertTestInitLists<
          typename TypeParam::value_type>::data_size_4_insert_4;

  TypeParam cont(init_list);
  auto iter = cont.begin();
  for (int i = 0; i < insert_data.pos_; ++i) ++iter;

  Iterators<TypeParam> res_iters = GetIterators(cont);

  cont.insert(iter, insert_data.value_);

  Iterators<TypeParam> iters = GetIterators(cont);
  res_iters.insert(res_iters.begin() + insert_data.pos_,
                   iters[insert_data.pos_]);

  ASSERT_TRUE(IteratorsEq<TypeParam>(iters, res_iters));

  ASSERT_TRUE(ContEqInitlist(cont, insert_data.data_res_));
}

TYPED_TEST(ListInsertTest, Size8I0IteratorSaving) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ListInsertTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_8_;
  const typename ListInsertTestInitLists<
      typename TypeParam::value_type>::InsertData& insert_data =
      ListInsertTestInitLists<
          typename TypeParam::value_type>::data_size_8_insert_0;

  TypeParam cont(init_list);
  auto iter = cont.begin();
  for (int i = 0; i < insert_data.pos_; ++i) ++iter;

  Iterators<TypeParam> res_iters = GetIterators(cont);

  cont.insert(iter, insert_data.value_);

  Iterators<TypeParam> iters = GetIterators(cont);
  res_iters.insert(res_iters.begin() + insert_data.pos_,
                   iters[insert_data.pos_]);

  ASSERT_TRUE(IteratorsEq<TypeParam>(iters, res_iters));

  ASSERT_TRUE(ContEqInitlist(cont, insert_data.data_res_));
}

TYPED_TEST(ListInsertTest, Size8I6IteratorSaving) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ListInsertTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_8_;
  const typename ListInsertTestInitLists<
      typename TypeParam::value_type>::InsertData& insert_data =
      ListInsertTestInitLists<
          typename TypeParam::value_type>::data_size_8_insert_6;

  TypeParam cont(init_list);
  auto iter = cont.begin();
  for (int i = 0; i < insert_data.pos_; ++i) ++iter;

  Iterators<TypeParam> res_iters = GetIterators(cont);

  cont.insert(iter, insert_data.value_);

  Iterators<TypeParam> iters = GetIterators(cont);
  res_iters.insert(res_iters.begin() + insert_data.pos_,
                   iters[insert_data.pos_]);

  ASSERT_TRUE(IteratorsEq<TypeParam>(iters, res_iters));

  ASSERT_TRUE(ContEqInitlist(cont, insert_data.data_res_));
}

TYPED_TEST(ListInsertTest, Size8I8IteratorSaving) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ListInsertTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_8_;
  const typename ListInsertTestInitLists<
      typename TypeParam::value_type>::InsertData& insert_data =
      ListInsertTestInitLists<
          typename TypeParam::value_type>::data_size_8_insert_8;

  TypeParam cont(init_list);
  auto iter = cont.begin();
  for (int i = 0; i < insert_data.pos_; ++i) ++iter;

  Iterators<TypeParam> res_iters = GetIterators(cont);

  cont.insert(iter, insert_data.value_);

  Iterators<TypeParam> iters = GetIterators(cont);
  res_iters.insert(res_iters.begin() + insert_data.pos_,
                   iters[insert_data.pos_]);

  ASSERT_TRUE(IteratorsEq<TypeParam>(iters, res_iters));
  ASSERT_TRUE(ContEqInitlist(cont, insert_data.data_res_));
}
