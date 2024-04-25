#include "vector_test.h"

TYPED_TEST(VectorElementAccessTest, ConstIteratorPlusReadSize0) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorElementAccessTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_0_;

  TypeParam vec(init_list);
  ASSERT_EQ(vec.size(), init_list.size());

  auto list_iter = init_list.begin();
  typename TypeParam::const_iterator iter = vec.begin();
  for (int i = 0; iter + i != vec.end(); ++i) {
    ASSERT_EQ(*(iter + i), *list_iter);
    ++list_iter;
  }
}

TYPED_TEST(VectorElementAccessTest, ConstIteratorPlusReadSize1) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorElementAccessTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_1_;

  TypeParam vec(init_list);
  ASSERT_EQ(vec.size(), init_list.size());

  auto list_iter = init_list.begin();
  typename TypeParam::const_iterator iter = vec.begin();
  for (int i = 0; iter + i != vec.end(); ++i) {
    ASSERT_EQ(*(iter + i), *list_iter);
    ++list_iter;
  }
}

TYPED_TEST(VectorElementAccessTest, ConstIteratorPlusReadSize4) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorElementAccessTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;

  TypeParam vec(init_list);
  ASSERT_EQ(vec.size(), init_list.size());

  auto list_iter = init_list.begin();
  typename TypeParam::const_iterator iter = vec.begin();
  for (int i = 0; iter + i != vec.end(); ++i) {
    ASSERT_EQ(*(iter + i), *list_iter);
    ++list_iter;
  }
}

TYPED_TEST(VectorElementAccessTest, IteratorPlusReadSize0) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorElementAccessTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_0_;

  TypeParam vec(init_list);
  ASSERT_EQ(vec.size(), init_list.size());

  auto list_iter = init_list.begin();
  typename TypeParam::iterator iter = vec.begin();
  for (int i = 0; iter + i != vec.end(); ++i) {
    ASSERT_EQ(*(iter + i), *list_iter);
    ++list_iter;
  }
}

TYPED_TEST(VectorElementAccessTest, IteratorPlusReadSize1) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorElementAccessTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_1_;

  TypeParam vec(init_list);
  ASSERT_EQ(vec.size(), init_list.size());

  auto list_iter = init_list.begin();
  typename TypeParam::iterator iter = vec.begin();
  for (int i = 0; iter + i != vec.end(); ++i) {
    ASSERT_EQ(*(iter + i), *list_iter);
    ++list_iter;
  }
}

TYPED_TEST(VectorElementAccessTest, IteratorPlusReadSize4) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorElementAccessTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;

  TypeParam vec(init_list);
  ASSERT_EQ(vec.size(), init_list.size());

  auto list_iter = init_list.begin();
  typename TypeParam::iterator iter = vec.begin();
  for (int i = 0; iter + i != vec.end(); ++i) {
    ASSERT_EQ(*(iter + i), *list_iter);
    ++list_iter;
  }
}

TYPED_TEST(VectorElementAccessTest, IteratorPlusWriteSize0) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorElementAccessTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_0_;
  const std::initializer_list<typename TypeParam::value_type>& init_list_2 =
      VectorElementAccessTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_0_;

  TypeParam vec(init_list);

  auto list_iter_2 = init_list_2.begin();
  typename TypeParam::iterator iter = vec.begin();
  for (int i = 0; iter + i != vec.end(); ++i) {
    *(iter + i) = *list_iter_2;
    ++list_iter_2;
  }

  list_iter_2 = init_list_2.begin();
  for (int i = 0; iter + i != vec.end(); ++i) {
    ASSERT_EQ(*(iter + i), *list_iter_2);
    ++list_iter_2;
  }
}

TYPED_TEST(VectorElementAccessTest, IteratorPlusWriteSize1) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorElementAccessTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_1_;
  const std::initializer_list<typename TypeParam::value_type>& init_list_2 =
      VectorElementAccessTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_1_2_;

  TypeParam vec(init_list);

  auto list_iter_2 = init_list_2.begin();
  typename TypeParam::iterator iter = vec.begin();
  for (int i = 0; iter + i != vec.end(); ++i) {
    *(iter + i) = *list_iter_2;
    ++list_iter_2;
  }

  list_iter_2 = init_list_2.begin();
  for (int i = 0; iter + i != vec.end(); ++i) {
    ASSERT_EQ(*(iter + i), *list_iter_2);
    ++list_iter_2;
  }
}

TYPED_TEST(VectorElementAccessTest, IteratorPlusWriteSize4) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorElementAccessTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;
  const std::initializer_list<typename TypeParam::value_type>& init_list_2 =
      VectorElementAccessTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_2_;

  TypeParam vec(init_list);

  auto list_iter_2 = init_list_2.begin();
  typename TypeParam::iterator iter = vec.begin();
  for (int i = 0; iter + i != vec.end(); ++i) {
    *(iter + i) = *list_iter_2;
    ++list_iter_2;
  }

  list_iter_2 = init_list_2.begin();
  for (int i = 0; iter + i != vec.end(); ++i) {
    ASSERT_EQ(*(iter + i), *list_iter_2);
    ++list_iter_2;
  }
}

TYPED_TEST(VectorElementAccessTest, OperatorBrPWriteSize0) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorElementAccessTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_0_;
  const std::initializer_list<typename TypeParam::value_type>& init_list_2 =
      VectorElementAccessTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_0_;

  TypeParam vec(init_list);

  auto list_iter = init_list_2.begin();
  for (int i = 0; i != (int)vec.size(); ++i) {
    vec[i] = *list_iter;
    ++list_iter;
  }

  list_iter = init_list_2.begin();
  for (int i = 0; i != (int)vec.size(); ++i) {
    ASSERT_EQ(vec[i], *list_iter);
    ++list_iter;
  }
}

TYPED_TEST(VectorElementAccessTest, OperatorBrPWriteSize1) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorElementAccessTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_1_;
  const std::initializer_list<typename TypeParam::value_type>& init_list_2 =
      VectorElementAccessTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_1_2_;

  TypeParam vec(init_list);

  auto list_iter = init_list_2.begin();
  for (int i = 0; i != (int)vec.size(); ++i) {
    vec[i] = *list_iter;
    ++list_iter;
  }

  list_iter = init_list_2.begin();
  for (int i = 0; i != (int)vec.size(); ++i) {
    ASSERT_EQ(vec[i], *list_iter);
    ++list_iter;
  }
}

TYPED_TEST(VectorElementAccessTest, OperatorBrPWriteSize4) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorElementAccessTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;
  const std::initializer_list<typename TypeParam::value_type>& init_list_2 =
      VectorElementAccessTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_2_;

  TypeParam vec(init_list);

  auto list_iter = init_list_2.begin();
  for (int i = 0; i != (int)vec.size(); ++i) {
    vec[i] = *list_iter;
    ++list_iter;
  }

  list_iter = init_list_2.begin();
  for (int i = 0; i != (int)vec.size(); ++i) {
    ASSERT_EQ(vec[i], *list_iter);
    ++list_iter;
  }
}

TYPED_TEST(VectorElementAccessTest, OperatorBrReadSize0) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorElementAccessTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_0_;

  TypeParam vec(init_list);

  auto list_iter = init_list.begin();
  for (int i = 0; i != (int)vec.size(); ++i) {
    ASSERT_EQ(vec[i], *list_iter);
    ++list_iter;
  }
}

TYPED_TEST(VectorElementAccessTest, OperatorBrReadSize1) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorElementAccessTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_1_;

  TypeParam vec(init_list);

  auto list_iter = init_list.begin();
  for (int i = 0; i != (int)vec.size(); ++i) {
    ASSERT_EQ(vec[i], *list_iter);
    ++list_iter;
  }
}

TYPED_TEST(VectorElementAccessTest, OperatorBrReadSize4) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorElementAccessTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;

  TypeParam vec(init_list);

  auto list_iter = init_list.begin();
  for (int i = 0; i != (int)vec.size(); ++i) {
    ASSERT_EQ(vec[i], *list_iter);
    ++list_iter;
  }
}

TYPED_TEST(VectorElementAccessTest, COperatorBrReadSize0) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorElementAccessTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_0_;

  TypeParam vec(init_list);
  const TypeParam& cvec = vec;

  auto list_iter = init_list.begin();
  for (int i = 0; i != (int)vec.size(); ++i) {
    ASSERT_EQ(cvec[i], *list_iter);
    ++list_iter;
  }
}

TYPED_TEST(VectorElementAccessTest, COperatorBrReadSize1) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorElementAccessTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_1_;

  TypeParam vec(init_list);
  const TypeParam& cvec = vec;

  auto list_iter = init_list.begin();
  for (int i = 0; i != (int)vec.size(); ++i) {
    ASSERT_EQ(cvec[i], *list_iter);
    ++list_iter;
  }
}

TYPED_TEST(VectorElementAccessTest, COperatorBrReadSize4) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorElementAccessTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;

  TypeParam vec(init_list);
  const TypeParam& cvec = vec;

  auto list_iter = init_list.begin();
  for (int i = 0; i != (int)vec.size(); ++i) {
    ASSERT_EQ(cvec[i], *list_iter);
    ++list_iter;
  }
}

TYPED_TEST(VectorElementAccessHasDataTest, DataPWriteSize0) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorElementAccessHasDataTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_0_;
  const std::initializer_list<typename TypeParam::value_type>& init_list_2 =
      VectorElementAccessHasDataTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_0_;

  TypeParam vec(init_list);

  auto list_iter = init_list_2.begin();
  for (int i = 0; i != (int)vec.size(); ++i) {
    vec.data()[i] = *list_iter;
    ++list_iter;
  }

  list_iter = init_list_2.begin();
  for (int i = 0; i != (int)vec.size(); ++i) {
    ASSERT_EQ(vec.data()[i], *list_iter);
    ++list_iter;
  }
}

TYPED_TEST(VectorElementAccessHasDataTest, DataPWriteSize1) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorElementAccessHasDataTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_1_;
  const std::initializer_list<typename TypeParam::value_type>& init_list_2 =
      VectorElementAccessHasDataTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_1_2_;

  TypeParam vec(init_list);

  auto list_iter = init_list_2.begin();
  for (int i = 0; i != (int)vec.size(); ++i) {
    vec.data()[i] = *list_iter;
    ++list_iter;
  }

  list_iter = init_list_2.begin();
  for (int i = 0; i != (int)vec.size(); ++i) {
    ASSERT_EQ(vec.data()[i], *list_iter);
    ++list_iter;
  }
}

TYPED_TEST(VectorElementAccessHasDataTest, DataPWriteSize4) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorElementAccessHasDataTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;
  const std::initializer_list<typename TypeParam::value_type>& init_list_2 =
      VectorElementAccessHasDataTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_2_;

  TypeParam vec(init_list);

  auto list_iter = init_list_2.begin();
  for (int i = 0; i != (int)vec.size(); ++i) {
    vec.data()[i] = *list_iter;
    ++list_iter;
  }

  list_iter = init_list_2.begin();
  for (int i = 0; i != (int)vec.size(); ++i) {
    ASSERT_EQ(vec.data()[i], *list_iter);
    ++list_iter;
  }
}

TYPED_TEST(VectorElementAccessHasDataTest, DataReadSize0) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorElementAccessHasDataTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_0_;

  TypeParam vec(init_list);

  auto list_iter = init_list.begin();
  for (int i = 0; i != (int)vec.size(); ++i) {
    ASSERT_EQ(vec.data()[i], *list_iter);
    ++list_iter;
  }
}

TYPED_TEST(VectorElementAccessHasDataTest, DataReadSize1) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorElementAccessHasDataTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_1_;

  TypeParam vec(init_list);

  auto list_iter = init_list.begin();
  for (int i = 0; i != (int)vec.size(); ++i) {
    ASSERT_EQ(vec.data()[i], *list_iter);
    ++list_iter;
  }
}

TYPED_TEST(VectorElementAccessHasDataTest, DataReadSize4) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorElementAccessHasDataTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;

  TypeParam vec(init_list);

  auto list_iter = init_list.begin();
  for (int i = 0; i != (int)vec.size(); ++i) {
    ASSERT_EQ(vec.data()[i], *list_iter);
    ++list_iter;
  }
}

TYPED_TEST(VectorElementAccessHasDataTest, CDataReadSize0) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorElementAccessHasDataTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_0_;

  TypeParam vec(init_list);
  const TypeParam& cvec = vec;

  auto list_iter = init_list.begin();
  for (int i = 0; i != (int)vec.size(); ++i) {
    ASSERT_EQ(cvec.data()[i], *list_iter);
    ++list_iter;
  }
}

TYPED_TEST(VectorElementAccessHasDataTest, CDataReadSize1) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorElementAccessHasDataTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_1_;

  TypeParam vec(init_list);
  const TypeParam& cvec = vec;

  auto list_iter = init_list.begin();
  for (int i = 0; i != (int)vec.size(); ++i) {
    ASSERT_EQ(cvec.data()[i], *list_iter);
    ++list_iter;
  }
}

TYPED_TEST(VectorElementAccessHasDataTest, CDataReadSize4) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorElementAccessHasDataTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;

  TypeParam vec(init_list);
  const TypeParam& cvec = vec;

  auto list_iter = init_list.begin();
  for (int i = 0; i != (int)vec.size(); ++i) {
    ASSERT_EQ(cvec.data()[i], *list_iter);
    ++list_iter;
  }
}

TYPED_TEST(VectorElementAccessTest, AtWriteSize0) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorElementAccessTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_0_;
  const std::initializer_list<typename TypeParam::value_type>& init_list_2 =
      VectorElementAccessTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_0_;

  TypeParam vec(init_list);

  auto list_iter = init_list_2.begin();
  for (int i = 0; i != (int)vec.size(); ++i) {
    vec.at(i) = *list_iter;
    ++list_iter;
  }

  list_iter = init_list_2.begin();
  for (int i = 0; i != (int)vec.size(); ++i) {
    ASSERT_EQ(vec.at(i), *list_iter);
    ++list_iter;
  }
}

TYPED_TEST(VectorElementAccessTest, AtWriteSize1) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorElementAccessTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_1_;
  const std::initializer_list<typename TypeParam::value_type>& init_list_2 =
      VectorElementAccessTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_1_2_;

  TypeParam vec(init_list);

  auto list_iter = init_list_2.begin();
  for (int i = 0; i != (int)vec.size(); ++i) {
    vec.at(i) = *list_iter;
    ++list_iter;
  }

  list_iter = init_list_2.begin();
  for (int i = 0; i != (int)vec.size(); ++i) {
    ASSERT_EQ(vec.at(i), *list_iter);
    ++list_iter;
  }
}

TYPED_TEST(VectorElementAccessTest, AtWriteSize4) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorElementAccessTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;
  const std::initializer_list<typename TypeParam::value_type>& init_list_2 =
      VectorElementAccessTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_2_;

  TypeParam vec(init_list);

  auto list_iter = init_list_2.begin();
  for (int i = 0; i != (int)vec.size(); ++i) {
    vec.at(i) = *list_iter;
    ++list_iter;
  }

  list_iter = init_list_2.begin();
  for (int i = 0; i != (int)vec.size(); ++i) {
    ASSERT_EQ(vec.at(i), *list_iter);
    ++list_iter;
  }
}

TYPED_TEST(VectorElementAccessTest, AtReadSize0) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorElementAccessTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_0_;

  TypeParam vec(init_list);

  auto list_iter = init_list.begin();
  for (int i = 0; i != (int)vec.size(); ++i) {
    ASSERT_EQ(vec.at(i), *list_iter);
    ++list_iter;
  }
}

TYPED_TEST(VectorElementAccessTest, AtReadSize1) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorElementAccessTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_1_;

  TypeParam vec(init_list);

  auto list_iter = init_list.begin();
  for (int i = 0; i != (int)vec.size(); ++i) {
    ASSERT_EQ(vec.at(i), *list_iter);
    ++list_iter;
  }
}

TYPED_TEST(VectorElementAccessTest, AtReadSize4) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorElementAccessTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;

  TypeParam vec(init_list);

  auto list_iter = init_list.begin();
  for (int i = 0; i != (int)vec.size(); ++i) {
    ASSERT_EQ(vec.at(i), *list_iter);
    ++list_iter;
  }
}

TYPED_TEST(VectorElementAccessTest, CAtReadSize0) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorElementAccessTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_0_;

  TypeParam vec(init_list);
  const TypeParam& cvec = vec;

  auto list_iter = init_list.begin();
  for (int i = 0; i != (int)vec.size(); ++i) {
    ASSERT_EQ(cvec.at(i), *list_iter);
    ++list_iter;
  }
}

TYPED_TEST(VectorElementAccessTest, CAtReadSize1) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorElementAccessTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_1_;

  TypeParam vec(init_list);
  const TypeParam& cvec = vec;

  auto list_iter = init_list.begin();
  for (int i = 0; i != (int)vec.size(); ++i) {
    ASSERT_EQ(cvec.at(i), *list_iter);
    ++list_iter;
  }
}

TYPED_TEST(VectorElementAccessTest, CAtReadSize4) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorElementAccessTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;

  TypeParam vec(init_list);
  const TypeParam& cvec = vec;

  auto list_iter = init_list.begin();
  for (int i = 0; i != (int)vec.size(); ++i) {
    ASSERT_EQ(cvec.at(i), *list_iter);
    ++list_iter;
  }
}

TYPED_TEST(VectorElementAccessTest, CAtReadExceptSize0) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorElementAccessTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_0_;
  TypeParam vec(init_list);
  const TypeParam& cvec = vec;
  ASSERT_THROW(cvec.at(0), std::out_of_range);
}

TYPED_TEST(VectorElementAccessTest, CAtReadExceptSize1) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorElementAccessTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_1_;
  TypeParam vec(init_list);
  const TypeParam& cvec = vec;
  ASSERT_THROW(cvec.at(1), std::out_of_range);
}

TYPED_TEST(VectorElementAccessTest, CAtReadExceptSize4) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorElementAccessTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;
  TypeParam vec(init_list);
  const TypeParam& cvec = vec;
  ASSERT_THROW(cvec.at(10), std::out_of_range);
}

TYPED_TEST(VectorElementAccessTest, AtReadExceptSize0) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorElementAccessTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_0_;
  TypeParam vec(init_list);
  ASSERT_THROW(vec.at(0), std::out_of_range);
}

TYPED_TEST(VectorElementAccessTest, AtReadExceptSize1) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorElementAccessTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_1_;
  TypeParam vec(init_list);
  ASSERT_THROW(vec.at(1), std::out_of_range);
}

TYPED_TEST(VectorElementAccessTest, AtReadExceptSize4) {
  const std::initializer_list<typename TypeParam::value_type>& init_list =
      VectorElementAccessTestInitLists<
          typename TypeParam::value_type>::data_init_list_size_4_;
  TypeParam vec(init_list);
  ASSERT_THROW(vec.at(10), std::out_of_range);
}
