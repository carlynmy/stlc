// declaration class ListConstIterator

#ifndef STLC_LIST_LIST_CONST_ITERATOR_H_
#define STLC_LIST_LIST_CONST_ITERATOR_H_

#include "list_node.h"

namespace stlc {

template <typename T>
class list;

/// @brief List const_iterator
/// @tparam T value_type
/// @tparam RT reference_type
/// @tparam CRT const_reference type
/// @tparam PT pointer type
/// @tparam CPT const_pointer type
template <typename T, typename RT, typename CRT, typename PT, typename CPT>
class ListConstIterator {
 private:
  using Node = ListNode<T, RT, CRT, PT, CPT>;
  friend list<T>;

 public:
  using value_type = T;
  using reference = RT;
  using const_reference = CRT;
  using pointer = PT;
  using const_pointer = CPT;

  ListConstIterator();
  ListConstIterator(Node* node);
  ListConstIterator(const ListConstIterator& other) = default;
  ListConstIterator(ListConstIterator&& other) noexcept = default;
  ListConstIterator& operator=(const ListConstIterator& other) = default;
  ListConstIterator& operator=(ListConstIterator&& other) noexcept = default;
  virtual ~ListConstIterator();

  bool operator==(const ListConstIterator& other) const;
  bool operator!=(const ListConstIterator& other) const;

  const_reference operator*() const;
  ListConstIterator& operator++();
  ListConstIterator& operator--();

 protected:
  Node* GetNode();
  const Node* GetNode() const;

 private:
  Node* node_;
};

}  // namespace stlc

#include "list_const_iterator.inc"

#endif  // STLC_LIST_LIST_CONST_ITERATOR_H_
