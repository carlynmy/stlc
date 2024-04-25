#include "list_test.h"

// ------------------------------------------------------------------------- //
//                        ListMergeTestInitLists                             //
// ------------------------------------------------------------------------- //

// ---------------------------------int------------------------------------- //

template <>
typename ListMergeTestInitLists<int>::MergeData
    ListMergeTestInitLists<int>::merge_data_1_{{1, 3, 5},
                                               {2, 3, 3, 4, 5},
                                               {1, 2, 3, 3, 3, 4, 5, 5},
                                               {0, 4, 1, 5, 6, 7, 2, 8, 3}};

template <>
typename ListMergeTestInitLists<int>::MergeData
    ListMergeTestInitLists<int>::merge_data_2_{{2, 3, 3, 4, 5},
                                               {1, 3, 5},
                                               {1, 2, 3, 3, 3, 4, 5, 5},
                                               {6, 0, 1, 2, 7, 3, 4, 8, 5}};

template <>
typename ListMergeTestInitLists<int>::MergeData
    ListMergeTestInitLists<int>::merge_data_3_{
        {1, 2, 3}, {1, 2, 3}, {1, 1, 2, 2, 3, 3}, {0, 4, 1, 5, 2, 6, 3}};

template <>
typename ListMergeTestInitLists<int>::MergeData
    ListMergeTestInitLists<int>::merge_data_4_{
        {1, 2, 4}, {}, {1, 2, 4}, {0, 1, 2, 3}};

template <>
typename ListMergeTestInitLists<int>::MergeData
    ListMergeTestInitLists<int>::merge_data_5_{
        {}, {1, 2, 4}, {1, 2, 4}, {1, 2, 3, 0}};

// ------------------------------- string----------------------------------- //

template <>
typename ListMergeTestInitLists<string>::MergeData
    ListMergeTestInitLists<string>::merge_data_1_{
        {"1", "3", "5"},
        {"2", "3", "3", "4", "5"},
        {"1", "2", "3", "3", "3", "4", "5", "5"},
        {0, 4, 1, 5, 6, 7, 2, 8, 3}};

template <>
typename ListMergeTestInitLists<string>::MergeData
    ListMergeTestInitLists<string>::merge_data_2_{
        {"2", "3", "3", "4", "5"},
        {"1", "3", "5"},
        {"1", "2", "3", "3", "3", "4", "5", "5"},
        {6, 0, 1, 2, 7, 3, 4, 8, 5}};

template <>
typename ListMergeTestInitLists<string>::MergeData
    ListMergeTestInitLists<string>::merge_data_3_{
        {"1", "2", "3"},
        {"1", "2", "3"},
        {"1", "1", "2", "2", "3", "3"},
        {0, 4, 1, 5, 2, 6, 3}};

template <>
typename ListMergeTestInitLists<string>::MergeData
    ListMergeTestInitLists<string>::merge_data_4_{
        {"1", "2", "4"}, {}, {"1", "2", "4"}, {0, 1, 2, 3}};

template <>
typename ListMergeTestInitLists<string>::MergeData
    ListMergeTestInitLists<string>::merge_data_5_{
        {}, {"1", "2", "4"}, {"1", "2", "4"}, {1, 2, 3, 0}};

// -----------------------------NoDefaultCtor------------------------------- //

template <>
typename ListMergeTestInitLists<ndc>::MergeData
    ListMergeTestInitLists<ndc>::merge_data_1_{
        {ndc(1), ndc(3), ndc(5)},
        {ndc(2), ndc(3), ndc(3), ndc(4), ndc(5)},
        {ndc(1), ndc(2), ndc(3), ndc(3), ndc(3), ndc(4), ndc(5), ndc(5)},
        {0, 4, 1, 5, 6, 7, 2, 8, 3}};

template <>
typename ListMergeTestInitLists<ndc>::MergeData
    ListMergeTestInitLists<ndc>::merge_data_2_{
        {ndc(2), ndc(3), ndc(3), ndc(4), ndc(5)},
        {ndc(1), ndc(3), ndc(5)},
        {ndc(1), ndc(2), ndc(3), ndc(3), ndc(3), ndc(4), ndc(5), ndc(5)},
        {6, 0, 1, 2, 7, 3, 4, 8, 5}};

template <>
typename ListMergeTestInitLists<ndc>::MergeData
    ListMergeTestInitLists<ndc>::merge_data_3_{
        {ndc(1), ndc(2), ndc(3)},
        {ndc(1), ndc(2), ndc(3)},
        {ndc(1), ndc(1), ndc(2), ndc(2), ndc(3), ndc(3)},
        {0, 4, 1, 5, 2, 6, 3}};

template <>
typename ListMergeTestInitLists<ndc>::MergeData
    ListMergeTestInitLists<ndc>::merge_data_4_{
        {ndc(1), ndc(2), ndc(4)}, {}, {ndc(1), ndc(2), ndc(4)}, {0, 1, 2, 3}};

template <>
typename ListMergeTestInitLists<ndc>::MergeData
    ListMergeTestInitLists<ndc>::merge_data_5_{
        {}, {ndc(1), ndc(2), ndc(4)}, {ndc(1), ndc(2), ndc(4)}, {1, 2, 3, 0}};

// ----------------------------SortByOneField------------------------------- //

template <>
typename ListMergeTestInitLists<sof>::MergeData
    ListMergeTestInitLists<sof>::merge_data_1_{
        {sof(1, 1), sof(3, 1), sof(5, 1)},
        {sof(2, 1), sof(3, 2), sof(3, 3), sof(4, 1), sof(5, 2)},
        {sof(1, 1), sof(2, 1), sof(3, 1), sof(3, 2), sof(3, 3), sof(4, 1),
         sof(5, 1), sof(5, 2)},
        {0, 4, 1, 5, 6, 7, 2, 8, 3}};

template <>
typename ListMergeTestInitLists<sof>::MergeData
    ListMergeTestInitLists<sof>::merge_data_2_{
        {sof(2, 1), sof(3, 1), sof(3, 2), sof(4, 1), sof(5, 1)},
        {sof(1, 1), sof(3, 3), sof(5, 2)},
        {sof(1, 1), sof(2, 1), sof(3, 1), sof(3, 2), sof(3, 3), sof(4, 1),
         sof(5, 1), sof(5, 2)},
        {6, 0, 1, 2, 7, 3, 4, 8, 5}};

template <>
typename ListMergeTestInitLists<sof>::MergeData
    ListMergeTestInitLists<sof>::merge_data_3_{
        {sof(1, 1), sof(2, 1), sof(3, 1)},
        {sof(1, 2), sof(2, 2), sof(3, 2)},
        {sof(1, 1), sof(1, 2), sof(2, 1), sof(2, 2), sof(3, 1), sof(3, 2)},
        {0, 4, 1, 5, 2, 6, 3}};

template <>
typename ListMergeTestInitLists<sof>::MergeData
    ListMergeTestInitLists<sof>::merge_data_4_{
        {sof(1, 1), sof(2, 1), sof(4, 1)},
        {},
        {sof(1, 1), sof(2, 1), sof(4, 1)},
        {0, 1, 2, 3}};

template <>
typename ListMergeTestInitLists<sof>::MergeData
    ListMergeTestInitLists<sof>::merge_data_5_{
        {},
        {sof(1, 1), sof(2, 1), sof(4, 1)},
        {sof(1, 1), sof(2, 1), sof(4, 1)},
        {1, 2, 3, 0}};

// ------------------------------------------------------------------------- //
//                        ListSpliceTestInitLists                            //
// ------------------------------------------------------------------------- //

// ---------------------------------int------------------------------------- //

template <>
typename ListSpliceTestInitLists<int>::SpliceData
    ListSpliceTestInitLists<int>::splice_data_1_{{1, 2, 3, 4},
                                                 {5, 6, 7},
                                                 4,
                                                 {1, 2, 3, 4, 5, 6, 7},
                                                 {0, 1, 2, 3, 5, 6, 7, 4}};

template <>
typename ListSpliceTestInitLists<int>::SpliceData
    ListSpliceTestInitLists<int>::splice_data_2_{{1, 2, 3},
                                                 {1, 2, 3, 4, 5},
                                                 1,
                                                 {1, 1, 2, 3, 4, 5, 2, 3},
                                                 {0, 4, 5, 6, 7, 8, 1, 2, 3}};

template <>
typename ListSpliceTestInitLists<int>::SpliceData
    ListSpliceTestInitLists<int>::splice_data_3_{
        {1, 2, 3}, {4, 5, 6}, 0, {4, 5, 6, 1, 2, 3}, {4, 5, 6, 0, 1, 2, 3}};

template <>
typename ListSpliceTestInitLists<int>::SpliceData
    ListSpliceTestInitLists<int>::splice_data_4_{
        {1, 2, 3}, {}, 2, {1, 2, 3}, {0, 1, 2, 3}};

template <>
typename ListSpliceTestInitLists<int>::SpliceData
    ListSpliceTestInitLists<int>::splice_data_5_{
        {}, {1, 2, 3}, 0, {1, 2, 3}, {1, 2, 3, 0}};

// ---------------------------------bool------------------------------------ //

template <>
typename ListSpliceTestInitLists<bool>::SpliceData
    ListSpliceTestInitLists<bool>::splice_data_1_{
        {false, false, false, false},
        {true, true, true},
        4,
        {false, false, false, false, true, true, true},
        {0, 1, 2, 3, 5, 6, 7, 4}};

template <>
typename ListSpliceTestInitLists<bool>::SpliceData
    ListSpliceTestInitLists<bool>::splice_data_2_{
        {false, false, false},
        {true, true, true, true, true},
        1,
        {false, true, true, true, true, true, false, false},
        {0, 4, 5, 6, 7, 8, 1, 2, 3}};

template <>
typename ListSpliceTestInitLists<bool>::SpliceData
    ListSpliceTestInitLists<bool>::splice_data_3_{
        {false, false, false},
        {true, true, true},
        0,
        {true, true, true, false, false, false},
        {4, 5, 6, 0, 1, 2, 3}};

template <>
typename ListSpliceTestInitLists<bool>::SpliceData
    ListSpliceTestInitLists<bool>::splice_data_4_{
        {false, false, false}, {}, 2, {false, false, false}, {0, 1, 2, 3}};

template <>
typename ListSpliceTestInitLists<bool>::SpliceData
    ListSpliceTestInitLists<bool>::splice_data_5_{
        {}, {true, true, true}, 0, {true, true, true}, {1, 2, 3, 0}};

// ------------------------------- string----------------------------------- //

template <>
typename ListSpliceTestInitLists<string>::SpliceData
    ListSpliceTestInitLists<string>::splice_data_1_{
        {"1", "2", "3", "4"},
        {"5", "6", "7"},
        4,
        {"1", "2", "3", "4", "5", "6", "7"},
        {0, 1, 2, 3, 5, 6, 7, 4}};

template <>
typename ListSpliceTestInitLists<string>::SpliceData
    ListSpliceTestInitLists<string>::splice_data_2_{
        {"1", "2", "3"},
        {"1", "2", "3", "4", "5"},
        1,
        {"1", "1", "2", "3", "4", "5", "2", "3"},
        {0, 4, 5, 6, 7, 8, 1, 2, 3}};

template <>
typename ListSpliceTestInitLists<string>::SpliceData
    ListSpliceTestInitLists<string>::splice_data_3_{
        {"1", "2", "3"},
        {"4", "5", "6"},
        0,
        {"4", "5", "6", "1", "2", "3"},
        {4, 5, 6, 0, 1, 2, 3}};

template <>
typename ListSpliceTestInitLists<string>::SpliceData
    ListSpliceTestInitLists<string>::splice_data_4_{
        {"1", "2", "3"}, {}, 2, {"1", "2", "3"}, {0, 1, 2, 3}};

template <>
typename ListSpliceTestInitLists<string>::SpliceData
    ListSpliceTestInitLists<string>::splice_data_5_{
        {}, {"1", "2", "3"}, 0, {"1", "2", "3"}, {1, 2, 3, 0}};

// -----------------------------NoDefaultCtor------------------------------- //

template <>
typename ListSpliceTestInitLists<ndc>::SpliceData
    ListSpliceTestInitLists<ndc>::splice_data_1_{
        {ndc(1), ndc(2), ndc(3), ndc(4)},
        {ndc(5), ndc(6), ndc(7)},
        4,
        {ndc(1), ndc(2), ndc(3), ndc(4), ndc(5), ndc(6), ndc(7)},
        {0, 1, 2, 3, 5, 6, 7, 4}};

template <>
typename ListSpliceTestInitLists<ndc>::SpliceData
    ListSpliceTestInitLists<ndc>::splice_data_2_{
        {ndc(1), ndc(2), ndc(3)},
        {ndc(1), ndc(2), ndc(3), ndc(4), ndc(5)},
        1,
        {ndc(1), ndc(1), ndc(2), ndc(3), ndc(4), ndc(5), ndc(2), ndc(3)},
        {0, 4, 5, 6, 7, 8, 1, 2, 3}};

template <>
typename ListSpliceTestInitLists<ndc>::SpliceData
    ListSpliceTestInitLists<ndc>::splice_data_3_{
        {ndc(1), ndc(2), ndc(3)},
        {ndc(4), ndc(5), ndc(6)},
        0,
        {ndc(4), ndc(5), ndc(6), ndc(1), ndc(2), ndc(3)},
        {4, 5, 6, 0, 1, 2, 3}};

template <>
typename ListSpliceTestInitLists<ndc>::SpliceData
    ListSpliceTestInitLists<ndc>::splice_data_4_{{ndc(1), ndc(2), ndc(3)},
                                                 {},
                                                 2,
                                                 {ndc(1), ndc(2), ndc(3)},
                                                 {0, 1, 2, 3}};

template <>
typename ListSpliceTestInitLists<ndc>::SpliceData
    ListSpliceTestInitLists<ndc>::splice_data_5_{{},
                                                 {ndc(1), ndc(2), ndc(3)},
                                                 0,
                                                 {ndc(1), ndc(2), ndc(3)},
                                                 {1, 2, 3, 0}};

// ------------------------------------------------------------------------- //
//                       ListReverseTestInitLists                            //
// ------------------------------------------------------------------------- //

// ---------------------------------int------------------------------------- //

template <>
std::initializer_list<int> ListReverseTestInitLists<int>::data_list_size_0_{};
template <>
std::initializer_list<int>
    ListReverseTestInitLists<int>::data_list_size_0_reversed_{};
template <>
IteratorIdxs
    ListReverseTestInitLists<int>::data_list_size_0_reversed_element_idxes_{0};

template <>
std::initializer_list<int> ListReverseTestInitLists<int>::data_list_size_1_{1};
template <>
std::initializer_list<int>
    ListReverseTestInitLists<int>::data_list_size_1_reversed_{1};
template <>
IteratorIdxs
    ListReverseTestInitLists<int>::data_list_size_1_reversed_element_idxes_{0,
                                                                            1};

template <>
std::initializer_list<int> ListReverseTestInitLists<int>::data_list_size_4_{
    1, 2, 3, 4};
template <>
std::initializer_list<int>
    ListReverseTestInitLists<int>::data_list_size_4_reversed_{4, 3, 2, 1};
template <>
IteratorIdxs
    ListReverseTestInitLists<int>::data_list_size_4_reversed_element_idxes_{
        3, 2, 1, 0, 4};

template <>
std::initializer_list<int> ListReverseTestInitLists<int>::data_list_size_8_{
    1, 2, 3, 4, 5, 6, 7, 8};
template <>
std::initializer_list<int>
    ListReverseTestInitLists<int>::data_list_size_8_reversed_{8, 7, 6, 5,
                                                              4, 3, 2, 1};
template <>
IteratorIdxs
    ListReverseTestInitLists<int>::data_list_size_8_reversed_element_idxes_{
        7, 6, 5, 4, 3, 2, 1, 0, 8};

// ---------------------------------bool------------------------------------ //

template <>
std::initializer_list<bool> ListReverseTestInitLists<bool>::data_list_size_0_{};
template <>
std::initializer_list<bool>
    ListReverseTestInitLists<bool>::data_list_size_0_reversed_{};
template <>
IteratorIdxs
    ListReverseTestInitLists<bool>::data_list_size_0_reversed_element_idxes_{0};

template <>
std::initializer_list<bool> ListReverseTestInitLists<bool>::data_list_size_1_{
    true};
template <>
std::initializer_list<bool>
    ListReverseTestInitLists<bool>::data_list_size_1_reversed_{true};
template <>
IteratorIdxs
    ListReverseTestInitLists<bool>::data_list_size_1_reversed_element_idxes_{0,
                                                                             1};

template <>
std::initializer_list<bool> ListReverseTestInitLists<bool>::data_list_size_4_{
    true, false, false, true};
template <>
std::initializer_list<bool>
    ListReverseTestInitLists<bool>::data_list_size_4_reversed_{true, false,
                                                               false, true};
template <>
IteratorIdxs
    ListReverseTestInitLists<bool>::data_list_size_4_reversed_element_idxes_{
        3, 2, 1, 0, 4};

template <>
std::initializer_list<bool> ListReverseTestInitLists<bool>::data_list_size_8_{
    true, true, false, true, false, false, false, true};
template <>
std::initializer_list<bool>
    ListReverseTestInitLists<bool>::data_list_size_8_reversed_{
        true, false, false, false, true, false, true, true};
template <>
IteratorIdxs
    ListReverseTestInitLists<bool>::data_list_size_8_reversed_element_idxes_{
        7, 6, 5, 4, 3, 2, 1, 0, 8};

// ------------------------------- string----------------------------------- //

template <>
std::initializer_list<std::string>
    ListReverseTestInitLists<string>::data_list_size_0_{};
template <>
std::initializer_list<std::string>
    ListReverseTestInitLists<string>::data_list_size_0_reversed_{};
template <>
IteratorIdxs
    ListReverseTestInitLists<string>::data_list_size_0_reversed_element_idxes_{
        0};

template <>
std::initializer_list<std::string>
    ListReverseTestInitLists<string>::data_list_size_1_{"1"};
template <>
std::initializer_list<std::string>
    ListReverseTestInitLists<string>::data_list_size_1_reversed_{"1"};
template <>
IteratorIdxs
    ListReverseTestInitLists<string>::data_list_size_1_reversed_element_idxes_{
        0, 1};

template <>
std::initializer_list<std::string>
    ListReverseTestInitLists<string>::data_list_size_4_{"1", "2", "3", "4"};
template <>
std::initializer_list<std::string>
    ListReverseTestInitLists<string>::data_list_size_4_reversed_{"4", "3", "2",
                                                                 "1"};
template <>
IteratorIdxs
    ListReverseTestInitLists<string>::data_list_size_4_reversed_element_idxes_{
        3, 2, 1, 0, 4};

template <>
std::initializer_list<std::string>
    ListReverseTestInitLists<string>::data_list_size_8_{"1", "2", "3", "4",
                                                        "5", "6", "7", "8"};
template <>
std::initializer_list<std::string>
    ListReverseTestInitLists<string>::data_list_size_8_reversed_{
        "8", "7", "6", "5", "4", "3", "2", "1"};
template <>
IteratorIdxs
    ListReverseTestInitLists<string>::data_list_size_8_reversed_element_idxes_{
        7, 6, 5, 4, 3, 2, 1, 0, 8};

// -----------------------------NoDefaultCtor------------------------------- //

template <>
std::initializer_list<ndc> ListReverseTestInitLists<ndc>::data_list_size_0_{};
template <>
std::initializer_list<ndc>
    ListReverseTestInitLists<ndc>::data_list_size_0_reversed_{};
template <>
IteratorIdxs
    ListReverseTestInitLists<ndc>::data_list_size_0_reversed_element_idxes_{0};

template <>
std::initializer_list<ndc> ListReverseTestInitLists<ndc>::data_list_size_1_{
    ndc(1)};
template <>
std::initializer_list<ndc>
    ListReverseTestInitLists<ndc>::data_list_size_1_reversed_{ndc(1)};
template <>
IteratorIdxs
    ListReverseTestInitLists<ndc>::data_list_size_1_reversed_element_idxes_{0,
                                                                            1};

template <>
std::initializer_list<ndc> ListReverseTestInitLists<ndc>::data_list_size_4_{
    ndc(1), ndc(2), ndc(3), ndc(4)};
template <>
std::initializer_list<ndc>
    ListReverseTestInitLists<ndc>::data_list_size_4_reversed_{ndc(4), ndc(3),
                                                              ndc(2), ndc(1)};
template <>
IteratorIdxs
    ListReverseTestInitLists<ndc>::data_list_size_4_reversed_element_idxes_{
        3, 2, 1, 0, 4};

template <>
std::initializer_list<ndc> ListReverseTestInitLists<ndc>::data_list_size_8_{
    ndc(1), ndc(2), ndc(3), ndc(4), ndc(5), ndc(6), ndc(7), ndc(8)};
template <>
std::initializer_list<ndc>
    ListReverseTestInitLists<ndc>::data_list_size_8_reversed_{
        ndc(8), ndc(7), ndc(6), ndc(5), ndc(4), ndc(3), ndc(2), ndc(1)};
template <>
IteratorIdxs
    ListReverseTestInitLists<ndc>::data_list_size_8_reversed_element_idxes_{
        7, 6, 5, 4, 3, 2, 1, 0, 8};

// ------------------------------------------------------------------------- //
//                        ListUniqueTestInitLists                            //
// ------------------------------------------------------------------------- //

// ---------------------------------int------------------------------------- //

template <>
std::initializer_list<int> ListUniqueTestInitLists<int>::data_list_size_0_{};
template <>
std::initializer_list<int>
    ListUniqueTestInitLists<int>::data_list_size_0_unique_{};
template <>
IteratorIdxs
    ListUniqueTestInitLists<int>::data_list_size_0_unique_removed_idxes_{};

template <>
std::initializer_list<int> ListUniqueTestInitLists<int>::data_list_size_1_{1};
template <>
std::initializer_list<int>
    ListUniqueTestInitLists<int>::data_list_size_1_unique_{1};
template <>
IteratorIdxs
    ListUniqueTestInitLists<int>::data_list_size_1_unique_removed_idxes_{};

template <>
std::initializer_list<int> ListUniqueTestInitLists<int>::data_list_size_4_{
    1, 2, 2, 3};
template <>
std::initializer_list<int>
    ListUniqueTestInitLists<int>::data_list_size_4_unique_{1, 2, 3};
template <>
IteratorIdxs
    ListUniqueTestInitLists<int>::data_list_size_4_unique_removed_idxes_{2};

template <>
std::initializer_list<int> ListUniqueTestInitLists<int>::data_list_size_8_{
    1, 2, 2, 3, 2, 2, 2, 1};
template <>
std::initializer_list<int>
    ListUniqueTestInitLists<int>::data_list_size_8_unique_{1, 2, 3, 2, 1};
template <>
IteratorIdxs
    ListUniqueTestInitLists<int>::data_list_size_8_unique_removed_idxes_{2, 5,
                                                                         6};

// ---------------------------------bool------------------------------------ //

template <>
std::initializer_list<bool> ListUniqueTestInitLists<bool>::data_list_size_0_{};
template <>
std::initializer_list<bool>
    ListUniqueTestInitLists<bool>::data_list_size_0_unique_{};
template <>
IteratorIdxs
    ListUniqueTestInitLists<bool>::data_list_size_0_unique_removed_idxes_{};

template <>
std::initializer_list<bool> ListUniqueTestInitLists<bool>::data_list_size_1_{
    true};
template <>
std::initializer_list<bool>
    ListUniqueTestInitLists<bool>::data_list_size_1_unique_{true};
template <>
IteratorIdxs
    ListUniqueTestInitLists<bool>::data_list_size_1_unique_removed_idxes_{};

template <>
std::initializer_list<bool> ListUniqueTestInitLists<bool>::data_list_size_4_{
    false, true, true, true};
template <>
std::initializer_list<bool>
    ListUniqueTestInitLists<bool>::data_list_size_4_unique_{false, true};
template <>
IteratorIdxs
    ListUniqueTestInitLists<bool>::data_list_size_4_unique_removed_idxes_{2, 3};

template <>
std::initializer_list<bool> ListUniqueTestInitLists<bool>::data_list_size_8_{
    false, true, true, false, true, true, true, false};
template <>
std::initializer_list<bool>
    ListUniqueTestInitLists<bool>::data_list_size_8_unique_{false, true, false,
                                                            true, false};
template <>
IteratorIdxs
    ListUniqueTestInitLists<bool>::data_list_size_8_unique_removed_idxes_{2, 5,
                                                                          6};

// ------------------------------- string----------------------------------- //

template <>
std::initializer_list<std::string>
    ListUniqueTestInitLists<string>::data_list_size_0_{};
template <>
std::initializer_list<std::string>
    ListUniqueTestInitLists<string>::data_list_size_0_unique_{};
template <>
IteratorIdxs
    ListUniqueTestInitLists<string>::data_list_size_0_unique_removed_idxes_{};

template <>
std::initializer_list<std::string>
    ListUniqueTestInitLists<string>::data_list_size_1_{"a"};
template <>
std::initializer_list<std::string>
    ListUniqueTestInitLists<string>::data_list_size_1_unique_{"a"};
template <>
IteratorIdxs
    ListUniqueTestInitLists<string>::data_list_size_1_unique_removed_idxes_{};

template <>
std::initializer_list<std::string>
    ListUniqueTestInitLists<string>::data_list_size_4_{"a", "ab", "ab", "aa"};
template <>
std::initializer_list<std::string>
    ListUniqueTestInitLists<string>::data_list_size_4_unique_{"a", "ab", "aa"};
template <>
IteratorIdxs
    ListUniqueTestInitLists<string>::data_list_size_4_unique_removed_idxes_{2};

template <>
std::initializer_list<std::string>
    ListUniqueTestInitLists<string>::data_list_size_8_{"a", "b", "b", "cc",
                                                       "b", "b", "b", "a"};
template <>
std::initializer_list<std::string>
    ListUniqueTestInitLists<string>::data_list_size_8_unique_{"a", "b", "cc",
                                                              "b", "a"};
template <>
IteratorIdxs
    ListUniqueTestInitLists<string>::data_list_size_8_unique_removed_idxes_{
        2, 5, 6};

// -----------------------------NoDefaultCtor------------------------------- //

template <>
std::initializer_list<ndc> ListUniqueTestInitLists<ndc>::data_list_size_0_{};
template <>
std::initializer_list<ndc>
    ListUniqueTestInitLists<ndc>::data_list_size_0_unique_{};
template <>
IteratorIdxs
    ListUniqueTestInitLists<ndc>::data_list_size_0_unique_removed_idxes_{};

template <>
std::initializer_list<ndc> ListUniqueTestInitLists<ndc>::data_list_size_1_{1};
template <>
std::initializer_list<ndc>
    ListUniqueTestInitLists<ndc>::data_list_size_1_unique_{1};
template <>
IteratorIdxs
    ListUniqueTestInitLists<ndc>::data_list_size_1_unique_removed_idxes_{};

template <>
std::initializer_list<ndc> ListUniqueTestInitLists<ndc>::data_list_size_4_{
    ndc(1), ndc(2), ndc(2), ndc(3)};
template <>
std::initializer_list<ndc>
    ListUniqueTestInitLists<ndc>::data_list_size_4_unique_{ndc(1), ndc(2),
                                                           ndc(3)};
template <>
IteratorIdxs
    ListUniqueTestInitLists<ndc>::data_list_size_4_unique_removed_idxes_{2};

template <>
std::initializer_list<ndc> ListUniqueTestInitLists<ndc>::data_list_size_8_{
    ndc(1), ndc(2), ndc(2), ndc(3), ndc(2), ndc(2), ndc(2), ndc(1)};
template <>
std::initializer_list<ndc>
    ListUniqueTestInitLists<ndc>::data_list_size_8_unique_{
        ndc(1), ndc(2), ndc(3), ndc(2), ndc(1)};
template <>
IteratorIdxs
    ListUniqueTestInitLists<ndc>::data_list_size_8_unique_removed_idxes_{2, 5,
                                                                         6};

// ------------------------------------------------------------------------- //
//                         ListSortTestInitLists                             //
// ------------------------------------------------------------------------- //

// ---------------------------------int------------------------------------- //

template <>
std::initializer_list<int> ListSortTestInitLists<int>::data_list_size_0_{};
template <>
std::initializer_list<int>
    ListSortTestInitLists<int>::data_list_size_0_sorted_{};
template <>
IteratorIdxs ListSortTestInitLists<int>::data_list_size_0_sorted_element_idxes_{
    0};

template <>
std::initializer_list<int> ListSortTestInitLists<int>::data_list_size_1_{4};
template <>
std::initializer_list<int> ListSortTestInitLists<int>::data_list_size_1_sorted_{
    4};
template <>
IteratorIdxs ListSortTestInitLists<int>::data_list_size_1_sorted_element_idxes_{
    0, 1};

template <>
std::initializer_list<int> ListSortTestInitLists<int>::data_list_size_4_{3, 4,
                                                                         1, 2};
template <>
std::initializer_list<int> ListSortTestInitLists<int>::data_list_size_4_sorted_{
    1, 2, 3, 4};
template <>
IteratorIdxs ListSortTestInitLists<int>::data_list_size_4_sorted_element_idxes_{
    2, 3, 0, 1, 4};

template <>
std::initializer_list<int> ListSortTestInitLists<int>::data_list_size_8_{
    5, 2, 3, 1, 4, 4, 3, 3};
template <>
std::initializer_list<int> ListSortTestInitLists<int>::data_list_size_8_sorted_{
    1, 2, 3, 3, 3, 4, 4, 5};
template <>
IteratorIdxs ListSortTestInitLists<int>::data_list_size_8_sorted_element_idxes_{
    7, 1, 2, 0, 5, 6, 3, 4, 8};

// ---------------------------------bool------------------------------------ //

template <>
std::initializer_list<bool> ListSortTestInitLists<bool>::data_list_size_0_{};
template <>
std::initializer_list<bool>
    ListSortTestInitLists<bool>::data_list_size_0_sorted_{};
template <>
IteratorIdxs
    ListSortTestInitLists<bool>::data_list_size_0_sorted_element_idxes_{0};

template <>
std::initializer_list<bool> ListSortTestInitLists<bool>::data_list_size_1_{
    true};
template <>
std::initializer_list<bool>
    ListSortTestInitLists<bool>::data_list_size_1_sorted_{true};
template <>
IteratorIdxs
    ListSortTestInitLists<bool>::data_list_size_1_sorted_element_idxes_{0, 1};

template <>
std::initializer_list<bool> ListSortTestInitLists<bool>::data_list_size_4_{
    true, false, true, false};
template <>
std::initializer_list<bool>
    ListSortTestInitLists<bool>::data_list_size_4_sorted_{false, false, true,
                                                          true};
template <>
IteratorIdxs
    ListSortTestInitLists<bool>::data_list_size_4_sorted_element_idxes_{2, 0, 3,
                                                                        1, 4};

template <>
std::initializer_list<bool> ListSortTestInitLists<bool>::data_list_size_8_{
    true, false, false, false, true, true, false, false};
template <>
std::initializer_list<bool>
    ListSortTestInitLists<bool>::data_list_size_8_sorted_{
        false, false, false, false, false, true, true, true};
template <>
IteratorIdxs
    ListSortTestInitLists<bool>::data_list_size_8_sorted_element_idxes_{
        5, 0, 1, 2, 6, 7, 3, 4, 8};

// ------------------------------- string----------------------------------- //

template <>
std::initializer_list<std::string>
    ListSortTestInitLists<string>::data_list_size_0_{};
template <>
std::initializer_list<std::string>
    ListSortTestInitLists<string>::data_list_size_0_sorted_{};
template <>
IteratorIdxs
    ListSortTestInitLists<string>::data_list_size_0_sorted_element_idxes_{0};

template <>
std::initializer_list<std::string>
    ListSortTestInitLists<string>::data_list_size_1_{"beb"};
template <>
std::initializer_list<std::string>
    ListSortTestInitLists<string>::data_list_size_1_sorted_{"beb"};
template <>
IteratorIdxs
    ListSortTestInitLists<string>::data_list_size_1_sorted_element_idxes_{0, 1};

template <>
std::initializer_list<std::string>
    ListSortTestInitLists<string>::data_list_size_4_{"ab", "b", "a", "aa"};
template <>
std::initializer_list<std::string>
    ListSortTestInitLists<string>::data_list_size_4_sorted_{"a", "aa", "ab",
                                                            "b"};
template <>
IteratorIdxs
    ListSortTestInitLists<string>::data_list_size_4_sorted_element_idxes_{
        2, 3, 0, 1, 4};

template <>
std::initializer_list<std::string>
    ListSortTestInitLists<string>::data_list_size_8_{"cas", "aa", "ab", "a",
                                                     "b",   "b",  "ab", "ab"};
template <>
std::initializer_list<std::string>
    ListSortTestInitLists<string>::data_list_size_8_sorted_{
        "a", "aa", "ab", "ab", "ab", "b", "b", "cas"};
template <>
IteratorIdxs
    ListSortTestInitLists<string>::data_list_size_8_sorted_element_idxes_{
        7, 1, 2, 0, 5, 6, 3, 4, 8};

// -----------------------------NoDefaultCtor------------------------------- //

template <>
std::initializer_list<ndc> ListSortTestInitLists<ndc>::data_list_size_0_{};
template <>
std::initializer_list<ndc>
    ListSortTestInitLists<ndc>::data_list_size_0_sorted_{};
template <>
IteratorIdxs ListSortTestInitLists<ndc>::data_list_size_0_sorted_element_idxes_{
    0};

template <>
std::initializer_list<ndc> ListSortTestInitLists<ndc>::data_list_size_1_{
    ndc(4)};
template <>
std::initializer_list<ndc> ListSortTestInitLists<ndc>::data_list_size_1_sorted_{
    ndc(4)};
template <>
IteratorIdxs ListSortTestInitLists<ndc>::data_list_size_1_sorted_element_idxes_{
    0, 1};

template <>
std::initializer_list<ndc> ListSortTestInitLists<ndc>::data_list_size_4_{
    ndc(3), ndc(4), ndc(1), ndc(2)};
template <>
std::initializer_list<ndc> ListSortTestInitLists<ndc>::data_list_size_4_sorted_{
    ndc(1), ndc(2), ndc(3), ndc(4)};
template <>
IteratorIdxs ListSortTestInitLists<ndc>::data_list_size_4_sorted_element_idxes_{
    2, 3, 0, 1, 4};

template <>
std::initializer_list<ndc> ListSortTestInitLists<ndc>::data_list_size_8_{
    ndc(5), ndc(2), ndc(3), ndc(1), ndc(4), ndc(4), ndc(3), ndc(3)};
template <>
std::initializer_list<ndc> ListSortTestInitLists<ndc>::data_list_size_8_sorted_{
    ndc(1), ndc(2), ndc(3), ndc(3), ndc(3), ndc(4), ndc(4), ndc(5)};
template <>
IteratorIdxs ListSortTestInitLists<ndc>::data_list_size_8_sorted_element_idxes_{
    7, 1, 2, 0, 5, 6, 3, 4, 8};

// ----------------------------SortByOneField------------------------------- //

template <>
std::initializer_list<sof> ListSortTestInitLists<sof>::data_list_size_0_{};
template <>
std::initializer_list<sof>
    ListSortTestInitLists<sof>::data_list_size_0_sorted_{};
template <>
IteratorIdxs ListSortTestInitLists<sof>::data_list_size_0_sorted_element_idxes_{
    0};

template <>
std::initializer_list<sof> ListSortTestInitLists<sof>::data_list_size_1_{
    sof(4, 4)};
template <>
std::initializer_list<sof> ListSortTestInitLists<sof>::data_list_size_1_sorted_{
    sof(4, 4)};
template <>
IteratorIdxs ListSortTestInitLists<sof>::data_list_size_1_sorted_element_idxes_{
    0, 1};

template <>
std::initializer_list<sof> ListSortTestInitLists<sof>::data_list_size_4_{
    sof(2, 4), sof(2, 2), sof(1, 1), sof(2, 3)};
template <>
std::initializer_list<sof> ListSortTestInitLists<sof>::data_list_size_4_sorted_{
    sof(1, 1), sof(2, 4), sof(2, 2), sof(2, 3)};

template <>
IteratorIdxs ListSortTestInitLists<sof>::data_list_size_4_sorted_element_idxes_{
    1, 2, 0, 3, 4};

template <>
std::initializer_list<sof> ListSortTestInitLists<sof>::data_list_size_8_{
    sof(5, 5), sof(2, 2), sof(3, 3), sof(1, 1),
    sof(4, 5), sof(4, 4), sof(3, 1), sof(3, 2)};
template <>
std::initializer_list<sof> ListSortTestInitLists<sof>::data_list_size_8_sorted_{
    sof(1, 1), sof(2, 2), sof(3, 3), sof(3, 1),
    sof(3, 2), sof(4, 5), sof(4, 4), sof(5, 5)};
template <>
IteratorIdxs ListSortTestInitLists<sof>::data_list_size_8_sorted_element_idxes_{
    7, 1, 2, 0, 5, 6, 3, 4, 8};
