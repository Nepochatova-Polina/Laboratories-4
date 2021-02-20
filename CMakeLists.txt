cmake_minimum_required(VERSION 3.17)
project(DateConverter)

set(CMAKE_CXX_STANDARD 14)
set(SOURCE_FILES main.cpp)

add_executable(DateConverter_run ${SOURCE_FILES})

add_subdirectory(Boost_tests)

include_directories(Math_lib)
add_subdirectory(Math_lib)

target_link_libraries(DateConverter_run Math_lib)