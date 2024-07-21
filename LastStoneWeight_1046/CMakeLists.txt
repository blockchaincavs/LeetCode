cmake_minimum_required(VERSION 3.5)

project(LastStoneWeight_1046 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(LastStoneWeight_1046 main.cpp)

include(GNUInstallDirs)
install(TARGETS LastStoneWeight_1046
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
