cmake_minimum_required(VERSION 3.5)

project(DeleteNodeinaBST_450 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(DeleteNodeinaBST_450 main.cpp)

install(TARGETS DeleteNodeinaBST_450
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
