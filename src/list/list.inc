// Implemenation list

#include <initializer_list>
#include <utility>

#include "../../include/list.h"

namespace stlc {

// ------------------------------------------------------------------------- //
//                               Constructors                                //
// ------------------------------------------------------------------------- //

template <typename T>
list<T>::list() {
  CreateDefault();
}

template <typename T>
list<T>::list(size_type n) : list(n, value_type()) {}

template <typename T>
list<T>::list(size_type n, const_reference value) {
  CreateDefault();
  for (size_type i = size_type(0); i != n; ++i) push_back(value);
  size_ = n;
}

template <typename T>
list<T>::list(std::initializer_list<value_type> items) {
  CreateDefault();
  Copy<std::initializer_list<value_type>>(items);
}

template <typename T>
list<T>::list(const list &other) {
  CreateDefault();
  Copy<list>(other);
}

template <typename T>
list<T>::list(list &&other) noexcept {
  CreateDefault();
  if (other.empty()) return;

  MoveOther(std::move(other));
}

template <typename T>
list<T> &list<T>::operator=(const list &other) {
  if (this == &other) return *this;
  clear();
  Copy<list>(other);
  return *this;
}

template <typename T>
list<T> &list<T>::operator=(list &&other) noexcept {
  if (this == &other) return *this;
  clear();
  if (other.empty()) return *this;

  MoveOther(std::move(other));

  return *this;
}

template <typename T>
list<T>::~list() {
  clear();
  delete term_node_;
}

// ------------------------------------------------------------------------- //
//                             Element access                                //
// ------------------------------------------------------------------------- //

template <typename T>
typename list<T>::reference list<T>::front() {
  return *begin();
}

template <typename T>
typename list<T>::reference list<T>::back() {
  iterator i = end();
  --i;
  return *i;
}

template <typename T>
typename list<T>::const_reference list<T>::front() const {
  return *begin();
}

template <typename T>
typename list<T>::const_reference list<T>::back() const {
  const_iterator i = end();
  --i;
  return *i;
}

// ------------------------------------------------------------------------- //
//                               Iterator                                    //
// ------------------------------------------------------------------------- //

template <typename T>
typename list<T>::iterator list<T>::begin() {
  iterator i = end();
  ++i;
  return i;
}

template <typename T>
typename list<T>::iterator list<T>::end() {
  return iterator(term_node_);
}

template <typename T>
typename list<T>::const_iterator list<T>::begin() const {
  const_iterator i = end();
  ++i;
  return i;
}

template <typename T>
typename list<T>::const_iterator list<T>::end() const {
  return const_iterator(term_node_);
}

// ------------------------------------------------------------------------- //
//                               Capacity                                    //
// ------------------------------------------------------------------------- //

template <typename T>
bool list<T>::empty() const {
  return size() == size_type(0);
}

template <typename T>
typename list<T>::size_type list<T>::size() const {
  return size_;
}

// ------------------------------------------------------------------------- //
//                              Modifiers                                    //
// ------------------------------------------------------------------------- //

template <typename T>
void list<T>::clear() {
  for (Node *iter = term_node_->GetNext(); iter != term_node_;) {
    Node *next = iter->GetNext();
    delete iter;
    iter = next;
  }
  term_node_->SetPrev(term_node_);
  term_node_->SetNext(term_node_);
  size_ = size_type(0);
}

template <typename T>
typename list<T>::iterator list<T>::insert(const_iterator pos,
                                           const_reference value) {
  Node *new_node = new Node(pos.GetNode()->GetPrev(), pos.GetNode(), value);
  pos.GetNode()->GetPrev()->SetNext(new_node);
  pos.GetNode()->SetPrev(new_node);
  ++size_;
  return iterator(new_node);
}

template <typename T>
void list<T>::erase(const_iterator pos) {
  pos.GetNode()->GetPrev()->SetNext(pos.GetNode()->GetNext());
  pos.GetNode()->GetNext()->SetPrev(pos.GetNode()->GetPrev());
  --size_;
  delete pos.GetNode();
}

template <typename T>
void list<T>::push_back(const_reference value) {
  insert(end(), value);
}

template <typename T>
void list<T>::pop_back() {
  iterator i = end();
  --i;
  erase(i);
}

template <typename T>
void list<T>::push_front(const_reference value) {
  insert(begin(), value);
}

template <typename T>
void list<T>::pop_front() {
  erase(begin());
}

template <typename T>
void list<T>::swap(list &other) {
  std::swap(size_, other.size_);
  std::swap(term_node_, other.term_node_);
}

template <typename T>
void list<T>::merge(list &other) {
  if (this == &other) return;

  MergeSortMerge(term_node_, term_node_, begin(), size(), other.begin(),
                 other.size());

  size_ += other.size_;
  other.term_node_->SetPrev(other.term_node_);
  other.term_node_->SetNext(other.term_node_);
  other.size_ = size_type(0);
}

template <typename T>
void list<T>::splice(const_iterator pos, list &other) {
  if (other.empty()) return;

  other.term_node_->GetNext()->SetPrev(pos.GetNode()->GetPrev());
  other.term_node_->GetPrev()->SetNext(pos.GetNode());
  pos.GetNode()->GetPrev()->SetNext(other.term_node_->GetNext());
  pos.GetNode()->SetPrev(other.term_node_->GetPrev());
  other.term_node_->SetNext(other.term_node_);
  other.term_node_->SetPrev(other.term_node_);
  size_ += other.size_;
  other.size_ = size_type(0);
}

template <typename T>
void list<T>::reverse() {
  for (Node *current = term_node_->GetNext(); current != term_node_;) {
    Node *prev = current->GetPrev();
    current->SetPrev(current->GetNext());
    current->SetNext(prev);
    current = current->GetPrev();
  }

  Node *prev = term_node_->GetPrev();
  term_node_->SetPrev(term_node_->GetNext());
  term_node_->SetNext(prev);
}

template <typename T>
void list<T>::unique() {
  iterator prev = begin(), current = begin();
  ++current;
  for (; current != end(); ++current) {
    if (*current == *prev) {
      erase(current);
      current = prev;

    } else {
      ++prev;
    }
  }
}

template <typename T>
void list<T>::sort() {
  MergeSort(begin(), end(), size());
}

// ------------------------------------------------------------------------- //
//                                 Utils                                     //
// ------------------------------------------------------------------------- //

template <typename T>
void list<T>::CreateDefault() {
  term_node_ = new Node();
  term_node_->SetNext(term_node_);
  term_node_->SetPrev(term_node_);
  size_ = size_type(0);
}

template <typename T>
void list<T>::MoveOther(list &&other) {
  term_node_->SetNext(other.term_node_->GetNext());
  term_node_->SetPrev(other.term_node_->GetPrev());
  term_node_->GetNext()->SetPrev(term_node_);
  term_node_->GetPrev()->SetNext(term_node_);
  other.term_node_->SetNext(other.term_node_);
  other.term_node_->SetPrev(other.term_node_);
  size_ = other.size_;
  other.size_ = size_type(0);
}

template <typename T>
template <typename container>
void list<T>::Copy(const container &cont) {
  for (auto i : cont) {
    push_back(i);
  }
}

template <typename T>
typename list<T>::iterator list<T>::MergeSort(iterator start, iterator end,
                                              size_type size) {
  if (size < size_type(2)) return start;

  iterator mid = start;
  size_type m = size / 2;
  for (size_type i = size_type(0); i != m; ++i) ++mid;

  start = MergeSort(start, mid, m);
  mid = MergeSort(mid, end, size - m);

  Node *prev = start.GetNode()->GetPrev();
  Node *next = end.GetNode();
  start = MergeSortMerge(prev, next, start, m, mid, size - m);
  return start;
}

template <typename T>
typename list<T>::iterator list<T>::MergeSortMerge(Node *prev, Node *next,
                                                   const iterator &begin_a,
                                                   size_type size_a,
                                                   const iterator &begin_b,
                                                   size_type size_b) {
  iterator iter_a = begin_a;
  iterator iter_b = begin_b;
  size_type count_a = size_type(0);
  size_type count_b = size_type(0);

  Node *curr;
  if ((count_b != size_b && count_a != size_a && *iter_b < *iter_a) ||
      (count_b != size_b && count_a == size_a)) {
    curr = iter_b.GetNode();
    ++iter_b;
    ++count_b;

  } else if (count_a != size_a) {
    curr = iter_a.GetNode();
    ++iter_a;
    ++count_a;
  }

  iterator new_start = iterator(curr);
  ConnectNodes(prev, curr);
  prev = curr;

  while (count_a != size_a && count_b != size_b) {
    if (*iter_b < *iter_a) {
      curr = iter_b.GetNode();
      ++iter_b;
      ++count_b;

    } else {
      curr = iter_a.GetNode();
      ++iter_a;
      ++count_a;
    }

    ConnectNodes(prev, curr);
    prev = curr;
  }

  iterator curr_iter = iter_a;
  size_type curr_count = count_a;
  size_type curr_size = size_a;
  if (count_a == size_a) {
    curr_iter = iter_b;
    curr_count = count_b;
    curr_size = size_b;
  }
  while (curr_count != curr_size) {
    curr = curr_iter.GetNode();
    ++curr_iter;
    ++curr_count;

    ConnectNodes(prev, curr);
    prev = curr;
  }

  ConnectNodes(prev, next);
  return new_start;
}

template <typename T>
void list<T>::ConnectNodes(Node *a, Node *b) {
  a->SetNext(b);
  b->SetPrev(a);
}

}  // namespace stlc
