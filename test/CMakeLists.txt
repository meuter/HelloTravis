macro(add_unit_test TARGET)
    add_executable(${TARGET} ${TARGET}.cpp)
    add_test(${TARGET} ${TARGET})
    target_include_directories(${TARGET} PRIVATE gtest)
    target_link_libraries(${TARGET} gtest gtest_main pthread)
endmacro(add_unit_test)

add_unit_test(hello_test)
