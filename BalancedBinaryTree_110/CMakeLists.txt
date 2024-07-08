cmake_minimum_required(VERSION 3.5)

project(BalancedBinaryTree_110 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(BalancedBinaryTree_110 main.cpp)

install(TARGETS BalancedBinaryTree_110
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
