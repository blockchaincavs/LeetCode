cmake_minimum_required(VERSION 3.5)

project(ValidParentheses_20 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ValidParentheses_20
    main.cpp
    validparentheses.h validparentheses.cpp
)

install(TARGETS ValidParentheses_20
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
