cmake_minimum_required(VERSION 3.20)
project(solver VERSION 0.0.1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(${PROJECT_NAME} ${CMAKE_CURRENT_SOURCE_DIR}/equation.cpp)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../solver_lib)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../formatter_ex_lib)

target_link_libraries(${PROJECT_NAME} ${CMAKE_CURRENT_SOURCE_DIR}/../solver_lib/libsolver_lib.a)
target_link_libraries(${PROJECT_NAME} ${CMAKE_CURRENT_SOURCE_DIR}/../formatter_ex_lib/libformatter_ex.a)
target_link_libraries(${PROJECT_NAME} ${CMAKE_CURRENT_SOURCE_DIR}/../formatter_lib/libformatter.a)
