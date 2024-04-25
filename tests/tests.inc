#include "tests.h"

template <typename T>
bool ContainersEq(const containers::list<T>& a, const containers::list<T>& b) {
  return ContainersEqDefault(a, b);
}

template <typename T>
bool ContainersEq(const containers::vector<T>& a,
                  const containers::vector<T>& b) {
  return ContainersEqDefault(a, b);
}

template <typename T, typename Key>
bool ContainersEq(const containers::map<T, Key>& a,
                  const containers::map<T, Key>& b) {
  return ContainersEqDefault(a, b);
}

template <typename T>
bool ContainersEq(const containers::set<T>& a, const containers::set<T>& b) {
  return ContainersEqDefault(a, b);
}

template <typename T, typename Cont>
bool ContainersEq(const containers::queue<T, Cont>& a,
                  const containers::queue<T, Cont>& b) {
  if (a.size() != b.size()) return false;

  containers::queue<T, Cont> aa(a);
  containers::queue<T, Cont> bb(b);

  while (!aa.empty()) {
    if (aa.front() != bb.front()) return false;
    aa.pop();
    bb.pop();
  }

  return true;
}

template <typename T, typename Cont>
bool ContainersEq(const containers::stack<T, Cont>& a,
                  const containers::stack<T, Cont>& b) {
  if (a.size() != b.size()) return false;

  containers::stack<T, Cont> aa(a);
  containers::stack<T, Cont> bb(b);

  while (!aa.empty()) {
    if (aa.top() != bb.top()) return false;
    aa.pop();
    bb.pop();
  }

  return true;
}

template <typename Cont>
bool ContainersEqDefault(const Cont& a, const Cont& b) {
  if (a.size() != b.size()) return false;
  auto ai = a.begin();
  auto bi = b.begin();
  while (ai != a.end()) {
    if (*ai != *bi) return false;
    ++ai;
    ++bi;
  }
  return true;
}

template <typename Cont>
Iterators<Cont> GetIterators(const Cont& cont) {
  Iterators<Cont> iters;

  auto i = cont.begin();
  for (; i != cont.end(); ++i) iters.push_back(i);
  iters.push_back(cont.end());

  return iters;
}

template <typename Cont>
Iterators<Cont> TranslateIterators(const Iterators<Cont>& iters,
                                   const IteratorIdxs& idxs) {
  Iterators<Cont> res(iters.size());

  auto iters_i = iters.begin();
  auto idxs_i = idxs.begin();
  for (; iters_i != iters.end(); ++iters_i, ++idxs_i) {
    res[*idxs_i] = *iters_i;
  }

  return res;
}

template <typename Cont>
Iterators<Cont> TranslateIteratorsDouble(const Iterators<Cont>& a,
                                         const Iterators<Cont>& b,
                                         const IteratorIdxs& idxs) {
  Iterators<Cont> tmp = a;
  for (auto i : b) tmp.push_back(i);
  tmp.pop_back();

  Iterators<Cont> res(tmp.size());

  auto idxs_i = idxs.begin();
  auto res_i = res.begin();
  while (res_i != res.end()) {
    *res_i = tmp[*idxs_i];

    ++idxs_i;
    ++res_i;
  }

  return res;
}

template <typename Cont>
Iterators<Cont> RemoveIterators(const Iterators<Cont>& iters,
                                const IteratorIdxs& idxs) {
  Iterators<Cont> res = iters;
  int rm_count = 0;
  for (auto i : idxs) {
    int curr_idx = i - rm_count;
    res.erase(res.begin() + curr_idx);
    ++rm_count;
  }

  return res;
}

template <typename Cont>
bool IteratorsEq(const Iterators<Cont>& a, const Iterators<Cont>& b) {
  if (a.size() != b.size()) return false;
  auto ai = a.begin();
  auto bi = b.begin();
  while (ai != a.end()) {
    if (*ai != *bi) return false;
    ++ai;
    ++bi;
  }

  return true;
}

template <typename T>
bool ContEqInitlist(
    const containers::list<T>& cont,
    const std::initializer_list<typename containers::list<T>::value_type>&
        init_list) {
  return ContEqInitlistDefault<containers::list<T>>(cont, init_list);
}

template <typename T>
bool ContEqInitlist(
    const containers::vector<T>& cont,
    const std::initializer_list<typename containers::vector<T>::value_type>&
        init_list) {
  return ContEqInitlistDefault<containers::vector<T>>(cont, init_list);
}

template <typename T, typename Key>
bool ContEqInitlist(
    const containers::map<T, Key>& cont,
    const std::initializer_list<typename containers::map<T, Key>::value_type>&
        init_list) {
  return ContEqInitlistDefault<containers::map<T, Key>>(cont, init_list);
}

template <typename T>
bool ContEqInitlist(
    const containers::set<T>& cont,
    const std::initializer_list<typename containers::set<T>::value_type>&
        init_list) {
  return ContEqInitlistDefault<containers::set<T>>(cont, init_list);
}

template <typename T, typename Cont>
bool ContEqInitlist(
    const containers::queue<T, Cont>& cont,
    const std::initializer_list<
        typename containers::queue<T, Cont>::value_type>& init_list) {
  if (cont.size() != init_list.size()) return false;
  if (cont.size() == 0) return true;

  containers::queue<T, Cont> a(cont);
  auto iter = init_list.begin();

  while (!a.empty()) {
    if (a.front() != *iter) return false;
    a.pop();
    ++iter;
  }

  return true;
}

template <typename T, typename Cont>
bool ContEqInitlist(
    const containers::stack<T, Cont>& cont,
    const std::initializer_list<
        typename containers::stack<T, Cont>::value_type>& init_list) {
  if (cont.size() != init_list.size()) return false;
  if (cont.size() == 0) return true;

  containers::stack<T, Cont> a(cont);
  auto iter = init_list.end();
  --iter;

  while (!a.empty()) {
    if (a.top() != *iter) return false;
    a.pop();
    --iter;
  }

  return true;
}

template <typename Cont>
bool ContEqInitlistDefault(
    const Cont& cont,
    const std::initializer_list<typename Cont::value_type>& init_list) {
  if (cont.size() != init_list.size()) return false;

  auto conti = cont.begin();
  auto listi = init_list.begin();
  while (conti != cont.end()) {
    if (*conti != *listi) return false;
    ++conti;
    ++listi;
  }

  return true;
}
