#include "queue_test.h"

// ------------------------------------------------------------------------- //
//                           QueueCommonTestValues                           //
// ------------------------------------------------------------------------- //

// ---------------------------------int------------------------------------- //

template <>
int QueueCommonTestValues<int>::value_1_ = 1;
template <>
int QueueCommonTestValues<int>::value_2_ = 2;
template <>
int QueueCommonTestValues<int>::value_3_ = 3;
template <>
int QueueCommonTestValues<int>::value_4_ = 4;

// ---------------------------------bool------------------------------------ //

template <>
bool QueueCommonTestValues<bool>::value_1_ = false;
template <>
bool QueueCommonTestValues<bool>::value_2_ = true;
template <>
bool QueueCommonTestValues<bool>::value_3_ = false;
template <>
bool QueueCommonTestValues<bool>::value_4_ = true;

// ------------------------------- string----------------------------------- //

template <>
string QueueCommonTestValues<string>::value_1_ = "1";
template <>
string QueueCommonTestValues<string>::value_2_ = "2";
template <>
string QueueCommonTestValues<string>::value_3_ = "3";
template <>
string QueueCommonTestValues<string>::value_4_ = "4";

// -----------------------------NoDefaultCtor------------------------------- //

template <>
ndc QueueCommonTestValues<ndc>::value_1_ = ndc(1);
template <>
ndc QueueCommonTestValues<ndc>::value_2_ = ndc(2);
template <>
ndc QueueCommonTestValues<ndc>::value_3_ = ndc(3);
template <>
ndc QueueCommonTestValues<ndc>::value_4_ = ndc(4);

// ----------------------------SortByOneField------------------------------- //

template <>
sof QueueCommonTestValues<sof>::value_1_ = sof(1, 1);
template <>
sof QueueCommonTestValues<sof>::value_2_ = sof(2, 1);
template <>
sof QueueCommonTestValues<sof>::value_3_ = sof(3, 1);
template <>
sof QueueCommonTestValues<sof>::value_4_ = sof(4, 1);
