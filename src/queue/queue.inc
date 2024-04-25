// queue

#include <utility>

#include "../../include/queue.h"

namespace stlc {

// ------------------------------------------------------------------------- //
//                               Constructors                                //
// ------------------------------------------------------------------------- //

template <typename T, typename Container>
queue<T, Container>::queue() : queue(Container()) {}

template <typename T, typename Container>
queue<T, Container>::queue(std::initializer_list<value_type> items)
    : container_(items) {}

template <typename T, typename Container>
queue<T, Container>::queue(const container_type &container)
    : container_(container) {}

template <typename T, typename Container>
queue<T, Container>::queue(container_type &&container)
    : container_(std::move(container)) {}

template <typename T, typename Container>
queue<T, Container>::~queue() {}

// ------------------------------------------------------------------------- //
//                             Element access                                //
// ------------------------------------------------------------------------- //

template <typename T, typename Container>
typename queue<T, Container>::reference queue<T, Container>::front() {
  return container_.front();
}

template <typename T, typename Container>
typename queue<T, Container>::const_reference queue<T, Container>::front()
    const {
  return container_.front();
}

template <typename T, typename Container>
typename queue<T, Container>::reference queue<T, Container>::back() {
  return container_.back();
}

template <typename T, typename Container>
typename queue<T, Container>::const_reference queue<T, Container>::back()
    const {
  return container_.back();
}

// ------------------------------------------------------------------------- //
//                               Capacity                                    //
// ------------------------------------------------------------------------- //

template <typename T, typename Container>
bool queue<T, Container>::empty() const {
  return container_.empty();
}

template <typename T, typename Container>
typename queue<T, Container>::size_type queue<T, Container>::size() const {
  return container_.size();
}

// ------------------------------------------------------------------------- //
//                              Modifiers                                    //
// ------------------------------------------------------------------------- //

template <typename T, typename Container>
void queue<T, Container>::push(const_reference value) {
  container_.push_back(value);
}

template <typename T, typename Container>
void queue<T, Container>::pop() {
  container_.pop_front();
}

template <typename T, typename Container>
void queue<T, Container>::swap(queue &other) {
  std::swap(container_, other.container_);
}

}  // namespace stlc
