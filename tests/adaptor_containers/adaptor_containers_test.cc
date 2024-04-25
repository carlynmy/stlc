#include "adaptor_containers_test.h"

// ------------------------------------------------------------------------- //
//                AdaptorContainersConstructorTestInitLists                  //
// ------------------------------------------------------------------------- //

// ---------------------------------int------------------------------------- //

template <>
std::initializer_list<int>
    AdaptorContainersConstructorTestInitLists<int>::data_init_list_size_4_{
        1, 2, 3, 4};

// ---------------------------------bool------------------------------------ //

template <>
std::initializer_list<bool>
    AdaptorContainersConstructorTestInitLists<bool>::data_init_list_size_4_{
        false, false, true, false};

// ------------------------------- string----------------------------------- //

template <>
std::initializer_list<string>
    AdaptorContainersConstructorTestInitLists<string>::data_init_list_size_4_{
        "1", "2", "3", "4"};

// -----------------------------NoDefaultCtor------------------------------- //

template <>
std::initializer_list<ndc>
    AdaptorContainersConstructorTestInitLists<ndc>::data_init_list_size_4_{
        ndc(1), ndc(2), ndc(3), ndc(4)};

// ----------------------------SortByOneField------------------------------- //

template <>
std::initializer_list<sof>
    AdaptorContainersConstructorTestInitLists<sof>::data_init_list_size_4_{
        sof(1, 1), sof(2, 1), sof(3, 1), sof(4, 2)};
