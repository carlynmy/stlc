#include "containers_test.h"

TYPED_TEST(ContainersConstIteratorTest, ReadSize0) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ContainersConstIteratorTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_0_;
  TypeParam cont(init_list);

  auto i_init = init_list.begin();
  typename TypeParam::const_iterator i = cont.begin();
  while (i != cont.end()) {
    ASSERT_EQ(*i, *i_init);
    ++i;
    ++i_init;
  }

  ASSERT_TRUE(i == cont.end());
  ASSERT_TRUE(i_init == init_list.end());
}

TYPED_TEST(ContainersConstIteratorTest, ReadSize1) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ContainersConstIteratorTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_1_;
  TypeParam cont(init_list);

  auto i_init = init_list.begin();
  typename TypeParam::const_iterator i = cont.begin();
  while (i != cont.end()) {
    ASSERT_EQ(*i, *i_init);
    ++i;
    ++i_init;
  }

  ASSERT_TRUE(i == cont.end());
  ASSERT_TRUE(i_init == init_list.end());
}

TYPED_TEST(ContainersConstIteratorTest, ReadReverseSize1) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ContainersConstIteratorTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_1_;
  TypeParam cont(init_list);

  auto i_init = init_list.end();
  typename TypeParam::const_iterator i = cont.end();
  --i;
  --i_init;
  while (i != cont.begin()) {
    ASSERT_EQ(*i, *i_init);
    --i;
    --i_init;
  }

  ASSERT_EQ(*i, *i_init);

  ASSERT_TRUE(i == cont.begin());
  ASSERT_TRUE(i_init == init_list.begin());
}

TYPED_TEST(ContainersConstIteratorTest, ReadSize4) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ContainersConstIteratorTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;
  TypeParam cont(init_list);

  auto i_init = init_list.begin();
  typename TypeParam::const_iterator i = cont.begin();
  while (i != cont.end()) {
    ASSERT_EQ(*i, *i_init);
    ++i;
    ++i_init;
  }

  ASSERT_TRUE(i == cont.end());
  ASSERT_TRUE(i_init == init_list.end());
}

TYPED_TEST(ContainersConstIteratorTest, ReadReverseSize4) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ContainersConstIteratorTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;
  TypeParam cont(init_list);

  auto i_init = init_list.end();
  typename TypeParam::const_iterator i = cont.end();
  --i;
  --i_init;
  while (i != cont.begin()) {
    ASSERT_EQ(*i, *i_init);
    --i;
    --i_init;
  }

  ASSERT_EQ(*i, *i_init);

  ASSERT_TRUE(i == cont.begin());
  ASSERT_TRUE(i_init == init_list.begin());
}

TYPED_TEST(ContainersConstIteratorTest, ReadSize8) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ContainersConstIteratorTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_8_;
  TypeParam cont(init_list);

  auto i_init = init_list.begin();
  typename TypeParam::const_iterator i = cont.begin();
  while (i != cont.end()) {
    ASSERT_EQ(*i, *i_init);
    ++i;
    ++i_init;
  }

  ASSERT_TRUE(i == cont.end());
  ASSERT_TRUE(i_init == init_list.end());
}

TYPED_TEST(ContainersConstIteratorTest, ReadReverseSize8) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ContainersConstIteratorTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_8_;
  TypeParam cont(init_list);

  auto i_init = init_list.end();
  typename TypeParam::const_iterator i = cont.end();
  --i;
  --i_init;
  while (i != cont.begin()) {
    ASSERT_EQ(*i, *i_init);
    --i;
    --i_init;
  }

  ASSERT_EQ(*i, *i_init);

  ASSERT_TRUE(i == cont.begin());
  ASSERT_TRUE(i_init == init_list.begin());
}

TYPED_TEST(ContainersIteratorTest, ReadSize0) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ContainersIteratorTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_0_;
  TypeParam cont(init_list);

  auto i_init = init_list.begin();
  typename TypeParam::iterator i = cont.begin();
  while (i != cont.end()) {
    ASSERT_EQ(*i, *i_init);
    ++i;
    ++i_init;
  }

  ASSERT_TRUE(i == cont.end());
  ASSERT_TRUE(i_init == init_list.end());
}

TYPED_TEST(ContainersIteratorTest, ReadSize1) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ContainersIteratorTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_1_;
  TypeParam cont(init_list);

  auto i_init = init_list.begin();
  typename TypeParam::iterator i = cont.begin();
  while (i != cont.end()) {
    ASSERT_EQ(*i, *i_init);
    ++i;
    ++i_init;
  }

  ASSERT_TRUE(i == cont.end());
  ASSERT_TRUE(i_init == init_list.end());
}

TYPED_TEST(ContainersIteratorTest, ReadReverseSize1) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ContainersIteratorTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_1_;
  TypeParam cont(init_list);

  auto i_init = init_list.end();
  typename TypeParam::iterator i = cont.end();
  --i;
  --i_init;
  while (i != cont.begin()) {
    ASSERT_EQ(*i, *i_init);
    --i;
    --i_init;
  }

  ASSERT_EQ(*i, *i_init);

  ASSERT_TRUE(i == cont.begin());
  ASSERT_TRUE(i_init == init_list.begin());
}

TYPED_TEST(ContainersIteratorTest, ReadSize4) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ContainersIteratorTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;
  TypeParam cont(init_list);

  auto i_init = init_list.begin();
  typename TypeParam::iterator i = cont.begin();
  while (i != cont.end()) {
    ASSERT_EQ(*i, *i_init);
    ++i;
    ++i_init;
  }

  ASSERT_TRUE(i == cont.end());
  ASSERT_TRUE(i_init == init_list.end());
}

TYPED_TEST(ContainersIteratorTest, ReadReverseSize4) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ContainersIteratorTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;
  TypeParam cont(init_list);

  auto i_init = init_list.end();
  typename TypeParam::iterator i = cont.end();
  --i;
  --i_init;
  while (i != cont.begin()) {
    ASSERT_EQ(*i, *i_init);
    --i;
    --i_init;
  }

  ASSERT_EQ(*i, *i_init);

  ASSERT_TRUE(i == cont.begin());
  ASSERT_TRUE(i_init == init_list.begin());
}

TYPED_TEST(ContainersIteratorTest, ReadSize8) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ContainersIteratorTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_8_;
  TypeParam cont(init_list);

  auto i_init = init_list.begin();
  typename TypeParam::iterator i = cont.begin();
  while (i != cont.end()) {
    ASSERT_EQ(*i, *i_init);
    ++i;
    ++i_init;
  }

  ASSERT_TRUE(i == cont.end());
  ASSERT_TRUE(i_init == init_list.end());
}

TYPED_TEST(ContainersIteratorTest, ReadReverseSize8) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ContainersIteratorTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_8_;
  TypeParam cont(init_list);

  auto i_init = init_list.end();
  typename TypeParam::iterator i = cont.end();
  --i;
  --i_init;
  while (i != cont.begin()) {
    ASSERT_EQ(*i, *i_init);
    --i;
    --i_init;
  }

  ASSERT_EQ(*i, *i_init);

  ASSERT_TRUE(i == cont.begin());
  ASSERT_TRUE(i_init == init_list.begin());
}

TYPED_TEST(ContainersIteratorTest, WriteSize1) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ContainersIteratorTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_1_;

  TypeParam cont(init_list);

  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      ContainersIteratorTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_1_2_;

  auto i_init = res_init_list.begin();
  typename TypeParam::iterator i = cont.begin();
  while (i != cont.end()) {
    *i = *i_init;
    ++i;
    ++i_init;
  }

  ASSERT_TRUE(ContEqInitlist(cont, res_init_list));
}

TYPED_TEST(ContainersIteratorTest, WriteSize4) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ContainersIteratorTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;

  TypeParam cont(init_list);

  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      ContainersIteratorTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_2_;

  auto i_init = res_init_list.begin();
  typename TypeParam::iterator i = cont.begin();
  while (i != cont.end()) {
    *i = *i_init;
    ++i;
    ++i_init;
  }

  ASSERT_TRUE(ContEqInitlist(cont, res_init_list));
}

TYPED_TEST(ContainersIteratorTest, WriteSize8) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ContainersIteratorTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_8_;

  TypeParam cont(init_list);

  const std::initializer_list<typename TypeParam::value_type>& res_init_list =
      ContainersIteratorTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_8_2_;

  auto i_init = res_init_list.begin();
  typename TypeParam::iterator i = cont.begin();
  while (i != cont.end()) {
    *i = *i_init;
    ++i;
    ++i_init;
  }

  ASSERT_TRUE(ContEqInitlist(cont, res_init_list));
}
