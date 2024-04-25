#include "vector_test.h"

TYPED_TEST(VectorInsertTest, Size0I0) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorInsertTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_0_;
  const typename VectorInsertTestInitLists<
      typename TypeParam::value_type>::InsertData& insert_data =
      VectorInsertTestInitLists<
          typename TypeParam::value_type>::data_size_0_insert_0;

  TypeParam cont(init_list);
  cont.reserve(cont.size() + 1);

  Iterators<TypeParam> old_iters = GetIterators(cont);

  auto iter = cont.begin();
  for (int i = 0; i < insert_data.pos_; ++i) ++iter;

  cont.insert(iter, insert_data.value_);

  Iterators<TypeParam> iters = GetIterators(cont);
  for (int i = 0; i != insert_data.pos_; ++i) iters[i] = old_iters[i];

  Iterators<TypeParam> res_iters = GetIterators(cont);

  ASSERT_TRUE(IteratorsEq<TypeParam>(iters, res_iters));
}

TYPED_TEST(VectorInsertTest, Size1I0) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorInsertTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_0_;
  const typename VectorInsertTestInitLists<
      typename TypeParam::value_type>::InsertData& insert_data =
      VectorInsertTestInitLists<
          typename TypeParam::value_type>::data_size_1_insert_0;

  TypeParam cont(init_list);
  cont.reserve(cont.size() + 1);

  Iterators<TypeParam> old_iters = GetIterators(cont);

  auto iter = cont.begin();
  for (int i = 0; i < insert_data.pos_; ++i) ++iter;

  cont.insert(iter, insert_data.value_);

  Iterators<TypeParam> iters = GetIterators(cont);
  for (int i = 0; i != insert_data.pos_; ++i) iters[i] = old_iters[i];

  Iterators<TypeParam> res_iters = GetIterators(cont);

  ASSERT_TRUE(IteratorsEq<TypeParam>(iters, res_iters));
}

TYPED_TEST(VectorInsertTest, Size1I1) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorInsertTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_1_;
  const typename VectorInsertTestInitLists<
      typename TypeParam::value_type>::InsertData& insert_data =
      VectorInsertTestInitLists<
          typename TypeParam::value_type>::data_size_1_insert_1;

  TypeParam cont(init_list);
  cont.reserve(cont.size() + 1);

  Iterators<TypeParam> old_iters = GetIterators(cont);

  auto iter = cont.begin();
  for (int i = 0; i < insert_data.pos_; ++i) ++iter;

  cont.insert(iter, insert_data.value_);

  Iterators<TypeParam> iters = GetIterators(cont);
  for (int i = 0; i != insert_data.pos_; ++i) iters[i] = old_iters[i];

  Iterators<TypeParam> res_iters = GetIterators(cont);

  ASSERT_TRUE(IteratorsEq<TypeParam>(iters, res_iters));
}

TYPED_TEST(VectorInsertTest, Size2I0) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorInsertTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_2_;
  const typename VectorInsertTestInitLists<
      typename TypeParam::value_type>::InsertData& insert_data =
      VectorInsertTestInitLists<
          typename TypeParam::value_type>::data_size_2_insert_0;

  TypeParam cont(init_list);
  cont.reserve(cont.size() + 1);

  Iterators<TypeParam> old_iters = GetIterators(cont);

  auto iter = cont.begin();
  for (int i = 0; i < insert_data.pos_; ++i) ++iter;

  cont.insert(iter, insert_data.value_);

  Iterators<TypeParam> iters = GetIterators(cont);
  for (int i = 0; i != insert_data.pos_; ++i) iters[i] = old_iters[i];

  Iterators<TypeParam> res_iters = GetIterators(cont);

  ASSERT_TRUE(IteratorsEq<TypeParam>(iters, res_iters));
}

TYPED_TEST(VectorInsertTest, Size2I1) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorInsertTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_2_;
  const typename VectorInsertTestInitLists<
      typename TypeParam::value_type>::InsertData& insert_data =
      VectorInsertTestInitLists<
          typename TypeParam::value_type>::data_size_2_insert_1;

  TypeParam cont(init_list);
  cont.reserve(cont.size() + 1);

  Iterators<TypeParam> old_iters = GetIterators(cont);

  auto iter = cont.begin();
  for (int i = 0; i < insert_data.pos_; ++i) ++iter;

  cont.insert(iter, insert_data.value_);

  Iterators<TypeParam> iters = GetIterators(cont);
  for (int i = 0; i != insert_data.pos_; ++i) iters[i] = old_iters[i];

  Iterators<TypeParam> res_iters = GetIterators(cont);

  ASSERT_TRUE(IteratorsEq<TypeParam>(iters, res_iters));
}

TYPED_TEST(VectorInsertTest, Size2I2) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorInsertTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_2_;
  const typename VectorInsertTestInitLists<
      typename TypeParam::value_type>::InsertData& insert_data =
      VectorInsertTestInitLists<
          typename TypeParam::value_type>::data_size_2_insert_2;

  TypeParam cont(init_list);
  cont.reserve(cont.size() + 1);

  Iterators<TypeParam> old_iters = GetIterators(cont);

  auto iter = cont.begin();
  for (int i = 0; i < insert_data.pos_; ++i) ++iter;

  cont.insert(iter, insert_data.value_);

  Iterators<TypeParam> iters = GetIterators(cont);
  for (int i = 0; i != insert_data.pos_; ++i) iters[i] = old_iters[i];

  Iterators<TypeParam> res_iters = GetIterators(cont);

  ASSERT_TRUE(IteratorsEq<TypeParam>(iters, res_iters));
}

TYPED_TEST(VectorInsertTest, Size4I0) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorInsertTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;
  const typename VectorInsertTestInitLists<
      typename TypeParam::value_type>::InsertData& insert_data =
      VectorInsertTestInitLists<
          typename TypeParam::value_type>::data_size_4_insert_0;

  TypeParam cont(init_list);
  cont.reserve(cont.size() + 1);

  Iterators<TypeParam> old_iters = GetIterators(cont);

  auto iter = cont.begin();
  for (int i = 0; i < insert_data.pos_; ++i) ++iter;

  cont.insert(iter, insert_data.value_);

  Iterators<TypeParam> iters = GetIterators(cont);
  for (int i = 0; i != insert_data.pos_; ++i) iters[i] = old_iters[i];

  Iterators<TypeParam> res_iters = GetIterators(cont);

  ASSERT_TRUE(IteratorsEq<TypeParam>(iters, res_iters));
}

TYPED_TEST(VectorInsertTest, Size4I2) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorInsertTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;
  const typename VectorInsertTestInitLists<
      typename TypeParam::value_type>::InsertData& insert_data =
      VectorInsertTestInitLists<
          typename TypeParam::value_type>::data_size_4_insert_2;

  TypeParam cont(init_list);
  cont.reserve(cont.size() + 1);

  Iterators<TypeParam> old_iters = GetIterators(cont);

  auto iter = cont.begin();
  for (int i = 0; i < insert_data.pos_; ++i) ++iter;

  cont.insert(iter, insert_data.value_);

  Iterators<TypeParam> iters = GetIterators(cont);
  for (int i = 0; i != insert_data.pos_; ++i) iters[i] = old_iters[i];

  Iterators<TypeParam> res_iters = GetIterators(cont);

  ASSERT_TRUE(IteratorsEq<TypeParam>(iters, res_iters));
}

TYPED_TEST(VectorInsertTest, Size4I4) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorInsertTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;
  const typename VectorInsertTestInitLists<
      typename TypeParam::value_type>::InsertData& insert_data =
      VectorInsertTestInitLists<
          typename TypeParam::value_type>::data_size_4_insert_4;

  TypeParam cont(init_list);
  cont.reserve(cont.size() + 1);

  Iterators<TypeParam> old_iters = GetIterators(cont);

  auto iter = cont.begin();
  for (int i = 0; i < insert_data.pos_; ++i) ++iter;

  cont.insert(iter, insert_data.value_);

  Iterators<TypeParam> iters = GetIterators(cont);
  for (int i = 0; i != insert_data.pos_; ++i) iters[i] = old_iters[i];

  Iterators<TypeParam> res_iters = GetIterators(cont);

  ASSERT_TRUE(IteratorsEq<TypeParam>(iters, res_iters));
}

TYPED_TEST(VectorInsertTest, Size8I0) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorInsertTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_8_;
  const typename VectorInsertTestInitLists<
      typename TypeParam::value_type>::InsertData& insert_data =
      VectorInsertTestInitLists<
          typename TypeParam::value_type>::data_size_8_insert_0;

  TypeParam cont(init_list);
  cont.reserve(cont.size() + 1);

  Iterators<TypeParam> old_iters = GetIterators(cont);

  auto iter = cont.begin();
  for (int i = 0; i < insert_data.pos_; ++i) ++iter;

  cont.insert(iter, insert_data.value_);

  Iterators<TypeParam> iters = GetIterators(cont);
  for (int i = 0; i != insert_data.pos_; ++i) iters[i] = old_iters[i];

  Iterators<TypeParam> res_iters = GetIterators(cont);

  ASSERT_TRUE(IteratorsEq<TypeParam>(iters, res_iters));
}

TYPED_TEST(VectorInsertTest, Size8I6) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorInsertTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_8_;
  const typename VectorInsertTestInitLists<
      typename TypeParam::value_type>::InsertData& insert_data =
      VectorInsertTestInitLists<
          typename TypeParam::value_type>::data_size_8_insert_6;

  TypeParam cont(init_list);
  cont.reserve(cont.size() + 1);

  Iterators<TypeParam> old_iters = GetIterators(cont);

  auto iter = cont.begin();
  for (int i = 0; i < insert_data.pos_; ++i) ++iter;

  cont.insert(iter, insert_data.value_);

  Iterators<TypeParam> iters = GetIterators(cont);
  for (int i = 0; i != insert_data.pos_; ++i) iters[i] = old_iters[i];

  Iterators<TypeParam> res_iters = GetIterators(cont);

  ASSERT_TRUE(IteratorsEq<TypeParam>(iters, res_iters));
}

TYPED_TEST(VectorInsertTest, Size8I8) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorInsertTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_8_;
  const typename VectorInsertTestInitLists<
      typename TypeParam::value_type>::InsertData& insert_data =
      VectorInsertTestInitLists<
          typename TypeParam::value_type>::data_size_8_insert_8;

  TypeParam cont(init_list);
  cont.reserve(cont.size() + 1);

  Iterators<TypeParam> old_iters = GetIterators(cont);

  auto iter = cont.begin();
  for (int i = 0; i < insert_data.pos_; ++i) ++iter;

  cont.insert(iter, insert_data.value_);

  Iterators<TypeParam> iters = GetIterators(cont);
  for (int i = 0; i != insert_data.pos_; ++i) iters[i] = old_iters[i];

  Iterators<TypeParam> res_iters = GetIterators(cont);

  ASSERT_TRUE(IteratorsEq<TypeParam>(iters, res_iters));
}

TYPED_TEST(VectorInsertCapacityTest, Size0I0CapBt) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorInsertCapacityTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_0_;
  const typename VectorInsertCapacityTestInitLists<
      typename TypeParam::value_type>::InsertData& insert_data =
      VectorInsertCapacityTestInitLists<
          typename TypeParam::value_type>::data_size_0_insert_0;

  TypeParam cont(init_list);
  cont.reserve(10);
  typename TypeParam::size_type res_cap = 10;

  auto iter = cont.begin();
  for (int i = 0; i < insert_data.pos_; ++i) ++iter;
  cont.insert(iter, insert_data.value_);

  ASSERT_EQ(cont.capacity(), res_cap);
}

TYPED_TEST(VectorInsertCapacityTest, Size0I0CapEq) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorInsertCapacityTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_0_;
  const typename VectorInsertCapacityTestInitLists<
      typename TypeParam::value_type>::InsertData& insert_data =
      VectorInsertCapacityTestInitLists<
          typename TypeParam::value_type>::data_size_0_insert_0;

  TypeParam cont(init_list);
  typename TypeParam::size_type res_cap = 1;

  auto iter = cont.begin();
  for (int i = 0; i < insert_data.pos_; ++i) ++iter;
  cont.insert(iter, insert_data.value_);

  ASSERT_EQ(cont.capacity(), res_cap);
}

TYPED_TEST(VectorInsertCapacityTest, Size1I0CapBt) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorInsertCapacityTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_1_;
  const typename VectorInsertCapacityTestInitLists<
      typename TypeParam::value_type>::InsertData& insert_data =
      VectorInsertCapacityTestInitLists<
          typename TypeParam::value_type>::data_size_1_insert_0;

  TypeParam cont(init_list);
  cont.reserve(10);
  typename TypeParam::size_type res_cap = 10;

  auto iter = cont.begin();
  for (int i = 0; i < insert_data.pos_; ++i) ++iter;
  cont.insert(iter, insert_data.value_);

  ASSERT_EQ(cont.capacity(), res_cap);
}

TYPED_TEST(VectorInsertCapacityTest, Size1I0CapEq) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorInsertCapacityTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_1_;
  const typename VectorInsertCapacityTestInitLists<
      typename TypeParam::value_type>::InsertData& insert_data =
      VectorInsertCapacityTestInitLists<
          typename TypeParam::value_type>::data_size_1_insert_0;

  TypeParam cont(init_list);
  typename TypeParam::size_type res_cap = cont.capacity() * 2;

  auto iter = cont.begin();
  for (int i = 0; i < insert_data.pos_; ++i) ++iter;
  cont.insert(iter, insert_data.value_);

  ASSERT_EQ(cont.capacity(), res_cap);
}

TYPED_TEST(VectorInsertCapacityTest, Size4I2CapBt) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorInsertCapacityTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;
  const typename VectorInsertCapacityTestInitLists<
      typename TypeParam::value_type>::InsertData& insert_data =
      VectorInsertCapacityTestInitLists<
          typename TypeParam::value_type>::data_size_4_insert_2;

  TypeParam cont(init_list);
  cont.reserve(10);
  typename TypeParam::size_type res_cap = 10;

  auto iter = cont.begin();
  for (int i = 0; i < insert_data.pos_; ++i) ++iter;
  cont.insert(iter, insert_data.value_);

  ASSERT_EQ(cont.capacity(), res_cap);
}

TYPED_TEST(VectorInsertCapacityTest, Size4I2CapEq) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorInsertCapacityTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;
  const typename VectorInsertCapacityTestInitLists<
      typename TypeParam::value_type>::InsertData& insert_data =
      VectorInsertCapacityTestInitLists<
          typename TypeParam::value_type>::data_size_4_insert_2;

  TypeParam cont(init_list);
  typename TypeParam::size_type res_cap = cont.capacity() * 2;

  auto iter = cont.begin();
  for (int i = 0; i < insert_data.pos_; ++i) ++iter;
  cont.insert(iter, insert_data.value_);

  ASSERT_EQ(cont.capacity(), res_cap);
}
