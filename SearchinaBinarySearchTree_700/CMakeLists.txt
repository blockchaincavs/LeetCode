cmake_minimum_required(VERSION 3.5)

project(SearchinaBinarySearchTree_700 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(SearchinaBinarySearchTree_700 main.cpp)

install(TARGETS SearchinaBinarySearchTree_700
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
