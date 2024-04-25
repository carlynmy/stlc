// stack

#ifndef STLC_STACK_H_
#define STLC_STACK_H_

#include <initializer_list>

#include "vector.h"

namespace stlc {

/// @brief A standard container giving FILO behavior
template <typename T, typename Container = vector<T>>
class stack {
 public:
  using container_type = Container;
  using value_type = typename Container::value_type;
  using reference = typename Container::reference;
  using const_reference = typename Container::const_reference;
  using size_type = typename Container::size_type;

  // ----------------------------------------------------------------------- //
  //                              Constructors                               //
  // ----------------------------------------------------------------------- //

  stack();
  stack(std::initializer_list<value_type> items);
  stack(const container_type &container);
  stack(container_type &&container);
  stack(const stack &other) = default;
  stack(stack &&other) noexcept = default;
  stack &operator=(const stack &other) = default;
  stack &operator=(stack &&other) noexcept = default;
  virtual ~stack();

  // ----------------------------------------------------------------------- //
  //                            Element access                               //
  // ----------------------------------------------------------------------- //

  /// @brief Returns reference to the top element in the stack. This is the most
  /// recently pushed element. This element will be removed on a call to pop().
  /// Effectively calls c.back().
  reference top();

  /// @brief Returns const_reference to the top element in the stack. This is
  /// the most recently pushed element. This element will be removed on a call
  /// to pop(). Effectively calls c.back().
  const_reference top() const;

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

  /// @brief Pushes the given element value to the top of the stack.
  void push(const_reference value);

  /// @brief Removes the top element from the stack. Effectively calls
  /// c.pop_back().
  void pop();

  /// @brief Exchanges the contents of the container adaptor with those of
  /// other.
  void swap(stack &other);

 private:
  container_type container_;
};

}  // namespace stlc

#include "../src/stack/stack.inc"

#endif  // STLC_STACK_H_
