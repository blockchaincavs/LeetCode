cmake_minimum_required(VERSION 3.5)

project(InvertBinaryTree_226 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(InvertBinaryTree_226 main.cpp)

install(TARGETS InvertBinaryTree_226
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
