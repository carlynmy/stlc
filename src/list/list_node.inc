// implementation ListNode

#include "list_node.h"

namespace stlc {

template <typename T, typename RT, typename CRT, typename PT, typename CPT>
ListNode<T, RT, CRT, PT, CPT>::ListNode() : ListNode(nullptr, nullptr) {}

template <typename T, typename RT, typename CRT, typename PT, typename CPT>
ListNode<T, RT, CRT, PT, CPT>::ListNode(ListNode* prev, ListNode* next)
    : prev_(prev), next_(next), value_(nullptr) {}

template <typename T, typename RT, typename CRT, typename PT, typename CPT>
ListNode<T, RT, CRT, PT, CPT>::ListNode(ListNode* prev, ListNode* next,
                                        const_reference value)
    : prev_(prev), next_(next), value_(new value_type(value)) {}

template <typename T, typename RT, typename CRT, typename PT, typename CPT>
ListNode<T, RT, CRT, PT, CPT>::ListNode(const ListNode& other)
    : prev_(other.prev_), next_(other.next_) {
  if (other.value_)
    value_ = new value_type(other.GetValue());
  else
    value_ = nullptr;
}

template <typename T, typename RT, typename CRT, typename PT, typename CPT>
ListNode<T, RT, CRT, PT, CPT>::ListNode(ListNode&& other) noexcept
    : prev_(other.prev_), next_(other.next_), value_(other.value_) {
  other.value_ = nullptr;
}

template <typename T, typename RT, typename CRT, typename PT, typename CPT>
ListNode<T, RT, CRT, PT, CPT>& ListNode<T, RT, CRT, PT, CPT>::operator=(
    const ListNode& other) {
  if (this == &other) return *this;

  if (value_) delete value_;

  prev_ = other.prev_;
  next_ = other.next_;
  if (other.value_)
    value_ = new value_type(other.GetValue());
  else
    value_ = nullptr;

  return *this;
}

template <typename T, typename RT, typename CRT, typename PT, typename CPT>
ListNode<T, RT, CRT, PT, CPT>& ListNode<T, RT, CRT, PT, CPT>::operator=(
    ListNode&& other) noexcept {
  if (this == &other) return *this;

  if (value_) delete value_;

  prev_ = other.prev_;
  next_ = other.next_;
  value_ = other.value_;
  other.value_ = nullptr;

  return *this;
}

template <typename T, typename RT, typename CRT, typename PT, typename CPT>
ListNode<T, RT, CRT, PT, CPT>::~ListNode() {
  if (value_) delete value_;
}

template <typename T, typename RT, typename CRT, typename PT, typename CPT>
ListNode<T, RT, CRT, PT, CPT>* ListNode<T, RT, CRT, PT, CPT>::GetPrev() {
  return prev_;
}

template <typename T, typename RT, typename CRT, typename PT, typename CPT>
ListNode<T, RT, CRT, PT, CPT>* ListNode<T, RT, CRT, PT, CPT>::GetNext() {
  return next_;
}

template <typename T, typename RT, typename CRT, typename PT, typename CPT>
typename ListNode<T, RT, CRT, PT, CPT>::reference
ListNode<T, RT, CRT, PT, CPT>::GetValue() {
  return *value_;
}

template <typename T, typename RT, typename CRT, typename PT, typename CPT>
typename ListNode<T, RT, CRT, PT, CPT>::const_reference
ListNode<T, RT, CRT, PT, CPT>::GetValue() const {
  return const_reference(*value_);
}

template <typename T, typename RT, typename CRT, typename PT, typename CPT>
void ListNode<T, RT, CRT, PT, CPT>::SetPrev(ListNode* prev) {
  prev_ = prev;
}
template <typename T, typename RT, typename CRT, typename PT, typename CPT>
void ListNode<T, RT, CRT, PT, CPT>::SetNext(ListNode* next) {
  next_ = next;
}
template <typename T, typename RT, typename CRT, typename PT, typename CPT>
void ListNode<T, RT, CRT, PT, CPT>::SetValue(const_reference value) {
  if (value_) delete value_;
  value_ = new value_type(value);
}

}  // namespace stlc
