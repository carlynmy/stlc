
#ifndef STLC_TESTS_TESTS_H
#define STLC_TESTS_TESTS_H

#include <gtest/gtest.h>

#include <initializer_list>
#include <map>
#include <set>
#include <string>
#include <vector>

#include "../include/list.h"
#include "../include/queue.h"
#include "../include/stack.h"
#include "../include/vector.h"
#include "class_no_default_ctor.h"
#include "class_sort_by_one_field.h"

namespace containers {

template <typename T>
using vector = stlc::vector<T>;

template <typename T>
using list = stlc::list<T>;

template <typename T, typename Key>
using map = std::map<T, Key>;

template <typename T>
using set = std::set<T>;

template <typename T, typename Cont = list<T>>
using queue = stlc::queue<T, Cont>;

template <typename T, typename Cont = vector<T>>
using stack = stlc::stack<T, Cont>;

}  // namespace containers

template <typename Cont>
using Iterators = std::vector<typename Cont::const_iterator>;

using IteratorIdxs = std::vector<int>;

template <typename T>
class ContainersTest : public testing::Test {};

template <typename T>
bool ContainersEq(const containers::list<T>& a, const containers::list<T>& b);
template <typename T>
bool ContainersEq(const containers::vector<T>& a,
                  const containers::vector<T>& b);
template <typename T, typename Key>
bool ContainersEq(const containers::map<T, Key>& a,
                  const containers::map<T, Key>& b);
template <typename T>
bool ContainersEq(const containers::set<T>& a, const containers::set<T>& b);
template <typename T, typename Cont>
bool ContainersEq(const containers::queue<T, Cont>& a,
                  const containers::queue<T, Cont>& b);
template <typename T, typename Cont>
bool ContainersEq(const containers::stack<T, Cont>& a,
                  const containers::stack<T, Cont>& b);

template <typename Cont>
bool ContainersEqDefault(const Cont& a, const Cont& b);

template <typename Cont>
Iterators<Cont> GetIterators(const Cont& cont);

template <typename Cont>
Iterators<Cont> TranslateIterators(const Iterators<Cont>& iters,
                                   const IteratorIdxs& idxs);

template <typename Cont>
Iterators<Cont> TranslateIteratorsDouble(const Iterators<Cont>& a,
                                         const Iterators<Cont>& b,
                                         const IteratorIdxs& idxs);

template <typename Cont>
Iterators<Cont> RemoveIterators(const Iterators<Cont>& iters,
                                const IteratorIdxs& idxs);

template <typename Cont>
bool IteratorsEq(const Iterators<Cont>& a, const Iterators<Cont>& b);

template <typename T>
bool ContEqInitlist(
    const containers::list<T>& cont,
    const std::initializer_list<typename containers::list<T>::value_type>&
        init_list);
template <typename T>
bool ContEqInitlist(
    const containers::vector<T>& cont,
    const std::initializer_list<typename containers::vector<T>::value_type>&
        init_list);
template <typename T, typename Key>
bool ContEqInitlist(
    const containers::map<T, Key>& cont,
    const std::initializer_list<typename containers::map<T, Key>::value_type>&
        init_list);
template <typename T>
bool ContEqInitlist(
    const containers::set<T>& cont,
    const std::initializer_list<typename containers::set<T>::value_type>&
        init_list);
template <typename T, typename Cont>
bool ContEqInitlist(
    const containers::queue<T, Cont>& cont,
    const std::initializer_list<
        typename containers::queue<T, Cont>::value_type>& init_list);
template <typename T, typename Cont>
bool ContEqInitlist(
    const containers::stack<T, Cont>& cont,
    const std::initializer_list<
        typename containers::stack<T, Cont>::value_type>& init_list);

template <typename Cont>
bool ContEqInitlistDefault(
    const Cont& cont,
    const std::initializer_list<typename Cont::value_type>& init_list);

#include "tests.inc"

#endif  // STLC_TESTS_TESTS_H
