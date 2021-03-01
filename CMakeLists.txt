cmake_minimum_required(VERSION 3.17)
project(DateConverter)

set(CMAKE_CXX_STANDARD 14)
set(SOURCE_FILES main.cpp "First Lab/Before/funcBefore.cpp")

add_executable(DateConverter_run ${SOURCE_FILES})

add_subdirectory("First Lab/Boost_tests")

include_directories("First Lab/Math_lib")
add_subdirectory("First Lab/Math_lib")

target_link_libraries(DateConverter_run "First Lab/Math_lib")