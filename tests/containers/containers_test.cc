#include "containers_test.h"

// ------------------------------------------------------------------------- //
//                     ContainersSizeTestInitListsData                       //
// ------------------------------------------------------------------------- //

// ---------------------------------int------------------------------------- //
// ---------------------------------bool------------------------------------ //
// ------------------------------- string----------------------------------- //
// -----------------------------NoDefaultCtor------------------------------- //
// ----------------------------SortByOneField------------------------------- //
// ----------------------------pair int string------------------------------ //
// -----------------------------pair int bool------------------------------- //
// ----------------------------pair string int------------------------------ //
// ----------------------pair NoDefaultCtor NoDefaultCtor------------------- //
// ---------------------pair SortByOneField SortByOneField------------------ //

// ------------------------------------------------------------------------- //
//                     ContainersSizeTestInitListsData                       //
// ------------------------------------------------------------------------- //

// ---------------------------------int------------------------------------- //

template <>
std::initializer_list<int>
    ContainersSizeTestInitLists<int>::data_init_list_size_2_ = {1, 2};

// ---------------------------------bool------------------------------------ //

template <>
std::initializer_list<bool>
    ContainersSizeTestInitLists<bool>::data_init_list_size_2_ = {false, true};

// ------------------------------- string----------------------------------- //

template <>
std::initializer_list<string>
    ContainersSizeTestInitLists<string>::data_init_list_size_2_ = {"a", "ab"};

// -----------------------------NoDefaultCtor------------------------------- //

template <>
std::initializer_list<ndc>
    ContainersSizeTestInitLists<ndc>::data_init_list_size_2_ = {
        NoDefaultCtor(1), NoDefaultCtor(2)};

// ----------------------------SortByOneField------------------------------- //

template <>
std::initializer_list<sof>
    ContainersSizeTestInitLists<sof>::data_init_list_size_2_ = {sof(1, 2),
                                                                sof(2, 1)};

// ----------------------------pair int string------------------------------ //

template <>
std::initializer_list<std::pair<const int, string>> ContainersSizeTestInitLists<
    std::pair<const int, string>>::data_init_list_size_2_ = {{1, "a"},
                                                             {2, "ab"}};

// -----------------------------pair int bool------------------------------- //

template <>
std::initializer_list<std::pair<const int, bool>> ContainersSizeTestInitLists<
    std::pair<const int, bool>>::data_init_list_size_2_ = {{1, false},
                                                           {2, true}};

// ----------------------------pair string int------------------------------ //

template <>
std::initializer_list<std::pair<const string, int>> ContainersSizeTestInitLists<
    std::pair<const string, int>>::data_init_list_size_2_ = {{"a", 1},
                                                             {"ab", 2}};

// ----------------------pair NoDefaultCtor NoDefaultCtor------------------- //

template <>
std::initializer_list<std::pair<const ndc, ndc>> ContainersSizeTestInitLists<
    std::pair<const ndc, ndc>>::data_init_list_size_2_ = {{ndc(1), ndc(2)},
                                                          {ndc(3), ndc(2)}};

// ---------------------pair SortByOneField SortByOneField------------------ //

template <>
std::initializer_list<std::pair<const sof, sof>> ContainersSizeTestInitLists<
    std::pair<const sof, sof>>::data_init_list_size_2_ = {
    {sof(1, 2), sof(2, 1)}, {sof(3, 1), sof(4, 2)}};

// ------------------------------------------------------------------------- //
//                ContainersConstIteratorTestInitListsData                   //
// ------------------------------------------------------------------------- //

// ---------------------------------int------------------------------------- //

template <>
std::initializer_list<int>
    ContainersConstIteratorTestInitLists<int>::data_init_list_size_0_{};
template <>
std::initializer_list<int>
    ContainersConstIteratorTestInitLists<int>::data_init_list_size_1_{1};
template <>
std::initializer_list<int>
    ContainersConstIteratorTestInitLists<int>::data_init_list_size_4_{1, 2, 3,
                                                                      4};
template <>
std::initializer_list<int>
    ContainersConstIteratorTestInitLists<int>::data_init_list_size_8_{
        1, 2, 3, 4, 5, 6, 7, 8};

// ---------------------------------bool------------------------------------ //

template <>
std::initializer_list<bool>
    ContainersConstIteratorTestInitLists<bool>::data_init_list_size_0_{};
template <>
std::initializer_list<bool>
    ContainersConstIteratorTestInitLists<bool>::data_init_list_size_1_{false};
template <>
std::initializer_list<bool>
    ContainersConstIteratorTestInitLists<bool>::data_init_list_size_4_{
        false, true, false, true};
template <>
std::initializer_list<bool>
    ContainersConstIteratorTestInitLists<bool>::data_init_list_size_8_{
        false, true, false, true, false, true, false, true};

// ------------------------------- string----------------------------------- //

template <>
std::initializer_list<string>
    ContainersConstIteratorTestInitLists<string>::data_init_list_size_0_{};
template <>
std::initializer_list<string>
    ContainersConstIteratorTestInitLists<string>::data_init_list_size_1_{"1"};
template <>
std::initializer_list<string>
    ContainersConstIteratorTestInitLists<string>::data_init_list_size_4_{
        "1", "2", "3", "4"};
template <>
std::initializer_list<string>
    ContainersConstIteratorTestInitLists<string>::data_init_list_size_8_{
        "1", "2", "3", "4", "5", "6", "7", "8"};

// -----------------------------NoDefaultCtor------------------------------- //

template <>
std::initializer_list<ndc>
    ContainersConstIteratorTestInitLists<ndc>::data_init_list_size_0_{};
template <>
std::initializer_list<ndc>
    ContainersConstIteratorTestInitLists<ndc>::data_init_list_size_1_{ndc(1)};
template <>
std::initializer_list<ndc>
    ContainersConstIteratorTestInitLists<ndc>::data_init_list_size_4_{
        ndc(1), ndc(2), ndc(3), ndc(4)};
template <>
std::initializer_list<ndc>
    ContainersConstIteratorTestInitLists<ndc>::data_init_list_size_8_{
        ndc(1), ndc(2), ndc(3), ndc(4), ndc(5), ndc(6), ndc(7), ndc(8)};

// ----------------------------SortByOneField------------------------------- //

template <>
std::initializer_list<sof>
    ContainersConstIteratorTestInitLists<sof>::data_init_list_size_0_{};
template <>
std::initializer_list<sof>
    ContainersConstIteratorTestInitLists<sof>::data_init_list_size_1_{
        sof(1, 1)};
template <>
std::initializer_list<sof>
    ContainersConstIteratorTestInitLists<sof>::data_init_list_size_4_{
        sof(1, 1), sof(2, 1), sof(3, 1), sof(4, 1)};
template <>
std::initializer_list<sof>
    ContainersConstIteratorTestInitLists<sof>::data_init_list_size_8_{
        sof(1, 1), sof(2, 1), sof(3, 1), sof(4, 1),
        sof(5, 1), sof(6, 1), sof(7, 1), sof(8, 1)};

// ----------------------------pair int string------------------------------ //

template <>
std::initializer_list<std::pair<const int, string>>
    ContainersConstIteratorTestInitLists<
        std::pair<const int, string>>::data_init_list_size_0_{};
template <>
std::initializer_list<std::pair<const int, string>>
    ContainersConstIteratorTestInitLists<
        std::pair<const int, string>>::data_init_list_size_1_{{1, "1"}};
template <>
std::initializer_list<std::pair<const int, string>>
    ContainersConstIteratorTestInitLists<
        std::pair<const int, string>>::data_init_list_size_4_{
        {1, "1"}, {2, "1"}, {3, "1"}, {4, "1"}};
template <>
std::initializer_list<std::pair<const int, string>>
    ContainersConstIteratorTestInitLists<
        std::pair<const int, string>>::data_init_list_size_8_{
        {1, "1"}, {2, "1"}, {3, "1"}, {4, "1"},
        {5, "1"}, {6, "1"}, {7, "1"}, {8, "1"}};

// -----------------------------pair const int
// bool------------------------------- //

template <>
std::initializer_list<std::pair<const int, bool>>
    ContainersConstIteratorTestInitLists<
        std::pair<const int, bool>>::data_init_list_size_0_{};
template <>
std::initializer_list<std::pair<const int, bool>>
    ContainersConstIteratorTestInitLists<
        std::pair<const int, bool>>::data_init_list_size_1_{{1, true}};
template <>
std::initializer_list<std::pair<const int, bool>>
    ContainersConstIteratorTestInitLists<
        std::pair<const int, bool>>::data_init_list_size_4_{
        {1, true}, {2, true}, {3, true}, {4, true}};
template <>
std::initializer_list<std::pair<const int, bool>>
    ContainersConstIteratorTestInitLists<
        std::pair<const int, bool>>::data_init_list_size_8_{
        {1, true}, {2, true}, {3, true}, {4, true},
        {5, true}, {6, true}, {7, true}, {8, true}};

// ----------------------------pair const string
// int------------------------------ //

template <>
std::initializer_list<std::pair<const string, int>>
    ContainersConstIteratorTestInitLists<
        std::pair<const string, int>>::data_init_list_size_0_{};
template <>
std::initializer_list<std::pair<const string, int>>
    ContainersConstIteratorTestInitLists<
        std::pair<const string, int>>::data_init_list_size_1_{{"1", 1}};
template <>
std::initializer_list<std::pair<const string, int>>
    ContainersConstIteratorTestInitLists<
        std::pair<const string, int>>::data_init_list_size_4_{
        {"1", 1}, {"2", 1}, {"3", 1}, {"4", 1}};
template <>
std::initializer_list<std::pair<const string, int>>
    ContainersConstIteratorTestInitLists<
        std::pair<const string, int>>::data_init_list_size_8_{
        {"1", 1}, {"2", 1}, {"3", 1}, {"4", 1},
        {"5", 1}, {"6", 1}, {"7", 1}, {"8", 1}};

// ----------------------pair const NoDefaultCtor
// NoDefaultCtor------------------- //

template <>
std::initializer_list<std::pair<const ndc, ndc>>
    ContainersConstIteratorTestInitLists<
        std::pair<const ndc, ndc>>::data_init_list_size_0_{};
template <>
std::initializer_list<std::pair<const ndc, ndc>>
    ContainersConstIteratorTestInitLists<
        std::pair<const ndc, ndc>>::data_init_list_size_1_{{ndc(1), ndc(1)}};
template <>
std::initializer_list<std::pair<const ndc, ndc>>
    ContainersConstIteratorTestInitLists<
        std::pair<const ndc, ndc>>::data_init_list_size_4_{
        {ndc(1), ndc(1)}, {ndc(2), ndc(1)}, {ndc(3), ndc(1)}, {ndc(4), ndc(1)}};
template <>
std::initializer_list<std::pair<const ndc, ndc>>
    ContainersConstIteratorTestInitLists<
        std::pair<const ndc, ndc>>::data_init_list_size_8_{
        {ndc(1), ndc(1)}, {ndc(2), ndc(1)}, {ndc(3), ndc(1)}, {ndc(4), ndc(1)},
        {ndc(5), ndc(1)}, {ndc(6), ndc(1)}, {ndc(7), ndc(1)}, {ndc(8), ndc(1)}};

// ---------------------pair const SortByOneField
// SortByOneField------------------ //

template <>
std::initializer_list<std::pair<const sof, sof>>
    ContainersConstIteratorTestInitLists<
        std::pair<const sof, sof>>::data_init_list_size_0_{};
template <>
std::initializer_list<std::pair<const sof, sof>>
    ContainersConstIteratorTestInitLists<
        std::pair<const sof, sof>>::data_init_list_size_1_{
        {sof(1, 1), sof(1, 1)}};
template <>
std::initializer_list<std::pair<const sof, sof>>
    ContainersConstIteratorTestInitLists<
        std::pair<const sof, sof>>::data_init_list_size_4_{
        {sof(1, 1), sof(1, 1)},
        {sof(2, 1), sof(1, 1)},
        {sof(3, 1), sof(1, 1)},
        {sof(4, 1), sof(1, 1)}};
template <>
std::initializer_list<std::pair<const sof, sof>>
    ContainersConstIteratorTestInitLists<
        std::pair<const sof, sof>>::data_init_list_size_8_{
        {sof(1, 1), sof(1, 1)}, {sof(2, 1), sof(1, 1)}, {sof(3, 1), sof(1, 1)},
        {sof(4, 1), sof(1, 1)}, {sof(5, 1), sof(1, 1)}, {sof(6, 1), sof(1, 1)},
        {sof(7, 1), sof(1, 1)}, {sof(8, 1), sof(1, 1)}};

// ------------------------------------------------------------------------- //
//                ContainersIteratorTestInitListsData                   //
// ------------------------------------------------------------------------- //

// ---------------------------------int------------------------------------- //

template <>
std::initializer_list<int>
    ContainersIteratorTestInitLists<int>::data_init_list_size_1_2_{11};
template <>
std::initializer_list<int>
    ContainersIteratorTestInitLists<int>::data_init_list_size_4_2_{11, 21, 31,
                                                                   41};
template <>
std::initializer_list<int>
    ContainersIteratorTestInitLists<int>::data_init_list_size_8_2_{
        11, 21, 31, 41, 51, 61, 71, 81};

// ---------------------------------bool------------------------------------ //

template <>
std::initializer_list<bool>
    ContainersIteratorTestInitLists<bool>::data_init_list_size_1_2_{true};
template <>
std::initializer_list<bool>
    ContainersIteratorTestInitLists<bool>::data_init_list_size_4_2_{
        true, true, false, false};
template <>
std::initializer_list<bool>
    ContainersIteratorTestInitLists<bool>::data_init_list_size_8_2_{
        true, true, false, false, true, true, false, true};

// ------------------------------- string----------------------------------- //

template <>
std::initializer_list<string>
    ContainersIteratorTestInitLists<string>::data_init_list_size_1_2_{"11"};
template <>
std::initializer_list<string>
    ContainersIteratorTestInitLists<string>::data_init_list_size_4_2_{
        "11", "21", "31", "41"};
template <>
std::initializer_list<string>
    ContainersIteratorTestInitLists<string>::data_init_list_size_8_2_{
        "11", "21", "31", "41", "51", "61", "71", "81"};

// -----------------------------NoDefaultCtor------------------------------- //

template <>
std::initializer_list<ndc>
    ContainersIteratorTestInitLists<ndc>::data_init_list_size_1_2_{ndc(11)};
template <>
std::initializer_list<ndc>
    ContainersIteratorTestInitLists<ndc>::data_init_list_size_4_2_{
        ndc(11), ndc(21), ndc(31), ndc(41)};
template <>
std::initializer_list<ndc>
    ContainersIteratorTestInitLists<ndc>::data_init_list_size_8_2_{
        ndc(11), ndc(21), ndc(31), ndc(41), ndc(51), ndc(61), ndc(71), ndc(81)};

// ----------------------------SortByOneField------------------------------- //

template <>
std::initializer_list<sof>
    ContainersIteratorTestInitLists<sof>::data_init_list_size_1_2_{sof(11, 11)};
template <>
std::initializer_list<sof>
    ContainersIteratorTestInitLists<sof>::data_init_list_size_4_2_{
        sof(11, 11), sof(21, 11), sof(31, 11), sof(41, 11)};
template <>
std::initializer_list<sof>
    ContainersIteratorTestInitLists<sof>::data_init_list_size_8_2_{
        sof(11, 11), sof(21, 11), sof(31, 11), sof(41, 11),
        sof(51, 11), sof(61, 11), sof(71, 11), sof(81, 11)};
