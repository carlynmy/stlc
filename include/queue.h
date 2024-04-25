// queue

#ifndef STLC_QUEUE_H_
#define STLC_QUEUE_H_

#include <initializer_list>

#include "list.h"

namespace stlc {

/// @brief A standard container giving FIFO behavior.
template <typename T, typename Container = list<T>>
class queue {
 public:
  using container_type = Container;
  using value_type = typename Container::value_type;
  using reference = typename Container::reference;
  using const_reference = typename Container::const_reference;
  using size_type = typename Container::size_type;

  // ----------------------------------------------------------------------- //
  //                              Constructors                               //
  // ----------------------------------------------------------------------- //

  queue();
  queue(std::initializer_list<value_type> items);
  queue(const container_type &container);
  queue(container_type &&container);
  queue(const queue &other) = default;
  queue(queue &&other) noexcept = default;
  queue &operator=(const queue &other) = default;
  queue &operator=(queue &&other) noexcept = default;
  virtual ~queue();

  // ----------------------------------------------------------------------- //
  //                            Element access                               //
  // ----------------------------------------------------------------------- //

  /// @brief Returns reference to the first element in the queue. This element
  /// will be the first element to be removed on a call to pop(). Effectively
  /// calls c.front().
  reference front();

  /// @brief Returns const_reference to the first element in the queue. This
  /// element will be the first element to be removed on a call to pop().
  /// Effectively calls c.front().
  const_reference front() const;

  /// @brief Returns reference to the last element in the queue. This is the
  /// most recently pushed element. Effectively calls c.back().
  reference back();

  /// @brief Returns const_reference to the last element in the queue. This is
  /// the most recently pushed element. Effectively calls c.back().
  const_reference back() const;

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

  /// @brief Pushes the given element value to the top of the queue.
  void push(const_reference value);

  /// @brief Removes an element from the front of the queue. Effectively calls
  /// c.pop_front().
  void pop();

  /// @brief Exchanges the contents of the container adaptor with those of
  /// other.
  void swap(queue &other);

 private:
  container_type container_;
};

}  // namespace stlc

#include "../src/queue/queue.inc"

#endif  // STLC_QUEUE_H_
