// implementation class ListConstIterator

#include "list_const_iterator.h"

namespace stlc {

template <typename T, typename RT, typename CRT, typename PT, typename CPT>
ListConstIterator<T, RT, CRT, PT, CPT>::ListConstIterator()
    : ListConstIterator(nullptr) {}

template <typename T, typename RT, typename CRT, typename PT, typename CPT>
ListConstIterator<T, RT, CRT, PT, CPT>::ListConstIterator(Node* node)
    : node_(node) {}

template <typename T, typename RT, typename CRT, typename PT, typename CPT>
ListConstIterator<T, RT, CRT, PT, CPT>::~ListConstIterator() {}

template <typename T, typename RT, typename CRT, typename PT, typename CPT>
bool ListConstIterator<T, RT, CRT, PT, CPT>::operator==(
    const ListConstIterator& other) const {
  return (node_ == other.node_);
}

template <typename T, typename RT, typename CRT, typename PT, typename CPT>
bool ListConstIterator<T, RT, CRT, PT, CPT>::operator!=(
    const ListConstIterator& other) const {
  return !this->operator==(other);
}

template <typename T, typename RT, typename CRT, typename PT, typename CPT>
typename ListConstIterator<T, RT, CRT, PT, CPT>::const_reference
ListConstIterator<T, RT, CRT, PT, CPT>::operator*() const {
  return node_->GetValue();
}

template <typename T, typename RT, typename CRT, typename PT, typename CPT>
ListConstIterator<T, RT, CRT, PT, CPT>&
ListConstIterator<T, RT, CRT, PT, CPT>::operator++() {
  node_ = node_->GetNext();
  return *this;
}

template <typename T, typename RT, typename CRT, typename PT, typename CPT>
ListConstIterator<T, RT, CRT, PT, CPT>&
ListConstIterator<T, RT, CRT, PT, CPT>::operator--() {
  node_ = node_->GetPrev();
  return *this;
}

template <typename T, typename RT, typename CRT, typename PT, typename CPT>
typename ListConstIterator<T, RT, CRT, PT, CPT>::Node*
ListConstIterator<T, RT, CRT, PT, CPT>::GetNode() {
  return node_;
}

template <typename T, typename RT, typename CRT, typename PT, typename CPT>
const typename ListConstIterator<T, RT, CRT, PT, CPT>::Node*
ListConstIterator<T, RT, CRT, PT, CPT>::GetNode() const {
  return node_;
}

}  // namespace stlc
