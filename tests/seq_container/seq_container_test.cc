#include "seq_container_test.h"

// ------------------------------------------------------------------------- //
//                         SeqContainerTestInitLists                         //
// ------------------------------------------------------------------------- //

// ---------------------------------int------------------------------------- //

template <>
std::initializer_list<int>
    SeqContainerTestInitLists<int>::data_init_list_size_0_{};
template <>
std::initializer_list<int>
    SeqContainerTestInitLists<int>::data_init_list_size_1_{1};
template <>
std::initializer_list<int>
    SeqContainerTestInitLists<int>::data_init_list_size_2_{1, 2};
template <>
std::initializer_list<int>
    SeqContainerTestInitLists<int>::data_init_list_size_4_{1, 2, 3, 4};
template <>
std::initializer_list<int>
    SeqContainerTestInitLists<int>::data_init_list_size_8_{1, 2, 3, 4,
                                                           5, 6, 7, 8};

// ---------------------------------bool------------------------------------ //

template <>
std::initializer_list<bool>
    SeqContainerTestInitLists<bool>::data_init_list_size_0_{};
template <>
std::initializer_list<bool>
    SeqContainerTestInitLists<bool>::data_init_list_size_1_{true};
template <>
std::initializer_list<bool>
    SeqContainerTestInitLists<bool>::data_init_list_size_2_{false, true};
template <>
std::initializer_list<bool>
    SeqContainerTestInitLists<bool>::data_init_list_size_4_{false, false, false,
                                                            true};
template <>
std::initializer_list<bool>
    SeqContainerTestInitLists<bool>::data_init_list_size_8_{
        false, false, false, false, false, false, false, true};

// ------------------------------- string----------------------------------- //

template <>
std::initializer_list<string>
    SeqContainerTestInitLists<string>::data_init_list_size_0_{};
template <>
std::initializer_list<string>
    SeqContainerTestInitLists<string>::data_init_list_size_1_{"1"};
template <>
std::initializer_list<string>
    SeqContainerTestInitLists<string>::data_init_list_size_2_{"1", "2"};
template <>
std::initializer_list<string>
    SeqContainerTestInitLists<string>::data_init_list_size_4_{"1", "2", "3",
                                                              "4"};
template <>
std::initializer_list<string>
    SeqContainerTestInitLists<string>::data_init_list_size_8_{
        "1", "2", "3", "4", "5", "6", "7", "8"};

// -----------------------------NoDefaultCtor------------------------------- //

template <>
std::initializer_list<ndc>
    SeqContainerTestInitLists<ndc>::data_init_list_size_0_{};
template <>
std::initializer_list<ndc>
    SeqContainerTestInitLists<ndc>::data_init_list_size_1_{ndc(1)};
template <>
std::initializer_list<ndc>
    SeqContainerTestInitLists<ndc>::data_init_list_size_2_{ndc(1), ndc(2)};
template <>
std::initializer_list<ndc>
    SeqContainerTestInitLists<ndc>::data_init_list_size_4_{ndc(1), ndc(2),
                                                           ndc(3), ndc(4)};
template <>
std::initializer_list<ndc>
    SeqContainerTestInitLists<ndc>::data_init_list_size_8_{
        ndc(1), ndc(2), ndc(3), ndc(4), ndc(5), ndc(6), ndc(7), ndc(8)};

// ----------------------------SortByOneField------------------------------- //

template <>
std::initializer_list<sof>
    SeqContainerTestInitLists<sof>::data_init_list_size_0_{};
template <>
std::initializer_list<sof>
    SeqContainerTestInitLists<sof>::data_init_list_size_1_{sof(1, 1)};
template <>
std::initializer_list<sof>
    SeqContainerTestInitLists<sof>::data_init_list_size_2_{sof(1, 1),
                                                           sof(2, 1)};
template <>
std::initializer_list<sof>
    SeqContainerTestInitLists<sof>::data_init_list_size_4_{
        sof(1, 1), sof(2, 1), sof(3, 1), sof(4, 1)};
template <>
std::initializer_list<sof>
    SeqContainerTestInitLists<sof>::data_init_list_size_8_{
        sof(1, 1), sof(2, 1), sof(3, 1), sof(4, 1),
        sof(5, 1), sof(6, 1), sof(7, 1), sof(8, 1)};

// ------------------------------------------------------------------------- //
//                   SeqContainerConstructorNdcTestInitLists                 //
// ------------------------------------------------------------------------- //

// ---------------------------------int------------------------------------- //

template <>
int SeqContainerConstructorNdcTestInitLists<int>::value_1 = 10;

// ---------------------------------bool------------------------------------ //

template <>
bool SeqContainerConstructorNdcTestInitLists<bool>::value_1 = false;

// ------------------------------- string----------------------------------- //

template <>
string SeqContainerConstructorNdcTestInitLists<string>::value_1 = "10";

// -----------------------------NoDefaultCtor------------------------------- //

template <>
ndc SeqContainerConstructorNdcTestInitLists<ndc>::value_1 = ndc(10);

// ----------------------------SortByOneField------------------------------- //

template <>
sof SeqContainerConstructorNdcTestInitLists<sof>::value_1 = sof(10, 2);

// ------------------------------------------------------------------------- //
//                   SeqContainerPushFrontTestInitLists                      //
// ------------------------------------------------------------------------- //

// ---------------------------------int------------------------------------- //

template <>
std::initializer_list<int> SeqContainerPushFrontTestInitLists<
    int>::data_init_list_size_0_pushed_front_{
    SeqContainerConstructorNdcTestInitLists<int>::value_1};
template <>
std::initializer_list<int> SeqContainerPushFrontTestInitLists<
    int>::data_init_list_size_1_pushed_front_{
    SeqContainerConstructorNdcTestInitLists<int>::value_1, 1};
template <>
std::initializer_list<int> SeqContainerPushFrontTestInitLists<
    int>::data_init_list_size_2_pushed_front_{
    SeqContainerConstructorNdcTestInitLists<int>::value_1, 1, 2};
template <>
std::initializer_list<int> SeqContainerPushFrontTestInitLists<
    int>::data_init_list_size_4_pushed_front_{
    SeqContainerConstructorNdcTestInitLists<int>::value_1, 1, 2, 3, 4};
template <>
std::initializer_list<int> SeqContainerPushFrontTestInitLists<
    int>::data_init_list_size_8_pushed_front_{
    SeqContainerConstructorNdcTestInitLists<int>::value_1,
    1,
    2,
    3,
    4,
    5,
    6,
    7,
    8};

// ---------------------------------bool------------------------------------ //

template <>
std::initializer_list<bool> SeqContainerPushFrontTestInitLists<
    bool>::data_init_list_size_0_pushed_front_{
    SeqContainerConstructorNdcTestInitLists<bool>::value_1};
template <>
std::initializer_list<bool> SeqContainerPushFrontTestInitLists<
    bool>::data_init_list_size_1_pushed_front_{
    SeqContainerConstructorNdcTestInitLists<bool>::value_1, true};
template <>
std::initializer_list<bool> SeqContainerPushFrontTestInitLists<
    bool>::data_init_list_size_2_pushed_front_{
    SeqContainerConstructorNdcTestInitLists<bool>::value_1, false, true};
template <>
std::initializer_list<bool> SeqContainerPushFrontTestInitLists<
    bool>::data_init_list_size_4_pushed_front_{
    SeqContainerConstructorNdcTestInitLists<bool>::value_1, false, false, false,
    true};
template <>
std::initializer_list<bool> SeqContainerPushFrontTestInitLists<
    bool>::data_init_list_size_8_pushed_front_{
    SeqContainerConstructorNdcTestInitLists<bool>::value_1,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    true};

// ------------------------------- string----------------------------------- //

template <>
std::initializer_list<string> SeqContainerPushFrontTestInitLists<
    string>::data_init_list_size_0_pushed_front_{
    SeqContainerConstructorNdcTestInitLists<string>::value_1};
template <>
std::initializer_list<string> SeqContainerPushFrontTestInitLists<
    string>::data_init_list_size_1_pushed_front_{
    SeqContainerConstructorNdcTestInitLists<string>::value_1, "1"};
template <>
std::initializer_list<string> SeqContainerPushFrontTestInitLists<
    string>::data_init_list_size_2_pushed_front_{
    SeqContainerConstructorNdcTestInitLists<string>::value_1, "1", "2"};
template <>
std::initializer_list<string> SeqContainerPushFrontTestInitLists<
    string>::data_init_list_size_4_pushed_front_{
    SeqContainerConstructorNdcTestInitLists<string>::value_1, "1", "2", "3",
    "4"};
template <>
std::initializer_list<string> SeqContainerPushFrontTestInitLists<
    string>::data_init_list_size_8_pushed_front_{
    SeqContainerConstructorNdcTestInitLists<string>::value_1,
    "1",
    "2",
    "3",
    "4",
    "5",
    "6",
    "7",
    "8"};

// -----------------------------NoDefaultCtor------------------------------- //

template <>
std::initializer_list<ndc> SeqContainerPushFrontTestInitLists<
    ndc>::data_init_list_size_0_pushed_front_{
    SeqContainerConstructorNdcTestInitLists<ndc>::value_1};
template <>
std::initializer_list<ndc> SeqContainerPushFrontTestInitLists<
    ndc>::data_init_list_size_1_pushed_front_{
    SeqContainerConstructorNdcTestInitLists<ndc>::value_1, ndc(1)};
template <>
std::initializer_list<ndc> SeqContainerPushFrontTestInitLists<
    ndc>::data_init_list_size_2_pushed_front_{
    SeqContainerConstructorNdcTestInitLists<ndc>::value_1, ndc(1), ndc(2)};
template <>
std::initializer_list<ndc> SeqContainerPushFrontTestInitLists<
    ndc>::data_init_list_size_4_pushed_front_{
    SeqContainerConstructorNdcTestInitLists<ndc>::value_1, ndc(1), ndc(2),
    ndc(3), ndc(4)};
template <>
std::initializer_list<ndc> SeqContainerPushFrontTestInitLists<
    ndc>::data_init_list_size_8_pushed_front_{
    SeqContainerConstructorNdcTestInitLists<ndc>::value_1,
    ndc(1),
    ndc(2),
    ndc(3),
    ndc(4),
    ndc(5),
    ndc(6),
    ndc(7),
    ndc(8)};

// ----------------------------SortByOneField------------------------------- //

template <>
std::initializer_list<sof> SeqContainerPushFrontTestInitLists<
    sof>::data_init_list_size_0_pushed_front_{
    SeqContainerConstructorNdcTestInitLists<sof>::value_1};
template <>
std::initializer_list<sof> SeqContainerPushFrontTestInitLists<
    sof>::data_init_list_size_1_pushed_front_{
    SeqContainerConstructorNdcTestInitLists<sof>::value_1, sof(1, 1)};
template <>
std::initializer_list<sof> SeqContainerPushFrontTestInitLists<
    sof>::data_init_list_size_2_pushed_front_{
    SeqContainerConstructorNdcTestInitLists<sof>::value_1, sof(1, 1),
    sof(2, 1)};
template <>
std::initializer_list<sof> SeqContainerPushFrontTestInitLists<
    sof>::data_init_list_size_4_pushed_front_{
    SeqContainerConstructorNdcTestInitLists<sof>::value_1, sof(1, 1), sof(2, 1),
    sof(3, 1), sof(4, 1)};
template <>
std::initializer_list<sof> SeqContainerPushFrontTestInitLists<
    sof>::data_init_list_size_8_pushed_front_{
    SeqContainerConstructorNdcTestInitLists<sof>::value_1,
    sof(1, 1),
    sof(2, 1),
    sof(3, 1),
    sof(4, 1),
    sof(5, 1),
    sof(6, 1),
    sof(7, 1),
    sof(8, 1)};

// ------------------------------------------------------------------------- //
//                    SeqContainerPushBackTestInitList                       //
// ------------------------------------------------------------------------- //

// ---------------------------------int------------------------------------- //

template <>
std::initializer_list<int>
    SeqContainerPushBackTestInitLists<int>::data_init_list_size_0_pushed_back_{
        SeqContainerPushBackTestInitLists<int>::value_1};
template <>
std::initializer_list<int>
    SeqContainerPushBackTestInitLists<int>::data_init_list_size_1_pushed_back_{
        1, SeqContainerPushBackTestInitLists<int>::value_1};
template <>
std::initializer_list<int>
    SeqContainerPushBackTestInitLists<int>::data_init_list_size_2_pushed_back_{
        1, 2, SeqContainerPushBackTestInitLists<int>::value_1};
template <>
std::initializer_list<int>
    SeqContainerPushBackTestInitLists<int>::data_init_list_size_4_pushed_back_{
        1, 2, 3, 4, SeqContainerPushBackTestInitLists<int>::value_1};
template <>
std::initializer_list<int>
    SeqContainerPushBackTestInitLists<int>::data_init_list_size_8_pushed_back_{
        1, 2, 3,
        4, 5, 6,
        7, 8, SeqContainerPushBackTestInitLists<int>::value_1};

// ---------------------------------bool------------------------------------ //

template <>
std::initializer_list<bool>
    SeqContainerPushBackTestInitLists<bool>::data_init_list_size_0_pushed_back_{
        SeqContainerPushBackTestInitLists<bool>::value_1};
template <>
std::initializer_list<bool>
    SeqContainerPushBackTestInitLists<bool>::data_init_list_size_1_pushed_back_{
        true, SeqContainerPushBackTestInitLists<bool>::value_1};
template <>
std::initializer_list<bool>
    SeqContainerPushBackTestInitLists<bool>::data_init_list_size_2_pushed_back_{
        false, true, SeqContainerPushBackTestInitLists<bool>::value_1};
template <>
std::initializer_list<bool>
    SeqContainerPushBackTestInitLists<bool>::data_init_list_size_4_pushed_back_{
        false, false, false, true,
        SeqContainerPushBackTestInitLists<bool>::value_1};
template <>
std::initializer_list<bool>
    SeqContainerPushBackTestInitLists<bool>::data_init_list_size_8_pushed_back_{
        false, false, false,
        false, false, false,
        false, true,  SeqContainerPushBackTestInitLists<bool>::value_1};

// ------------------------------- string----------------------------------- //

template <>
std::initializer_list<string> SeqContainerPushBackTestInitLists<
    string>::data_init_list_size_0_pushed_back_{
    SeqContainerPushBackTestInitLists<string>::value_1};
template <>
std::initializer_list<string> SeqContainerPushBackTestInitLists<
    string>::data_init_list_size_1_pushed_back_{
    "1", SeqContainerPushBackTestInitLists<string>::value_1};
template <>
std::initializer_list<string> SeqContainerPushBackTestInitLists<
    string>::data_init_list_size_2_pushed_back_{
    "1", "2", SeqContainerPushBackTestInitLists<string>::value_1};
template <>
std::initializer_list<string> SeqContainerPushBackTestInitLists<
    string>::data_init_list_size_4_pushed_back_{
    "1", "2", "3", "4", SeqContainerPushBackTestInitLists<string>::value_1};
template <>
std::initializer_list<string> SeqContainerPushBackTestInitLists<
    string>::data_init_list_size_8_pushed_back_{
    "1", "2", "3",
    "4", "5", "6",
    "7", "8", SeqContainerPushBackTestInitLists<string>::value_1};

// -----------------------------NoDefaultCtor------------------------------- //

template <>
std::initializer_list<ndc>
    SeqContainerPushBackTestInitLists<ndc>::data_init_list_size_0_pushed_back_{
        SeqContainerPushBackTestInitLists<ndc>::value_1};
template <>
std::initializer_list<ndc>
    SeqContainerPushBackTestInitLists<ndc>::data_init_list_size_1_pushed_back_{
        ndc(1), SeqContainerPushBackTestInitLists<ndc>::value_1};
template <>
std::initializer_list<ndc>
    SeqContainerPushBackTestInitLists<ndc>::data_init_list_size_2_pushed_back_{
        ndc(1), ndc(2), SeqContainerPushBackTestInitLists<ndc>::value_1};
template <>
std::initializer_list<ndc>
    SeqContainerPushBackTestInitLists<ndc>::data_init_list_size_4_pushed_back_{
        ndc(1), ndc(2), ndc(3), ndc(4),
        SeqContainerPushBackTestInitLists<ndc>::value_1};
template <>
std::initializer_list<ndc>
    SeqContainerPushBackTestInitLists<ndc>::data_init_list_size_8_pushed_back_{
        ndc(1), ndc(2), ndc(3),
        ndc(4), ndc(5), ndc(6),
        ndc(7), ndc(8), SeqContainerPushBackTestInitLists<ndc>::value_1};

// ----------------------------SortByOneField------------------------------- //

template <>
std::initializer_list<sof>
    SeqContainerPushBackTestInitLists<sof>::data_init_list_size_0_pushed_back_{
        SeqContainerPushBackTestInitLists<sof>::value_1};
template <>
std::initializer_list<sof>
    SeqContainerPushBackTestInitLists<sof>::data_init_list_size_1_pushed_back_{
        sof(1, 1), SeqContainerPushBackTestInitLists<sof>::value_1};
template <>
std::initializer_list<sof>
    SeqContainerPushBackTestInitLists<sof>::data_init_list_size_2_pushed_back_{
        sof(1, 1), sof(2, 1), SeqContainerPushBackTestInitLists<sof>::value_1};
template <>
std::initializer_list<sof>
    SeqContainerPushBackTestInitLists<sof>::data_init_list_size_4_pushed_back_{
        sof(1, 1), sof(2, 1), sof(3, 1), sof(4, 1),
        SeqContainerPushBackTestInitLists<sof>::value_1};
template <>
std::initializer_list<sof>
    SeqContainerPushBackTestInitLists<sof>::data_init_list_size_8_pushed_back_{
        sof(1, 1), sof(2, 1), sof(3, 1),
        sof(4, 1), sof(5, 1), sof(6, 1),
        sof(7, 1), sof(8, 1), SeqContainerPushBackTestInitLists<sof>::value_1};

// ------------------------------------------------------------------------- //
//                    SeqContainerPopFrontTestInitLists                      //
// ------------------------------------------------------------------------- //

// ---------------------------------int------------------------------------- //

template <>
std::initializer_list<int> SeqContainerPopFrontTestInitLists<
    int>::data_init_list_size_1_poped_front_{};
template <>
std::initializer_list<int>
    SeqContainerPopFrontTestInitLists<int>::data_init_list_size_2_poped_front_{
        2};
template <>
std::initializer_list<int>
    SeqContainerPopFrontTestInitLists<int>::data_init_list_size_4_poped_front_{
        2, 3, 4};
template <>
std::initializer_list<int>
    SeqContainerPopFrontTestInitLists<int>::data_init_list_size_8_poped_front_{
        2, 3, 4, 5, 6, 7, 8};

// ---------------------------------bool------------------------------------ //

template <>
std::initializer_list<bool> SeqContainerPopFrontTestInitLists<
    bool>::data_init_list_size_1_poped_front_{};
template <>
std::initializer_list<bool>
    SeqContainerPopFrontTestInitLists<bool>::data_init_list_size_2_poped_front_{
        true};
template <>
std::initializer_list<bool>
    SeqContainerPopFrontTestInitLists<bool>::data_init_list_size_4_poped_front_{
        false, false, true};
template <>
std::initializer_list<bool>
    SeqContainerPopFrontTestInitLists<bool>::data_init_list_size_8_poped_front_{
        false, false, false, false, false, false, true};

// ------------------------------- string----------------------------------- //

template <>
std::initializer_list<string> SeqContainerPopFrontTestInitLists<
    string>::data_init_list_size_1_poped_front_{};
template <>
std::initializer_list<string> SeqContainerPopFrontTestInitLists<
    string>::data_init_list_size_2_poped_front_{"2"};
template <>
std::initializer_list<string> SeqContainerPopFrontTestInitLists<
    string>::data_init_list_size_4_poped_front_{"2", "3", "4"};
template <>
std::initializer_list<string> SeqContainerPopFrontTestInitLists<
    string>::data_init_list_size_8_poped_front_{"2", "3", "4", "5",
                                                "6", "7", "8"};

// -----------------------------NoDefaultCtor------------------------------- //

template <>
std::initializer_list<ndc> SeqContainerPopFrontTestInitLists<
    ndc>::data_init_list_size_1_poped_front_{};
template <>
std::initializer_list<ndc>
    SeqContainerPopFrontTestInitLists<ndc>::data_init_list_size_2_poped_front_{
        ndc(2)};
template <>
std::initializer_list<ndc>
    SeqContainerPopFrontTestInitLists<ndc>::data_init_list_size_4_poped_front_{
        ndc(2), ndc(3), ndc(4)};
template <>
std::initializer_list<ndc>
    SeqContainerPopFrontTestInitLists<ndc>::data_init_list_size_8_poped_front_{
        ndc(2), ndc(3), ndc(4), ndc(5), ndc(6), ndc(7), ndc(8)};

// ----------------------------SortByOneField------------------------------- //

template <>
std::initializer_list<sof> SeqContainerPopFrontTestInitLists<
    sof>::data_init_list_size_1_poped_front_{};
template <>
std::initializer_list<sof>
    SeqContainerPopFrontTestInitLists<sof>::data_init_list_size_2_poped_front_{
        sof(2, 1)};
template <>
std::initializer_list<sof>
    SeqContainerPopFrontTestInitLists<sof>::data_init_list_size_4_poped_front_{
        sof(2, 1), sof(3, 1), sof(4, 1)};
template <>
std::initializer_list<sof>
    SeqContainerPopFrontTestInitLists<sof>::data_init_list_size_8_poped_front_{
        sof(2, 1), sof(3, 1), sof(4, 1), sof(5, 1),
        sof(6, 1), sof(7, 1), sof(8, 1)};

// ------------------------------------------------------------------------- //
//                   SeqContainerPopBackTestInitLists                        //
// ------------------------------------------------------------------------- //

// ---------------------------------int------------------------------------- //

template <>
std::initializer_list<int>
    SeqContainerPopBackTestInitLists<int>::data_init_list_size_1_poped_back_{};
template <>
std::initializer_list<int>
    SeqContainerPopBackTestInitLists<int>::data_init_list_size_2_poped_back_{1};
template <>
std::initializer_list<int>
    SeqContainerPopBackTestInitLists<int>::data_init_list_size_4_poped_back_{
        1, 2, 3};
template <>
std::initializer_list<int>
    SeqContainerPopBackTestInitLists<int>::data_init_list_size_8_poped_back_{
        1, 2, 3, 4, 5, 6, 7};

// ---------------------------------bool------------------------------------ //

template <>
std::initializer_list<bool>
    SeqContainerPopBackTestInitLists<bool>::data_init_list_size_1_poped_back_{};
template <>
std::initializer_list<bool>
    SeqContainerPopBackTestInitLists<bool>::data_init_list_size_2_poped_back_{
        false};
template <>
std::initializer_list<bool>
    SeqContainerPopBackTestInitLists<bool>::data_init_list_size_4_poped_back_{
        false, false, false};
template <>
std::initializer_list<bool>
    SeqContainerPopBackTestInitLists<bool>::data_init_list_size_8_poped_back_{
        false, false, false, false, false, false, false};

// ------------------------------- string----------------------------------- //

template <>
std::initializer_list<string> SeqContainerPopBackTestInitLists<
    string>::data_init_list_size_1_poped_back_{};
template <>
std::initializer_list<string>
    SeqContainerPopBackTestInitLists<string>::data_init_list_size_2_poped_back_{
        "1"};
template <>
std::initializer_list<string>
    SeqContainerPopBackTestInitLists<string>::data_init_list_size_4_poped_back_{
        "1", "2", "3"};
template <>
std::initializer_list<string>
    SeqContainerPopBackTestInitLists<string>::data_init_list_size_8_poped_back_{
        "1", "2", "3", "4", "5", "6", "7"};

// -----------------------------NoDefaultCtor------------------------------- //

template <>
std::initializer_list<ndc>
    SeqContainerPopBackTestInitLists<ndc>::data_init_list_size_1_poped_back_{};
template <>
std::initializer_list<ndc>
    SeqContainerPopBackTestInitLists<ndc>::data_init_list_size_2_poped_back_{
        ndc(1)};
template <>
std::initializer_list<ndc>
    SeqContainerPopBackTestInitLists<ndc>::data_init_list_size_4_poped_back_{
        ndc(1), ndc(2), ndc(3)};
template <>
std::initializer_list<ndc>
    SeqContainerPopBackTestInitLists<ndc>::data_init_list_size_8_poped_back_{
        ndc(1), ndc(2), ndc(3), ndc(4), ndc(5), ndc(6), ndc(7)};

// ----------------------------SortByOneField------------------------------- //

template <>
std::initializer_list<sof>
    SeqContainerPopBackTestInitLists<sof>::data_init_list_size_1_poped_back_{};
template <>
std::initializer_list<sof>
    SeqContainerPopBackTestInitLists<sof>::data_init_list_size_2_poped_back_{
        sof(1, 1)};
template <>
std::initializer_list<sof>
    SeqContainerPopBackTestInitLists<sof>::data_init_list_size_4_poped_back_{
        sof(1, 1), sof(2, 1), sof(3, 1)};
template <>
std::initializer_list<sof>
    SeqContainerPopBackTestInitLists<sof>::data_init_list_size_8_poped_back_{
        sof(1, 1), sof(2, 1), sof(3, 1), sof(4, 1),
        sof(5, 1), sof(6, 1), sof(7, 1)};

// ------------------------------------------------------------------------- //
//                      SeqContainerInsertTestInitList                       //
// ------------------------------------------------------------------------- //

// ---------------------------------int------------------------------------- //

template <>
SeqContainerInsertTestInitLists<int>::InsertData
    SeqContainerInsertTestInitLists<int>::data_size_0_insert_0{9, 0, {9}};
template <>
SeqContainerInsertTestInitLists<int>::InsertData
    SeqContainerInsertTestInitLists<int>::data_size_1_insert_0{1, 0, {1, 1}};
template <>
SeqContainerInsertTestInitLists<int>::InsertData
    SeqContainerInsertTestInitLists<int>::data_size_1_insert_1{2, 1, {1, 2}};
template <>
SeqContainerInsertTestInitLists<int>::InsertData
    SeqContainerInsertTestInitLists<int>::data_size_2_insert_0{3, 0, {3, 1, 2}};
template <>
SeqContainerInsertTestInitLists<int>::InsertData
    SeqContainerInsertTestInitLists<int>::data_size_2_insert_1{4, 1, {1, 4, 2}};
template <>
SeqContainerInsertTestInitLists<int>::InsertData
    SeqContainerInsertTestInitLists<int>::data_size_2_insert_2{5, 2, {1, 2, 5}};
template <>
SeqContainerInsertTestInitLists<int>::InsertData
    SeqContainerInsertTestInitLists<int>::data_size_4_insert_0{
        6, 0, {6, 1, 2, 3, 4}};
template <>
SeqContainerInsertTestInitLists<int>::InsertData
    SeqContainerInsertTestInitLists<int>::data_size_4_insert_2{
        7, 2, {1, 2, 7, 3, 4}};
template <>
SeqContainerInsertTestInitLists<int>::InsertData
    SeqContainerInsertTestInitLists<int>::data_size_4_insert_4{
        8, 4, {1, 2, 3, 4, 8}};
template <>
SeqContainerInsertTestInitLists<int>::InsertData
    SeqContainerInsertTestInitLists<int>::data_size_8_insert_0{
        9, 0, {9, 1, 2, 3, 4, 5, 6, 7, 8}};
template <>
SeqContainerInsertTestInitLists<int>::InsertData
    SeqContainerInsertTestInitLists<int>::data_size_8_insert_6{
        3, 6, {1, 2, 3, 4, 5, 6, 3, 7, 8}};
template <>
SeqContainerInsertTestInitLists<int>::InsertData
    SeqContainerInsertTestInitLists<int>::data_size_8_insert_8{
        4, 8, {1, 2, 3, 4, 5, 6, 7, 8, 4}};

// ---------------------------------bool------------------------------------ //

template <>
SeqContainerInsertTestInitLists<bool>::InsertData
    SeqContainerInsertTestInitLists<bool>::data_size_0_insert_0{
        false, 0, {false}};
template <>
SeqContainerInsertTestInitLists<bool>::InsertData
    SeqContainerInsertTestInitLists<bool>::data_size_1_insert_0{
        false, 0, {false, true}};
template <>
SeqContainerInsertTestInitLists<bool>::InsertData
    SeqContainerInsertTestInitLists<bool>::data_size_1_insert_1{
        false, 1, {true, false}};
template <>
SeqContainerInsertTestInitLists<bool>::InsertData
    SeqContainerInsertTestInitLists<bool>::data_size_2_insert_0{
        true, 0, {true, false, true}};
template <>
SeqContainerInsertTestInitLists<bool>::InsertData
    SeqContainerInsertTestInitLists<bool>::data_size_2_insert_1{
        true, 1, {false, true, true}};
template <>
SeqContainerInsertTestInitLists<bool>::InsertData
    SeqContainerInsertTestInitLists<bool>::data_size_2_insert_2{
        true, 2, {false, true, true}};
template <>
SeqContainerInsertTestInitLists<bool>::InsertData
    SeqContainerInsertTestInitLists<bool>::data_size_4_insert_0{
        true, 0, {true, false, false, false, true}};
template <>
SeqContainerInsertTestInitLists<bool>::InsertData
    SeqContainerInsertTestInitLists<bool>::data_size_4_insert_2{
        true, 2, {false, false, true, false, true}};
template <>
SeqContainerInsertTestInitLists<bool>::InsertData
    SeqContainerInsertTestInitLists<bool>::data_size_4_insert_4{
        true, 4, {false, false, false, true, true}};
template <>
SeqContainerInsertTestInitLists<bool>::InsertData
    SeqContainerInsertTestInitLists<bool>::data_size_8_insert_0{
        true, 0, {true, false, false, false, false, false, false, false, true}};
template <>
SeqContainerInsertTestInitLists<bool>::InsertData
    SeqContainerInsertTestInitLists<bool>::data_size_8_insert_6{
        true, 6, {false, false, false, false, false, false, true, false, true}};
template <>
SeqContainerInsertTestInitLists<bool>::InsertData
    SeqContainerInsertTestInitLists<bool>::data_size_8_insert_8{
        true, 8, {false, false, false, false, false, false, false, true, true}};

// ------------------------------- string----------------------------------- //

template <>
SeqContainerInsertTestInitLists<string>::InsertData
    SeqContainerInsertTestInitLists<string>::data_size_0_insert_0{
        "9", 0, {"9"}};
template <>
SeqContainerInsertTestInitLists<string>::InsertData
    SeqContainerInsertTestInitLists<string>::data_size_1_insert_0{
        "1", 0, {"1", "1"}};
template <>
SeqContainerInsertTestInitLists<string>::InsertData
    SeqContainerInsertTestInitLists<string>::data_size_1_insert_1{
        "2", 1, {"1", "2"}};
template <>
SeqContainerInsertTestInitLists<string>::InsertData
    SeqContainerInsertTestInitLists<string>::data_size_2_insert_0{
        "3", 0, {"3", "1", "2"}};
template <>
SeqContainerInsertTestInitLists<string>::InsertData
    SeqContainerInsertTestInitLists<string>::data_size_2_insert_1{
        "4", 1, {"1", "4", "2"}};
template <>
SeqContainerInsertTestInitLists<string>::InsertData
    SeqContainerInsertTestInitLists<string>::data_size_2_insert_2{
        "5", 2, {"1", "2", "5"}};
template <>
SeqContainerInsertTestInitLists<string>::InsertData
    SeqContainerInsertTestInitLists<string>::data_size_4_insert_0{
        "6", 0, {"6", "1", "2", "3", "4"}};
template <>
SeqContainerInsertTestInitLists<string>::InsertData
    SeqContainerInsertTestInitLists<string>::data_size_4_insert_2{
        "7", 2, {"1", "2", "7", "3", "4"}};
template <>
SeqContainerInsertTestInitLists<string>::InsertData
    SeqContainerInsertTestInitLists<string>::data_size_4_insert_4{
        "8", 4, {"1", "2", "3", "4", "8"}};
template <>
SeqContainerInsertTestInitLists<string>::InsertData
    SeqContainerInsertTestInitLists<string>::data_size_8_insert_0{
        "9", 0, {"9", "1", "2", "3", "4", "5", "6", "7", "8"}};
template <>
SeqContainerInsertTestInitLists<string>::InsertData
    SeqContainerInsertTestInitLists<string>::data_size_8_insert_6{
        "3", 6, {"1", "2", "3", "4", "5", "6", "3", "7", "8"}};
template <>
SeqContainerInsertTestInitLists<string>::InsertData
    SeqContainerInsertTestInitLists<string>::data_size_8_insert_8{
        "4", 8, {"1", "2", "3", "4", "5", "6", "7", "8", "4"}};

// -----------------------------NoDefaultCtor------------------------------- //

template <>
SeqContainerInsertTestInitLists<ndc>::InsertData
    SeqContainerInsertTestInitLists<ndc>::data_size_0_insert_0{
        ndc(9), 0, {ndc(9)}};
template <>
SeqContainerInsertTestInitLists<ndc>::InsertData
    SeqContainerInsertTestInitLists<ndc>::data_size_1_insert_0{
        ndc(1), 0, {ndc(1), ndc(1)}};
template <>
SeqContainerInsertTestInitLists<ndc>::InsertData
    SeqContainerInsertTestInitLists<ndc>::data_size_1_insert_1{
        ndc(2), 1, {ndc(1), ndc(2)}};
template <>
SeqContainerInsertTestInitLists<ndc>::InsertData
    SeqContainerInsertTestInitLists<ndc>::data_size_2_insert_0{
        ndc(3), 0, {ndc(3), ndc(1), ndc(2)}};
template <>
SeqContainerInsertTestInitLists<ndc>::InsertData
    SeqContainerInsertTestInitLists<ndc>::data_size_2_insert_1{
        ndc(4), 1, {ndc(1), ndc(4), ndc(2)}};
template <>
SeqContainerInsertTestInitLists<ndc>::InsertData
    SeqContainerInsertTestInitLists<ndc>::data_size_2_insert_2{
        ndc(5), 2, {ndc(1), ndc(2), ndc(5)}};
template <>
SeqContainerInsertTestInitLists<ndc>::InsertData
    SeqContainerInsertTestInitLists<ndc>::data_size_4_insert_0{
        ndc(6), 0, {ndc(6), ndc(1), ndc(2), ndc(3), ndc(4)}};
template <>
SeqContainerInsertTestInitLists<ndc>::InsertData
    SeqContainerInsertTestInitLists<ndc>::data_size_4_insert_2{
        ndc(7), 2, {ndc(1), ndc(2), ndc(7), ndc(3), ndc(4)}};
template <>
SeqContainerInsertTestInitLists<ndc>::InsertData
    SeqContainerInsertTestInitLists<ndc>::data_size_4_insert_4{
        ndc(8), 4, {ndc(1), ndc(2), ndc(3), ndc(4), ndc(8)}};
template <>
SeqContainerInsertTestInitLists<ndc>::InsertData
    SeqContainerInsertTestInitLists<ndc>::data_size_8_insert_0{
        ndc(9),
        0,
        {ndc(9), ndc(1), ndc(2), ndc(3), ndc(4), ndc(5), ndc(6), ndc(7),
         ndc(8)}};
template <>
SeqContainerInsertTestInitLists<ndc>::InsertData
    SeqContainerInsertTestInitLists<ndc>::data_size_8_insert_6{
        ndc(3),
        6,
        {ndc(1), ndc(2), ndc(3), ndc(4), ndc(5), ndc(6), ndc(3), ndc(7),
         ndc(8)}};
template <>
SeqContainerInsertTestInitLists<ndc>::InsertData
    SeqContainerInsertTestInitLists<ndc>::data_size_8_insert_8{
        ndc(4),
        8,
        {ndc(1), ndc(2), ndc(3), ndc(4), ndc(5), ndc(6), ndc(7), ndc(8),
         ndc(4)}};

// ----------------------------SortByOneField------------------------------- //

template <>
SeqContainerInsertTestInitLists<sof>::InsertData
    SeqContainerInsertTestInitLists<sof>::data_size_0_insert_0{
        sof(9, 1), 0, {sof(9, 1)}};
template <>
SeqContainerInsertTestInitLists<sof>::InsertData
    SeqContainerInsertTestInitLists<sof>::data_size_1_insert_0{
        sof(1, 1), 0, {sof(1, 1), sof(1, 1)}};
template <>
SeqContainerInsertTestInitLists<sof>::InsertData
    SeqContainerInsertTestInitLists<sof>::data_size_1_insert_1{
        sof(2, 1), 1, {sof(1, 1), sof(2, 1)}};
template <>
SeqContainerInsertTestInitLists<sof>::InsertData
    SeqContainerInsertTestInitLists<sof>::data_size_2_insert_0{
        sof(3, 1), 0, {sof(3, 1), sof(1, 1), sof(2, 1)}};
template <>
SeqContainerInsertTestInitLists<sof>::InsertData
    SeqContainerInsertTestInitLists<sof>::data_size_2_insert_1{
        sof(4, 1), 1, {sof(1, 1), sof(4, 1), sof(2, 1)}};
template <>
SeqContainerInsertTestInitLists<sof>::InsertData
    SeqContainerInsertTestInitLists<sof>::data_size_2_insert_2{
        sof(5, 1), 2, {sof(1, 1), sof(2, 1), sof(5, 1)}};
template <>
SeqContainerInsertTestInitLists<sof>::InsertData
    SeqContainerInsertTestInitLists<sof>::data_size_4_insert_0{
        sof(6, 1), 0, {sof(6, 1), sof(1, 1), sof(2, 1), sof(3, 1), sof(4, 1)}};
template <>
SeqContainerInsertTestInitLists<sof>::InsertData
    SeqContainerInsertTestInitLists<sof>::data_size_4_insert_2{
        sof(7, 1), 2, {sof(1, 1), sof(2, 1), sof(7, 1), sof(3, 1), sof(4, 1)}};
template <>
SeqContainerInsertTestInitLists<sof>::InsertData
    SeqContainerInsertTestInitLists<sof>::data_size_4_insert_4{
        sof(8, 1), 4, {sof(1, 1), sof(2, 1), sof(3, 1), sof(4, 1), sof(8, 1)}};
template <>
SeqContainerInsertTestInitLists<sof>::InsertData
    SeqContainerInsertTestInitLists<sof>::data_size_8_insert_0{
        sof(9, 1),
        0,
        {sof(9, 1), sof(1, 1), sof(2, 1), sof(3, 1), sof(4, 1), sof(5, 1),
         sof(6, 1), sof(7, 1), sof(8, 1)}};
template <>
SeqContainerInsertTestInitLists<sof>::InsertData
    SeqContainerInsertTestInitLists<sof>::data_size_8_insert_6{
        sof(3, 1),
        6,
        {sof(1, 1), sof(2, 1), sof(3, 1), sof(4, 1), sof(5, 1), sof(6, 1),
         sof(3, 1), sof(7, 1), sof(8, 1)}};
template <>
SeqContainerInsertTestInitLists<sof>::InsertData
    SeqContainerInsertTestInitLists<sof>::data_size_8_insert_8{
        sof(4, 1),
        8,
        {sof(1, 1), sof(2, 1), sof(3, 1), sof(4, 1), sof(5, 1), sof(6, 1),
         sof(7, 1), sof(8, 1), sof(4, 1)}};

// ------------------------------------------------------------------------- //
//                      SeqContainerEraseTestInitLists                       //
// ------------------------------------------------------------------------- //

// ---------------------------------int------------------------------------- //

template <>
SeqContainerEraseTestInitLists<int>::EraseData
    SeqContainerEraseTestInitLists<int>::data_size_1_erase_0{0, {}};
template <>
SeqContainerEraseTestInitLists<int>::EraseData
    SeqContainerEraseTestInitLists<int>::data_size_2_erase_0{0, {2}};
template <>
SeqContainerEraseTestInitLists<int>::EraseData
    SeqContainerEraseTestInitLists<int>::data_size_2_erase_1{1, {1}};
template <>
SeqContainerEraseTestInitLists<int>::EraseData
    SeqContainerEraseTestInitLists<int>::data_size_4_erase_0{0, {2, 3, 4}};
template <>
SeqContainerEraseTestInitLists<int>::EraseData
    SeqContainerEraseTestInitLists<int>::data_size_4_erase_1{1, {1, 3, 4}};
template <>
SeqContainerEraseTestInitLists<int>::EraseData
    SeqContainerEraseTestInitLists<int>::data_size_4_erase_3{3, {1, 2, 3}};
template <>
SeqContainerEraseTestInitLists<int>::EraseData
    SeqContainerEraseTestInitLists<int>::data_size_8_erase_0{
        0, {2, 3, 4, 5, 6, 7, 8}};
template <>
SeqContainerEraseTestInitLists<int>::EraseData
    SeqContainerEraseTestInitLists<int>::data_size_8_erase_5{
        5, {1, 2, 3, 4, 5, 7, 8}};
template <>
SeqContainerEraseTestInitLists<int>::EraseData
    SeqContainerEraseTestInitLists<int>::data_size_8_erase_7{
        7, {1, 2, 3, 4, 5, 6, 7}};

// ---------------------------------bool------------------------------------ //

template <>
SeqContainerEraseTestInitLists<bool>::EraseData
    SeqContainerEraseTestInitLists<bool>::data_size_1_erase_0{0, {}};
template <>
SeqContainerEraseTestInitLists<bool>::EraseData
    SeqContainerEraseTestInitLists<bool>::data_size_2_erase_0{0, {true}};
template <>
SeqContainerEraseTestInitLists<bool>::EraseData
    SeqContainerEraseTestInitLists<bool>::data_size_2_erase_1{1, {false}};
template <>
SeqContainerEraseTestInitLists<bool>::EraseData
    SeqContainerEraseTestInitLists<bool>::data_size_4_erase_0{
        0, {false, false, true}};
template <>
SeqContainerEraseTestInitLists<bool>::EraseData
    SeqContainerEraseTestInitLists<bool>::data_size_4_erase_1{
        1, {false, false, true}};
template <>
SeqContainerEraseTestInitLists<bool>::EraseData
    SeqContainerEraseTestInitLists<bool>::data_size_4_erase_3{
        3, {false, false, false}};
template <>
SeqContainerEraseTestInitLists<bool>::EraseData
    SeqContainerEraseTestInitLists<bool>::data_size_8_erase_0{
        0, {false, false, false, false, false, false, true}};
template <>
SeqContainerEraseTestInitLists<bool>::EraseData
    SeqContainerEraseTestInitLists<bool>::data_size_8_erase_5{
        5, {false, false, false, false, false, false, true}};
template <>
SeqContainerEraseTestInitLists<bool>::EraseData
    SeqContainerEraseTestInitLists<bool>::data_size_8_erase_7{
        7, {false, false, false, false, false, false, false}};

// ------------------------------- string----------------------------------- //

template <>
SeqContainerEraseTestInitLists<string>::EraseData
    SeqContainerEraseTestInitLists<string>::data_size_1_erase_0{0, {}};
template <>
SeqContainerEraseTestInitLists<string>::EraseData
    SeqContainerEraseTestInitLists<string>::data_size_2_erase_0{0, {"2"}};
template <>
SeqContainerEraseTestInitLists<string>::EraseData
    SeqContainerEraseTestInitLists<string>::data_size_2_erase_1{1, {"1"}};
template <>
SeqContainerEraseTestInitLists<string>::EraseData
    SeqContainerEraseTestInitLists<string>::data_size_4_erase_0{
        0, {"2", "3", "4"}};
template <>
SeqContainerEraseTestInitLists<string>::EraseData
    SeqContainerEraseTestInitLists<string>::data_size_4_erase_1{
        1, {"1", "3", "4"}};
template <>
SeqContainerEraseTestInitLists<string>::EraseData
    SeqContainerEraseTestInitLists<string>::data_size_4_erase_3{
        3, {"1", "2", "3"}};
template <>
SeqContainerEraseTestInitLists<string>::EraseData
    SeqContainerEraseTestInitLists<string>::data_size_8_erase_0{
        0, {"2", "3", "4", "5", "6", "7", "8"}};
template <>
SeqContainerEraseTestInitLists<string>::EraseData
    SeqContainerEraseTestInitLists<string>::data_size_8_erase_5{
        5, {"1", "2", "3", "4", "5", "7", "8"}};
template <>
SeqContainerEraseTestInitLists<string>::EraseData
    SeqContainerEraseTestInitLists<string>::data_size_8_erase_7{
        7, {"1", "2", "3", "4", "5", "6", "7"}};

// -----------------------------NoDefaultCtor------------------------------- //

template <>
SeqContainerEraseTestInitLists<ndc>::EraseData
    SeqContainerEraseTestInitLists<ndc>::data_size_1_erase_0{0, {}};
template <>
SeqContainerEraseTestInitLists<ndc>::EraseData
    SeqContainerEraseTestInitLists<ndc>::data_size_2_erase_0{0, {ndc(2)}};
template <>
SeqContainerEraseTestInitLists<ndc>::EraseData
    SeqContainerEraseTestInitLists<ndc>::data_size_2_erase_1{1, {ndc(1)}};
template <>
SeqContainerEraseTestInitLists<ndc>::EraseData
    SeqContainerEraseTestInitLists<ndc>::data_size_4_erase_0{
        0, {ndc(2), ndc(3), ndc(4)}};
template <>
SeqContainerEraseTestInitLists<ndc>::EraseData
    SeqContainerEraseTestInitLists<ndc>::data_size_4_erase_1{
        1, {ndc(1), ndc(3), ndc(4)}};
template <>
SeqContainerEraseTestInitLists<ndc>::EraseData
    SeqContainerEraseTestInitLists<ndc>::data_size_4_erase_3{
        3, {ndc(1), ndc(2), ndc(3)}};
template <>
SeqContainerEraseTestInitLists<ndc>::EraseData
    SeqContainerEraseTestInitLists<ndc>::data_size_8_erase_0{
        0, {ndc(2), ndc(3), ndc(4), ndc(5), ndc(6), ndc(7), ndc(8)}};
template <>
SeqContainerEraseTestInitLists<ndc>::EraseData
    SeqContainerEraseTestInitLists<ndc>::data_size_8_erase_5{
        5, {ndc(1), ndc(2), ndc(3), ndc(4), ndc(5), ndc(7), ndc(8)}};
template <>
SeqContainerEraseTestInitLists<ndc>::EraseData
    SeqContainerEraseTestInitLists<ndc>::data_size_8_erase_7{
        7, {ndc(1), ndc(2), ndc(3), ndc(4), ndc(5), ndc(6), ndc(7)}};

// ----------------------------SortByOneField------------------------------- //

template <>
SeqContainerEraseTestInitLists<sof>::EraseData
    SeqContainerEraseTestInitLists<sof>::data_size_1_erase_0{0, {}};
template <>
SeqContainerEraseTestInitLists<sof>::EraseData
    SeqContainerEraseTestInitLists<sof>::data_size_2_erase_0{0, {sof(2, 1)}};
template <>
SeqContainerEraseTestInitLists<sof>::EraseData
    SeqContainerEraseTestInitLists<sof>::data_size_2_erase_1{1, {sof(1, 1)}};
template <>
SeqContainerEraseTestInitLists<sof>::EraseData
    SeqContainerEraseTestInitLists<sof>::data_size_4_erase_0{
        0, {sof(2, 1), sof(3, 1), sof(4, 1)}};
template <>
SeqContainerEraseTestInitLists<sof>::EraseData
    SeqContainerEraseTestInitLists<sof>::data_size_4_erase_1{
        1, {sof(1, 1), sof(3, 1), sof(4, 1)}};
template <>
SeqContainerEraseTestInitLists<sof>::EraseData
    SeqContainerEraseTestInitLists<sof>::data_size_4_erase_3{
        3, {sof(1, 1), sof(2, 1), sof(3, 1)}};
template <>
SeqContainerEraseTestInitLists<sof>::EraseData
    SeqContainerEraseTestInitLists<sof>::data_size_8_erase_0{
        0,
        {sof(2, 1), sof(3, 1), sof(4, 1), sof(5, 1), sof(6, 1), sof(7, 1),
         sof(8, 1)}};
template <>
SeqContainerEraseTestInitLists<sof>::EraseData
    SeqContainerEraseTestInitLists<sof>::data_size_8_erase_5{
        5,
        {sof(1, 1), sof(2, 1), sof(3, 1), sof(4, 1), sof(5, 1), sof(7, 1),
         sof(8, 1)}};
template <>
SeqContainerEraseTestInitLists<sof>::EraseData
    SeqContainerEraseTestInitLists<sof>::data_size_8_erase_7{
        7,
        {sof(1, 1), sof(2, 1), sof(3, 1), sof(4, 1), sof(5, 1), sof(6, 1),
         sof(7, 1)}};
