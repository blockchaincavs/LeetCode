cmake_minimum_required(VERSION 3.5)

project(ContainsDuplicate_217 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ContainsDuplicate_217
    main.cpp
    containsduplicate.h containsduplicate.cpp
)

install(TARGETS ContainsDuplicate_217
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
