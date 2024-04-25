#include "containers_test.h"

TYPED_TEST(ContainersSwapTest, A4B8) {
  const std::initializer_list<typename TypeParam::value_type>& init_list_a =
      ContainersSwapTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;
  const std::initializer_list<typename TypeParam::value_type>& init_list_b =
      ContainersSwapTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_8_;

  TypeParam exp_cont_a(init_list_b);
  TypeParam exp_cont_b(init_list_a);

  TypeParam cont_a(init_list_a);
  TypeParam cont_b(init_list_b);

  cont_a.swap(cont_b);

  ASSERT_TRUE(ContainersEq(cont_a, exp_cont_a));
  ASSERT_TRUE(ContainersEq(cont_b, exp_cont_b));
}

TYPED_TEST(ContainersSwapTest, A4B0) {
  const std::initializer_list<typename TypeParam::value_type>& init_list_a =
      ContainersSwapTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;
  const std::initializer_list<typename TypeParam::value_type>& init_list_b =
      ContainersSwapTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_0_;

  TypeParam exp_cont_a(init_list_b);
  TypeParam exp_cont_b(init_list_a);

  TypeParam cont_a(init_list_a);
  TypeParam cont_b(init_list_b);

  cont_a.swap(cont_b);

  ASSERT_TRUE(ContainersEq(cont_a, exp_cont_a));
  ASSERT_TRUE(ContainersEq(cont_b, exp_cont_b));
}

TYPED_TEST(ContainersSwapTest, A0B8) {
  const std::initializer_list<typename TypeParam::value_type>& init_list_a =
      ContainersSwapTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_0_;
  const std::initializer_list<typename TypeParam::value_type>& init_list_b =
      ContainersSwapTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_8_;

  TypeParam exp_cont_a(init_list_b);
  TypeParam exp_cont_b(init_list_a);

  TypeParam cont_a(init_list_a);
  TypeParam cont_b(init_list_b);

  cont_a.swap(cont_b);

  ASSERT_TRUE(ContainersEq(cont_a, exp_cont_a));
  ASSERT_TRUE(ContainersEq(cont_b, exp_cont_b));
}

TYPED_TEST(ContainersSwapSaveItersTest, A4B8) {
  const std::initializer_list<typename TypeParam::value_type>& init_list_a =
      ContainersSwapSaveItersTesttInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;
  const std::initializer_list<typename TypeParam::value_type>& init_list_b =
      ContainersSwapSaveItersTesttInitLists<
          typename TypeParam::value_type>::data_init_list_size_8_;

  TypeParam cont_a(init_list_a);
  TypeParam cont_b(init_list_b);

  auto iters_a = GetIterators(cont_a);
  auto iters_b = GetIterators(cont_b);
  iters_a.pop_back();
  iters_b.pop_back();

  cont_a.swap(cont_b);

  iters_a.push_back(cont_b.end());
  iters_b.push_back(cont_a.end());

  auto exp_iters_a = GetIterators(cont_b);
  auto exp_iters_b = GetIterators(cont_a);

  ASSERT_TRUE(IteratorsEq<TypeParam>(iters_a, exp_iters_a));
  ASSERT_TRUE(IteratorsEq<TypeParam>(iters_b, exp_iters_b));
}

TYPED_TEST(ContainersSwapSaveItersTest, A4B0) {
  const std::initializer_list<typename TypeParam::value_type>& init_list_a =
      ContainersSwapSaveItersTesttInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;
  const std::initializer_list<typename TypeParam::value_type>& init_list_b =
      ContainersSwapSaveItersTesttInitLists<
          typename TypeParam::value_type>::data_init_list_size_0_;

  TypeParam cont_a(init_list_a);
  TypeParam cont_b(init_list_b);

  auto iters_a = GetIterators(cont_a);
  auto iters_b = GetIterators(cont_b);
  iters_a.pop_back();
  iters_b.pop_back();

  cont_a.swap(cont_b);

  iters_a.push_back(cont_b.end());
  iters_b.push_back(cont_a.end());

  auto exp_iters_a = GetIterators(cont_b);
  auto exp_iters_b = GetIterators(cont_a);

  ASSERT_TRUE(IteratorsEq<TypeParam>(iters_a, exp_iters_a));
  ASSERT_TRUE(IteratorsEq<TypeParam>(iters_b, exp_iters_b));
}

TYPED_TEST(ContainersSwapSaveItersTest, A0B8) {
  const std::initializer_list<typename TypeParam::value_type>& init_list_a =
      ContainersSwapSaveItersTesttInitLists<
          typename TypeParam::value_type>::data_init_list_size_0_;
  const std::initializer_list<typename TypeParam::value_type>& init_list_b =
      ContainersSwapSaveItersTesttInitLists<
          typename TypeParam::value_type>::data_init_list_size_8_;

  TypeParam cont_a(init_list_a);
  TypeParam cont_b(init_list_b);

  auto iters_a = GetIterators(cont_a);
  auto iters_b = GetIterators(cont_b);
  iters_a.pop_back();
  iters_b.pop_back();

  cont_a.swap(cont_b);

  iters_a.push_back(cont_b.end());
  iters_b.push_back(cont_a.end());

  auto exp_iters_a = GetIterators(cont_b);
  auto exp_iters_b = GetIterators(cont_a);

  ASSERT_TRUE(IteratorsEq<TypeParam>(iters_a, exp_iters_a));
  ASSERT_TRUE(IteratorsEq<TypeParam>(iters_b, exp_iters_b));
}
