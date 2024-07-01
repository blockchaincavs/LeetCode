cmake_minimum_required(VERSION 3.5)

project(MinStack_155 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(MinStack_155
    main.cpp
    minstack.h minstack.cpp
)

install(TARGETS MinStack_155
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
