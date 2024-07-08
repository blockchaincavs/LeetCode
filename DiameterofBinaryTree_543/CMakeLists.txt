cmake_minimum_required(VERSION 3.5)

project(DiameterofBinaryTree_543 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(DiameterofBinaryTree_543 main.cpp)

install(TARGETS DiameterofBinaryTree_543
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
