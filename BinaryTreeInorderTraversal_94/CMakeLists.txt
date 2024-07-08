cmake_minimum_required(VERSION 3.5)

project(BinaryTreeInorderTraversal_94 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(BinaryTreeInorderTraversal_94 main.cpp)

install(TARGETS BinaryTreeInorderTraversal_94
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
