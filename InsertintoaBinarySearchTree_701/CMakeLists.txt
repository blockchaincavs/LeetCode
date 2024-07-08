cmake_minimum_required(VERSION 3.5)

project(InsertintoaBinarySearchTree_701 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(InsertintoaBinarySearchTree_701 main.cpp)

install(TARGETS InsertintoaBinarySearchTree_701
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
