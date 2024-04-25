// vector

#ifndef STLC_VECTOR_H_
#define STLC_VECTOR_H_

#include <cstddef>
#include <initializer_list>

namespace stlc {

/// @brief A container which offers fixed time access to individual
/// elements in any order.
template <typename T>
class vector {
 public:
  using value_type = T;
  using reference = T &;
  using const_reference = const T &;
  using pointer = T *;
  using const_pointer = const T *;
  using iterator = T *;
  using const_iterator = const T *;
  using size_type = size_t;

  // ----------------------------------------------------------------------- //
  //                              Constructors                               //
  // ----------------------------------------------------------------------- //

  vector();
  vector(size_type n);
  vector(size_type n, const_reference value);
  vector(std::initializer_list<value_type> items);
  vector(const vector &other);
  vector(vector &&other) noexcept;
  vector<T> &operator=(const vector &other);
  vector<T> &operator=(vector &&other) noexcept;
  virtual ~vector();

  // ----------------------------------------------------------------------- //
  //                            Element access                               //
  // ----------------------------------------------------------------------- //

  /// @brief Returns a reference to the first element in the container.
  /// @warning Undefined behavior if vector is empty
  reference front();

  /// @brief Returns a reference to the last element in the container.
  /// @warning Undefined behavior if vector is empty
  reference back();

  /// @brief Returns a const reference to the first element in the container.
  /// @warning Undefined behavior if vector is empty
  const_reference front() const;

  /// @brief Returns a const reference to the last element in the container.
  /// @warning Undefined behavior if vector is empty
  const_reference back() const;

  /// @brief Returns a reference to the element at specified location pos
  /// @throw std::out_of_range if pos is not if [0, size())
  reference at(size_type pos);

  /// @brief Returns a const_reference to the element at specified location pos
  /// @throw std::out_of_range if pos is not if [0, size())
  const_reference at(size_type pos) const;

  /// @brief Returns a reference to the element at specified location pos
  /// @warning Undefined behavior if pos is out of range
  reference operator[](size_type pos);

  /// @brief Returns a const_reference to the element at specified location pos
  /// @warning Undefined behavior if pos is out of range
  const_reference operator[](size_type pos) const;

  /// @brief Returns pointer to the underlying array serving as element storage.
  /// @warning The pointer is such that range [data(), data() + size()) is
  /// always a valid range, even if the container is empty (data() is not
  /// dereferenceable in that case).
  pointer data();

  /// @brief Returns const_pointer to the underlying array serving as element
  /// storage.
  /// @warning The pointer is such that range [data(), data() + size()) is
  /// always a valid range, even if the container is empty (data() is not
  /// dereferenceable in that case).
  const_pointer data() const;

  // ----------------------------------------------------------------------- //
  //                              Iterator                                   //
  // ----------------------------------------------------------------------- //

  /// @brief Returns an iterator to the first element of the vector.
  /// If the vector is empty, the returned iterator will be equal to end().
  iterator begin();

  /// @brief Returns an iterator to the element following the last element of
  /// the vector. This element acts as a placeholder; attempting to access it
  /// results in undefined behavior.
  iterator end();

  /// @brief Returns an const iterator to the first element of the vector.
  /// If the vector is empty, the returned iterator will be equal to end().
  const_iterator begin() const;

  /// @brief Returns an const iterator to the element following the last element
  /// of the vector. This element acts as a placeholder; attempting to access it
  /// results in undefined behavior.
  const_iterator end() const;

  // ----------------------------------------------------------------------- //
  //                              Capacity                                   //
  // ----------------------------------------------------------------------- //

  /// @brief return true if the container is empty, false otherwise.
  bool empty() const;

  /// @brief returns number of elements the container.
  size_type size() const;

  /// @brief Returns the number of elements that the container has currently
  /// allocated space for.
  size_type capacity() const;

  /// @brief Increase the capacity of the vector (the total number of elements
  /// that the vector can hold without requiring reallocation) to a value that's
  /// greater or equal to new_cap. If new_cap is greater than the current
  /// capacity(), new storage is allocated, otherwise the function does nothing.
  /// @warning If new_cap is greater than capacity(), all iterators, including
  /// the end() iterator, and all references to the elements are invalidated.
  /// Otherwise, no iterators or references are invalidated. After a call to
  /// reserve(), insertions will not trigger reallocation unless the insertion
  /// would make the size of the vector greater than the value of capacity().
  void reserve(size_type new_cap);

  /// @brief Requests the removal of unused capacity. It is a non-binding
  /// request to reduce capacity() to size().
  /// @warning If reallocation occurs, all iterators (including the end()
  /// iterator) and all references to the elements are invalidated. If no
  /// reallocation occurs, no iterators or references are invalidated.
  void shrink_to_fit();

  // ----------------------------------------------------------------------- //
  //                             Modifiers                                   //
  // ----------------------------------------------------------------------- //

  /// @brief Erases all elements from the container. Doesnt change capacity.
  void clear();

  /// @brief Inserts value before pos.
  /// @warning If after the operation the new size() is greater than old
  /// capacity() a reallocation takes place, in which case all iterators
  /// (including the end() iterator) and all references to the elements are
  /// invalidated. Otherwise, only the iterators and references before the
  /// insertion point remain valid.
  iterator insert(const_iterator pos, const_reference value);

  /// @brief Removes the element at pos.
  /// @warning Iterators (including the end() iterator) and references to the
  /// elements at or after the point of the erase are invalidated. The iterator
  /// pos must be valid and dereferenceable.
  void erase(const_iterator pos);

  /// @brief Appends the given element value to the end of the container.
  /// @warning If after the operation the new size() is greater than old
  /// capacity() a reallocation takes place, in which case all iterators
  /// (including the end() iterator) and all references to the elements are
  /// invalidated. Otherwise only the end() iterator is invalidated.
  void push_back(const_reference value);

  /// @brief Removes the last element of the container.
  /// @warning Calling pop_back on an empty container results in undefined
  /// behavior. Iterators (including the end() iterator) and references to the
  /// last element are invalidated.
  void pop_back();

  /// @brief Exchanges the contents and capacity of the container with those of
  /// other.
  /// @warning All iterators and references remain valid. The end() iterator is
  /// invalidated.
  void swap(vector &other);

  /// @brief Resizes the container to contain count elements, does nothing if
  /// count == size(). If the current size is greater than count, the container
  /// is reduced to its first count elements. If the current size is less than
  /// count additional default-inserted elements are appended.
  void resize(size_type count);

  /// @brief Resizes the container to contain count elements, does nothing if
  /// count == size(). If the current size is greater than count, the container
  /// is reduced to its first count elements. If the current size is less than
  /// count additional copies of value are appended.
  void resize(size_type count, const_reference value);

 private:
  pointer Alloc(size_type size);
  void Copy(pointer data, size_type start, size_type count,
            const_reference value);

  template <typename other_const_iterator>
  void Copy(pointer data, size_type start, size_type count,
            other_const_iterator other_iter);

  void Dtor(pointer data, size_type start, size_type count);
  void Free(pointer data, size_type start, size_type count);

  pointer data_;
  size_type size_;
  size_type capacity_;
};

}  // namespace stlc

#include "../src/vector/vector.inc"

#endif  // STLC_VECTOR_H_
