// list

#ifndef STLC_LIST_H_
#define STLC_LIST_H_

#include <cstddef>
#include <initializer_list>

#include "../src/list/list_const_iterator.h"
#include "../src/list/list_iterator.h"
#include "../src/list/list_node.h"

namespace stlc {

/// @brief A standard container with linear time access to elements, and fixed
/// time insertion/deletion at any point in the sequence.
/// @tparam T value_type
template <typename T>
class list {
 public:
  using value_type = T;
  using reference = T &;
  using const_reference = const T &;
  using pointer = T *;
  using const_pointer = const T *;
  using iterator = ListIterator<value_type, reference, const_reference, pointer,
                                const_pointer>;
  using const_iterator =
      ListConstIterator<value_type, reference, const_reference, pointer,
                        const_pointer>;
  using size_type = size_t;

 private:
  using Node =
      ListNode<value_type, reference, const_reference, pointer, const_pointer>;

 public:
  // ----------------------------------------------------------------------- //
  //                              Constructors                               //
  // ----------------------------------------------------------------------- //

  list();
  list(size_type n);
  list(size_type n, const_reference value);
  list(std::initializer_list<value_type> items);
  list(const list &other);
  list(list &&other) noexcept;
  list<T> &operator=(const list &other);
  list<T> &operator=(list &&other) noexcept;
  virtual ~list();

  // ----------------------------------------------------------------------- //
  //                            Element access                               //
  // ----------------------------------------------------------------------- //

  /// @brief Returns a reference to the first element in the container.
  /// @warning Undefined behavior if list is empty
  reference front();

  /// @brief Returns a reference to the last element in the container.
  /// @warning Undefined behavior if list is empty
  reference back();

  /// @brief Returns a const reference to the first element in the container.
  /// @warning Undefined behavior if list is empty
  const_reference front() const;

  /// @brief Returns a const reference to the last element in the container.
  /// @warning Undefined behavior if list is empty
  const_reference back() const;

  // ----------------------------------------------------------------------- //
  //                              Iterator                                   //
  // ----------------------------------------------------------------------- //

  /// @brief Returns an iterator to the first element of the list.
  /// If the list is empty, the returned iterator will be equal to end().
  iterator begin();

  /// @brief Returns an iterator to the element following the last element of
  /// the list. This element acts as a placeholder; attempting to access it
  /// results in undefined behavior.
  iterator end();

  /// @brief Returns an const iterator to the first element of the list.
  /// If the list is empty, the returned iterator will be equal to end().
  const_iterator begin() const;

  /// @brief Returns an const iterator to the element following the last element
  /// of the list. This element acts as a placeholder; attempting to access it
  /// results in undefined behavior.
  const_iterator end() const;

  // ----------------------------------------------------------------------- //
  //                              Capacity                                   //
  // ----------------------------------------------------------------------- //

  /// @brief return true if the container is empty, false otherwise.
  bool empty() const;

  /// @brief returns number of elements the container.
  size_type size() const;

  // ----------------------------------------------------------------------- //
  //                             Modifiers                                   //
  // ----------------------------------------------------------------------- //

  /// @brief Erases all elements from the container.
  /// @warning Invalidates any references, pointers, and iterators referring to
  /// contained elements. Any past-the-end iterator remains valid.
  void clear();

  /// @brief Inserts value before pos.
  iterator insert(const_iterator pos, const_reference value);

  /// @brief Removes the element at pos.
  /// @warning References and iterators to the erased elements are invalidated.
  /// Other references and iterators are not affected. Undefined behavior if pos
  /// is end().
  void erase(const_iterator pos);

  /// @brief Appends the given element value to the end of the container.
  void push_back(const_reference value);

  /// @brief Removes the last element of the container.
  /// @warning Calling pop_back on an empty container results in undefined
  /// behavior. References and iterators to the erased element are invalidated.
  void pop_back();

  /// @brief Prepends the given element value to the beginning of the container.
  void push_front(const_reference value);

  /// @brief Removes the first element of the container.
  /// @warning If there are no elements in the container, the behavior is
  /// undefined. References and iterators to the erased element are invalidated.
  void pop_front();

  /// @brief Exchanges the contents of the container with those of other. Does
  /// not invoke any move, copy, or swap operations on individual elements. All
  /// iterators and references remain valid. It is unspecified whether an
  /// iterator holding the end() value in this container will refer to this or
  /// the other container after the operation.
  void swap(list &other);

  /// @brief Merges other into *this. Both lists should be sorted
  /// @warning Does nothing if other refers to the same object as *this.
  void merge(list &other);

  /// @brief Transfers elements from one list to another.
  /// @warning Undefined behavior if *this and other refer to the same object.
  void splice(const_iterator pos, list &other);

  /// @brief Reverses the order of the elements in the container. No references
  /// or iterators become invalidated.
  void reverse();

  /// @brief Removes all consecutive duplicate elements from the container. Only
  /// the first element in each group of equal elements is left. Invalidates
  /// only the iterators and references to the removed elements.
  void unique();

  /// @brief Sorts the elements and preserves the order of equivalent elements.
  /// No references or iterators become invalidated.
  void sort();

 private:
  void CreateDefault();
  void MoveOther(list &&other);
  template <typename container>
  void Copy(const container &cont);

  iterator MergeSort(iterator start, iterator end, size_type size);
  iterator MergeSortMerge(Node *prev, Node *next, const iterator &begin_a,
                          size_type size_a, const iterator &begin_b,
                          size_type size_b);
  void ConnectNodes(Node *a, Node *b);

  Node *term_node_;
  size_type size_;
};

}  // namespace stlc

#include "../src/list/list.inc"

#endif  // STLC_LIST_H_
