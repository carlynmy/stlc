#include "queue_test.h"

TYPED_TEST(QueueCommonTest, Common) {
  const typename TypeParam::value_type& value_1 =
      QueueCommonTestValues<typename TypeParam::value_type>::value_1_;
  const typename TypeParam::value_type& value_2 =
      QueueCommonTestValues<typename TypeParam::value_type>::value_2_;
  const typename TypeParam::value_type& value_3 =
      QueueCommonTestValues<typename TypeParam::value_type>::value_3_;
  const typename TypeParam::value_type& value_4 =
      QueueCommonTestValues<typename TypeParam::value_type>::value_4_;

  TypeParam queue;
  const TypeParam& cqueue = queue;

  queue.push(value_1);
  queue.push(value_2);
  ASSERT_EQ(queue.front(), value_1);
  ASSERT_EQ(cqueue.front(), value_1);
  ASSERT_EQ(queue.back(), value_2);
  ASSERT_EQ(cqueue.back(), value_2);
  ASSERT_EQ(cqueue.size(), 2);

  queue.front() = value_3;
  queue.back() = value_4;
  ASSERT_EQ(queue.front(), value_3);
  ASSERT_EQ(cqueue.front(), value_3);
  ASSERT_EQ(queue.back(), value_4);
  ASSERT_EQ(cqueue.back(), value_4);
  ASSERT_EQ(cqueue.size(), 2);

  queue.push(value_1);
  ASSERT_EQ(queue.front(), value_3);
  ASSERT_EQ(cqueue.front(), value_3);
  ASSERT_EQ(queue.back(), value_1);
  ASSERT_EQ(cqueue.back(), value_1);
  ASSERT_EQ(cqueue.size(), 3);

  queue.pop();
  ASSERT_EQ(queue.front(), value_4);
  ASSERT_EQ(cqueue.front(), value_4);
  ASSERT_EQ(queue.back(), value_1);
  ASSERT_EQ(cqueue.back(), value_1);
  ASSERT_EQ(cqueue.size(), 2);

  queue.pop();
  ASSERT_EQ(queue.front(), value_1);
  ASSERT_EQ(cqueue.front(), value_1);
  ASSERT_EQ(queue.back(), value_1);
  ASSERT_EQ(cqueue.back(), value_1);
  ASSERT_EQ(cqueue.size(), 1);

  queue.pop();
  ASSERT_EQ(cqueue.size(), 0);
}
