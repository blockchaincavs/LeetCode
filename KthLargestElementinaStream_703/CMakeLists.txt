cmake_minimum_required(VERSION 3.5)

project(KthLargestElementinaStream_703 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(KthLargestElementinaStream_703 main.cpp)

include(GNUInstallDirs)
install(TARGETS KthLargestElementinaStream_703
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
