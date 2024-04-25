#include "stack_test.h"

// ------------------------------------------------------------------------- //
//                           StackCommonTestValues                           //
// ------------------------------------------------------------------------- //

// ---------------------------------int------------------------------------- //

template <>
int StackCommonTestValues<int>::value_1_ = 1;
template <>
int StackCommonTestValues<int>::value_2_ = 2;
template <>
int StackCommonTestValues<int>::value_3_ = 3;
template <>
int StackCommonTestValues<int>::value_4_ = 4;

// ---------------------------------bool------------------------------------ //

template <>
bool StackCommonTestValues<bool>::value_1_ = false;
template <>
bool StackCommonTestValues<bool>::value_2_ = true;
template <>
bool StackCommonTestValues<bool>::value_3_ = false;
template <>
bool StackCommonTestValues<bool>::value_4_ = true;

// ------------------------------- string----------------------------------- //

template <>
string StackCommonTestValues<string>::value_1_ = "1";
template <>
string StackCommonTestValues<string>::value_2_ = "2";
template <>
string StackCommonTestValues<string>::value_3_ = "3";
template <>
string StackCommonTestValues<string>::value_4_ = "4";

// -----------------------------NoDefaultCtor------------------------------- //

template <>
ndc StackCommonTestValues<ndc>::value_1_ = ndc(1);
template <>
ndc StackCommonTestValues<ndc>::value_2_ = ndc(2);
template <>
ndc StackCommonTestValues<ndc>::value_3_ = ndc(3);
template <>
ndc StackCommonTestValues<ndc>::value_4_ = ndc(4);

// ----------------------------SortByOneField------------------------------- //

template <>
sof StackCommonTestValues<sof>::value_1_ = sof(1, 1);
template <>
sof StackCommonTestValues<sof>::value_2_ = sof(2, 1);
template <>
sof StackCommonTestValues<sof>::value_3_ = sof(3, 1);
template <>
sof StackCommonTestValues<sof>::value_4_ = sof(4, 1);
