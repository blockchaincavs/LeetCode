cmake_minimum_required(VERSION 3.5)

project(ReverseLinkedList_206 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ReverseLinkedList_206 main.cpp)

install(TARGETS ReverseLinkedList_206
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
