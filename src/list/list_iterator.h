// declaration class ListIterator

#ifndef STLC_LIST_LIST_ITERATOR_H_
#define STLC_LIST_LIST_ITERATOR_H_

#include "list_const_iterator.h"
#include "list_node.h"

namespace stlc {

template <typename T>
class list;

/// @brief List iterator
/// @tparam T value_type
/// @tparam RT reference_type
/// @tparam CRT const_reference type
/// @tparam PT pointer type
/// @tparam CPT const_pointer type
template <typename T, typename RT, typename CRT, typename PT, typename CPT>
class ListIterator {
 private:
  using Node = ListNode<T, RT, CRT, PT, CPT>;
  friend list<T>;

 public:
  using value_type = T;
  using reference = RT;
  using const_reference = CRT;
  using pointer = PT;
  using const_pointer = CPT;

  ListIterator();
  ListIterator(Node* node);
  ListIterator(const ListIterator& other) = default;
  ListIterator(ListIterator&& other) noexcept = default;
  ListIterator& operator=(const ListIterator& other) = default;
  ListIterator& operator=(ListIterator&& other) noexcept = default;
  virtual ~ListIterator();

  bool operator==(const ListIterator& other) const;
  bool operator!=(const ListIterator& other) const;

  reference operator*() const;
  ListIterator& operator++();
  ListIterator& operator--();

  operator ListConstIterator<T, RT, CRT, PT, CPT>() const;

 protected:
  Node* GetNode();
  const Node* GetNode() const;

 private:
  Node* node_;
};

}  // namespace stlc

#include "list_iterator.inc"

#endif  // STLC_LIST_LIST_ITERATOR_H_
