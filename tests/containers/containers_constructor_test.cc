#include "containers_test.h"

TYPED_TEST(ContainersConstructorTest, Default) {
  TypeParam cont;
  ASSERT_TRUE(cont.empty());
  ASSERT_EQ(cont.size(), typename TypeParam::size_type(0));
}

TYPED_TEST(ContainersConstructorTest, InitList0) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ContainersConstructorTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_0_;

  TypeParam cont(init_list);
  ASSERT_TRUE(ContEqInitlist(cont, init_list));
}

TYPED_TEST(ContainersConstructorTest, InitList4) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ContainersConstructorTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;

  TypeParam cont(init_list);
  ASSERT_TRUE(ContEqInitlist(cont, init_list));
}

TYPED_TEST(ContainersConstructorTest, Copy) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ContainersConstructorTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;

  TypeParam cont_a(init_list);
  TypeParam cont(cont_a);
  ASSERT_TRUE(ContainersEq(cont, cont_a));
}

TYPED_TEST(ContainersConstructorTest, CopyDefault) {
  TypeParam cont_a;
  TypeParam cont(cont_a);
  ASSERT_TRUE(ContainersEq(cont, cont_a));
}

TYPED_TEST(ContainersConstructorTest, CopyAssign) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ContainersConstructorTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;

  TypeParam cont_a(init_list);
  TypeParam cont;
  cont = cont_a;
  ASSERT_TRUE(ContainersEq(cont, cont_a));
}

TYPED_TEST(ContainersConstructorTest, CopyAssignDefault) {
  TypeParam cont_a;
  TypeParam cont;
  cont = cont_a;
  ASSERT_TRUE(ContainersEq(cont, cont_a));
}

TYPED_TEST(ContainersConstructorTest, Move) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ContainersConstructorTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;

  TypeParam cont_a(init_list);
  TypeParam cont_b(init_list);
  TypeParam cont(std::move(cont_b));
  ASSERT_TRUE(ContainersEq(cont, cont_a));
}

TYPED_TEST(ContainersConstructorTest, MoveDefault) {
  TypeParam cont_a;
  TypeParam cont_b;
  TypeParam cont(std::move(cont_b));
  ASSERT_TRUE(ContainersEq(cont, cont_a));
}

TYPED_TEST(ContainersConstructorTest, MoveAssign) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ContainersConstructorTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;

  TypeParam cont_a(init_list);
  TypeParam cont_b(init_list);
  TypeParam cont;
  cont = std::move(cont_b);
  ASSERT_TRUE(ContainersEq(cont, cont_a));
}

TYPED_TEST(ContainersConstructorTest, MoveAssignDefault) {
  TypeParam cont_a;
  TypeParam cont_b;
  TypeParam cont;
  cont = std::move(cont_b);
  ASSERT_TRUE(ContainersEq(cont, cont_a));
}

TYPED_TEST(ContainersConstructorMoveSaveItersTest, Move) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ContainersConstructorTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;

  TypeParam cont_a(init_list);
  TypeParam cont_b(init_list);

  auto iters_b = GetIterators(cont_b);
  iters_b.pop_back();

  TypeParam cont(std::move(cont_b));
  iters_b.push_back(cont.end());

  auto iters = GetIterators(cont);

  ASSERT_TRUE(ContainersEq(cont, cont_a));
  ASSERT_TRUE(IteratorsEq<TypeParam>(iters, iters_b));
}

TYPED_TEST(ContainersConstructorMoveSaveItersTest, MoveAssign) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      ContainersConstructorTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;

  TypeParam cont_a(init_list);
  TypeParam cont_b(init_list);

  auto iters_b = GetIterators(cont_b);
  iters_b.pop_back();

  TypeParam cont;
  cont = std::move(cont_b);
  iters_b.push_back(cont.end());

  auto iters = GetIterators(cont);

  ASSERT_TRUE(ContainersEq(cont, cont_a));
  ASSERT_TRUE(IteratorsEq<TypeParam>(iters, iters_b));
}
