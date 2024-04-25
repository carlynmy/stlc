// stack

#include <utility>

#include "../../include/stack.h"

namespace stlc {

// ------------------------------------------------------------------------- //
//                               Constructors                                //
// ------------------------------------------------------------------------- //

template <typename T, typename Container>
stack<T, Container>::stack() : stack(Container()) {}

template <typename T, typename Container>
stack<T, Container>::stack(std::initializer_list<value_type> items)
    : container_(items) {}

template <typename T, typename Container>
stack<T, Container>::stack(const container_type &container)
    : container_(container) {}

template <typename T, typename Container>
stack<T, Container>::stack(container_type &&container)
    : container_(std::move(container)) {}

template <typename T, typename Container>
stack<T, Container>::~stack() {}

// ------------------------------------------------------------------------- //
//                             Element access                                //
// ------------------------------------------------------------------------- //

template <typename T, typename Container>
typename stack<T, Container>::reference stack<T, Container>::top() {
  return container_.back();
}

template <typename T, typename Container>
typename stack<T, Container>::const_reference stack<T, Container>::top() const {
  return container_.back();
}

// ------------------------------------------------------------------------- //
//                               Capacity                                    //
// ------------------------------------------------------------------------- //

template <typename T, typename Container>
bool stack<T, Container>::empty() const {
  return container_.empty();
}

template <typename T, typename Container>
typename stack<T, Container>::size_type stack<T, Container>::size() const {
  return container_.size();
}

// ------------------------------------------------------------------------- //
//                              Modifiers                                    //
// ------------------------------------------------------------------------- //

template <typename T, typename Container>
void stack<T, Container>::push(const_reference value) {
  container_.push_back(value);
}

template <typename T, typename Container>
void stack<T, Container>::pop() {
  container_.pop_back();
}

template <typename T, typename Container>
void stack<T, Container>::swap(stack &other) {
  std::swap(container_, other.container_);
}

}  // namespace stlc
