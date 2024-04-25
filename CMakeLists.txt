cmake_minimum_required(VERSION 3.5)

project(stlc)

set(STLC_INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/include")
set(STLC_SRC_DIR "${CMAKE_CURRENT_SOURCE_DIR}/src")
set(STLC_TESTS_DIR "${CMAKE_CURRENT_SOURCE_DIR}/tests")

include_directories(
  ${STLC_INCLUDE_DIR}
)

set(STLC_TESTS_SOURCE
  ${STLC_TESTS_DIR}/class_no_default_ctor.h
  ${STLC_TESTS_DIR}/class_no_default_ctor.cc
  ${STLC_TESTS_DIR}/class_sort_by_one_field.h
  ${STLC_TESTS_DIR}/class_sort_by_one_field.cc
  ${STLC_TESTS_DIR}/tests.h
  ${STLC_TESTS_DIR}/tests.cc
  ${STLC_TESTS_DIR}/tests.inc
  ${STLC_TESTS_DIR}/containers/containers_test.h
  ${STLC_TESTS_DIR}/containers/containers_test.cc
  ${STLC_TESTS_DIR}/containers/containers_size_test.cc
  ${STLC_TESTS_DIR}/containers/containers_iterator_test.cc
  ${STLC_TESTS_DIR}/containers/containers_constructor_test.cc
  ${STLC_TESTS_DIR}/containers/containers_swap_test.cc
  ${STLC_TESTS_DIR}/containers/containers_clear_test.cc
  ${STLC_TESTS_DIR}/adaptor_containers/adaptor_containers_test.h
  ${STLC_TESTS_DIR}/adaptor_containers/adaptor_containers_test.cc
  ${STLC_TESTS_DIR}/adaptor_containers/adaptor_containers_constructor_test.cc
  ${STLC_TESTS_DIR}/stack/stack_test.h
  ${STLC_TESTS_DIR}/stack/stack_test.cc
  ${STLC_TESTS_DIR}/stack/stack_common_test.cc
  ${STLC_TESTS_DIR}/queue/queue_test.h
  ${STLC_TESTS_DIR}/queue/queue_test.cc
  ${STLC_TESTS_DIR}/queue/queue_common_test.cc
  ${STLC_TESTS_DIR}/seq_container/seq_container_test.h
  ${STLC_TESTS_DIR}/seq_container/seq_container_test.cc
  ${STLC_TESTS_DIR}/seq_container/seq_container_constructors_test.cc
  ${STLC_TESTS_DIR}/seq_container/seq_container_element_access_test.cc
  ${STLC_TESTS_DIR}/seq_container/seq_container_erase_test.cc
  ${STLC_TESTS_DIR}/seq_container/seq_container_insert_test.cc
  ${STLC_TESTS_DIR}/seq_container/seq_container_pop_back_test.cc
  ${STLC_TESTS_DIR}/seq_container/seq_container_pop_front_test.cc
  ${STLC_TESTS_DIR}/seq_container/seq_container_push_back_test.cc
  ${STLC_TESTS_DIR}/seq_container/seq_container_push_front_test.cc
  ${STLC_TESTS_DIR}/list/list_test.h
  ${STLC_TESTS_DIR}/list/list_test.cc
  ${STLC_TESTS_DIR}/list/list_constructor_test.cc
  ${STLC_TESTS_DIR}/list/list_erase_test.cc
  ${STLC_TESTS_DIR}/list/list_insert_test.cc
  ${STLC_TESTS_DIR}/list/list_merge_test.cc
  ${STLC_TESTS_DIR}/list/list_splice_test.cc
  ${STLC_TESTS_DIR}/list/list_sort_test.cc
  ${STLC_TESTS_DIR}/list/list_reverse_test.cc
  ${STLC_TESTS_DIR}/list/list_unique_test.cc
  ${STLC_TESTS_DIR}/vector/vector_test.h
  ${STLC_TESTS_DIR}/vector/vector_test.cc
  ${STLC_TESTS_DIR}/vector/vector_element_access_test.cc
  ${STLC_TESTS_DIR}/vector/vector_erase_test.cc
  ${STLC_TESTS_DIR}/vector/vector_insert_test.cc
  ${STLC_TESTS_DIR}/vector/vector_pop_back_test.cc
  ${STLC_TESTS_DIR}/vector/vector_push_back_test.cc
  ${STLC_TESTS_DIR}/vector/vector_shrink_to_fit_test.cc
  ${STLC_TESTS_DIR}/vector/vector_reserve_test.cc
  ${STLC_TESTS_DIR}/vector/vector_resize_test.cc
  )

SET(STLC_COVERAGE_LIBS "" CACHE STRING "")
SET(STLC_COVERAGE_FLAGS "" CACHE STRING "")
SET(STLC_WARNING_FLAGS "-Wall -Werror -Wextra" CACHE STRING "")
SET(STLC_STANDART_FLAGS "--std=c++17" CACHE STRING "")

SET(STLC_FLAGS "${STLC_COVERAGE_FLAGS} ${STLC_WARNING_FLAGS} ${STLC_STANDART_FLAGS}")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${STLC_FLAGS}")

add_executable(stlc_tests ${STLC_TESTS_SOURCE})

target_link_libraries( 
  stlc_tests
  gtest
  ${STLC_COVERAGE_LIBS}
)