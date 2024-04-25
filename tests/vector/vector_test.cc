#include "vector_test.h"

// ------------------------------------------------------------------------- //
//                    VectorElementAccessTestInitLists                       //
// ------------------------------------------------------------------------- //

// ---------------------------------int------------------------------------- //

template <>
std::initializer_list<int>
    VectorElementAccessTestInitLists<int>::data_init_list_size_1_2_{11};
template <>
std::initializer_list<int>
    VectorElementAccessTestInitLists<int>::data_init_list_size_4_2_{11, 22, 33,
                                                                    44};

// ---------------------------------bool------------------------------------ //

template <>
std::initializer_list<bool>
    VectorElementAccessTestInitLists<bool>::data_init_list_size_1_2_{false};
template <>
std::initializer_list<bool>
    VectorElementAccessTestInitLists<bool>::data_init_list_size_4_2_{
        false, true, false, true};

// ------------------------------- string----------------------------------- //

template <>
std::initializer_list<string>
    VectorElementAccessTestInitLists<string>::data_init_list_size_1_2_{"11"};
template <>
std::initializer_list<string>
    VectorElementAccessTestInitLists<string>::data_init_list_size_4_2_{
        "11", "22", "33", "44"};

// -----------------------------NoDefaultCtor------------------------------- //

template <>
std::initializer_list<ndc>
    VectorElementAccessTestInitLists<ndc>::data_init_list_size_1_2_{ndc(11)};
template <>
std::initializer_list<ndc>
    VectorElementAccessTestInitLists<ndc>::data_init_list_size_4_2_{
        ndc(11), ndc(22), ndc(33), ndc(44)};

// ----------------------------SortByOneField------------------------------- //

template <>
std::initializer_list<sof>
    VectorElementAccessTestInitLists<sof>::data_init_list_size_1_2_{sof(11, 2)};
template <>
std::initializer_list<sof>
    VectorElementAccessTestInitLists<sof>::data_init_list_size_4_2_{
        sof(11, 2), sof(22, 2), sof(33, 2), sof(44, 2)};

// ------------------------------------------------------------------------- //
//                        VectorResizeTestInitLists                          //
// ------------------------------------------------------------------------- //

// ---------------------------------int------------------------------------- //

template <>
int VectorResizeTestInitLists<int>::fill_value_ = 11;
template <>
std::initializer_list<int>
    VectorResizeTestInitLists<int>::data_init_list_size_0_resized_1_{11};
template <>
std::initializer_list<int>
    VectorResizeTestInitLists<int>::data_init_list_size_1_resized_4_{1, 11, 11,
                                                                     11};
template <>
std::initializer_list<int>
    VectorResizeTestInitLists<int>::data_init_list_size_4_resized_8_{
        1, 2, 3, 4, 11, 11, 11, 11};

// ---------------------------------bool------------------------------------ //

template <>
bool VectorResizeTestInitLists<bool>::fill_value_ = false;
template <>
std::initializer_list<bool>
    VectorResizeTestInitLists<bool>::data_init_list_size_0_resized_1_{false};
template <>
std::initializer_list<bool>
    VectorResizeTestInitLists<bool>::data_init_list_size_1_resized_4_{
        true, false, false, false};
template <>
std::initializer_list<bool>
    VectorResizeTestInitLists<bool>::data_init_list_size_4_resized_8_{
        false, false, false, true, false, false, false, false};

// ------------------------------- string----------------------------------- //

template <>
string VectorResizeTestInitLists<string>::fill_value_ = "11";
template <>
std::initializer_list<string>
    VectorResizeTestInitLists<string>::data_init_list_size_0_resized_1_{"11"};
template <>
std::initializer_list<string>
    VectorResizeTestInitLists<string>::data_init_list_size_1_resized_4_{
        "1", "11", "11", "11"};
template <>
std::initializer_list<string>
    VectorResizeTestInitLists<string>::data_init_list_size_4_resized_8_{
        "1", "2", "3", "4", "11", "11", "11", "11"};

// -----------------------------NoDefaultCtor------------------------------- //

template <>
ndc VectorResizeTestInitLists<ndc>::fill_value_ = ndc(11);
template <>
std::initializer_list<ndc>
    VectorResizeTestInitLists<ndc>::data_init_list_size_0_resized_1_{ndc(11)};
template <>
std::initializer_list<ndc>
    VectorResizeTestInitLists<ndc>::data_init_list_size_1_resized_4_{
        ndc(1), ndc(11), ndc(11), ndc(11)};
template <>
std::initializer_list<ndc>
    VectorResizeTestInitLists<ndc>::data_init_list_size_4_resized_8_{
        ndc(1), ndc(2), ndc(3), ndc(4), ndc(11), ndc(11), ndc(11), ndc(11)};

// ----------------------------SortByOneField------------------------------- //

template <>
sof VectorResizeTestInitLists<sof>::fill_value_ = sof(11, 1);
template <>
std::initializer_list<sof>
    VectorResizeTestInitLists<sof>::data_init_list_size_0_resized_1_{
        sof(11, 1)};
template <>
std::initializer_list<sof>
    VectorResizeTestInitLists<sof>::data_init_list_size_1_resized_4_{
        sof(1, 1), sof(11, 1), sof(11, 1), sof(11, 1)};
template <>
std::initializer_list<sof>
    VectorResizeTestInitLists<sof>::data_init_list_size_4_resized_8_{
        sof(1, 1),  sof(2, 1),  sof(3, 1),  sof(4, 1),
        sof(11, 1), sof(11, 1), sof(11, 1), sof(11, 1)};

// ------------------------------------------------------------------------- //
//                     VectorResizeHasDCTestInitList                         //
// ------------------------------------------------------------------------- //

// ---------------------------------int------------------------------------- //

template <>
std::initializer_list<int>
    VectorResizeHasDCTestInitLists<int>::data_init_list_size_0_resized_1_{0};
template <>
std::initializer_list<int>
    VectorResizeHasDCTestInitLists<int>::data_init_list_size_1_resized_4_{1, 0,
                                                                          0, 0};
template <>
std::initializer_list<int>
    VectorResizeHasDCTestInitLists<int>::data_init_list_size_4_resized_8_{
        1, 2, 3, 4, 0, 0, 0, 0};

// ---------------------------------bool------------------------------------ //

template <>
std::initializer_list<bool>
    VectorResizeHasDCTestInitLists<bool>::data_init_list_size_0_resized_1_{
        false};
template <>
std::initializer_list<bool>
    VectorResizeHasDCTestInitLists<bool>::data_init_list_size_1_resized_4_{
        true, false, false, false};
template <>
std::initializer_list<bool>
    VectorResizeHasDCTestInitLists<bool>::data_init_list_size_4_resized_8_{
        false, false, false, true, false, false, false, false};

// ------------------------------- string----------------------------------- //

template <>
std::initializer_list<string>
    VectorResizeHasDCTestInitLists<string>::data_init_list_size_0_resized_1_{
        ""};
template <>
std::initializer_list<string>
    VectorResizeHasDCTestInitLists<string>::data_init_list_size_1_resized_4_{
        "1", "", "", ""};
template <>
std::initializer_list<string>
    VectorResizeHasDCTestInitLists<string>::data_init_list_size_4_resized_8_{
        "1", "2", "3", "4", "", "", "", ""};

// ----------------------------SortByOneField------------------------------- //

template <>
std::initializer_list<sof>
    VectorResizeHasDCTestInitLists<sof>::data_init_list_size_0_resized_1_{
        sof(0, 0)};
template <>
std::initializer_list<sof>
    VectorResizeHasDCTestInitLists<sof>::data_init_list_size_1_resized_4_{
        sof(1, 1), sof(0, 0), sof(0, 0), sof(0, 0)};
template <>
std::initializer_list<sof>
    VectorResizeHasDCTestInitLists<sof>::data_init_list_size_4_resized_8_{
        sof(1, 1), sof(2, 1), sof(3, 1), sof(4, 1),
        sof(0, 0), sof(0, 0), sof(0, 0), sof(0, 0)};
