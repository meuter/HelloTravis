cmake_minimum_required(VERSION 3.0)
project(HelloTravis)

if (CMAKE_BUILD_TYPE MATCHES Release)
    message(STATUS "Build type 'Release'")
else()
    message(STATUS "Build type 'Debug'")
endif()

if (WIN32)
    add_compile_options(-nologo -W3 -D_CRT_SECURE_NO_DEPRECATE -wd4101 -wd4996 -wd4146)
endif()

set(CMAKE_CXX_STANDARD 14)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
add_subdirectory(contrib/googletest)
add_subdirectory(src)

enable_testing()
add_subdirectory(test)