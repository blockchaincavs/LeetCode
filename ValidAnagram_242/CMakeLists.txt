cmake_minimum_required(VERSION 3.5)

project(ValidAnagram_242 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ValidAnagram_242
    main.cpp
    validanagram.h validanagram.cpp
)

install(TARGETS ValidAnagram_242
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
