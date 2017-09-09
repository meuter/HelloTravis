cmake_minimum_required(VERSION 3.0)
project(HelloTravis)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(contrib/googletest)
add_subdirectory(src)

enable_testing()
add_subdirectory(test)