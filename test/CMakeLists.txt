macro(add_unit_test TARGET)
    add_executable(${TARGET} ${TARGET}.cpp)
    add_test(${TARGET} ${TARGET})
    target_include_directories(${TARGET} 
        PRIVATE ${CMAKE_SOURCE_DIR}/contrib/googletest/googletest/include/  
    )
    target_link_libraries(${TARGET}
        ${CMAKE_SOURCE_DIR}/build/contrib/googletest/googlemock/gtest/libgtest.a
        ${CMAKE_SOURCE_DIR}/build/contrib/googletest/googlemock/gtest/libgtest_main.a
        pthread
    )
endmacro(add_unit_test)

add_unit_test(hello_test)
