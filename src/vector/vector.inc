// vector

#include <initializer_list>
#include <new>
#include <stdexcept>
#include <utility>

#include "../../include/vector.h"

namespace stlc {

// ------------------------------------------------------------------------- //
//                               Constructors                                //
// ------------------------------------------------------------------------- //

template <typename T>
vector<T>::vector() {
  data_ = Alloc(size_type(0));
  size_ = size_type(0);
  capacity_ = size_type(0);
}

template <typename T>
vector<T>::vector(size_type n) : vector(n, value_type()) {}

template <typename T>
vector<T>::vector(size_type n, const_reference value) {
  data_ = Alloc(n);
  Copy(data_, size_type(0), n, value);
  size_ = n;
  capacity_ = n;
}

template <typename T>
vector<T>::vector(std::initializer_list<value_type> items) {
  data_ = Alloc(items.size());
  Copy<typename std::initializer_list<value_type>::const_iterator>(
      data_, size_type(0), items.size(), items.begin());
  size_ = items.size();
  capacity_ = items.size();
}

template <typename T>
vector<T>::vector(const vector &other) {
  data_ = Alloc(other.capacity_);
  Copy<const_iterator>(data_, size_type(0), other.size_, other.begin());
  size_ = other.size_;
  capacity_ = other.capacity_;
}

template <typename T>
vector<T>::vector(vector &&other) noexcept {
  data_ = other.data_;
  size_ = other.size_;
  capacity_ = other.capacity_;
  other.data_ = Alloc(size_type(0));
  other.size_ = size_type(0);
  other.capacity_ = size_type(0);
}

template <typename T>
vector<T> &vector<T>::operator=(const vector &other) {
  if (this == &other) return *this;

  Free(data_, size_type(0), size_);

  data_ = Alloc(other.capacity_);
  Copy<const_iterator>(data_, size_type(0), other.size_, other.begin());
  size_ = other.size_;
  capacity_ = other.capacity_;

  return *this;
}

template <typename T>
vector<T> &vector<T>::operator=(vector &&other) noexcept {
  if (this == &other) return *this;

  Free(data_, size_type(0), size_);

  data_ = other.data_;
  size_ = other.size_;
  capacity_ = other.capacity_;
  other.data_ = Alloc(size_type(0));
  other.size_ = size_type(0);
  other.capacity_ = size_type(0);

  return *this;
}

template <typename T>
vector<T>::~vector() {
  Free(data_, size_type(0), size_);
}

// ------------------------------------------------------------------------- //
//                             Element access                                //
// ------------------------------------------------------------------------- //

template <typename T>
typename vector<T>::reference vector<T>::front() {
  return data_[size_type(0)];
}

template <typename T>
typename vector<T>::reference vector<T>::back() {
  return data_[size_ - 1];
}

template <typename T>
typename vector<T>::const_reference vector<T>::front() const {
  return data_[size_type(0)];
}

template <typename T>
typename vector<T>::const_reference vector<T>::back() const {
  return data_[size_ - 1];
}

template <typename T>
typename vector<T>::reference vector<T>::at(size_type pos) {
  if (pos >= size_) throw std::out_of_range("");
  return operator[](pos);
}

template <typename T>
typename vector<T>::const_reference vector<T>::at(size_type pos) const {
  if (pos >= size_) throw std::out_of_range("");
  return operator[](pos);
}

template <typename T>
typename vector<T>::reference vector<T>::operator[](size_type pos) {
  return data_[pos];
}

template <typename T>
typename vector<T>::const_reference vector<T>::operator[](size_type pos) const {
  return data_[pos];
}

template <typename T>
typename vector<T>::pointer vector<T>::data() {
  return data_;
}

template <typename T>
typename vector<T>::const_pointer vector<T>::data() const {
  return data_;
}

// ------------------------------------------------------------------------- //
//                               Iterator                                    //
// ------------------------------------------------------------------------- //

template <typename T>
typename vector<T>::iterator vector<T>::begin() {
  return iterator(data_);
}

template <typename T>
typename vector<T>::iterator vector<T>::end() {
  return iterator(data_ + size_);
}

template <typename T>
typename vector<T>::const_iterator vector<T>::begin() const {
  return const_iterator(data_);
}

template <typename T>
typename vector<T>::const_iterator vector<T>::end() const {
  return const_iterator(data_ + size_);
}

// ------------------------------------------------------------------------- //
//                               Capacity                                    //
// ------------------------------------------------------------------------- //

template <typename T>
bool vector<T>::empty() const {
  return size() == size_type(0);
}

template <typename T>
typename vector<T>::size_type vector<T>::size() const {
  return size_;
}

template <typename T>
typename vector<T>::size_type vector<T>::capacity() const {
  return capacity_;
}

template <typename T>
void vector<T>::reserve(size_type new_cap) {
  if (new_cap <= capacity_) return;

  pointer ndata = Alloc(new_cap);
  Copy<const_iterator>(ndata, size_type(0), size_, begin());

  Free(data_, size_type(0), size_);
  data_ = ndata;
  capacity_ = new_cap;
}

template <typename T>
void vector<T>::shrink_to_fit() {
  if (size_ == capacity_) return;

  pointer ndata = Alloc(size_);
  Copy<const_iterator>(ndata, size_type(0), size_, begin());

  Free(data_, size_type(0), size_);
  data_ = ndata;
  capacity_ = size_;
}

// ------------------------------------------------------------------------- //
//                              Modifiers                                    //
// ------------------------------------------------------------------------- //

template <typename T>
void vector<T>::clear() {
  Dtor(data_, size_type(0), size_);
  size_ = 0;
}

template <typename T>
typename vector<T>::iterator vector<T>::insert(const_iterator pos,
                                               const_reference value) {
  size_type ins_idx = pos - data_;

  if (size_ == capacity_) {
    size_type ncap = (capacity_ == size_type(0) ? size_type(1) : capacity_ * 2);
    reserve(ncap);
  }

  new (data_ + size_) value_type(value);
  for (size_type i = size_; i > ins_idx; --i) {
    data_[i] = data_[i - 1];
  }

  data_[ins_idx] = value;
  ++size_;
  return iterator(data_ + ins_idx);
}

template <typename T>
void vector<T>::erase(const_iterator pos) {
  size_type removed_idx = pos - data_;
  for (size_type i = removed_idx; i < (size_ - 1); ++i) {
    data_[i] = std::move(data_[i + 1]);
  }
  data_[size_ - 1].~value_type();
  --size_;
}

template <typename T>
void vector<T>::push_back(const_reference value) {
  insert(end(), value);
}

template <typename T>
void vector<T>::pop_back() {
  const_iterator iter = end();
  --iter;
  erase(iter);
}

template <typename T>
void vector<T>::swap(vector &other) {
  std::swap(data_, other.data_);
  std::swap(size_, other.size_);
  std::swap(capacity_, other.capacity_);
}

template <typename T>
void vector<T>::resize(size_type size) {
  resize(size, value_type());
}

template <typename T>
void vector<T>::resize(size_type size, const_reference value) {
  if (size_ == size) return;

  if (size > capacity_) reserve(size);
  if (size > size_) {
    Copy(data_, size_, size - size_, value);
  } else {
    Dtor(data_, size, size_ - size);
  }

  size_ = size;
}

// ------------------------------------------------------------------------- //
//                                 Utils                                     //
// ------------------------------------------------------------------------- //

template <typename T>
typename vector<T>::pointer vector<T>::Alloc(size_type size) {
  return pointer(operator new[](size * sizeof(value_type)));
}

template <typename T>
void vector<T>::Copy(pointer data, size_type start, size_type count,
                     const_reference value) {
  for (size_type i = start; i < start + count; ++i) {
    new (data + i) value_type(value);
  }
}

template <typename T>
template <typename other_const_iterator>
void vector<T>::Copy(pointer data, size_type start, size_type count,
                     other_const_iterator other_iter) {
  for (size_type i = start; i < start + count; ++i) {
    new (data + i) value_type(*other_iter);
    ++other_iter;
  }
}
template <typename T>
void vector<T>::Dtor(pointer data, size_type start, size_type count) {
  for (size_type i = start; i != start + count; ++i) {
    data[i].~value_type();
  }
}

template <typename T>
void vector<T>::Free(pointer data, size_type start, size_type count) {
  Dtor(data, start, count);
  operator delete[](data);
}

}  // namespace stlc
