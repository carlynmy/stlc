#include "stack_test.h"

TYPED_TEST(StackCommonTest, Common) {
  const typename TypeParam::value_type& value_1 =
      StackCommonTestValues<typename TypeParam::value_type>::value_1_;
  const typename TypeParam::value_type& value_2 =
      StackCommonTestValues<typename TypeParam::value_type>::value_2_;
  const typename TypeParam::value_type& value_3 =
      StackCommonTestValues<typename TypeParam::value_type>::value_3_;
  const typename TypeParam::value_type& value_4 =
      StackCommonTestValues<typename TypeParam::value_type>::value_4_;

  TypeParam stack;
  const TypeParam& cstack = stack;

  stack.push(value_1);
  ASSERT_EQ(stack.size(), 1);
  ASSERT_EQ(stack.top(), value_1);
  ASSERT_EQ(cstack.top(), value_1);

  stack.push(value_2);
  ASSERT_EQ(stack.size(), 2);
  ASSERT_EQ(stack.top(), value_2);
  ASSERT_EQ(cstack.top(), value_2);

  stack.top() = value_3;
  ASSERT_EQ(stack.size(), 2);
  ASSERT_EQ(stack.top(), value_3);
  ASSERT_EQ(cstack.top(), value_3);

  stack.pop();
  ASSERT_EQ(stack.size(), 1);
  ASSERT_EQ(stack.top(), value_1);
  ASSERT_EQ(cstack.top(), value_1);

  stack.push(value_4);
  ASSERT_EQ(stack.size(), 2);
  ASSERT_EQ(stack.top(), value_4);
  ASSERT_EQ(cstack.top(), value_4);

  stack.pop();
  stack.pop();

  ASSERT_TRUE(cstack.empty());
}
