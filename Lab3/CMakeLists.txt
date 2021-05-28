cmake_minimum_required(VERSION 3.19)
project(Lab3)

set(CMAKE_CXX_STANDARD 14)

add_executable(Lab3 main.cpp sort/sort.cpp sort/sort.h)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -pthread")

set(SOURCE_FILES main.cpp)
add_executable(Lab3_run ${SOURCE_FILES})
include_directories(sort)
add_subdirectory(sort)

target_link_libraries(Lab3_run sort)
add_subdirectory(Boost_tests)
