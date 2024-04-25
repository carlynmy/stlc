// declaration ListNode

#ifndef STLC_LIST_LIST_NODE_H_
#define STLC_LIST_LIST_NODE_H_

namespace stlc {

/// @brief List node
/// @tparam T value_type
/// @tparam RT reference_type
/// @tparam CRT const_reference type
/// @tparam PT pointer type
/// @tparam CPT const_pointer type
template <typename T, typename RT, typename CRT, typename PT, typename CPT>
class ListNode {
 public:
  using value_type = T;
  using reference = RT;
  using const_reference = CRT;
  using pointer = PT;
  using const_pointer = CPT;

  ListNode();
  ListNode(ListNode* prev, ListNode* next);
  ListNode(ListNode* prev, ListNode* next, const_reference value);
  ListNode(const ListNode& other);
  ListNode(ListNode&& other) noexcept;
  ListNode& operator=(const ListNode& other);
  ListNode& operator=(ListNode&& other) noexcept;
  virtual ~ListNode();

  ListNode* GetPrev();
  ListNode* GetNext();
  reference GetValue();
  const_reference GetValue() const;

  void SetPrev(ListNode* prev);
  void SetNext(ListNode* next);
  void SetValue(const_reference value);

 private:
  ListNode* prev_;
  ListNode* next_;
  pointer value_;
};

}  // namespace stlc

#include "list_node.inc"

#endif  // STLC_LIST_LIST_NODE_H_
