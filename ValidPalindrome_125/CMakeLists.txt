cmake_minimum_required(VERSION 3.5)

project(ValidPalindrome_125 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ValidPalindrome_125 main.cpp)

install(TARGETS ValidPalindrome_125
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
