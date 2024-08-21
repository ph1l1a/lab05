cmake_minimum_required(VERSION 3.20)
project(banking_lib VERSION 0.0.1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(${PROJECT_NAME} STATIC
	${CMAKE_CURRENT_SOURCE_DIR}/Account.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/Transaction.cpp
)

target_include_directories(${PROJECT_NAME} PRIVATE
	${CMAKE_CURRENT_SOURCE_DIR}
)

if(BUILD_TESTS)
  enable_testing()
  add_subdirectory(third-party/gtest)
  file(GLOB_RECURSE banking_lib_TEST_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/tests/*.cpp")
  add_executable(check ${banking_lib_TEST_SOURCES})
  target_link_libraries(check banking_lib gtest_main)
  add_test(NAME check COMMAND check)
endif()
