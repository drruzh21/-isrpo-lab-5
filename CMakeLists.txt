cmake_minimum_required(VERSION 3.23)
project(lab5_ISRPO)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(bin)
add_subdirectory(lib)

enable_testing()
add_subdirectory(tests)