// implementation class ListIterator

#include "list_const_iterator.h"
#include "list_iterator.h"

namespace stlc {

template <typename T, typename RT, typename CRT, typename PT, typename CPT>
ListIterator<T, RT, CRT, PT, CPT>::ListIterator() : ListIterator(nullptr) {}

template <typename T, typename RT, typename CRT, typename PT, typename CPT>
ListIterator<T, RT, CRT, PT, CPT>::ListIterator(Node* node) : node_(node) {}

template <typename T, typename RT, typename CRT, typename PT, typename CPT>
ListIterator<T, RT, CRT, PT, CPT>::~ListIterator() {}

template <typename T, typename RT, typename CRT, typename PT, typename CPT>
bool ListIterator<T, RT, CRT, PT, CPT>::operator==(
    const ListIterator& other) const {
  return node_ == other.node_;
}

template <typename T, typename RT, typename CRT, typename PT, typename CPT>
bool ListIterator<T, RT, CRT, PT, CPT>::operator!=(
    const ListIterator& other) const {
  return !this->operator==(other);
}

template <typename T, typename RT, typename CRT, typename PT, typename CPT>
typename ListIterator<T, RT, CRT, PT, CPT>::reference
ListIterator<T, RT, CRT, PT, CPT>::operator*() const {
  return node_->GetValue();
}

template <typename T, typename RT, typename CRT, typename PT, typename CPT>
ListIterator<T, RT, CRT, PT, CPT>&
ListIterator<T, RT, CRT, PT, CPT>::operator++() {
  node_ = node_->GetNext();
  return *this;
}
template <typename T, typename RT, typename CRT, typename PT, typename CPT>
ListIterator<T, RT, CRT, PT, CPT>&
ListIterator<T, RT, CRT, PT, CPT>::operator--() {
  node_ = node_->GetPrev();
  return *this;
}

template <typename T, typename RT, typename CRT, typename PT, typename CPT>
ListIterator<T, RT, CRT, PT, CPT>::operator ListConstIterator<T, RT, CRT, PT,
                                                              CPT>() const {
  return ListConstIterator<T, RT, CRT, PT, CPT>(node_);
}

template <typename T, typename RT, typename CRT, typename PT, typename CPT>
typename ListIterator<T, RT, CRT, PT, CPT>::Node*
ListIterator<T, RT, CRT, PT, CPT>::GetNode() {
  return node_;
}

}  // namespace stlc
